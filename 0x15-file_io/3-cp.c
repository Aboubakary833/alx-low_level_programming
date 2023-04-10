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
int f_fd, s_fd, readCount, writeCount;
char *from, *to, buffer[1024];
if (argc != 3)
{
	dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
from = argv[1];
to = argv[2];
f_fd = open(from, O_RDONLY);
s_fd = open(to, O_RDWR | O_TRUNC);
readCount = read(f_fd, buffer, 1024);
if (s_fd == -1)
	s_fd = open(to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (f_fd == -1 || readCount == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", from);
	exit(98);
}
else if (s_fd == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", to);
	exit(99);
}
writeCount = write(s_fd, buffer, 1024);
if (writeCount == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", to);
	exit(99);
}
handleClose(f_fd, s_fd);

return (0);
}

/**
 * handleClose - Close files
 * @f_fd: First file description
 * @s_fd: Second file description
 * Return: void
*/
void handleClose(int f_fd, int s_fd)
{
int f_close_status, s_close_status;
f_close_status = close(f_fd);
s_close_status = close(s_fd);
if (f_close_status == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f_fd);
	exit(100);
}
else if (s_close_status == -1)
{
	dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", s_fd);
	exit(100);
}
}
