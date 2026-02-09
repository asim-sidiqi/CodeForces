from collections import Counter
t =int(input())
for _ in range(t):
    check = input().strip()
    digits=Counter(check)
    ans=0
    for i, it in enumerate(check):
        if (check[i]=='0' and digits['1']==0) or (check[i]=='1' and digits['0']==0): 
            ans=len(check)-i;

        if(check[i]=='0'): digits['1']-=1
        else: digits['0']-=1

    print(ans)