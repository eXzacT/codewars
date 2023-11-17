export function squareDigits(num: number): number {
    let squaredNumString = '';
    for (const c of num.toString()) {
        squaredNumString += Number(c) ** 2;
    }
    return Number(squaredNumString);
}

export function squareDigitsV2(num: number): number {
    return Number(num.toString().split('').map(c => Number(c) ** 2).join(''));
    // + converts a string to an integer
    return +num.toString().split('').map(c => +c * +c).join('');
}