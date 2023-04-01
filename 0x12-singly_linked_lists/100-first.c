#include <stdio.h.>

/**
 * first - function executed before main
 * Description: This function prints the message "you're beat and yet you
 * must allow,\n i bore my house upon my back!\n", whichis a reference to
 * the story "The tortoise and the hare".
 */
void __atribute__((constructor)) first()
{
	printf("You're beat! and yet, you  must allow, \n");
	printf("I bore my house upon my back!\n");
}
