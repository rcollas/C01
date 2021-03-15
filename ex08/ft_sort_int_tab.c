/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:38:25 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/15 13:51:14 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int swap;
	int i;
	int j;

	i = 0;
	j = 0;
	while (size > 0)
	{
		swap = tab[0];
		while (i < size)
		{
			if (tab[i] >= swap)
			{
				swap = tab[i];
				j = i;
			}
			i++;
		}
		tab[j] = tab[size - 1];
		tab[size - 1] = swap;
		i = 0;
		size--;
	}
}
