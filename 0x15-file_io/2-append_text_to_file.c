#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: filname name
 * @text_content: what we appended
 * Return: unt
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t num;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
close(fd);
return (-1);
}
num = write(fd, text_content, strlen(text_content));
if (num == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
