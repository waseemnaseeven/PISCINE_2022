/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:16:30 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/30 15:52:18 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_in_charset(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_strlen(str, charset);
	word = malloc((len + 1) * (sizeof(char)));
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_in_charset(str[i], charset) == 1)
			i++;
		if (str[i])
			count++;
		while (str[i] && is_in_charset(str[i], charset) == 0)
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**new_str;

	i = 0;
	if ((!str) || (!charset))
		return (0);
	new_str = (char **)malloc(sizeof(char *) * (ft_count(str, charset) + 1));
	if (!new_str)
		return (0);
	while (*str)
	{
		while (*str && is_in_charset(*str, charset) == 1)
			str++;
		if (*str)
		{
			new_str[i] = ft_strdup(str, charset);
			i++;
		}
		while (*str && is_in_charset(*str, charset) == 0)
			str++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*int main (void)
{
	int	i;
	char 	**tab;
	char	str[50] = "giushewiaiwdjwafgfawgfafgagfawoafg";
	char	charset[50] = "g";

	i = 0;
	tab = ft_split(str, charset);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
}*/
