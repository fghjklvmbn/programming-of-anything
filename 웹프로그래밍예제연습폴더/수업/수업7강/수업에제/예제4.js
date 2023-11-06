function hidemenu(){
    alert("오른쪽 클릭 금지");
    return false;
}
document.oncontextmenu = hidemenu;
