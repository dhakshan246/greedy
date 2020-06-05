for _ in range(int(input())):
    s=input()
    f=1
    for i in range(len(s)):
        if s.count(s[i])>1:
            f=0
    if f==0:
        print('Yes')
    else:
        print('No')
            
    
