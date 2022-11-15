/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:08:31 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/28 17:06:56 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_unity(char str)
{
	int		i;
	int		len_str;
	char	new_str;

	len_str = ft_strlen(str);
	i = 0;
	new_str = str;
	i++;
	return (new_str);
}
