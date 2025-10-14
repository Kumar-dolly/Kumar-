const num1Input = document.getElementById('num1');
const num2Input = document.getElementById('num2');
const addBtn = document.getElementById('addBtn');
const clearBtn = document.getElementById('clearBtn');
const resultDiv = document.getElementById('result');

function addNumbers() {
    const num10 = parseFloat(num1Input.value);
    const num20 = parseFloat(num2Input.value);

    if (isNaN(num10) || isNaN(num20)) {
        resultDiv.innerHTML = '<p class="text-danger">Please enter valid numbers.</p>';
        return;
    }
    
    const sum = num10 + num20;

    resultDiv.innerHTML = `The sum is: ${sum}`;
}

function clearInputs() {
    num1Input.value = '';
    num2Input.value = '';
    resultDiv.innerHTML = '';
};

addBtn.addEventListener('click', addNumbers);
clearBtn.addEventListener('click', clearInputs);