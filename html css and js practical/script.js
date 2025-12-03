const numberDisplay = document.getElementById("number");
const plusBtn = document.getElementById("plus");
const minusBtn = document.getElementById("minus");
let count;
if (localStorage.getItem("count") === null) {
    count = 0;
} else {
    count = Number(localStorage.getItem("count"));
}
numberDisplay.textContent = count;
plusBtn.addEventListener("click", function () {
    count = count + 1;
    numberDisplay.textContent = count;
    localStorage.setItem("count", count);
});
minusBtn.addEventListener("click", function () {
    count = count - 1;
    numberDisplay.textContent = count;
    localStorage.setItem("count", count);
});
