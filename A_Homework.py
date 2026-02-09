t=int(input())
for _ in range(t):
    na=int(input())
    a=input().strip()
    nb=int(input())
    b=input().strip()
    c=input().strip()

    dict={}

    for i in range(nb):
        dict[i]=c[i]

    for i, it in enumerate(b):
        if(dict[i]=='D'):
            a+=it
        else:
            a=it+a

    print(a)

    