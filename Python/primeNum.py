a=int(input("ENTER NUMBER:"))
temp=a
i=1
count=2
for i in range(i,temp):
    if(a%i==0):
        i+=1
        count+=1
if(count>2):
    print("Not a Prime Num.")
else:
    print("Prime.")