done = True
cool = False

if done:
    print("cool")
else:
    print("not cool")

read = any([done, cool])
print(read)