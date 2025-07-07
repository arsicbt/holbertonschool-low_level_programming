# 0x0A. C - malloc, free

## 📁 Project Directory
`holbertonschool-low_level_programming/malloc_free`

## 📌 Description

Ce projet porte sur l'utilisation de la **mémoire dynamique en C** à l’aide des fonctions `malloc`, `free`, et sur la gestion correcte de la mémoire pour éviter les **fuites** ou erreurs d’accès mémoire.

---

## 📚 Learning Objectives

- Comprendre l'allocation mémoire dynamique
- Savoir utiliser `malloc` et `free`
- Savoir allouer et libérer un tableau 1D et 2D
- Utiliser Valgrind pour détecter des fuites mémoire

---

## 📦 Files and Functions

### 0. Float like a butterfly, sting like a bee  
**File:** `0-create_array.c`  
**Prototype:**  
```c
char *create_array(unsigned int size, char c);
