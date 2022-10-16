"""
Edgars Spira, es22027

A31. Given two natural numbers.
Calculate difference of digit sum of both given numbers.
Splitting into digits should be carried out numerically.

Program created: 27/09/2022
"""

#print program purpose to the console for user
print("Input 2 natural numbers. The program will calculate the difference of digit sum of both numbers.")

#get input from user for desired numbers to be calculated by program
print("First number: ")
num_1 = int(input())
while num_1 <= 0: #check number to be natural only
    print("Invalid input. Try again with natural number: ") #if input is wrong, display ERROR message
    num_1 = int(input())

print("Second number: ")
num_2 = int(input())
while num_2 <= 0: #check number to be natural only
    print("Invalid input. Try again with natural number: ") #if input is wrong, display ERROR message
    num_2 = int(input())

#declare new function to calculate sum of digits
def sum_calc (num):
    sum = 0
    while num > 0:
        sum += int(num % 10) #"read" digit using algorithm with modulo operator and store it into sum variable
        num /= 10
    return sum

#call function to calculate sums with given numbers
sum_1 = sum_calc(num_1)
sum_2 = sum_calc(num_2)

#display the result to user
print("\nFirst sum (" + str(sum_1) + ") minus second sum (" + str(sum_2) + ") = " + str(sum_1 - sum_2))

