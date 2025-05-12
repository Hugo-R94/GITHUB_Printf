#include <stdio.h>

int	ft_printf(const char *s, ...); // suppose que ta fonction est déjà déclarée ailleurs

int main(void)
{
	char c = 'A';
	char *str = "bonjour";
	void *ptr = str;
	int d = -123;
	int i = 456;
	unsigned int u = 3000000000U;
	int hex = 255;

	ft_printf("Charactère : %c\n", c);
	ft_printf("String     : %s\n", str);
	ft_printf("Pointer    : %p\n", ptr);
	ft_printf("Int %%d     : %d\n", d);
	ft_printf("Int %%i     : %i\n", i);
	ft_printf("Unsigned   : %u\n", u);
	ft_printf("Hexa %%x    : %x\n", hex);
	ft_printf("Hexa %%X    : %X\n", hex);
	ft_printf("Pourcentage: %%\n");
	ft_printf("pourcentage = %%%%%%%%\n");
	ft_printf("%s est age de %d, il est stocker a : %p sont age en hexa est %x et en majuscule %X \n","pierre", 42, str, 42, 42);
	ft_printf("juste une string \n");
	ft_printf("juste une string %y \n");
	printf("%s",14);
	return (0);
}
