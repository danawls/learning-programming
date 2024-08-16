

def real():
    count = 0
    def the_false():
        nonlocal count
        count = count + 1
    return count + 1