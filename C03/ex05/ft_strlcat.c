/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:24:55 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/17 09:44:54 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lsrc;
	unsigned int	ldest;

	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= ldest)
		return (lsrc + size);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ldest + lsrc);
}

/*int main(void)
{
	char src[10] = "World!";
	char dest[10] = "Hello ";

	printf("%d", ft_strlcat(dest, src, 3));
}*/
