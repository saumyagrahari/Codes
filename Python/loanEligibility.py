#To check the loan eligibility
income=int(input("Enter income: "))
credit_score=int(input("Enter score: "))
exist_EMI=int(input("Enter EMI: "))
if(income>80000 and credit_score>600 and exist_EMI<10000):
    print("Eligible for Loan.")
else:
    print("Not eligible.")