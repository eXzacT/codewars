function squareDigits(num) {
    let newNumString = '';
    for (const c of num.toString()) {
        newNumString += c ** 2;
    }
    return Number(newNumString);
}

function squareDigitsV2(num) {
    return +num.toString().split('').map(c => c * c).join('');
}

module.exports = { squareDigits, squareDigitsV2 };
