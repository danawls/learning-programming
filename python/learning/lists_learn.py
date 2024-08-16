dogs = ["Roger", 1, "Syd", True]
bro = ["hi", "no", "noway"]

dogs[2] = "real"
dogs.extend(bro) #dogs += bro

dogs.remove(1)
dogs.pop()

print(dogs[-2])

print(dogs)