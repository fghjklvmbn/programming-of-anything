const buttons = document.querySelectorAll("button");
const operators = document.querySelectorAll(".operator");
const displayElement = document.querySelectorAll(".input");
const btn = document.querySelectorAll(".btn");

let operatorOn = "";
let priviousNum = "";
let resentNum = "";

// 변수인계
let calculate = (n1, operator, n2) => {
    let result = 0;
    switch(operator){
        case '+':
            result = Number(n1)+ Number(n2);
            break;
        case '-':
            result = Number(n1)- Number(n2);
            break;
        case '*':
            result = Number(n1)* Number(n2);
            break;
        case '/':
            result = Number(n1)/ Number(n2);
            break;
        default:
            break;
    }
    return String(result);
}

let calculator = () => {
    let isFirstDigit = true;

    buttons.forEach((item) => {
        item.addEventListener('click', (e) => {
            let action = e.target.classList[0];
            let click = e.target.innerHTML;

            if(action === "operator"){
                operatorOn = click;
                priviousNum = displayElement.textContent;
                displayElement.textContent = "";
                isFirstDigit = true;
            }
            if(action === "btn"){
                if(isFirstDigit && click === "0"){
                    return;
                }
                if(displayElement.textContent !== "" && operatorOn === ""){
                    displayElement.textContent = click;
                    priviousNum = displayElement.textContent;
                } else if(displayElement.textContent !== '' && operatorOn === ""){
                        displayElement.textContent =  displayElement.textContent + click;
                        priviousNum = displayElement.textContent;
                } else if(displayElement.textContent === "" && operatorOn !== ''){
                    displayElement.textContent = displayElement + click;
                    resentNum = displayElement.textContent
                }
                isFirstDigit = false;
                }
            if(action === 'result'){
                displayElement.textContent = calculate(
                    priviousNum, operatorOn, resentNum
                );
                isFirstDigit = true;
            }
            if(action === "ac"){
                displayElement.textContent = "";
                priviousNum = "";
                operatorOn = "";
                resentNum = "";
                isFirstDigit = false;
            }
        });
    });
};
    calculator();
