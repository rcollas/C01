#include <stdio.h>

int	check_max(int *my_tab, int array_size)
{
	int ref;
	int i;

	ref = 0;
	i = 0;
	while (i < array_size)
	{
		if(my_tab[ref] < my_tab[i])
		{
			ref = i;
		}
		i++;
	}
	return ref;
}

void	remove_int(int *my_tab, int position, int array_size)
{
	int i;

	i = position;
	while (i < array_size)
	{
		my_tab[i] = my_tab[i + 1];
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int swap[size];
	int i;
	int mem_size;

	i = 0;
	mem_size = size;
	while (size >= 0)
	{
		swap[size] = tab[check_max(tab, size)];
		remove_int(tab, check_max(tab, size), size);
		size--;
	}
	while (i < mem_size)
	{
		tab[i] = swap[i];
		i++;
	}
}
