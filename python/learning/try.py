try: result = 2 /0
except ZeroDivisionError:
    print("fuck it")
finally:
    result = False

print(result)