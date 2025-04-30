# C Standard Library Recreation

## Overview

This project is a custom implementation of commonly used C standard library functions, typically found in headers like `<stdio.h>`, `<stdlib.h>`, and `<string.h>`. It is tailored for Linux-based systems and focuses on re-creating essential low-level operations for string manipulation, memory handling, and general data processing.   

Designed for developers seeking a deeper understanding of how standard functions work under the hood, this project helps sharpen good old C programming skills, specifically in areas of memory management, pointer operations, and algorithmic problem-solving.   

## Features

•	Custom implementation of standard C library functions   
•	String manipulation utilities (e.g. `strlen`, `strcpy`, `strcmp`)   
•	Memory operations (e.g. `memset`, `memcpy`, `malloc`, `calloc`)   
•	Robust error handling and pointer safety techniques (e.g. `NULL` checks)     
•	Efficient data processing routines (`argc`, `argv` handling, command-line parsing)   
•	Unix/Linux-compliant development (works best on `Linux` and `MacOS` systems)   

---

## Tech Stack

| Category | Technologies |
| -------- | ------------ |
| Programming | C (GCC) |
| OS/Platform | Linux |
| Dev Tools | Vim, GCC, Make, Valgrind, Git, VSCode |
| Testing | Manual Unit Tests, Debuging |

---

## Lessons Learned

This project has enhanced my programming skills in the following areas:  

•	`ASCII` table and character encoding knowledge (what is a `string` in C ?)  
•	`Linked List` data structure implementation and manipulation (creating, deleting, iterating)  
•	Deepened understanding of C memory models and pointer arithmetic (`malloc`, `free`, `calloc`)     
•	Re-creating low-level string and memory operations (`strdup`, `strcat`, `memmove`)   
•	Strengthened debugging, segmentation fault analysis, and memory safety (valgrind)   
•	Improved code optimization techniques and adherence to C conventions (`const`, `static`)   
•	Reinforced knowledge of how high-level functionality is built from scratch using low-level operations (C is a parent language for many others)     

---

Try it out!

Pre-requisites:

•	GCC or Clang compiler   
•	Make utility   

Steps to run locally:

```bash
# Clone the repo
git clone https://github.com/svvoii/c_library.git

# Go into the project directory
cd c_library

# Compile the library into `libft.a` file
make

# Before compiling `main.c`, UNCOMMENT the respective `main` function for each test case (SEE `main.c`).

# Compile the `main.c` file with the library
gcc -Wall -Wextra -Werror -o main main.c libft.a

# Run the test
./main
```

## Usage (Makefile)

```bash
# To compile the library:
make

# To clean up object files:
make clean

# To remove all object files, the library:
make fclean

# To recompile the library:
make re
```

## References

•	[The GNU C Library](https://www.gnu.org/software/libc/manual/)  
•	[Valgrind Documentation](http://valgrind.org/docs/manual/)  

| FUNCTION | DECLARATION | DESCRIPTION |
| -------- | ----------- | ----------- |
| [`ft_atoi.c`](ft_atoi.c) | `int ft_atoi(const char *str)` | Converts a string to a long integer. |
| [`ft_bzero.c`](ft_bzero.c) | `void ft_bzero(void *s, size_t n)` | Sets the first `n` bytes of the memory area pointed to by `s` to zero. |
| [`ft_calloc.c`](ft_calloc.c) | `void *ft_calloc(size_t count, size_t size)` | Allocates memory for an array of `count` elements of `size` bytes each and initializes all bytes to zero. |
| [`ft_isalnum.c`](ft_isalnum.c) | `int ft_isalnum(int c)` | Checks if the character is alphanumeric. |
| [`ft_isalpha.c`](ft_isalpha.c) | `int ft_isalpha(int c)` | Checks if the character is alphabetic. |
| [`ft_isascii.c`](ft_isascii.c) | `int ft_isascii(int c)` | Checks if the character is an ASCII character. |
| [`ft_isdigit.c`](ft_isdigit.c) | `int ft_isdigit(int c)` | Checks if the character is a digit. |
| [`ft_isprint.c`](ft_isprint.c) | `int ft_isprint(int c)` | Checks if the character is printable. |
| [`ft_isspace.c`](ft_isspace.c) | `int ft_isspace(int c)` | Checks if the character is a whitespace character. |
| [`ft_itoa.c`](ft_itoa.c) | `char *ft_itoa(int n)` | Converts an integer to a string. |
| [`ft_lstadd_back.c`](ft_lstadd_back.c) | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds a new element at the end of the linked list. |
| [`ft_lstadd_front.c`](ft_lstadd_front.c) | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds a new element at the beginning of the linked list. |
| [`ft_lstclear.c`](ft_lstclear.c) | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees the given element and all its successors. |
| [`ft_lstdelone.c`](ft_lstdelone.c) | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Deletes and frees the given element. |
| [`ft_lstiter.c`](ft_lstiter.c) | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Iterates the list and applies the function `f` to each element. |
| [`ft_lstlast.c`](ft_lstlast.c) | `t_list *ft_lstlast(t_list *lst)` | Returns the last element of the linked list. |
| [`ft_lstmap.c`](ft_lstmap.c) | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Applies the function `f` to each element of the list and creates a new list. |
| [`ft_lstnew.c`](ft_lstnew.c) | `t_list *ft_lstnew(void *content)` | Creates a new element of the linked list. |
| [`ft_lstsize.c`](ft_lstsize.c) | `int ft_lstsize(t_list *lst)` | Returns the number of elements in the linked list. |
| [`ft_memchr.c`](ft_memchr.c) | `void *ft_memchr(const void *s, int c, size_t n)` | Locates the first occurrence of `c` in the first `n` bytes of the memory area pointed to by `s`. |
| [`ft_memcmp.c`](ft_memcmp.c) | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of the memory areas pointed to by `s1` and `s2`. |
| [`ft_memcpy.c`](ft_memcpy.c) | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dest`. |
| [`ft_memmove.c`](ft_memmove.c) | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dest`, handling overlapping memory areas. |
| [`ft_memset.c`](ft_memset.c) | `void *ft_memset(void *s, int c, size_t n)` | Sets the first `n` bytes of the memory area pointed to by `s` to the value of `c`. |
| [`ft_putchar_fd.c`](ft_putchar_fd.c) | `void ft_putchar_fd(char c, int fd)` | Outputs the character `c` to the file descriptor `fd`. |
| [`ft_putendl_fd.c`](ft_putendl_fd.c) | `void ft_putendl_fd(char *s, int fd)` | Outputs the string `s` to the file descriptor `fd`, followed by a newline. |
| [`ft_putnbr_fd.c`](ft_putnbr_fd.c) | `void ft_putnbr_fd(int n, int fd)` | Outputs the integer `n` to the file descriptor `fd`. |
| [`ft_putstr_fd.c`](ft_putstr_fd.c) | `void ft_putstr_fd(char *s, int fd)` | Outputs the string `s` to the file descriptor `fd`. |
| [`ft_split.c`](ft_split.c) | `char **ft_split(char const *s, char c)` | Splits a string into an array of strings using the character `c` as a delimiter. |
| [`ft_strcat.c`](ft_strcat.c) | `char *ft_strcat(char *dest, const char *src)` | Appends the string `src` to the end of the string `dest`. |
| [`ft_strchr.c`](ft_strchr.c) | `char *ft_strchr(const char *s, int c)` | Locates the first occurrence of `c` in the string `s`. |
| [`ft_strcmp.c`](ft_strcmp.c) | `int ft_strcmp(const char *s1, const char *s2)` | Compares the strings `s1` and `s2`. |
| [`ft_strdup.c`](ft_strdup.c) | `char *ft_strdup(const char *s1)` | Duplicates the string `s1`. |
| [`ft_streq.c`](ft_strequ.c) | `int ft_strequ(char const *s1, char const *s2)` | Lexicographically compares the strings `s1` and `s2`. |
| [`ft_striteri.c`](ft_striteri.c) | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies the function `f` to each character of the string `s`, passing its index as the first argument. |
| [`ft_strjoin.c`](ft_strjoin.c) | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenates the strings `s1` and `s2`. |
| [`ft_strlcat.c`](ft_strlcat.c) | `size_t ft_strlcat(char *dest, const char *src, size_t size)` | Appends the string `src` to the end of the string `dest`, ensuring that the result is null-terminated. |
| [`ft_strlcpy.c`](ft_strlcpy.c) | `size_t ft_strlcpy(char *dest, const char *src, size_t size)` | Copies the string `src` to the string `dest`, ensuring that the result is null-terminated. |
| [`ft_strlen.c`](ft_strlen.c) | `size_t ft_strlen(const char *s)` | Computes the length of the string `s`. |
| [`ft_strmapi.c`](ft_strmapi.c) | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies the function `f` to each character of the string `s`, passing its index as the first argument. |
| [`ft_strncmp.c`](ft_strncmp.c) | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares the first `n` characters of the strings `s1` and `s2`. |
| [`ft_strnstr.c`](ft_strnstr.c) | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Locates the first occurrence of the string `needle` in the string `haystack`, searching only within the first `len` characters. |
| [`ft_strrchr.c`](ft_strrchr.c) | `char *ft_strrchr(const char *s, int c)` | Locates the last occurrence of `c` in the string `s`. |
| [`ft_strstr.c`](ft_strstr.c) | `char *ft_strstr(const char *haystack, const char *needle)` | Locates the first occurrence of the string `needle` in the string `haystack`. |
| [`ft_strtrim.c`](ft_strtrim.c) | `char *ft_strtrim(char const *s1, char const *set)` | Trims the characters in `set` from the beginning and end of the string `s1`. |
| [`ft_substr.c`](ft_substr.c) | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates and returns a substring from the string `s`, starting at index `start` and of length `len`. |
| [`ft_tolower.c`](ft_tolower.c) | `int ft_tolower(int c)` | Converts the character `c` to lowercase. |
| [`ft_toupper.c`](ft_toupper.c) | `int ft_toupper(int c)` | Converts the character `c` to uppercase. |

---


## Author

[My GitHub](https://github.com/svvoii)  
[My LinkedIn](https://www.linkedin.com/in/bocancia/)  
[My Portfolio](https://sbocanci.me/)  

---
