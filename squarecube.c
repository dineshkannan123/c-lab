#include<stdio.h>
int main(){
	int n,i;
	printf("enter a positive integer:");
	scanf("%d",&n);
	printf("number\tresult\n");
	printf("---------------------\n");
	for (i=1;i<=n;i++){
		if(i%2==0){
			printf("%d\t%d\n",i,i*i*i);
			
		}else{
			printf("%d\t%d\n",i,i*i);
		}
		
	}
	return 0;
}


