class Student:
    def __init__(self,name,marks):
        self.name = name
        self.marks = marks

    def avgvals(self):
        sum=0
        for value in self.marks:
            sum+=value
        print("hi",self.name," your Average value is: ",sum/3)

s1 = Student("Raj", [99,98,97])
print(s1.name)
print(s1.marks)
s1.avgvals()