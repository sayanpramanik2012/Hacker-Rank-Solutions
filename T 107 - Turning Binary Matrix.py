n = int(input())
b = []
for i in range(n):
    b.append(list(map(int,input().split())))
    
for i in range(n):
    for j in range(n):
        x = b[i][j] or b[j][n-i-1] or b[n-i-1][n-j-1] or b[n-j-1][i]
        print(x,end = " ")
    print()