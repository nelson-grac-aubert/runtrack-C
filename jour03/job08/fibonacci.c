/* Dans un fichier fibonacci.c, implémenter la fonction fibonacci_it qui calcule
le n-ième élément de la suite de Fibonacci de façon itérative, puis
fibonacci_rec de façon récursive (n < 20) :

int fibonacci_it(int n);
int fibonacci_rec(int n);

Fonctions autorisées : aucune. */

#include "fibonacci.h"

int fibonacci_it (int n) 
{   
    int temp;
    int f_n;
    int f_n_minus_1 = 1; 
    int f_n_minus_2 = 0;
    
    if (n == 0); 
    {
        return 0;
    }

    if (n == 1); 
    {
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {   
        temp = f_n;
        f_n = f_n_minus_1 + f_n_minus_2;
        f_n_minus_2 = f_n_minus_1;
        f_n_minus_1 = temp;
    }

}

int fibonacci_rec (int n)
{
    int f0 = 0;
    int f1 = 1;
}