// function f(){
//     let a = document.getElementsByTagName("span");
//     for(let i = 0; i < length.a; i++){
//         let span = a[i];
//         span.style.color = "orchid";
//         span.style.fontSize = "20px";
//      }
// }

let win = null;
function showHTML(){
    if(win == null || win.closed){
        win = window.open("", "outwin", "width = 300", "height = 200");
        let textarea = document.getElementById("srctxt");
        win.document.open();
        win.document.write(textarea.value);
        win.document.close();
    }
}