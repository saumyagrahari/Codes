#atm
print("ATM")
balance=int(input("Enter the balance."))
withdrawl=int(input("Enter no of withdrawl."))
if(balance>5000):
    if(balance%10==0):
        if(withdrawl>5):
           print("Withdrawl Allowed.")
else:
    print("Withdrawl Not Allowed.")