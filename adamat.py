# t=int(input())
# while(t>0):
# 	t-=1;
# 	aa=int(input());
# 	count=0;blist=[]
# 	for i in range(aa):
# 		blist.append([int(x) for x in input().split()])
# 	for d in range(aa-1,0,-1):
# 		done=blist[d][d-1]+1
# 		if done!=blist[d][d]:
# 			count+=1
# 			don=d+1
# 			for i in range(don):
# 				for j in range(i,don):
# 					# blist[j][i],blist[i][j]=blist[i][j],blist[j],blist[i]
# 					trav=blist[i][j]
# 					blist[i][j]=blist[j][i]
# 					blist[j][i]=trav

# 	print(count)
t=int(input())
for i in range(t):
	for j in range(i,t):
		print(i,j)