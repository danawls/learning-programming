def timer():
    count = 0
    def increase():
        nonlocal count
        count += 1
        return count

    return increase

increase = timer()

print(increase())
print(increase())
print(increase())