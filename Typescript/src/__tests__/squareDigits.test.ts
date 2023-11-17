import { squareDigits, squareDigitsV2 } from '../squareDigits';

describe('Testing squareDigits functions', () => {
    test('squareDigits function', () => {
        expect(squareDigits(5292)).toBe(254814);
        expect(squareDigits(3212)).toBe(9414);
        expect(squareDigits(2112)).toBe(4114);
        expect(squareDigits(0)).toBe(0);
    });

    test('squareDigitsV2 function', () => {
        expect(squareDigitsV2(5292)).toBe(254814);
        expect(squareDigitsV2(3212)).toBe(9414);
        expect(squareDigitsV2(2112)).toBe(4114);
        expect(squareDigitsV2(0)).toBe(0);
    });
});
