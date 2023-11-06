function changeimage(){
    let sel = document.getElementById("sel");
    let img = document.getElementById("myimg");
    img.onload = function (){
        let myspan = document.getElementById("myspan");
        myspan.innerHTML = img.width + "x" + img.height;
    }
    let index = sel.selectedIndex;
    img.src = sel.options[index].value;
}