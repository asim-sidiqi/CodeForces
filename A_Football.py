team=input().strip()

l=0
r=1
maxi=1

while r<len(team):
    if(team[r]==team[r-1]):
        maxi=max(maxi,r-l+1)
        r+=1
    else:
        l=r
        r+=1

print("YES" if maxi>=7 else "NO")