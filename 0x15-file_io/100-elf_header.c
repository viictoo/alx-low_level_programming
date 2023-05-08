#include <sys/types.h>
#include <stdlib.h>
#include <elf.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void elf_class(unsigned char *e_ident);
void elf_magic(unsigned char *e_ident);
void validate_elf(unsigned char *e_ident);
unsigned int conv_endian(unsigned int x);
void entry_point_addr(unsigned int e_type, unsigned char *e_ident);
void elf_type(unsigned int e_type, unsigned char *e_ident);
void elf_data(unsigned char *e_ident);
void ABI_version(unsigned char *e_ident);
void elf_OSABI(unsigned char *e_ident);


/**
 * main - main entry point
 * @ac: args
 * @av: vector
 * Return: 0 success otherwise error
 */
int main(int ac, char *av[])
{
	register int filde, r, c;
	Elf64_Ehdr *elfHdr;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(98);
	elfHdr = malloc(sizeof(Elf64_Ehdr));
	if (!elfHdr)
		dprintf(STDERR_FILENO, "Malloc error\n"), exit(98);
	filde = open(av[1], O_RDONLY);
	if (filde < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	r = read(filde, elfHdr, sizeof(Elf64_Ehdr));
	if (r < 0)
	{
		free(elfHdr);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	validate_elf(elfHdr->e_ident);
	elf_magic(elfHdr->e_ident);
	elf_class(elfHdr->e_ident);
	elf_data(elfHdr->e_ident);
	ABI_version(elfHdr->e_ident);
	elf_OSABI(elfHdr->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", elfHdr->e_ident[EI_ABIVERSION]);
	elf_type(elfHdr->e_type, elfHdr->e_ident);
	entry_point_addr(elfHdr->e_entry, elfHdr->e_ident);
	free(elfHdr);
	c = close(filde);
	if (c)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);
	return (0);
}

/**
 * elf_data - print ELF data
 * @e_ident: char pointer
 */
void elf_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown data format\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**
 * ABI_version - print ELF ABI version
 * @e_ident: char pointer
 */
void ABI_version(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * elf_OSABI - print ELF OS/ABI
 * @e_ident: char pointer
 */
void elf_OSABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
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
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * conv_endian - convert from little to big endian
 * @x: little ind uint
 * Return: big ind uint
 */
unsigned int conv_endian(unsigned int x)
{
	return (((x >> 24) & 0x000000ff) |
			((x >> 8) & 0x0000ff00)  |
			((x << 8) & 0x00ff0000)  |
			((x << 24) & 0xff000000));
}
/**
 * entry_point_addr - print ELF entry address
 * @e_entry: address
 * @e_ident: char pointer
 */
void entry_point_addr(unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = conv_endian(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);
}
/**
 * validate_elf - check if input is valid elf file
 * @e_ident: char pointer
 */
void validate_elf(unsigned char *e_ident)
{
	if (e_ident[0] == 0x7f && e_ident[1] == 'E' &&
			e_ident[2] == 'L' && e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	} else
		dprintf(STDERR_FILENO, "Error: Not valid ELF\n"), exit(98);
}

/**
 * elf_magic - print magic
 * @e_ident: char pointer
 */
void elf_magic(unsigned char *e_ident)
{
	register int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT - 1; i++)
		printf("%02x ", e_ident[i]);
	printf("%02x\n", e_ident[i]);
}
/**
 * elf_class - print ELF class
 * @e_ident: char pointer
 */
void elf_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("This class is invalid\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * elf_type - print ELF type
 * @e_type: address
 * @e_ident: char pointer
 */
void elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
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
			printf("<unknown: %x>\n", e_type);
	}
}

