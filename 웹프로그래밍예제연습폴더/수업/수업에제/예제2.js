let width = 1;

function down(obj){
    obj.style.fontStyle = "italic";    
}
function up(obj){
    obj.style.fontStyle = "normal";    
}
function over(obj){
    obj.style.fontStyle = "violet";    
}
function out(obj){
    obj.style.fontStyle = "lightgrey";    
}
 
// 휠설정
function wheel(e, obj){
    if(e.wheelDelta < 0){
        width--;
        if(width <0){ // 0 고정
            width = 0;
        }
    }
    else {
        width++;
    }
    obj.style.borderStyle = "ridge";
    obj.style.borderWidth = width + "px";
}