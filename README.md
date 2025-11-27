# 📚 libft - Ma Bibliothèque C de Base (42 Project)

## 🌟 Introduction

Ce dépôt contient ma version de la **`libft`**, le premier projet fondamental de l'école 42.

L'objectif de ce projet est de reconstruire une partie essentielle de la librairie standard C (`libc`) et d'y ajouter des fonctions utilitaires. Il permet de **maîtriser** la gestion de la mémoire, les manipulations de chaînes de caractères et les structures de données de base comme les listes chaînées en C.

---

## ⚠️ Disclaimer (Note Pédagogique 42)

Ce dépôt est rendu **public uniquement à titre pédagogique**.

Conformément à l'esprit et aux règles de l'école 42, l'utilisation de ce code (copie, plagiat, ou soumission) est **strictement interdite** et peut entraîner la disqualification ou l'échec de votre propre projet. Il est destiné à servir d'exemple de structure et de documentation, mais ne doit en aucun cas être utilisé pour valider votre propre `libft`.

**Apprenez par vous-même !**

---

## 📝 Aperçu des Fonctions

La librairie est divisée en trois ensembles :

### I. Fonctions de la Lib C (`<ctype.h>`, `<string.h>`, `<stdlib.h>`)

* **Tests de caractères :** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
* **Gestion de la mémoire :** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
* **Gestion des chaînes :** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
* **Conversion :** `ft_atoi`.

### II. Fonctions Additionnelles

Ces fonctions sont essentielles pour les projets 42 et permettent la manipulation de chaînes et d'entiers avec allocation mémoire.

* `ft_substr` : Extrait une sous-chaîne.
* `ft_strjoin` : Concatène deux chaînes.
* `ft_strtrim` : Supprime les caractères d'un set donné au début et à la fin d'une chaîne.
* `ft_split` : Découpe une chaîne en un tableau de chaînes selon un délimiteur.
* `ft_itoa` : Convertit un entier en chaîne de caractères.
* `ft_strmapi` : Applique une fonction à chaque caractère d'une chaîne.
* **Écriture sur descripteur de fichier :** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### III. Fonctions Bonus (Listes Chaînées)

Ces fonctions gèrent la structure de liste chaînée simple (`t_list`).

| Fonction | Description |
| :--- | :--- |
| `ft_lstnew` | Crée un nouveau maillon. |
| `ft_lstadd_front` | Ajoute un maillon au début. |
| `ft_lstadd_back` | Ajoute un maillon à la fin. |
| `ft_lstsize` | Compte le nombre de maillons. |
| `ft_lstlast` | Renvoie le dernier maillon. |
| `ft_lstdelone` | Supprime et libère un maillon. |
| `ft_lstclear` | Supprime et libère toute la liste. |
| `ft_lstiter` | Applique une fonction à chaque élément de la liste. |
| `ft_lstmap` | Applique une fonction à chaque maillon et crée une nouvelle liste. |

---

## 👤 Auteur

* **Nom** : PIETRZAK Christophe
* **42 email** : cpietrza@student.42lyon.fr
