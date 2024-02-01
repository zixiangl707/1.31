#include<stdio.h>
#include<string.h>
int main(){
	int i,a,sum=0,m;
	for(i=1;i<=2020;i++){
		m=i;
		while(m!=0){
		a=m%10;
		if(a==2){
			sum++;
		}
		m/=10;
	}
	} 
	printf("%d",sum);
	return 0;
}
	

