# 0x08. C - Recursion

## 📚 Resources

**Read or watch:**

- [Recursion, introduction](https://www.geeksforgeeks.org/recursion/)
- [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=k7-N8R0-KY4)
- [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=E6lnsdOf2ZY)

---

## 🎯 Learning Objectives

At the end of this project, you should be able to explain to anyone, **without the help of Google**:

### General

- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn’t implement recursion

---

## 📄 Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 20.04 LTS** using `gcc`, with these flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the **root** of the project is **mandatory**
- Your code should follow the **Betty style**
  - It will be checked using `betty-style.pl` and `betty-doc.pl`
- **No global variables**
- **No more than 5 functions per file**
- **Do not use the standard library**
  - Functions like `printf`, `puts`, etc. are **forbidden**
- You are allowed to use `_putchar`
  - You don’t need to push `_putchar.c` (we’ll use our own)
- Example `main.c` files are provided for testing only
  - You don’t have to push them (they will be ignored if you do)
- All prototypes (including `_putchar`) must be declared in a header file called `main.h`
- Don’t forget to push your `main.h`
- **No loops allowed**
- **No static variables allowed**

---

## 📁 Files

| File Name               | Description                                      |
|------------------------|--------------------------------------------------|
| `main.h`               | Header file containing all function prototypes   |
| `_putchar.c`           | Function to print a single character to stdout   |
| `0-puts_recursion.c`   | Recursive version of `puts()`                    |
| `1-print_rev_recursion.c` | Prints a string in reverse using recursion    |
| `2-strlen_recursion.c` | Returns the length of a string using recursion   |
| `3-factorial.c`        | Returns the factorial of a number (recursive)    |
| `4-pow_recursion.c`    | Computes power using recursion                   |
| `5-sqrt_recursion.c`   | Returns natural square root of a number          |
| `6-is_prime_number.c`  | Checks if a number is prime using recursion      |
| `100-is_palindrome.c`  | Checks if a string is a palindrome recursively   |
| `101-wildcmp.c`        | Compares two strings with wildcard support       |


---

## 🚫 Forbidden

- Loops (`for`, `while`, `do...while`)
- Static variables
- Standard library functions like `printf()`, `puts()`, `strlen()`, etc.

---

## 🧪 Testing

You can compile your code with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o recursion



Arsinoe CHOBERT
