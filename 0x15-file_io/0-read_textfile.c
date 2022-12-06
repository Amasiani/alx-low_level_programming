#include "main.h"

/**
* read_textfile - read text file and print the letters
* @filename: filename
* @letters: numbr of letters printed
*
* Return: number letter printed else 0 if error or nul
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, num;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	num = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);
	return (num);
}
