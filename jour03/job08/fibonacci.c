/* Dans un fichier fibonacci.c, implémenter la fonction fibonacci_it qui calcule
le n-ième élément de la suite de Fibonacci de façon itérative, puis
fibonacci_rec de façon récursive (n < 20) :

int fibonacci_it(int n);
int fibonacci_rec(int n);

Fonctions autorisées : aucune. */

#include "fibonacci.h"

int fibonacci_it(int n)
{
    int f_prev = 0;
    int f_curr = 1;
    int f_next;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    for (int i = 2; i <= n; i++)
    {
        f_next = f_curr + f_prev;
        f_prev = f_curr;
        f_curr = f_next;
    }

    return f_curr;
}

int fibonacci_rec(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}