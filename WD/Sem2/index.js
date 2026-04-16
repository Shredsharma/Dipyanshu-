let heading = document.getElementById("heading");
let input = document.getElementById("inputText");
let para = document.getElementById("para");

document.getElementById("changetext").onclick = function () {
  heading.innerText = input.value;
};

input.onchange = function () {
  console.log("Input changed:", input.value);
};

document.getElementById("bgcolor").addEventListener("click", function () {
  let random = "#" + Math.floor(Math.random() * 16777215).toString(16);
  document.body.style.backgroundColor = random;
}); 

document.getElementById("fontsize").addEventListener("click", function () {

  document.body.style.fontSize = "3px";
});

