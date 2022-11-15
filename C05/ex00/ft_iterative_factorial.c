/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:13:19 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/22 11:24:56 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <stdlib.h>

/*int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}*/

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	valeur;

	total = 1;
	valeur = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= valeur)
	{
		total *= valeur;
		valeur ++;
	}
	return (total);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_iterative_factorial(ft_atoi(argv[1])));
	return (0);
}*/
