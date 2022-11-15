/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:47:26 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/28 14:21:28 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

#include <stdlib.h>
#include <stdio.h>

void	ft_print_value(char *new_str)
{
	int	i;
	int	j;
	int	count;
	char	*values_let;
	int	k;

	i = 0;
	count = 0;
	while ((new_str[i] >= '0' && new_str[i] <= '9') || (new_str[i] == ' ' ))
		i++;
	if (new_str[i] == ':')
		i++;
	while (new_str[i] == ' ')
		i++;

	j = i;
	while (new_str[i] >= 32 && new_str[i] < 127)
	{
		count++;
		i++;
	}
	values_let = malloc((count + 1) *sizeof(char));
	k = 0;
	while (k < count)
	{
		values_let[k] = new_str[j + k];
		k++;
	}
	ft_putstr(values_let);
}


