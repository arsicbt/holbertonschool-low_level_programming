# 📁 File I/O Project - Holberton School

Ce projet vise à maîtriser la manipulation des fichiers en C au **niveau système** (syscalls), en utilisant des fonctions comme `open`, `read`, `write`, et `close`. Tu apprendras également à gérer les erreurs correctement et à manipuler les permissions de fichiers.

---

## 🧠 Objectifs

- Utiliser les appels systèmes (`open`, `read`, `write`, `close`)
- Lire et écrire dans des fichiers sans passer par `stdio.h`
- Gérer les erreurs correctement
- Travailler avec les permissions de fichiers
- Comprendre le fonctionnement des descripteurs de fichiers

---

## 📚 Fonctions autorisées

- `open`
- `read`
- `write`
- `close`
- `_exit`
- `perror`
- `dprintf`
- `malloc` / `free` (si nécessaire)

---

## 📝 Fichiers

| Fichier | Description |
|--------|-------------|
| `0-read_textfile.c` | Fonction qui lit un fichier texte et l'affiche sur la sortie standard |
| `1-create_file.c`   | Fonction qui crée un fichier et y écrit un contenu |
| `2-append_text_to_file.c` | Fonction qui ajoute du texte à la fin d’un fichier existant |
| `3-cp.c`            | Programme qui copie le contenu d’un fichier dans un autre, à la façon de `cp` |
| `main.h`            | Fichier d’en-tête avec les prototypes de fonctions |

---

## 🚀 Compilation

Toutes les fonctions doivent être compilées avec :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o nom_executable


Arsinoe CHOBERT
