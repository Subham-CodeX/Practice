class Student:
   
    __name = "Subham"

    def __hello(self):
        print("Hello user!")

    def welcome(self):
        self.__hello()



s1=Student()
# print(s1.__name)
print(s1.welcome())