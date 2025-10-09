#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\t\t\t\tBCA -A");
	printf("\n_____________________________________________________________________________");
	printf("\nName:Ram\t\t\t\t\t\t\tRNo:19012");
	printf("\n_____________________________________________________________________________");
	float mark[5]={70,75,80,85,90};
	float total=mark[0]+mark[1]+mark[2]+mark[3]+mark[4];
	float average=total/5;
	printf("\nTamil\t\t\t\t\t\t:%5.2f",mark[0]);
	printf("\nEnglish\t\t\t\t\t\t:%5.2f",mark[1]);
	printf("\nMaths\t\t\t\t\t\t:%5.2f",mark[2]);
	printf("\nScince\t\t\t\t\t\t:%5.2f",mark[3]);
	printf("\nSocial\t\t\t\t\t\t:%5.2f",mark[4]);
	printf("\n_____________________________________________________________________________");
	printf("\ntotal\t\t\t\t\t\t:%5.2f\t\tavg:%5.2f",total,average);
	printf("\n_____________________________________________________________________________");
	if(average>=50)
	printf("\nResult:PASS");
	else
	printf("\nResult:FAIL");

	getch();
	return 0;
}
