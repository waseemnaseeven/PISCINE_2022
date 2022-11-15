/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dizaine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:08:31 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/28 16:50:26 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_dizaine(char *str)
{
	int		i;
	int		len_str;
	char	*new_str;

	len_str = ft_strlen(str);
	new_str = malloc((len_str + 1) * sizeof(char));
	if (!new_str)
		return (0);
	i = 0;
	new_str[i] = str[i];
	i++;
	while (i < len_str)
	{
		new_str[i] = 48;
		i++;
	}
	return (new_str);
}
