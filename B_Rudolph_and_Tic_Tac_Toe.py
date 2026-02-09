t=int(input())
for _ in range(t):
    game=[]
    m={}
    for _ in range(3):
        row=input().strip()
        game.append(row)
        m[row]=1


    for i in range(3):
        col=game[0][i]+game[1][i]+game[2][i]
        m[col]=1

    diag="".join(game[i][i] for i in range(3))

    m[diag]=1

    antidiag="".join(game[i][3-1-i] for i in range(3))
    
    m[antidiag]=1

    ans="DRAW"

    if("XXX" in m): ans="X"
    if("OOO" in m): ans="O"
    if("+++" in m): ans="+"

    print(ans)