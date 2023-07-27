#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

#define BUFFER_SIZE 1024

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void print_elf_header(const Elf64_Ehdr *header) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %d>\n", header->e_ident[EI_CLASS]);
            break;
    }

    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %d>\n", header->e_ident[EI_DATA]);
            break;
    }

    printf("  Version:                           %d\n", header->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
            break;
    }

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (None)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %d>\n", header->e_type);
            break;
    }

    printf("  Entry point address:               %lx\n", header->e_entry);

    printf("  Start of program headers:          %ld (bytes into file)\n", header->e_phoff);

    printf("  Start of section headers:          %ld (bytes into file)\n", header->e_shoff);

    printf("  Flags:                             %x\n", header->e_flags);

    printf("  Size of this header:               %hu (bytes)\n", header->e_ehsize);

    printf("  Size of program headers:           %hu (bytes)\n", header->e_phentsize);

    printf("  Number of program headers:         %hu\n", header->e_phnum);

    printf("  Size of section headers:           %hu (bytes)\n", header->e_shentsize);

    printf("  Number of section headers:         %hu\n", header->e_shnum);

    printf("  Section header string table index: %hu\n", header->e_shstrndx);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
print_error("Invalid number of arguments");
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Cannot open file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Cannot read ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    print_elf_header(&header);

    close(fd);
    return 0;
}
