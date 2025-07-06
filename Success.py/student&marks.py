n = int(input())
students_marks ={}

for _ in range(n):
    entry = input().split()
    name = entry[0]
    mark = list(map(float , entry[1:]))
    students_marks[name] = mark

quary_name =input()

score= students_marks[quary_name]
avg_score= sum(score) / len(score)

print(f"{avg_score: .2f}")
