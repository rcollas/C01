void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int mem_size;
	int swap[size];

	mem_size = size;
	i = 0;
	while (size >= 0)
	{
		swap[i] = tab[size];
		i++;
		size--;
	}
	i = 0;
	while (i <= mem_size)
	{
		tab[i] = swap[i];
	}

}
