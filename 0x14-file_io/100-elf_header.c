#include "holberton.h"
#include <elf.h>
void osabi_2(Elf64_Ehdr h);
/**
* magic - magic
* @h: header
*/
void magic(Elf64_Ehdr h)
{
int a;

printf(" Magic: ");
for (a = 0; a < EI_NIDENT; a++)
printf("%2.2x%s", h.e_ident[a], a == EI_NIDENT - 1 ? "\n" : " ");
}
/**
* class - class
* @h: header
*/
void class(Elf64_Ehdr h)
{
printf(" Class: ");
switch (h.e_ident[EI_CLASS])
{
case ELFCLASS64:
printf("ELF64");
break;
case ELFCLASS32:
printf("ELF32");
break;
case ELFCLASSNONE:
printf("none");
break;
}
printf("\n");
}
/**
* data - data
* @h: header
*/
void data(Elf64_Ehdr h)
{
printf(" Data: ");
switch (h.e_ident[EI_DATA])
{
case ELFDATA2MSB:
printf("2's complement, big endian");
break;
case ELFDATA2LSB:
printf("2's complement, little endian");
break;
case ELFDATANONE:
printf("none");
break;
}
printf("\n");
}
/**
* version - version
* @h: header
*/
void version(Elf64_Ehdr h)
{
printf(" Version: %d", h.e_ident[EI_VERSION]);
switch (h.e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)");
break;
case EV_NONE:
printf("%s", "");
break;
break;
}
printf("\n");
}
/**
* osabi - osabi
* @h: ELF
*/
void osabi(Elf64_Ehdr h)
{
printf(" OS/ABI: ");
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris");
break;
case ELFOSABI_AIX:
printf("UNIX - AIX");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64");
break;
default:
print_osabi_more(h);
break;
}
printf("\n");
}
/**
* osabi_2 - osabi 2
* @h: header
*/
void osabi_2(Elf64_Ehdr h)
{
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_MODESTO:
printf("Novell - Modesto");
break;
case ELFOSABI_OPENBSD:
printf("UNIX - OpenBSD");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App");
break;
case ELFOSABI_ARM:
printf("ARM");
break;
default:
printf("<unknown: %x>", h.e_ident[EI_OSABI]);
break;
}
}
/**
* abiversion - ABI version
* @h: header
*/
void print_abiversion(Elf64_Ehdr h)
{
printf(" ABI Version: %d\n",
h.e_ident[EI_ABIVERSION]);
}
/**
* type - type
* @h: header
*/
void type(Elf64_Ehdr h)
{
char *a = (char *)&h.e_type;
int b = 0;

printf(" Type: ");
if (h.e_ident[EI_DATA] == ELFDATA2MSB)
b = 1;
switch (p[b])
{
case ET_NONE:
printf("NONE (None)");
break;
case ET_REL:
printf("REL (Relocatable file)");
break;
case ET_EXEC:
printf("EXEC (Executable file)");
break;
case ET_DYN:
printf("DYN (Shared object file)");
break;
case ET_CORE:
printf("CORE (Core file)");
break;
default:
printf("<unknown>: %x", a[b]);
break;
}
printf("\n");
}
/**
* entry - entry
* @h: header
*/
void print_entry(Elf64_Ehdr h)
{
int a = 0;
int b = 0;
unsigned char *c = (unsigned char *)&h.e_entry;

printf(" Entry point address: 0x");
if (h.e_ident[EI_DATA] != ELFDATA2MSB)
{
i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
while (!c[a])
a--;
printf("%x", c[a--]);
for (; a >= 0; a--)
printf("%02x", c[a]);
printf("\n");
}
else
{
a = 0;
b = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
while (!c[a])
a++;
printf("%x", c[a++]);
for (; a <= b; a++)
printf("%02x", c[a]);
printf("\n");
}
}
/**
* main - Entry point
* @argc : count
* @argv : array arg
* Return: (0) always
*/
int main(int argc, char *argv[])
{
int a;
Elf64_Ehdr b;
ssize_t c;

if (argc != 2)
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
a = open(argv[1], O_RDONLY);
if (a == -1)
dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
c = read(a, &h, sizeof(b));
if (c < 1 || c != sizeof(b))
dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
h.e_ident[3] == 'F')
{
printf("ELF Header:\n");
}
else
dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);
magic(b);
class(b);
data(b);
version(b);
osabi(b);
abiversion(b);
type(b);
entry(b);
if (close(a))
dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
return (EXIT_SUCCESS);
}
