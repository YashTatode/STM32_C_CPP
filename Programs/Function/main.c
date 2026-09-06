/*
 * main.c
 *
 *  Created on: Sep 6, 2026
 *      Author: YASH TATODE
 */

#include <stdio.h>
void fun_add_no(int,int,int);

int main(){

	fun_add_no(12,16,156);
	fun_add_no(12,6,0);

	return 0;
}

void fun_add_no(int a,int b,int c){

	int sum;
	sum = a+b+c;
	printf("Sum = %d\n",sum);
}
