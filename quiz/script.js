// Wait until the HTML document is fully loaded to run the script
document.addEventListener("DOMContentLoaded", () => {
    // Define an array of quiz questions. Each question is an object with the text, options, and the index of the correct answer.
    const questions = [
        { question: "What is the capital of France?", options: ["New York", "London", "Paris", "Tokyo"], answer: 2 },
        { question: "Which planet is known as the Red Planet?", options: ["Earth", "Mars", "Jupiter", "Saturn"], answer: 1 },
        { question: "In what year did the Titanic sink?", options: ["1912", "1923", "1905", "1898"], answer: 0 },
        { question: "Which element has the chemical symbol 'O'?", options: ["Gold", "Oxygen", "Silver", "Magnesium"], answer: 1 },
        { question: "Who wrote 'Hamlet'?", options: ["Leo Tolstoy", "William Shakespeare", "Mark Twain", "Charles Dickens"], answer: 1 },
    ];

    // Access DOM elements that will display the quiz content and results
    const quizContainer = document.getElementById("quiz");
    const submitButton = document.getElementById("submit");
    const showCorrectButton = document.getElementById("showCorrect");
    const restartQuizButton = document.getElementById("restartQuiz");
    const resultContainer = document.getElementById("result");

    // Populate the quizContainer with questions and options
    function displayQuestions() {
        // Generate HTML for each question and its options
        quizContainer.innerHTML = questions.map((question, questionIndex) => `
            <div class="question">
                <h2>${question.question}</h2>
                ${question.options.map((option, optionIndex) => `
                    <label class="label">
                        <input type="radio" name="question${questionIndex}" value="${optionIndex}">${option}
                    </label>
                `).join('')}
            </div>
        `).join('');
    }

    // Function to calculate and display the quiz score upon submission
    function calculateScore() {
        let score = 0; // Initialize score
        // Iterate through each question to check answers
        questions.forEach((question, index) => {
            const selectedOption = document.querySelector(`input[name="question${index}"]:checked`);
            // If the selected option is the correct answer, increment score
            if (selectedOption && parseInt(selectedOption.value) === question.answer) {
                score++;
            }
        });
        // Display the score and update UI accordingly
        resultContainer.textContent = `You scored ${score} out of ${questions.length}.`;
        resultContainer.style.display = "block";
        submitButton.classList.add("hide");
        showCorrectButton.classList.remove("hide");
        restartQuizButton.classList.remove("hide");
    }

    // Function to display correct answers for all questions
    function showCorrectAnswers() {
        questions.forEach((question, index) => {
            const questionDiv = document.querySelector(`.question:nth-child(${index + 1})`);
            const answerText = document.createElement("div");
            answerText.innerHTML = `<p>Correct answer: ${question.options[question.answer]}</p>`;
            questionDiv.appendChild(answerText);
        });
    }

    
    submitButton.addEventListener("click", calculateScore); 
    showCorrectButton.addEventListener("click", showCorrectAnswers); 
    restartQuizButton.addEventListener("click", () => { 
        // Uncheck all selected options
        document.querySelectorAll('input[type="radio"]:checked').forEach(el => el.checked = false);
       
        document.querySelectorAll(".question > div").forEach(el => el.remove());
       
        quizContainer.innerHTML = '';
        resultContainer.style.display = "none";
        showCorrectButton.classList.add("hide");
        submitButton.classList.remove("hide");
        restartQuizButton.classList.add("hide");
        displayQuestions(); 
    });

    
    displayQuestions();
});
