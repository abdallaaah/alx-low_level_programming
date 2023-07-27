#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    size_t num_read = 0;
    char *buffer = NULL;
    FILE *file = NULL;

    if (filename == NULL) {
        return 0;
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    buffer = (char *) malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }

    num_read = fread(buffer, sizeof(char), letters, file);
    if (num_read == 0) {
        free(buffer);
        fclose(file);
        return 0;
    }

    buffer[num_read] = '\0';

    if (fwrite(buffer, sizeof(char), num_read, stdout) != num_read) {
        free(buffer);
        fclose(file);
        return 0;
    }

    free(buffer);
    fclose(file);
    return num_read;
}
