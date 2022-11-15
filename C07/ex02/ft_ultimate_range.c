/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:21:09 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/29 10:51:54 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		range = '\0';
		return (0);
	}
	size = (max - min);
	*range = malloc(size * sizeof(int));
	if (!*range)
	{	
		*range = 0;
		return (-1);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*int main (void)
{
	int min = 20;
	int max = 10;
	int i = 0;
	int **range;
	int *r;
	int dis = max - min;
	range = malloc(dis * sizeof(int));
	printf("%d\n", ft_ultimate_range(range, min, max));
	r = *range;
	//printf("address of range: %p\n", range);
	//printf("address of *range: %p\n", r);
	while (i < dis)
	{
		printf("%d ", r[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
