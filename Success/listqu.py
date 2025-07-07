n = int(input("no of command: "))
list = []
for _ in range(n):
    command = input("command is: ").split()
    cmd = command[0]

    if cmd == "insert":
        index = int(command[1])
        value = int(command[2])
        list.insert(index,value)
    elif cmd == "print":
        print(list)
    elif cmd == "remove":
         value = int(command[1])
         list.remove(value)
    elif cmd == "append":
        value = int(command[1])
        list.append(value)
    elif cmd == "sort":
        list.sort()
    elif cmd == "pop":
        list.pop()
    elif cmd == "reverse":
        list.reverse()

