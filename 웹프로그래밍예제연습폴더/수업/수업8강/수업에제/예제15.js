let sum =0;

function calc(cbox){
    if(cbox.checked){
        sum += parseInt(cbox.value);
    } else{
        sum -= parseInt(cbox.value);
    }
    document.getElementById("sumtext").value =sum;
}