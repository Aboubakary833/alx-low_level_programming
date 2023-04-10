#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Read a text file
 * @filename: The file name
 * @letters: Number of letters to read
 * Return: File letters count or 0 on Error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t readCount, totalCount;
buffer = malloc(letters);
if (buffer == NULL)
	return (0);

if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
	return (0);

readCount = read(fd, buffer, letters);

if (readCount == -1)
	return (0);

*(buffer + (int)(sizeof(buffer))) = '\n';
totalCount = write(STDOUT_FILENO, buffer, letters);

if (totalCount == -1)
	return (0);

return (readCount);
}
