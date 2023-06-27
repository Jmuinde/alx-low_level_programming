#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randompassword - function to generate the password 
 * @n: length of the password 
 * Return: void 
 */
void randompassword(int n)
 {
	char charstopickfrom[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
	char password[n];
	int i;
	
	srand(time(0));
	for (i = 0; i < n; i++)
	{
		int randomindex = rand() % (sizeof(charstopickfrom) - 1);
		password[i] = charstopickfrom[randomindex];
	}
 
 	password[n] = '\0';
 	printf("congrats here is your random password: %s\n", password);
 }
