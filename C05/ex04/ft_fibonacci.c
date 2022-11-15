/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:29:53 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/24 11:14:23 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (index);
	else if (index == 1)
		return (index);
	else
		return ((ft_fibonacci(index - 1) + (ft_fibonacci(index - 2))));
}

/*int	main(void)
{
	printf("%d", ft_fibonacci());
}*/
