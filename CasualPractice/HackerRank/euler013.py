n = int(input())
ans = 0
for i in range(n):
    x = int(input())
    ans += x
for i in range(10):
    print(str(ans)[i], end="")
print()
