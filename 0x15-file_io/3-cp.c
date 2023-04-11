#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point
 * @argc: Arguments count
 * @argv: Arguments array
 * Return: 0 on Success or 1 on Error
 */
int main(int argc, char *argv[])
{
int f_fd, s_fd, char_count = 0, read_count, write_count;
char *from, *to, *buffer;
if (argc != 3)
{
	dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
from = argv[1];
to = argv[2];
buffer = create_buffer(from);
f_fd = open(from, O_RDONLY);
s_fd = open(to, O_RDWR | O_TRUNC);
read_count = read(f_fd, buffer, 1024);
if (s_fd == -1)
	s_fd = open(to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (f_fd == -1 || read_count == -1)
{
	free(buffer);
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", from);
	exit(98);
}
else if (s_fd == -1)
{
	free(buffer);
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", to);
	exit(99);
}
while (buffer[char_count] != '\0')
	char_count++;
write_count = write(s_fd, buffer, char_count);
if (write_count == -1 || read_count != write_count)
{
	free(buffer);
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", to);
	exit(99);
}
close_fd(f_fd);
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
	dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f_fd);
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
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
return (buffer);
}
