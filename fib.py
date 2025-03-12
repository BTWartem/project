num = int(input())
a = 0
b = 1
print(0, end = "\n")
while (b < num):
	print(b, end = "\n")
	c = b
	b += a
	a = c
