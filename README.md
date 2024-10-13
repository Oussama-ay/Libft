<div align="center">
   <h1 style="font-size: 3em; border-bottom: 2px solid #333; padding-bottom: 10px;">
      libft: Static Library
   </h1>
</div>

## 1. Project Overview

The `libft` project involves creating a custom C library that implements various standard library functions and additional utilities. This library serves as a fundamental tool for future C programming projects, offering a collection of well-implemented and tested functions for reuse across different applications.

## 2. Function Specifications

### 2.1 Libc Functions

| Function | Prototype | Description |
|:--------:|:---------:|:-----------:|
| `ft_isalpha` | `int ft_isalpha(int c);` | Checks for an alphabetic character. |
| `ft_isdigit` | `int ft_isdigit(int c);` | Checks for a digit (0 through 9). |
| `ft_isalnum` | `int ft_isalnum(int c);` | Checks for an alphanumeric character. |
| `ft_isascii` | `int ft_isascii(int c);` | Checks whether c fits into the ASCII character set. |
| `ft_isprint` | `int ft_isprint(int c);` | Checks for any printable character. |
| `ft_strlen` | `size_t ft_strlen(const char *s);` | Calculates the length of the string pointed to by s, excluding the terminating null byte. |
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len);` | Fills the first len bytes of the memory area pointed to by b with the constant byte c. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n);` | Erases the data in the n bytes of the memory starting at the location pointed to by s. |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n);` | Copies n bytes from memory area src to memory area dst. |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t len);` | Copies len bytes from memory area src to memory area dst. The memory areas may overlap. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);` | Copies up to dstsize - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);` | Appends the NUL-terminated string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 bytes, NUL-terminating the result. |

### 2.2 Additional Functions

| Function | Prototype | Description |
|:--------:|:---------:|:-----------:|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Allocates and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2);` | Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set);` | Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string. |
| `ft_split` | `char **ft_split(char const *s, char c);` | Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. |
| `ft_itoa` | `char *ft_itoa(int n);` | Allocates and returns a string representing the integer received as an argument. |

### 2.3 Bonus: Linked List Functions

| Function | Prototype | Description |
|:--------:|:---------:|:-----------:|
| `ft_lstnew` | `t_list *ft_lstnew(void *content);` | Allocates and returns a new element. The variable 'content' is initialized with the value of the parameter 'content'. The variable 'next' is initialized to NULL. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds the element 'new' at the beginning of the list. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst);` | Counts the number of elements in a list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst);` | Returns the last element of the list. |

## 3. Compilation Instructions

To compile the library, utilize the provided Makefile with the following commands:

```sh
make        # Compiles the main library
make bonus  # Compiles with bonus functions
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Recompiles the library
```

## 4. Usage Guidelines

To utilize libft in C projects:

1. Include the header in C files:
   ```c
   #include "libft.h"
   ```
2. Compile the project with libft.a:
   ```sh
   gcc your_c_file.c libft.a
   ```

## 5. Testing

Ensure the reliability of your libft implementation by using these popular testing suites:

* [jtoty/Libftest](https://github.com/jtoty/Libftest)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)

## 6. Resources

* [Create a Library in C](https://www.geeksforgeeks.org/how-do-i-create-a-library-in-c)
