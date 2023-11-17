package square_digits

import (
	"strconv"
)

func SquareDigits(num int) int {
	multiplier := 1
	newNum := 0
	for num > 0 {
		digit := num % 10
		squaredDigit := digit * digit
		newNum += squaredDigit * multiplier

		if squaredDigit > 10 {
			multiplier *= 10
		}
		multiplier *= 10
		num /= 10
	}
	return newNum
}

func SquareDigitsV2(num int) int {
	squaredDigitsStr := ""
	numStr := strconv.Itoa(num)
	for _, c := range numStr {
		// To convert a rune to an int we need to subtract it from ascii 0
		digit := int(c - '0')
		squaredDigitsStr += strconv.Itoa(digit * digit)
	}
	newNum, _ := strconv.Atoi(squaredDigitsStr)
	return newNum
}

func Map[T, V any](ts []T, fn func(T) V) []V {
	result := make([]V, len(ts))
	for i, t := range ts {
		result[i] = fn(t)
	}
	return result
}
