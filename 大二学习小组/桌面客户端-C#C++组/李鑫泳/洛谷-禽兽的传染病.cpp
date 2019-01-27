#include<stdio.h>
int main(){
	int x,n,i,sum=1;
	scanf("%d %d",&x,&n);
	for(i=1;i<=n;i++){	
		sum=sum*(x+1);
	}
	printf("%d\n",sum);
}
