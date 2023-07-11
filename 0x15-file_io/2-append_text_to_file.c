#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: filname name
 * @text_content: what we appended
 * Return: unt
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
if (filename == NULL)
return (-1);
file = fopen(filename, "a");
if (file == NULL)
return (-1);
if (text_content != NULL)
{
if (fputs(text_content, file) == EOF)
{
fclose(file);
return (-1);
}
}
fclose(file);
return (1);
}
