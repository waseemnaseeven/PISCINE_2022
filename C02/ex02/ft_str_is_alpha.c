/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:50:17 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/14 10:23:40 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/* int	main(void)
{
	char *lettre = "Hello";
	char *nombre = "123";
	char *rien = "";
	char *space = " ";
	char *kk = "hel3";

	printf("%d\n", ft_str_is_alpha(lettre));
	printf("%d\n", ft_str_is_alpha(nombre));
	printf("%d\n", ft_str_is_alpha(rien));
	printf("%d\n", ft_str_is_alpha(space));
	printf("%d\n", ft_str_is_alpha(kk));
}*/
