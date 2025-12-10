# 9 Dec 2025
#This is comment, # is used to single line comment
""" This is multi line comment """
#Comment is ignored by interpreter
""" 
There are 35 keywords in python and all are in small 
case except three keywords are in start with upper case True, False and None.
 """
print("This is printed using double quote")


print("""

This one is printed using,
         Triple quote,
      Triple quote is used to print according to formatting stype you need.

""")


print('This is printed using single quote.')


#Basic Data type
# int, str, float, double. Boolean

#Advanced Data type
#list, tuple, set, dic  [Disctionary]


#General operation in python
print(8+9) #Addition
print(8-9) #Subtraction
print(8*9)# Multiplication
print(8/9)#Division
print(8//9)#Floor Division
print(8%2) # It will return remainder , 0 for even number and 1 for odd number
print(8**2) #Exponent/ 8 to the power 2


#Condition Statement[ if/elif/else]
x = int(input("Enter a first number")) #int is used to take input for integer
y= int(input("Enter 2nd number"))
if(x==y):
    #Printing formating in python
    print(x,"is equals to",y)
    # 10 Dec 2025
    print("{} is equals to {}".format(x,y))
    print(f"{x} is equals to {y}")
#multiple elif[else if] can be used as our requirement
elif(x>y):
    print(x,"is greater than ",y)
else:
    print(y,"is greater than ",x)


#Loop
# For loop
for i in range(1, 11):
    print(i)


#While loop
i = 1
while i<=10:
    print(i)
    i+=1
