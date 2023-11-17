def square_digits(num: int) -> int:
    num_string = ''
    for c in str(num):
        num_string += str(int(c)**2)
    return int(num_string)


def square_digits_v2(num: int) -> int:
    return int(''.join
               (map(lambda c: str(int(c)**2), str(num))))
