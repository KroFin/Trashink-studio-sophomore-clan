#include<stdio.h>
#define size 20000
typedef struct {
	int a,b,c,d;
}A;
int SUB(A num[],int n){
	int s[5];
	for(int j=10000;j<=30000;j++){
		int m=0;
		s[0]=j%10;//个位 
		s[1]=(j/10)%10;//十位 
		s[2]=(j/100)%10;//百位 
		s[3]=(j/1000)%10;//千位 
		s[4]=j/10000;//万位 		
		num[m].a=s[4]*100+s[3]*10+s[2];
		num[m].b=s[3]*100+s[2]*10+s[1];
		num[m].c=s[2]*100+s[1]*10+s[0];
		if((num[m].a)%n==0&&(num[m].b)%n==0&&(num[m].c)%n==0){
			num[m].d=j;
			printf("%d\n",num[m].d);
			m++;
		}		
	}
	if(num[0].d==NULL)	printf("NO") ;
	return 0;
} 
int main(){
	A num[size];
	int n;
	//printf("输入n(0~1000)：");
	scanf("%d",&n);
	SUB( num, n);
	return 0;
	}




