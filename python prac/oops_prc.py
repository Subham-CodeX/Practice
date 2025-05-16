class Student:
    clg_nam="Brainware University"

    def __init__(self,fullname):
        self.name= fullname
        print("Welcome to this world...")

    def welcome(self):
        print("welcome student",self.name)

s1=Student("Arona")
print(s1.clg_nam)
print(s1.name)
s1.welcome()
