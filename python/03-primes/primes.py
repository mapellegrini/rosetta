def isprime(number):
    for cur in range(2, number):
        if number % cur == 0:
            return False
    return True

for number in range(2, 100):
    if isprime(number):
        print(number, "is prime")
    else:
        print(number, "is not prime")
