t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    sum=0
    for it in arr:
        sum+=it;

    print(-sum)