let tds;
let previndex = 0, index = 0;

window.onload = function (){
    tds = document.getElementsByTagName("td");
    tds[index].style.backgroundColor = "orchid";
}
window.onkeydown = function (e){
    switch(e.key){
        case "ArrowDown" :
            if(index/3 >= 2) return;
            index += 3;
            break;
        case "ArrowUp" :
            if(index/3 < 1) return;
            index -= 3;
            break;
        case "ArrowLeft" :
            if(index % 3 == 0) return;
            index--;
            break; 
        case "ArrowRight" :
            if(index % 3 == 2) return;
            index++;
            break;
    }
    tds[index].style.backgroundColor = "orchid";
    tds[previndex].style.backgroundColor = "white";
    previndex = index;
}