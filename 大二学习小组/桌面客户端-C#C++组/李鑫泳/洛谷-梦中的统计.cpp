#include<stdio.h>
#include<math.h>
void f(int p,int num[]){//数字的位数 
	int n=0,t,y;
	y=p;
	while(y!=0){		
		y=y/10;
		n++;
	}
	for(int i=0;i<n;i++){
		t=p%10;		
		//printf("t=%d  ",t);
		for(int j=0;j<10;j++){
			if(j==t) num[j]++;
		}
		p=p/10;
	} 
}
void cam(int a,int b){
	int num[10];
	for(int i=0;i<10;i++){
		num[i]=0;
	}
	for(int i=a;i<=b;i++){
		f(i,num);
	//	for(int i=0;i<10;i++)
	//		printf("%d ",num[i]);
	//		printf("\n")	;
	}
	for(int i=0;i<10;i++)
		printf("%d ",num[i]);
}
int main(){
	long int a,b;
	printf("输入a，b的值，中间用2个空格隔开（1<=a<=b<=2000000000&&b-a<=500000）:");
	scanf("%d  %d",&a,&b); 
//	if(b-a>500000){
//		return -1;
//	}
	//printf("%d %d",a,b);
	cam(a,b);
}
