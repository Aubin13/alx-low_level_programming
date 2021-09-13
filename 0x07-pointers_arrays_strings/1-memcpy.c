#include "main.h"

/**
 *_memcpy - where it all goes down
 *@dest: pointer where memory is to be stored
 *@src: source of the memory
 *@	n: number of timea
 *Return: dest
 */
 
 char *_memcpy(char *dest, char *src, unsigned int n)
 {
 	unsigned int index;
 	for (index = 0; index <= n; index++)
 	{
	 dest[index] = [index];	
	}
	return(dest);
 }
