t=int(input())

for no in range(t):
    n=int(input())
    skill = list(map(int, input().split()))
    minlist=[]
    for j in skill:
        for k in skill:
            if j>k:
                mini=j-k
                minlist.append(mini)
    print(min(minlist))