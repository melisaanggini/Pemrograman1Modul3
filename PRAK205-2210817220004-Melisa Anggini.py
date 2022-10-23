import math
a,b=input().split()
a=float(a)
b=float(b)
p=(b*b)-(a*a)
c=math.sqrt(p)
keliling=a+b+c
luas=0.5*c*a
print("Alas =", round(c),"cm")
print("Tinggi =", round(a),"cm")
print("Keliling =", round(keliling),"cm")
print("Luas =", round(luas),"cm^2")
import math
a1=int(input())
b1=int(input())
p1=(b1*b1)-(a1*a1)
c1=math.sqrt(p1)
keliling1=a1+b1+c1
luas1=0.5*c1*a1
print("Alas =", round(c1),"cm")
print("Tinggi =", round(a1),"cm")
print("Keliling =", round(keliling1),"cm")
print("Luas =", round(luas1),"cm^2")