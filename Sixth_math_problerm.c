#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	float p, t, r, si, ci;
	printf("Enter principal: ");
	scanf("%f",&p);
	
	printf("Enter time: ");
	scanf("%f",&t);
	printf("Enter rate of interest: ");
	scanf("%f",&r);
	si=p*t*r/100;
	ci=p*(pow(1+r/100,t)-1);
	printf("Simple interest is %f",si);
	printf("\nCompound interest is %f",ci);
	getch();
}
