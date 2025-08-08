def multi_or_sum(a,b):
    product=a*b
    if product<=1000 :
        return a*b
    else :
        return a+b

x=int(input("Enter first number :"))
y=int(input("Enter second number:"))
print("Result is :",multi_or_sum(x,y))