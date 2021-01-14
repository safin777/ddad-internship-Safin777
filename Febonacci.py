def fiboacci(n):
   if n <= 1:
       return n
   else:
       return(fiboacci(n-1) + fiboacci(n-2))

terms = int(input())
if terms <= 0:
   print("Plese enter a positive integer")
elif terms>20:
  print("please enter a value less than 20")
else:
   print("Fibonacci sequence:")
   for i in range(terms):
       print(fiboacci(i) , end = ",")