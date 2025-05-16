class Account:
    def __init__(self,bal,acc):
        self.balance=bal
        self.accountno=acc

    def debit(self,amount):
        self.balance-=amount
        print("Rs.",amount,"was debited")
        print("total amount=",self.get_balance())

    def credit(self,amount):
        self.balance+=amount
        print("Rs.",amount,"was crerdited")
        print("total amount=",self.get_balance())

    def get_balance(self):
        return self.balance
       
s1 = Account(10000,123455)
print(s1.balance)
print(s1.accountno)
s1.debit(5000)
s1.credit(2000)
