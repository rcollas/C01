#include <stdio.h>

int	check_max(int *my_tab, int array_size)
{
	int ref;
	int i;
	int j;
	int a;

	ref = my_tab[a];
	i = 0;
	a = 0;
	while (i < array_size)
	{
		if(ref < my_tab[i])
		{
			j = i;
		}
		i++;
		/*
		if(array_size == 1)
		{
			j = i;
		}
		*/
	}
	return j;
}

void	remove_int(int *my_tab, int position, int array_size)
{
	while (position < array_size)
	{
		my_tab[position] = my_tab[position + 1];
		position++;
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
		if (size != mem_size) 
		{
			remove_int(tab, check_max(tab, size), size);
		}
		size--;
	}
	while (i < mem_size)
	{
		tab[i] = swap[i];
		i++;
	}
}
