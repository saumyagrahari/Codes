P1=int(input("Enter the price: "))
P2=int(input("Enter the price of 2nd product: "))
P=P1+P2
if(P>299):
    P=P-50
    print("Rs.50 off applied, Offer price is: ",P)
elif(199<P>250):
    P=P-20
    print("Rs.20 off applied, Offer price is: ",P)
else:
    print("No offer is applicable.")