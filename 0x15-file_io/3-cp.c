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
int first_fd, last_fd, read_count, write_count;
char *buffer, *from, *to;
if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
from = argv[1];
to = argv[2];
buffer = create_buffer(from);
first_fd = open(from, O_RDONLY);
last_fd = open(to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
read_count = read(first_fd, buffer, 1024);
if (first_fd == -1 || read_count == -1)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
	exit(98);
}
else if (last_fd == -1)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
	exit(99);
}
while (read_count > 0)
{
	write_count = write(last_fd, buffer, read_count);
	if (write_count == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	read_count = read(first_fd, buffer, 1024);
}
free(buffer);
close_fd(first_fd);
close_fd(last_fd);
return (0);
}

/**
 * close_fd - Close file
 * @f_fd: File description
 * Return: void
 */
void close_fd(int f_fd)
{
int fd_close_status = close(f_fd);
if (fd_close_status == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_fd);
	exit(100);
}
}

/**
 * create_buffer - Create a char buffer
 * @filename: First filename
 * Return: char-pointer
 */
char *create_buffer(char *filename)
{
char *buffer = malloc(sizeof(char) * 1024);
if (!buffer)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
return (buffer);
}
