#include "main.h"
/**
 * read_textfile - function to read text from file and display it
 * @filename: the file name will display
 * @letters: the numnbers of letters ijn file
 * Return: number of lettetrs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t w, t;
FILE *file;
char *buf;
if (filename == NULL)
return (0);
file = fopen(filename, "r");
if (file == NULL)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
fclose(file);
return (0);
}
t = fread(buf, sizeof(char), letters, file);
if (t == 0)
{
free(buf);
fclose(file);
return (0);
}
w = fwrite(buf, sizeof(char), t, stdout);
if (w == -1 || w != t)
{
free(buf);
fclose(file);
return (0);
}
free(buf);
fclose(file);
return (w);
}
