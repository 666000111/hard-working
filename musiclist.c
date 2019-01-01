#include <stdio.h>
#include <string.h>



int main() {
    int n,j,k,i,count=0;
	int a[101][101];
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	int b[n][4];
	for(i=0;i<n;i++)
	{scanf("%d%d%d%d",&b[i][0],&b[i][1],&b[i][2],&b[i][3]);
	for(j=b[i][0]+1;j<=b[i][2];j++)
	for(k=b[i][1]+1;k<=b[i][3];k++)
	a[j][k]++;
	}
	for(i=1;i<=100;i++)
	for(j=1;j<=100;j++)
	if(a[i][j]!=0)count++;
	printf("%d",count);

	
	return 0;
}
