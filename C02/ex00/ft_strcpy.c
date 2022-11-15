/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:18:25 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/12 14:29:50 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main (void)
{
	char	s1[] = "Beautifule";
	char	s2[] = "holamanner";
	
	printf("%s and %s\n", s1, s2);
	ft_strcpy(s1, s2);
	printf("%s and %s", s1, s2);
} */
