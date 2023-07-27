#include "main.h"
/**
 * handleError - function to handle errors
 * @code: code 
 * @message: the message
 * Return: it is void
 */
void handleError(int code, const char *message)
{
dprintf(STDERR_FILENO, "Error: %s\n", message);
exit(code);
}
int main(int argc, char *argv[])
{
const char *fileFrom = argv[1];
const char *fileTo = argv[2];
int fdFrom;
struct stat st;
int fdTo;
char buffer[BUF_SIZE];
ssize_t bytesRead, bytesWritten;
mode_t permissions;
if (argc != 3)
{
handleError(97, "Usage: cp file_from file_to");
}
fdFrom = open(fileFrom, O_RDONLY);
if (fdFrom == -1)
{
handleError(98, fileFrom);
}
if (stat(fileFrom, &st) == -1)
{
handleError(98, fileFrom);
}
permissions = st.st_mode & (S_IRWXU | S_IRWXG | S_IRWXO);
fdTo = open(fileTo, O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (fdTo == -1)
{
handleError(99, fileTo);
}
while ((bytesRead = read(fdFrom, buffer, sizeof(buffer))) > 0) {
bytesWritten = write(fdTo, buffer, bytesRead);
if (bytesWritten == -1)
{
handleError(99, fileTo);
}
}
if (bytesRead == -1)
{
handleError(98, fileFrom);
}
if (close(fdFrom) == -1)
{
handleError(100, "Can't close fdFrom");
}
if (close(fdTo) == -1)
{
handleError(100, "Can't close fdTo");
}
return (0);
}

