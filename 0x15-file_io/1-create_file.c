#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Create a file
 * @filename: The file name
 * @text_content: The content of the file
 * Return: 1 on Success or -1 on Error
 */
int create_file(const char *filename, char *text_content)
{
int fd, i = 0;
if (!filename)
	return (-1);
fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
if (fd != -1 && text_content == NULL)
{
	close(fd);
	return (1);
}
else if (fd == -1)
	return (-1);
while (text_content[i] != '\0')
	i++;

fd = write(fd, text_content, i);
if (fd == -1)
	return (-1);
close(fd);
return (1);
}
