
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stddef.h>

int	ft_printf(const char *s, ...);
int ft_putchar(unsigned int c);

int main(void)
{
    char c = '0';
    char *str = "";
    char *str_long = "Ceci est une longue string pour tester ft_printf avec un peu plus de texte.";
    void *ptr = (void *)LONG_MAX;
    void *null_ptr = NULL;
    int d = -123;
    int i = 456;
    int min = INT_MIN;
    int max = INT_MAX;
    unsigned int u = 3000000000U;
    unsigned int u_max = UINT_MAX;
    long int hex = LONG_MAX;
    int zero = 0;

    printf("++++++ test character +++++++\n\n");
    printf("character printf()   : %c\n", c);
    ft_printf("character ft_printf(): %c\n", c);
    ft_putchar('\n');

    printf("++++++ test string +++++++\n\n");
    printf("String vide printf() : %s\n", str);
    ft_printf("String vide ft_printf: %s\n", str);
	
    printf("String longue printf(): %s\n", str_long);
    ft_printf("String longue ft_printf: %s\n", str_long);

    printf("NULL string printf() : %s\n", (char *)NULL);
    ft_printf("NULL string ft_printf: %s\n", NULL);
    ft_putchar('\n');
    printf("++++++ test pointeurs +++++++\n\n");
	printf("Pointer printf()     : %p\n", ptr);
    ft_printf("Pointer ft_printf()  : %p\n", (char *)LONG_MIN);

    printf("NULL ptr printf()    : %p\n", null_ptr);
    ft_printf("NULL ptr ft_printf() : %p\n", null_ptr);
    ft_putchar('\n');
    printf("++++++ test entiers +++++++\n\n");
    printf("%%d printf()          : %d\n", d);
    ft_printf("%%d ft_printf()       : %d\n", d);

    printf("%%i printf()          : %i\n", i);
    ft_printf("%%i ft_printf()       : %i\n", i);

    printf("Min int printf()     : %d\n", min);
    ft_printf("Min int ft_printf()  : %d\n", min);

    printf("Max int printf()     : %d\n", max);
    ft_printf("Max int ft_printf()  : %d\n", max);

    printf("Zéro int printf()    : %d\n", zero);
    ft_printf("Zéro int ft_printf() : %d\n", zero);
    ft_putchar('\n');
    printf("++++++ test unsigned +++++++\n\n");
    printf("Unsigned printf()    : %u\n", u);
    ft_printf("Unsigned ft_printf() : %u\n", u);

    printf("U max printf()       : %u\n", u_max);
    ft_printf("U max ft_printf()    : %u\n", u_max);

    printf("U zéro printf()      : %u\n", 0U);
    ft_printf("U zéro ft_printf()   : %u\n", 0U);
    ft_putchar('\n');
    printf("++++++ test hexadécimal +++++++\n\n");
    printf("%%x printf()          : %lx\n", hex);
    ft_printf("%%x ft_printf()       : %lx\n", hex);

    printf("%%X printf()          : %lX\n", hex);
    ft_printf("%%X ft_printf()       : %lX\n", hex);

    printf("Hexa min printf()    : %x\n", 0);
    ft_printf("Hexa min ft_printf() : %x\n", 0);

    printf("Hexa max printf()    : %x\n", UINT_MAX);
    ft_printf("Hexa max ft_printf() : %x\n", UINT_MAX);
    ft_putchar('\n');
    printf("++++++ test pourcent +++++++\n\n");
    printf("%% seul printf()      : %%\n");
    ft_printf("%% seul ft_printf()   : %%\n");

    printf("Mix %% printf()       : début %% milieu %% fin\n");
    ft_printf("Mix %% ft_printf()    : début %% milieu %% fin\n");

    printf("Pourcent mix printf(): %%%% %d %s %% %c\n", 42, "test", 'A');
    ft_printf("Pourcent mix ft_printf(): %%%% %d %s %% %c\n", 42, "test", 'A');
    ft_putchar('\n');
	
    printf("++++++ test cas combiné +++++++\n\n");
    printf("Combiné printf()     : %s est âgé de %d, stocké à : %p | âge hex : %x / %X\n", "Pierre", 42, str, 42, 42);
    ft_printf("Combiné ft_printf()  : %s est âgé de %d, stocké à : %p | âge hex : %x / %X\n", "Pierre", 42, str, 42, 42);

    printf("Juste une string printf() : juste une string\n");
    ft_printf("Juste une string ft_printf(): juste une string\n");
    ft_putchar('\n');
    printf("++++++ test mauvais format +++++++\n\n");
    ft_printf("Format inconnu ft_printf() : %y\n");

    ft_printf("NULL + mauvais format ft_printf() : %s %q\n", NULL);
    ft_putchar('\n');
    printf("++++++ test valeurs brutes +++++++\n\n");
    printf("printf()   : %d\n", 14);
    ft_printf("ft_printf(): %d\n", 14);

    printf("printf()   : %u\n", 0);
    ft_printf("ft_printf(): %u\n", 0);

    printf("printf()   : %c\n", 'Z');
    ft_printf("ft_printf(): %c\n", 'Z');

    printf("printf()   : %p\n", (void *)0xDEADBEEF);
    ft_printf("ft_printf(): %p\n", (void *)0xDEADBEEF);

    return 0;
}
