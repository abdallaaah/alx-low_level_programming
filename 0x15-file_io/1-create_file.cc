#include "main.h"
/**
 * create_file - create file function
 * @filename: file name we craret ifle
 * @text_content: the context
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
size_t len;
FILE *file;
if (filename == NULL)
return (-1);
file = fopen(filename, "w");
if (file == NULL)
return (-1);
ftruncate(fileno(file), 0);
if (text_content != NULL)
{
len = strlen(text_content);
if (fwrite(text_content, sizeof(char), len, file) != len)
{
fclose(file);
return (-1);
}
}
fclose(file);
chmod(filename, S_IRUSR | S_IWUSR);
return (1);
}
