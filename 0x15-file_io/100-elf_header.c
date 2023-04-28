#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigne char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks if a file is an ELF file
 * @e_ident: a pointer to an array containing the ELF
 * magic numbers
 *
 * Description: If the file is not an ELF file
 * - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7f ||
	    e_ident[1] != 'E' ||
	    e_ident[2] != 'L' ||
	    e_ident[3] != 'F')
	{
		printf("Error: Not an ELF file.\n");
		exit(1);
	}
}

/**
 * print_magic - prints the magic numbers of an ELF header
 * @e_ident: a pointer to an array containing the ELF
 * magic numbers
 *
 * Decription: magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
	printf("ELF Magic: ");
	int i;

	for (i = 0; i < 16; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - prints the class of and ELF header
 * @e_ident: a pointer to an array conatianing the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("32-bit\n");
			break;
		case ELFCLASS64:
			printf("64-bit\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}
}

/**
 * print_data - prints the data of an ELF header
 * @e_ident: a pointer to an array containing the ELF class
 */
void print_data(unsigned char *e_ident)
{
	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("Data encoding: Little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("Data encoding: Big-endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}
}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: a pointer to an array conataining the ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf("ELF version: %d\n", e_ident[EI_VERSION]);
}

/**
 * print_abi - prints the ABI version of an ELF header
 * @e_ident: a pointer to an array containing the ELF ABI
 * version.
 */
void print_abi(unsigned char *e_ident)
{
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("ABI: System V\n");
			break;
		case EL
