/*
 * main.c
 *
 *  Created on: Sep 6, 2026
 *      Author: YASH TATODE
 */

	//0x00007FFF8E3C3834
	// this is not valid pointer Variabel defination
	//long long int someAddress = 0x00007FFF8E3C3834;

	//this is valid pointer Variabel defination
	//complier reservers the 8bit for all data type
//	char* address1 = (char*) 0x00007FFF8E3C3834;

/*
1Create a char type variable and initialize it to value 100.
2. Print the address of the above variable.
3. Create a pointer variable and store the address of the above variable.
4. Perform a read operation on the pointer variable to fetch 1 byte of data from the pointer.
5. Print the data obtained from the read operation on the pointer.
6. Perform a write operation on the pointer to store the value 65.
7. Print the value of the variable defined in step 1.
 */

#include <stdio.h>
int main()
{
  char data= 100;
  printf("Value of data is :%d\n",data);
  printf("Address of the variable data is : %p\n",&data);

  //Create a pointer variable and store the address of the above variable.
  char* Address = &data;
  char value = *Address;
  printf("Read value is :%d\n",value);

  //Perform a write operation on the pointer to store the value 65.
  *Address = 65;
  printf("Value of data: %d\n",data);
  return 0;

}
