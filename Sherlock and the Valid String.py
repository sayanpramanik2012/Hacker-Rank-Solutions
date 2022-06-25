s = str(raw_input())
d = {}
for c in s:
    if c in d:
        d[c]+=1
    else:
        d[c]=1
k = sorted(d.values())
if len(k) == 1:
    print "YES"
elif k[0] == 1 and k[1] == k[-1]:
    print "YES"
else:
    print "YES" if k[-1]-k[0] <= 1 and (k[-1] != k[-2] or k[0] == k[-1]) else "NO"