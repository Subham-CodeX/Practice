n= int(input("no of total student: "))
students = []
for _ in range(n):
    name = input("Enter name: ")
    score= float(input("Enter grade: "))
    students.append([name,score])

students.sort(key = lambda x: x[1])     # this is lambda function(This tells Python how to sort) . x= each element in list , x[1] =  accesses the grade of that student.

grades= sorted(set([score for name , score in students]))

second_lowest = grades[1]

result =sorted([name for name, score in students if score == second_lowest ])

for name in result:
    print(name)

