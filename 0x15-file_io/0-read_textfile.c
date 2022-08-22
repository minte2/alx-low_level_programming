#include "main.h"

/**
 *read_textfile - reads a text filr and prints it to the POSIX standard output
 *@filename: pointer to the filename
 *@letters:the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file
	ssize_t rcount,wcount;
	chat *buffer;
	if (filename == NULL)
		return(0);
	file = open(filename, 0_RDWR);
	if (file == -1)
		return(0);
	buffer = malloc(sixeof(char) * letters)
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(file,buffer,letters);
	if (rcount == -1)
		return (0);
	wcount = write(STDOUT_FILRNO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);
	close(file);
	return (wcount);
}
