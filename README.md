*This project has been created as part of the 42 curriculum by <sebsilve>.*
# libft

Réimplémentation en C d'une bibliothèque de fonctions standard, réalisée dans le cadre du cursus de l'école 42.

---

## Description

`libft` est la première bibliothèque personnelle du cursus 42. Elle regroupe des fonctions essentielles du C standard (`libc`) ainsi que des utilitaires supplémentaires. Cette bibliothèque sera réutilisée dans tous les projets suivants.

---

## Fonctions disponibles

### Fonctions de la libc

| Fonction | Description |
|----------|-------------|
| `ft_isalpha` | Vérifie si un caractère est alphabétique |
| `ft_isdigit` | Vérifie si un caractère est un chiffre |
| `ft_isalnum` | Vérifie si un caractère est alphanumérique |
| `ft_isascii` | Vérifie si un caractère est dans la table ASCII |
| `ft_isprint` | Vérifie si un caractère est imprimable |
| `ft_strlen` | Retourne la longueur d'une chaîne |
| `ft_memset` | Remplit une zone mémoire avec un octet |
| `ft_bzero` | Met une zone mémoire à zéro |
| `ft_memcpy` | Copie une zone mémoire |
| `ft_memmove` | Copie une zone mémoire (zones pouvant se chevaucher) |
| `ft_strlcpy` | Copie une chaîne avec taille limite |
| `ft_strlcat` | Concatène deux chaînes avec taille limite |
| `ft_toupper` | Convertit un caractère en majuscule |
| `ft_tolower` | Convertit un caractère en minuscule |
| `ft_strchr` | Cherche un caractère dans une chaîne |
| `ft_strrchr` | Cherche un caractère depuis la fin d'une chaîne |
| `ft_strncmp` | Compare deux chaînes sur n caractères |
| `ft_memchr` | Cherche un octet dans une zone mémoire |
| `ft_memcmp` | Compare deux zones mémoire |
| `ft_strnstr` | Cherche une sous-chaîne dans une chaîne |
| `ft_atoi` | Convertit une chaîne en entier |
| `ft_calloc` | Alloue et initialise une zone mémoire à zéro |
| `ft_strdup` | Duplique une chaîne |

### Fonctions supplémentaires

| Fonction | Description |
|----------|-------------|
| `ft_substr` | Extrait une sous-chaîne |
| `ft_strjoin` | Concatène deux chaînes |
| `ft_strtrim` | Supprime des caractères en début et fin de chaîne |
| `ft_split` | Découpe une chaîne selon un séparateur |
| `ft_itoa` | Convertit un entier en chaîne |
| `ft_strmapi` | Applique une fonction à chaque caractère |
| `ft_striteri` | Applique une fonction à chaque caractère (avec index) |
| `ft_putchar_fd` | Affiche un caractère sur un descripteur de fichier |
| `ft_putstr_fd` | Affiche une chaîne sur un descripteur de fichier |
| `ft_putendl_fd` | Affiche une chaîne suivie d'un retour à la ligne |
| `ft_putnbr_fd` | Affiche un entier sur un descripteur de fichier |

### Bonus — Listes chaînées

| Fonction | Description |
|----------|-------------|
| `ft_lstnew` | Crée un nouvel élément de liste |
| `ft_lstadd_front` | Ajoute un élément en tête de liste |
| `ft_lstsize` | Retourne le nombre d'éléments de la liste |
| `ft_lstlast` | Retourne le dernier élément de la liste |
| `ft_lstadd_back` | Ajoute un élément en queue de liste |
| `ft_lstdelone` | Supprime un élément de la liste |
| `ft_lstclear` | Supprime et libère toute la liste |
| `ft_lstiter` | Applique une fonction à chaque élément |
| `ft_lstmap` | Crée une nouvelle liste par application d'une fonction |

---

## Compilation

```bash
# Compiler la bibliothèque (partie obligatoire)
make

# Compiler avec les fonctions de listes chaînées
make bonus

# Nettoyer les fichiers objets
make clean

# Nettoyer les fichiers objets et la bibliothèque
make fclean

# Recompiler entièrement
make re
```

Le fichier `libft.a` est généré à la racine du projet.

---

## Utilisation

Inclure le header dans ton fichier source :

Inclure le header dans ton fichier source :

```c
#include "libft.h"
```

Compiler en liant la bibliothèque :

```bash
cc main.c -L. -lft -o mon_programme
```

---

## Structure du projet

```
libft/
├── Makefile
├── libft.h
├── ft_*.c       # fichiers sources
└── libft.a      # bibliothèque compilée (généré par make)
```
