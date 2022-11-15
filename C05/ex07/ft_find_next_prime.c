/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:48:58 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/22 13:18:24 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	ft_find_next_prime(int nb)
{	
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			nb++;
	}
	return (0);
}

/*int main(void)
{
	printf("%d", ft_find_next_prime(13));
}*/
