#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include "main.h"

/**
 * main - Program entry point
 * @argc: Arguments count
 * @argv: Arguments array
 * Return: 0 on Success or 1 on Error
 */
int main(int argc, char *argv[])
{
int f_fd, s_fd;
char *from, *to;
if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
from = argv[1];
to = argv[2];
f_fd = open(from, O_RDONLY);
s_fd = open(to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (f_fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
	exit(98);
}
else if (s_fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
	exit(99);
}
write_from_to(&f_fd, &s_fd, from, to);
close_fd(&f_fd);
return (0);
}
/**
 * close_fd - Close file
 * @f_fd: File description
 * Return: void
 */
void close_fd(int *f_fd)
{
int fd_close_status = close(*f_fd);
if (fd_close_status == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (*f_fd));
	exit(100);
}
}
/**
 * create_buffer - Create a buffer
 * @filename: File to read
 * Return: a char-pointer buffer
 */
char *create_buffer(char *filename)
{
char *buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
return (buffer);
}
/**
 * write_from_to - Write in the output file
 * @f_fd: First file descriptor
 * @s_fd: Second file descriptor
 * @from_filename: Name of the first file
 * @to_filename: Name of the second file
 * Return: void
*/
void write_from_to(int *f_fd, int *s_fd, char *from_filename, char *to_filename)
{
int count, write_count;
char *buffer = create_buffer(from_filename);
while (read(f_fd, buffer, sizeof(char) * 1024) > 0)
{
count = 0;
while (buffer[count] != '\0')
	count++;
write_count = write(*s_fd, buffer, count);
if (write_count == -1)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_filename);
	exit(99);
}
}
}
