# C++ - Module 02

## Polymorphisme ad-hoc, surcharge d'opérateurs et forme canonique orthodoxe

---

## Notions

1. Forme canonique orthodoxe — 4 fonctions obligatoires
2. Constructeur par copie
3. Opérateur d'assignation `operator=`
4. Nombres à virgule fixe — fixed-point numbers
5. Surcharge d'opérateurs — `operator<<`, `+`, `-`, `*`, `/`
6. Opérateurs de comparaison — `>`, `<`, `>=`, `<=`, `==`, `!=`
7. Opérateurs d'incrémentation — `++`, `--` (pré et post)
8. Fonctions statiques `min` et `max`
9. BSP — Binary Space Partitioning (ex03)

---

## Exercices

| Exercice | Sujet | Notions |
|----------|-------|---------|
| ex00 | My First Class in Orthodox Canonical Form | Forme canonique, fixed-point, `getRawBits`, `setRawBits` |
| ex01 | Towards a more useful fixed-point number class | Constructeurs int/float, `toFloat`, `toInt`, `operator<<` |
| ex02 | Now we're talking | Opérateurs de comparaison, arithmétiques, incrémentation, min/max |
| ex03 | BSP | Classe `Point`, produit vectoriel, point dans un triangle |

---

## Compilation

```bash
make        # compile
make clean  # supprime les .o
make fclean # supprime tout
make re     # recompile from scratch
```
