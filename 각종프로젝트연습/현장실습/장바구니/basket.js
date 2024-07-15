// 가격
function plus(ins_price){
    let cntElement = document.getElementById("cnt");
    let priceElement = document.getElementById("price");
    let price = parseInt(priceElement.innerText);
    let cnt = parseInt(cntElement.innerText);
    
    cnt++;
    price += ins_price;
    
    priceElement.innerText = price;
    cntElement.innerText = cnt;
    form_m.cnt2.value=cnt;
    form_m.price2.value=price;
}

function minus(ins_price){
    let cntElement = document.getElementById("cnt");
    let priceElement = document.getElementById("price");
    let price = parseInt(priceElement.innerText);
    let cnt = parseInt(cntElement.innerText);
    
    if(cnt > 0){
        cnt--;
        price -= ins_price;
    }

    priceElement.innerText = price;
    cntElement.innerText = cnt;
    form_m.cnt2.value=cnt;
    form_m.price2.value=price;
}



function buy1(){
    location.href='buy.php?chk=1';
}
function buy2(){
    location.href='buy.php?chk=2';
}