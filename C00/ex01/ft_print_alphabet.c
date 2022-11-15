/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:17:48 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/10 16:19:21 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphab;

	alphab = 'a';
	while (alphab <= 'z')
	{
		write(1, &alphab, 1);
		alphab++;
	}
}
