const searchBox = document.querySelector('.searchBox');
const searchBtn = document.querySelector('.searchBtn');
const container = document.querySelector('.recipe-container');
const closeBtn = document.querySelector('.recipe-close-btn');
const recipeDetails = document.querySelector('.recipe-details-content');

const fetchRecipes = async (query) => {
    try {
        container.innerHTML = "<h2>Fetching Recipes...</h2>";
        const response = await fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${query}`);
        const data = await response.json();

        container.innerHTML = '';
        if (data.meals) {
            data.meals.forEach(meal => {
                const recipeDiv = document.createElement('div');
                recipeDiv.classList.add('recipe');
                recipeDiv.innerHTML = `<img src="${meal.strMealThumb}"> 
<h3>${meal.strMeal}</h3>
<p><span>${meal.strArea}</span> Dish</p>
<p>Belongs to <span>${meal.strCategory}</span> Category</p>`;
                const button = document.createElement('button');
                button.textContent = "View Recipe";
                recipeDiv.appendChild(button);

                button.addEventListener('click', () => {
                    openRecipePopup(meal);
                });

                container.appendChild(recipeDiv);
            });
        } else {
            container.innerHTML = '<p>No recipes found. Try another search!</p>';
        }
    } catch (error) {
        console.error("Failed to fetch recipes:", error);
        container.innerHTML = '<p>Sorry, we could not load the recipes. Please try again later.</p>';
    }
};

const openRecipePopup = (meal) => {
    recipeDetails.innerHTML = `<h2>${meal.strMeal}</h2>`;
    recipeDetails.parentElement.style.display = "block";
};

searchBtn.addEventListener('click', (e) => {
    e.preventDefault();
    const searchInput = searchBox.value.trim();
    fetchRecipes(searchInput);
});

closeBtn.addEventListener('click', () => {
    recipeDetails.parentElement.style.display = "none";
});