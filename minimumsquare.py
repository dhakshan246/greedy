for _ in range(int(input())):
    n=int(input())
    lx=[]
    ly=[]
    for i in range(n):
        l,m=map(int,input().split())
        lx.append(l)
        ly.append(m)
    k=abs(min(lx))+abs(max(lx))
    m=abs(max(ly))+abs(min(ly))
    k=max(k,m)
    print(k*k)
