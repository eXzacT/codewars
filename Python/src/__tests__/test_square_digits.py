from src.square_digits import square_digits, square_digits_v2


def test_square_digits():
    assert square_digits(3212) == 9414
    assert square_digits(2112) == 4114
    assert square_digits(9152) == 811254
    assert square_digits(0) == 0


def test_square_digits_v2():
    assert square_digits_v2(3212) == 9414
    assert square_digits_v2(2112) == 4114
    assert square_digits_v2(9152) == 811254
    assert square_digits_v2(0) == 0
