class Person:
    def __init__(self, name, age, job):
        self.name = name
        self.age = age
        self.job = job

    def print_info(self):
        print(f"your name is {self.name} and your age is {self.age} and your job is {self.job}".title())

class Programmer(Person):
    def __init__(self, name, age, job, lang, sub, salary):
        super().__init__(name, age, job)
        self.lang = lang
        self.sub = sub
        self.salary = salary
    def print_program(self):
        super().print_info()
        print(f"your language is {self.lang} and your subject is {self.sub} and your salary is {self.salary}".title())

# person1 = Programmer("Woojin Choi", 13, "Programmer", "C++", "Deep Learning", 23000)
#
# person1.print_program()
# person1.print_info()