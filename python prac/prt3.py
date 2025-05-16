class Account:

    def __init__(self,acc_no,acc_pass):
        self.acc=acc_no
        self.__password=acc_pass

    def reset_pass(self):
        print(self.__password)

s1 = Account(12345, "abcd55")
print(s1.acc)
# print(s1.password)
print(s1.reset_pass())