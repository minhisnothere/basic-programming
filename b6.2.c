#include<stdio.h>
#include<math.h>
int main(){
	int a;
	int s=0;
	scanf ("%d",&a);
	for (int i=1; i<=(pow(a,0.5));i++){
		if (a%i==0){
			s+=i+a/i;
		}
	}
	if (a*2==s){
		printf("%d la so hoan hao",a);
	}else{
		printf("%d khong la so hoan hao",a);
	}
	
}
