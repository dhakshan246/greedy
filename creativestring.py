from collections import Counter
t,n=map(int,input().split())
strings=[list(input()) for i in range(t)]
val=list(zip(*strings))
print(val)
res=[]
print()
for i in val:
    print(i)
    ob=Counter(sorted(list(i)))
    high_val=ob.most_common(1)
    print(high_val)
    res.append(high_val[0][0])
print("".join(res))
