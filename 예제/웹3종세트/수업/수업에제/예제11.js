function drawimage(){
    let sel = document.getElementById("frults");
    let img = document.getElementById("frultimage")
    img.src = sel.options[sel.selectedIndex].value;
}