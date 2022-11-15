/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:53:48 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/24 17:00:13 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_negative(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = ft_negative(max - min);
	tab = malloc(size * sizeof(int));
	if (min >= max)
		return (0);
	if (!tab)
		return (0);
	if (min < max)
	{
		while (i < size)
		{
			tab[i] = min + i;
			i++;
		}
	}
	return (tab);
}

/*int main(void)
{
	int	i = 0;
	int	size;
	int	min = 3;
	int	max = 12;

	size = ft_negative(max - min);
	int *tab = ft_range(min, max);	

	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
