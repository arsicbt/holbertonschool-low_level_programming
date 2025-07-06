# 0x0A. C - argc, argv

This project focuses on handling command line arguments in C using `argc` and `argv`.

---

## Learning Objectives

- How to use arguments passed to your program
- What are `argc` and `argv`
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No more than 5 functions per file
- Use of standard C functions only (unless stated otherwise)

---

## Files & Descriptions

### [`0-whatsmyname.c`](./0-whatsmyname.c)
**Description:**  
Prints the name of the program, followed by a new line.  
Even if the executable is renamed, it will still print its new name.

**Example:**
```bash
$ ./mynameis
./mynameis
$ mv mynameis newname
$ ./newname
./newname
