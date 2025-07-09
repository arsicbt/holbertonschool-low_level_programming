# 0x0C. More malloc, free

## 📚 Description

This project continues exploring **dynamic memory allocation in C**, focusing on the use of `malloc`, `free`, and `realloc`. It also introduces how to implement custom versions of functions like `calloc` and how to manage memory safely and efficiently.

---

## 🛠️ Files and Functions

### `0-malloc_checked.c`
- **Prototype**: `void *malloc_checked(unsigned int b);`
- Allocates memory using `malloc`.
- If `malloc` fails, the function exits with status `98`.

---

### `1-string_nconcat.c`
- **Prototype**: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- Concatenates two strings.
- Uses the first `n` bytes of `s2`. If `n >= strlen(s2)`, uses all of `s2`.
- If `NULL` is passed, treats as empty string.

---

### `2-calloc.c`
- **Prototype**: `void *_calloc(unsigned int nmemb, unsigned int size);`
- Allocates memory for an array of `nmemb` elements of `size` bytes.
- Initializes all bytes to zero.
- Returns `NULL` if `nmemb` or `size` is `0`, or if `malloc` fails.

---

### `3-array_range.c`
- **Prototype**: `int *array_range(int min, int max);`
- Creates an array of integers from `min` to `max` (inclusive).
- Returns `NULL` if `min > max` or if `malloc` fails.

---

## 💡 Usage

### Example of compilation

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-malloc
