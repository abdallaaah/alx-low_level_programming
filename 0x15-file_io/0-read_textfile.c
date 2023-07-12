#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t num;
ssize_t w = 0;
char *buff;
FILE *file;
if (filename == NULL)
{
return (0);
}
file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
free(buff);
fclose(file);
return (0);
}
num = fread(buff, sizeof(char), letters, file);
printf("letters is : %ld num is :%ld\n", letters, num);
if (num == 0)
{
free(buff);
fclose(file);
return (0);
}
w = fwrite(buff, sizeof(char), num, stdout);
if (w == -1 || w != num)
{
free(buff);
fclose(file);
}
free(buff);
fclose(file);
return (num);
}
