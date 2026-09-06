/*
 * main.c
 *
 *  Created on: Sep 6, 2026
 *      Author: YASH TATODE
 */

#include <stdio.h>
int main(void){

	double charge , chargeE;
	double electrons;
	printf("Enter the charge:");
	scanf("%lf ",&charge);

	printf("Enter the charge of a electron");
	scanf("%le",&chargeE);

	electrons = (charge /chargeE)*-1;

	printf("Total number of elctrons = %le\n",electrons);
	printf("Total number of elctrons = %lf\n",electrons);

	return 0;

}

