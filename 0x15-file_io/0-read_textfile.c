#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters) {
    ssize_t num;
    ssize_t w = 0;
    char *buff;
    FILE *file;
    size_t file_size;

    if (filename == NULL) {
        return (0);
    }
    file = fopen(filename, "r");
    if (file == NULL) {
        return (0);
    }
    fseek(file, 0, SEEK_END);
    file_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    letters = (letters > ( file_size) ? file_size : letters);

    buff = malloc(sizeof(char) * letters);
    if (buff == NULL) {
        free(buff);
        fclose(file);
        return (0);
    }
    num = fread(buff, sizeof(char), letters, file);
    if (num == 0) {
        free(buff);
        fclose(file);
        return (0);
    }
    w = fwrite(buff, sizeof(char), num, stdout);
    if (w == -1 || w != num) {
        free(buff);
        fclose(file);
    }
    free(buff);
    fclose(file);
    return (w);
}
