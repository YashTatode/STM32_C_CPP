/*
 * main.c
 *
 *  Created on: Sep 6, 2026
 *      Author: YASH TATODE
 */

#include<stdio.h>
void Avrage();
double num1,num2,num3;
int main()
{

	printf("Enter the 3 number :");
	scanf("%lf%lf%lf",&num1,&num2,&num3);

	Avrage();

	return 0;
}

void Avrage(){
	double average;
	average = (num1+num2+num3)/3;
	printf("Avrage of three number is %lf\n",average);

}
