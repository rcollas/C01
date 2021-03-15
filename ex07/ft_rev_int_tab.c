/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:52:54 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/15 10:37:51 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int mem_size;
	int swap[size];

	mem_size = size;
	i = 0;
	size--;
	while (size >= 0)
	{
		swap[i] = tab[size];
		i++;
		size--;
	}
	i = 0;
	while (i < mem_size)
	{
		tab[i] = swap[i];
		i++;
	}
}
