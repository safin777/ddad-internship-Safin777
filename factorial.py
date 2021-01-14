def factorial(n):
 factorial=1
 if n<0 :
   print("Factorial does not exits for value less than 0")
 elif n == 0 :
   print("The factorial of 0 is 1")
 elif 0<n<10 :
   for i in range(1,n+1):
     factorial=factorial*i
   print("The factorial of",n,"is",factorial)
 else:
   print("The input number is greater than 10")

if __name__ == '__main__':
 number = int(input())
 factorial(number) 
