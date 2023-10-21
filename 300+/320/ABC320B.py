s = input()
mx = 0
for i in range(len(s)):
    for j in range(0,len(s)-i):
        if s[i:i+j+1] == s[i:i+j+1][::-1]:
            mx = max(mx, j)
print(mx+1)