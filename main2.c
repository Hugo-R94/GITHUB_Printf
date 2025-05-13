
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stddef.h>

int	ft_printf(const char *s, ...);
int ft_putchar(unsigned int c);

// int main(void)
// {
// 	// ft_putstr("====== string =======\n");
	
// 	// ft_putstr("ft_printf() : \n");
// 	// ft_printf(" NULL %s NULL ", NULL);
// 	// ft_putchar('\n');
// 	// ft_putstr("printf() : \n");
// 	// printf(" NULL %s NULL ", NULL);
	
// 	ft_putstr("====== pointer =======\n");
// 	// ft_printf("%p\n",-1);
// 	ft_printf("%p   %p\n",LONG_MAX, LONG_MIN);
// 	// printf("%ld\n",LONG_MAX);
// 	// printf("%ld",LONG_MIN);
// }

int main() {
    long *ptr = (long *)LONG_MAX;  // Affectation de LONG_MAX à un pointeur (exemple de test)
    ft_putptr(ptr);  // Tester l'affichage de l'adresse de ce pointeur
    return 0;
}
