#include<stdio.h>
#include<string.h>
int main(){
	long long a,b,n,week,weeks,ns;
	long long i,day=0;
	scanf("%lld%lld%lld",&a,&b,&n);
	week=5*a+b*2;
	weeks=n/week;
	ns=n%week;
if(ns>5*a){
	day+=5;
	ns-=5*a;
	while(ns>0){
		ns-=b;
		day++;
	}
}
else{while(ns>0){
	ns-=a;
	day++; 
}
}
	day+=7*weeks;
	printf("%lld",day);
	return 0;
}
	

