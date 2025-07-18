0x0F. Variadic Functions
📚 Description
Ce projet traite de l'utilisation des fonctions variadiques en langage C, c'est-à-dire les fonctions qui peuvent accepter un nombre variable d'arguments.
Il s'inspire du fonctionnement de fonctions classiques comme printf().

📁 Fichiers
Fichier	Description
0-sum_them_all.c	Fonction qui retourne la somme de tous ses paramètres
1-print_numbers.c	Fonction qui imprime des nombres séparés par une chaîne
2-print_strings.c	Fonction qui imprime des chaînes de caractères séparées
3-print_all.c	Fonction qui imprime n'importe quel type (char, int, float, string)

📌 Prototypes
c
Copier
Modifier
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
🧪 Exemples
0. Beauty is variable, ugliness is constant
c
Copier
Modifier
sum_them_all(2, 98, 1024);        // → 1122
sum_them_all(4, 98, 1024, 402, -1024);  // → 500
1. To be is to be the value of a variable
c
Copier
Modifier
print_numbers(", ", 4, 0, 98, -1024, 402);
// Affiche : 0, 98, -1024, 402
2. One woman's constant is another woman's variable
c
Copier
Modifier
print_strings(", ", 2, "Jay", "Django");
// Affiche : Jay, Django
3. To be is a to be the value of a variable
c
Copier
Modifier
print_all("ceis", 'B', 3, "stSchool");
// Affiche : B, 3, stSchool
🛠️ Compilation
Utiliser les options de compilation suivantes recommandées par Holberton :

bash
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main.c> <fichier.c> -o <exécutable>
🗂️ Repository
GitHub repository: holbertonschool-low_level_programming

Directory: variadic_functions
