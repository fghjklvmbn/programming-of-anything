// 1.
// let div = document.getElementById("div");

// function where (e){
//     let text = "버튼 = " + e.button + "<br>";
//     text += "(Scrrenx, Scrreny) = " + e.screenX + "," + e.screenY + "<br>";
//     text += "(cilentx, cilenty) = " + e.clientX + "," + e.clientY + "<br>";
//     text += "(offsetx, offsety) = " + e.offsetX + "," + e.offsetY + "<br>";
//     text += "(x, y) = " + e.x + "," + e.y + "\n";
//     div.innerHTML = text;
// }
// 2 .
// window.onclick = function upper (e) {
//     if(e.target.tagName.toLowerCase()){
//         return ;
//     }
//     e.target.style.fontsize = "1.3em";
//     if(priv != null){
//         e.target.style.fontsize = "1em";
//     }
//     priv != e.target;
// }


// 3번 
//  function changeimage(){
//     let sel = document.getElementById("sel");
//     let img = document.getElementById("myimg");
//     img.onload = function(){
//         let myspan = document.getElementById("myimg");
//         myspan.innerHTML = img.width + "x" + img.clientHeight;
//     }
//     let index = sel.selectedIndex;
//     img.src = sel.options[index].value;
// }


