a=int(input("Enter the required number:"))
sum=0
digit=a%10
sum=sum+digit**digit
num=a//10
if(sum==a):
    print("Armstrong number.")
else:
    print("Not Armstrong.")