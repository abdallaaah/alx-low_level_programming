#include "main.h"
/**
 * create_file - create file function
 * @filename: file name we craret ifle
 * @text_content: the context
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t num_written;
if (filename == NULL)
{
return (-1);
}
fd  = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
num_written = write(fd, text_content, strlen(text_content));
if (num_written == -1)
{
close(fd);
return (-1);
}
}
chmod(filename, S_IRUSR | S_IWUSR);
close(fd);
return (1);
}
