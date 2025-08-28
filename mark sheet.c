#include<stdio.h>
#include<conio.h>
int main()
{
	float m[5]={55,66,77,88,99};
	float tot,avg;
	printf("\n\t\t\t\t\tBCA-A\t\t\t\t\t\n");
	printf("\n_________________________________________________________________");
	printf("\nName:G.DINESH KANNAN\t\t\tReg=11253408");
	printf("\n_________________________________________________________________");
	printf("\nTamil\t\t\t\t\t\t%5.2f\t\t\t\t\t",m[0]);
	printf("\nEnglish\t\t\t\t\t\t%5.2f\t\t\t\t\t",m[1]);
	printf("\nMathematics\t\t\t\t\t%5.2f\t\t\t\t\t",m[2]);
	printf("\nScience\t\t\t\t\t\t%5.2f\t\t\t\t\t",m[3]);
	printf("\nSocial science\t\t\t\t\t%5.2f\t\t\t\t\t",m[4]);
	tot=m[0]+m[1]+m[2]+m[3]+m[4];
	avg=tot/5;
	printf("\n_________________________________________________________________");
	printf("\ntot=%5.2f\t\t\t\t\tavg=%5.2f",tot,avg);
	printf("\n_________________________________________________________________");
	if("Average>=50")
	printf("\nResult:PASS");
	else
	printf("\nResult:FAIL");
	
	getch();
	return 0;
}
