#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Append text to a file
 * @filename: The file name
 * @text_content: The text
 * Return: 1 on Success or -1 on Error
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i = 0;
if (!filename)
	return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
	return (-1);
else if (fd != -1 && text_content == NULL)
{
	close(fd);
	return (1);
}
while (text_content[i] != '\0')
	i++;

fd = write(fd, text_content, i);
if (fd == -1)
{
	return (-1);
}
close(fd);
return (1);
}
