document.addEventListener('DOMContentLoaded', () => {
    const cards = document.querySelectorAll('.card');
    let flippedCards = [];
    let moves = 0;

    // Add click event listener to each card
    cards.forEach(card => {
        card.addEventListener('click', flipCard);
    });

    // Add click event listener to the restart button
    const restartButton = document.getElementById('restart');
    restartButton.addEventListener('click', restartGame);

    // Function to flip the card
    function flipCard() {
        if (flippedCards.length < 2 && !this.classList.contains('flipped')) {
            this.classList.add('flipped', 'toggled'); // Add 'toggled' class here
            flippedCards.push(this);

            if (flippedCards.length === 2) {
                setTimeout(checkMatch, 1000);
            }
        }
    }

    // Function to check if the flipped cards match
    function checkMatch() {
        const [card1, card2] = flippedCards;
        const img1 = card1.querySelector('.card-image').src;
        const img2 = card2.querySelector('.card-image').src;

        if (img1 === img2) {
            // Match
            flippedCards = [];
        } else {
            // No match, flip back after a short delay
            setTimeout(() => {
                card1.classList.remove('flipped', 'toggled');
                card2.classList.remove('flipped', 'toggled');
                flippedCards = [];
            }, 500);
        }

        // Increment moves and update counter
        moves++;
        updateMovesCounter();

        // Check if all cards are matched
        if (document.querySelectorAll('.flipped').length === cards.length) {
            alert(`Congratulations! You won in ${moves} moves.`);
        }
    }

    // Function to update the moves counter
    function updateMovesCounter() {
        const moveCounter = document.querySelector('.move-counter');
        moveCounter.textContent = `Moves: ${moves}`;
    }

    // Function to restart the game
    function restartGame() {
        cards.forEach(card => {
            card.classList.remove('flipped', 'toggled');
        });
        flippedCards = [];
        moves = 0;
        updateMovesCounter();
    }
});
