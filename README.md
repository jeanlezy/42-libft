 *This project has been created as part of the 42 curriculum by jeanbarr.*

<h1><center>📚 Libft</center>

## 📖 Description

<table> <tr> <td valign="middle" width="50%">

Libft rebuilds a set of standard C library functions, adds a few useful extra ones, and packages everything into a static library (libft.a) that is reused in every later project. It teaches how strings and memory work in C, dynamic allocation and ownership, pointers and function pointers, linked lists, and how to write a Makefile that does not relink needlessly.

</td> <td align="center" valign="middle" width="50%"> <img src="https://media0.giphy.com/media/v1.Y2lkPTc5MGI3NjExbXhyd2p2OXgycnRzbGFsM3Q3dm81cXdnd3pqejBvYWowN2szYzRqNyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/UcqmAs1NtR1CnOITV6/giphy.gif" alt="Libft animation" width="100%"> </td> </tr> </table>

| Part | Content |
|---|---|
| **1. Libc functions** | Re-implementations of standard functions |
| **2. Additional functions** | Functions not in libc, or built on it |
| **3. Linked lists** | A small toolkit based on `t_list` |

---

## ⚙️ Instructions

**Requirements:** `cc`, `make` and `ar`.

| Command | Description |
|---|---|
| `make` | Builds `libft.a` (mandatory part) |
| `make clean` | Removes the object files |
| `make fclean` | Removes the object files and `libft.a` |
| `make re` | Rebuilds everything from scratch |

Everything is compiled with `-Wall -Wextra -Werror`. To use the library, include `libft.h` in your code and link against `libft.a`:

---

## 🔧 Library description

Libft is a **static library** created with `ar` from the compiled object files, and every function is declared in `libft.h`. Functions that allocate memory return a heap block that the caller must free. The Makefile rebuilds only what changed.

### Part 1: Libc functions

| Group | Functions | Description |
|---|---|---|
| **Character checks** | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` | Test what kind of character a value is |
| **Conversion** | `ft_toupper` `ft_tolower` `ft_atoi` | Change letter case, or convert a string to an `int` |
| **Strings** | `ft_strlen` `ft_strlcpy` `ft_strlcat` | Measure, copy and append strings with a size limit |
| | `ft_strchr` `ft_strrchr` `ft_strnstr` `ft_strncmp` | Search and compare strings |
| **Memory** | `ft_memset` `ft_bzero` | Fill memory with a byte or with zeros |
| | `ft_memcpy` `ft_memmove` | Copy memory (`ft_memmove` is safe for overlapping areas) |
| | `ft_memchr` `ft_memcmp` | Search and compare memory areas |
| **Allocation** | `ft_calloc` `ft_strdup` | Allocate zeroed memory, or duplicate a string on the heap |

### Part 2: Additional functions

| Group | Functions | Description |
|---|---|---|
| **New strings** | `ft_substr` `ft_strjoin` `ft_strtrim` | Extract, join, or trim strings into a new string |
| | `ft_split` | Splits a string into an array of strings by a delimiter |
| **Conversion** | `ft_itoa` | Converts an `int` to a new string |
| **Iteration** | `ft_strmapi` `ft_striteri` | Apply a function to every character (new string, or in place) |
| **File descriptors** | `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` | Write a character, string, line or number to a file descriptor |

### Part 3: Linked lists

Every function works with this node type:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Group | Functions | Description |
|---|---|---|
| **Create and inspect** | `ft_lstnew` `ft_lstsize` `ft_lstlast` | Create a node, count nodes, get the last node |
| **Add** | `ft_lstadd_front` `ft_lstadd_back` | Add a node at the start or at the end |
| **Delete** | `ft_lstdelone` `ft_lstclear` | Delete one node or the whole list, freeing the content |
| **Iterate** | `ft_lstiter` `ft_lstmap` | Apply a function to every node, or build a new list from the results |

---

## 📚 Resources

- Manual pages for the libc functions (`man 3 <function>`). For `strlcpy`, `strlcat` and `strnstr`, the BSD manual pages describe the exact behavior expected.
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [Valgrind documentation](https://valgrind.org/docs/manual/)
- [Linked Lists for Absolute Beginners](https://www.youtube.com/watch?v=uBZHMkpsTfg&list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)
- Libft subject provided by the school

### How AI was used

AI was used as a support tool during this project, mainly for two tasks:

- **Testing:** Developing custom local test programs (not submitted) to compare functions against their libc counterparts, verify correct behaviour, explore edge cases (empty strings, NULL pointers, zero sizes, overlapping memory areas, INT_MIN and INT_MAX), and detect memory leaks across all three parts.
- **README** drafting this file.

The code itself was written by me, and I understand every function in the library.
