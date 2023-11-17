package square_digits

import (
	"testing"
)

type TestCase struct {
	input    int
	expected int
}

var tests = []TestCase{
	{123, 149},
	{25213, 425419},
	{562399, 2536498181},
	{12319571, 14918125491},
}

func TestSquareDigits(t *testing.T) {
	for _, test := range tests {
		result := SquareDigits(test.input)
		if result != test.expected {
			t.Errorf("SquareDigits(%d) = %d; want %d", test.input, result, test.expected)
		}
	}
}

func TestSquareDigitsV2(t *testing.T) {
	for _, test := range tests {
		result := SquareDigitsV2(test.input)
		if result != test.expected {
			t.Errorf("SquareDigitsV2(%d) = %d; want %d", test.input, result, test.expected)
		}
	}
}
