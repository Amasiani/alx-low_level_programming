#include "main.h"
#include <stdio.h>
/**
* error_file - check if files can be opened
* @file_from: source of file
* @file_to: file destination
* @argv: argument vector
*
* Return: void
*/

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the  file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to the file %s\n", argv[1]);
		exit(99);
	}
}

/**
* main - check code a for Alx school student
* @argc: argument counter
* @argv: argument vector
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t numchar, rwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	numchar = 1024;
	while (numchar == 1024)
	{
		numchar = read(file_from, buf, 1024);
		if (numchar == -1)
			error_file(-1, 0, argv);
		rwr = write(file_to, buf, numchar);
		if (rwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
