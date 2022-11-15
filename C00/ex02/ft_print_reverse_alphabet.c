/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:55:43 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/10 16:06:58 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphab;

	alphab = 'z';
	while (alphab >= 'a')
	{
		write(1, &alphab, 1);
		alphab--;
	}
}
