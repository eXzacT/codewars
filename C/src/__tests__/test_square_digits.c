#include <assert.h>
#include <stdio.h>
#include "../square_digits.h"

void test_square_digits()
{
    assert(square_digits(123) == 149);
    assert(square_digits(5552991) == -1);
    assert(square_digits(0) == 0);
    assert(square_digits(1) == 1);
    assert(square_digits(12) == 14);
}

void test_square_digits_v2()
{
    assert(square_digits_v2(123) == 149);
    assert(square_digits_v2(5552991) == -1); // Int overflow
    assert(square_digits_v2(0) == 0);
    assert(square_digits_v2(1) == 1);
    assert(square_digits_v2(12) == 14);
}

int main()
{
    test_square_digits();
    test_square_digits_v2();
    printf("All tests passed!\n");
    return 0;
}
