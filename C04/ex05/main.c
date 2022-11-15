/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:10:57 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/18 14:56:15 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char **argv)
{
	char *str;
	char *base;

	if (argc > 2)
	{
		str = argv[1];
		base = argv[2];
		printf("%d", ft_atoi_base(str, base));
	}
	return (0);
}
