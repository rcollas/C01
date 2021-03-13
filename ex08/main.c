#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int i;

	i = 0;
	ft_sort_int_tab(tab, 10);
	while (i <= 10)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
