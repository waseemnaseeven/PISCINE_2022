/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:03:10 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/14 10:28:32 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char *lettre = "Hello42";
	char *nombre = "123";
	char *rien = "";
	char *space = " ";

	printf("%d\n", ft_str_is_numeric(lettre));
	printf("%d\n", ft_str_is_numeric(nombre));
	printf("%d\n", ft_str_is_numeric(rien));
	printf("%d\n", ft_str_is_numeric(space));
}*/
