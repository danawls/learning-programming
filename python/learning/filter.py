numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

result = filter(lambda n : n % 2 == 0, numbers)

print(list(result))