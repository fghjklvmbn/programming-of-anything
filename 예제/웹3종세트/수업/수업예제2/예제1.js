let newWin = null;
function load(URL){
    newWin= window.open(URL, "myWin", "left=1000, top=1000, width=1000 height=1000")
}
function closeNewWindow(){
    if(newWin == null || newWin.closed){
        return;
    } else {
        newWin.close();
    }
}