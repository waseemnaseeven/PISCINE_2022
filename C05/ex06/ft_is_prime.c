/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:39:02 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/24 12:43:28 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	i;

	if (nb == 2147483647)
		return (1);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % i + 2 == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(1000004233));
	printf("%d", ft_is_prime(0));
}
