"""""""""""""""""""""""""""
Edgars Spira, es22027

B5. Given natural numbers m and n. Find all numbers in range [m,n]
the decimal notation of which is the right part of the decimal notation
of its square (e.g., 6 - square 36; 25 - square 625). Splitting into digits
should be carried out numerically. The solution should include a function
which returns a numbers which is obtained by taking last k digits from a given number
(e.g. last 3 digits of 123456 forms number 456).

Program created: 16/10/2022
"""""""""""""""""""""""""""""

def dig_return (num): #function for n digits return
    #print("Number:", num) #test
    if num % 10 == 0: #we can skip everything that divides by 10 without remainder, since they never meet the criteria
        return 0
    
    num_copy = num 
    ten_pow = 0
    while num_copy > 0: #calculate how many digits are in a given number
        ten_pow += 1
        num_copy //= 10
    #print("Digits:",ten_pow) #test
    
    full_num = 0
    num_in_pow = num * num
    #print("Number in power:", num_in_pow) #test
    for x in range(0, ten_pow): #calculate exact digits that will be returned. Splitting digits using modulo algorithm
        if full_num == 0:
            full_num += num_in_pow % 10
        else:
            new_pow = num_in_pow % 10
            for j in range(1, x + 1):
                new_pow *= 10
            full_num = new_pow + full_num
        num_in_pow //= 10
        
    #print("Last digits:", full_num) #test
    return full_num

def calculations(): #function for console output
    """
    get 2 numbers from users, both should be natural and second should be larger
    than the first one (eotherwise numbers range would not make sense)
    """
    print("Enter 2 numbers for desired range:") 
    print("First number:")
    m = int(input())
    while m < 1:
        print("Enter only natural number:")
        m = int(input())
    print("Second number:")
    n = int(input())
    while n < m:
        print("Enter only natural number and >= first number:")
        n = int(input())
        
    flag = 0
    for x in range(m, n + 1): #iterate through numbers range and print numbers that meet the criteria
        if x == dig_return(x):
            print(x, "( squared is", x * x, ")")
            flag = 1
    if flag == 0: #or print message if none found
        print("No numbers under criteria for this range.")


calculations()

