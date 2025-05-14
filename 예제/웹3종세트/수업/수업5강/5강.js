window.onload = function init(){
    p = document.getElementById("p");
    p.addEventListener("click", over);
    p.addEventListener("mouseout", up);
}

function over(){
    p.style.backgroundColor = "blue";
}
function up(){
    p.style.backgroundColor = "white";
}