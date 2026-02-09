t=int(input());
for _ in range(t):
    n=int(input())
    final=list(map(int,input().split()))
    moves=[];
    
    for _ in range(n):
        m,st=input().split()
        moves.append(st);

    for i in range(n):
        for j in moves[i]:
            if j=='D':
                final[i]=(final[i]+1)%10;
            else: 
                final[i]=(final[i]-1)%10;

    print(*final)
    