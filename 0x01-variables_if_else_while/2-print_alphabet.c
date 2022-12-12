#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry point
**
*Return: Always 0 (success)
*/
int main(void) {
	    char alph[] = "abcdefghijklmnopqrstuvwxyz";
	        int i;

    for (i = 0; i < 26; i++) {
        putchar(alph[i]);
    if (i == 25)
       {          			         
	    putchar('\n');
       }
	return (0);
    }
}
