/*
 * main1.c
 *
 *  Created on: Sep 6, 2026
 *      Author: YASH TATODE
 */
/*
#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;
int main(void){
	char  *Address1 ;
	Address1 = (char*)&g_data;
	printf("value at address %p is :: %x\n",Address1,*Address1);

	int  *Address2 ;
	Address2 = (int*)&g_data;
	printf("value at address %p is :: %x\n",Address2,*Address2);

	short  *Address3 ;
	Address3 = (short*)&g_data;
	printf("value at address %p is :: %x\n",Address3,*Address3);

	long long  *Address4 ;
	Address4 = (long long*)&g_data;
	printf("value at address %p is :: %I64x\n",Address4,*Address4);
  return 0;
}*/


#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;
int main(void){

	int *Address = (int*)&g_data;

	printf("value of Address %p\n",Address);
	printf("value of Address %p is %x\n",Address,*Address);

	Address = Address +1 ;
	printf("value of Address %p\n",Address);
	printf("value of Address %p is %x\n",Address,*Address);

}



















