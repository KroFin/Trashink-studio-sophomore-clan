#include<stdio.h>
#include<string.h>
#define size 100
void f(char x[],char y[],int n){
	int i,g[size];
	if(!x||!y){
		printf("-1");
	}
	for(i=0;i<n;i++){
		if((int)x[i]<=(int)y[i]){
			g[i]=x[i];
		}
		if((int)x[i]>(int)y[i]) {
			g[i]=y[i];
		}		
	}printf("\n");
	for(int j=0;j<n;j++){
		printf("%c",g[j]);
	}
}
int main(){
	int n;
	char x[size],y[size];
	//printf("输入字符串长度:");
	scanf("%d",&n);
//	printf("输入长度为%d的第1个字符串：",n);
	scanf("%s",x);
//	printf("输入长度为%d的第2个字符串：",n);
	scanf("%s",y);
	f(x,y,n);
	return 0;
} 
