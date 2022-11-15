/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:09:44 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/29 17:41:56 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_result(int size, char *new_str, char *sep, char **strs)
{
	int	i;

	i = 1;
	while (i < size)
	{
		ft_strcat(new_str, sep);
		ft_strcat(new_str, strs[i]);
		i++;
	}
	return (new_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		new_len;
	char	*new_str;
	char	*str_null;

	if ((!strs) || (!sep))
		return (0);
	i = 0;
	new_len = 0;
	str_null = malloc(1 * sizeof(char));
	if (size <= 0)
	{
		str_null = '\0';
		return (str_null);
	}
	new_len = ft_strlen(sep) * (size -1);
	while (i < size)
	{
		new_len += ft_strlen(strs[i]);
		i++;
	}
	new_str = malloc((new_len + 1) * sizeof(char));
	ft_strcpy(new_str, strs[0]);
	ft_result(size, new_str, sep, strs);
	return (new_str);
}

int main(int argc, char **argv)
{
(void)argc;
	//printf("in a gentle way we shake the world\n");
//	char **s = malloc (sizeof(char*) * 100);
	(void) argv;
	printf("%s\n", ft_strjoin(argc, NULL, "p"));
		
}
