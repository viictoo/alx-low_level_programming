#0x18. C - Dynamic librariesGeneral

What is a dynamic library, how does it work, how to create one,
     and how to use it
What is the environment variable $LD_LIBRARY_PATH and how to use it
What are the differences between static and shared libraries
Basic usage nm, ldd, ldconfig

# 0.Create the dynamic library libdynamic.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

0x18-dynamic_libraries: $ nm -D libdynamic.so
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 w __cxa_finalize@GLIBC_2.2.5
                 w __gmon_start__
00000000000011df T _abs
00000000000012b4 T _atoi
00000000000011a7 T _isalpha
0000000000001221 T _isdigit
0000000000001182 T _islower
00000000000011fc T _isupper
00000000000015c5 T _memcpy
0000000000001586 T _memset
0000000000001159 T _putchar
0000000000001246 T _puts
0000000000001396 T _strcat
000000000000160c T _strchr
0000000000001533 T _strcmp
000000000000134d T _strcpy
0000000000001286 T _strlen
0000000000001418 T _strncat
00000000000014b4 T _strncpy
00000000000016ed T _strpbrk
0000000000001654 T _strspn
0000000000001783 T _strstr
                 U strlen@GLIBC_2.2.5
                 U write@GLIBC_2.2.5
0x18-dynamic_libraries: $ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
0x18-dynamic_libraries: $ ldd len
        linux-vdso.so.1 (0x00007ffee9145000)
        libdynamic.so => ./libdynamic.so (0x00007f9bb1a02000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f9bb17d5000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f9bb1a0e000)
0x18-dynamic_libraries: $ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
0x18-dynamic_libraries: $ ./len
10
0x18-dynamic_libraries: $

# Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
usage :
0x18-dynamic_libraries: $ ./1-create_dynamic_lib.sh
0x18-dynamic_libraries: $ nm -D --defined-only liball.so
0000000000001274 T _abs
0000000000001349 T _atoi
000000000000123c T _isalpha
00000000000012b6 T _isdigit
0000000000001217 T _islower
0000000000001291 T _isupper
000000000000165c T _memcpy
000000000000161d T _memset
00000000000011ee T _putchar
00000000000012db T _puts
000000000000142b T _strcat
00000000000016a3 T _strchr
00000000000015ca T _strcmp
00000000000013e2 T _strcpy
000000000000131b T _strlen
00000000000014af T _strncat
000000000000154b T _strncpy
0000000000001784 T _strpbrk
00000000000016eb T _strspn
000000000000181a T _strstr
0000000000001179 T add
00000000000011be T div
00000000000018b0 T main
00000000000011d5 T mod
00000000000011a7 T mul
0000000000001191 T sub

# Create a dynamic library that contains C functions that can be called from Python.
Usage: 0x18-dynamic_libraries: $ python3 100-tests.py

# 3. Code injection: Win the Giga Millions!
I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

    Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

/* Giga Millions program
  * Players may pick six numbers from two separate pools of numbers:
  * - five different numbers from 1 to 75 and
  * - one number from 1 to 15
  * You win the jackpot by matching all six winning numbers in a drawing.
  * Your chances to win the jackpot is 1 in 258,890,850
  *
  * usage: ./gm n1 n2 n3 n4 n5 bonus

    You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS) always checks its MD5 before running it
    The system is an Linux Ubuntu 16.04
    The server has internet access
    Our mole will be only able to run two commands from a shell script, without being detected by MSS
    Your shell script should be maximum 3 lines long. You are not allowed to use ;, &&, ||, |, ` (it would be detected by MSS), and have a maximum of two commands
    Our mole has only the authorization to upload one file on the server. It will be your shell script
    Our mole will run your shell script this way: mss@gm_server$ . ./101-make_me_win.sh
    Our mole will run your shell script from the same directory containing the program gm, exactly 98 seconds before MSS runs gm with my numbers: ./gm 9 8 10 24 75 9
    MSS will use the same terminal and session than our mole
    Before running the gm program, MSS always check the content of the directory
    MSS always exit after running the program gm
    TL;DR; This is what is going to happen

mss@gm_server$ . ./101-make_me_win.sh
mss@gm_server$ rm 101-make_me_win.sh
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ history -c
mss@gm_server$ clear
mss@gm_server$ ls -la
. .. gm
mss@gm_server$ md5sum gm
d52e6c18e0723f5b025a75dea19ef365  gm
mss@gm_server$ ./gm 9 8 10 24 75 9
--> Please make me win!
mss@gm_server$ exit
