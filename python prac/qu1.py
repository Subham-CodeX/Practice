n =int(input("no of student: "))
student_mark={}
for _ in range(n):
    entry = input("Name of student: ").split()
    name = entry[0]
    mark=list(map(float, entry[1:])) 
    student_mark[name] = mark


def avg_mark(score):
    for name, mark in score.items():
        avg_mark = sum(mark)/len(mark)
        print(f"{name} : {avg_mark:.2f}")

avg_mark(student_mark)
    
    


