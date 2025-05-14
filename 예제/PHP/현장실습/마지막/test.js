function select_chang3(f){
    if(f.sel.value == '1'){
        document.getElementById("col").style.display = "none";
    } else if(f.sel.value == '2'){
        document.getElementById("col").style.display = "inline";
        document.getElementById("col").style.width = "45px";
    }
}

function pos_set(form){
    let jumsu1 = document.getElementsByName("insco1")[0].value;
    let jumsu2 = document.getElementsByName("insco2")[0].value;
    let jumsu3 = document.getElementsByName("insco3")[0].value;
    let p_jumsu = document.getElementsByName("insco")[0];

    if(jumsu1 && jumsu2 && jumsu3){
        let tot_hap = Number(jumsu1) + Number(jumsu2) + Number(jumsu3);
        p_jumsu.value = (tot_hap / 3);
    } else {
        p_jumsu.value = "";
    }
}

function opener(){
    window.open('https://naver.com');
}

function showConfirm(){
    let result = confirm("정말로 이 작업을 수행하시겠습니까?");
    if(result) {
        alert('작업이 성공적으로 수행되었습니다.');
    } else {
        alert('작업을 실패하였습니다.');
    }
}