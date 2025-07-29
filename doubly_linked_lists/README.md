# Singly Linked Lists

## 📚 Description

This project is part of the low-level programming curriculum at Holberton School. It focuses on understanding and implementing **singly linked lists** in C.

A **singly linked list** is a linear data structure made of nodes, where each node contains a piece of data and a pointer to the next node. This project helps develop memory management skills and pointer manipulation in C.

---

## 📁 Files

| File Name         | Description |
|------------------|-------------|
| `0-print_list.c`  | Prints all the elements of a `list_t` list. |
| `1-list_len.c`    | Returns the number of elements in a linked list. |
| `2-add_node.c`    | Adds a new node at the beginning of the list. |
| `3-add_node_end.c`| Adds a new node at the end of the list. |
| `4-free_list.c`   | Frees a `list_t` list. |
| `lists.h`         | Header file with structure definition and prototypes. |
| `main.c` files    | Test files provided to test various functions. |

---

## 🧠 Concepts Covered

- Structs and typedefs
- Dynamic memory allocation (`malloc`, `free`)
- String manipulation
- Pointers and pointer-to-pointer (`list_t **head`)
- Header files and modular C code
- Creating and navigating a linked list

---

## 🔧 Compilation

All files are compiled using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
