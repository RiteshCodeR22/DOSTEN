import math

a=int(input())
b=int(input())
c=int(input())

d=(b*b)-4*a*c
if(d>=0):
    r=(-b+math.sqrt(d))/2*a
    s=(-b-math.sqrt(d))/2*a
    print(r,"\t",s)
else:
    print("Roots are imaginary")
    