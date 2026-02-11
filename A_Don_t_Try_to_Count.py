t=int(input())
for _ in range(t):
    n, m = map(int, input().split())
    x = input()
    s = input()
    count = 0
    ans = 0
    while(s not in x):
        x = x+x
        count+=1
        if(count>5): 
            ans=-1
            break

    if(ans==-1): print(-1)
    else: print(count)
