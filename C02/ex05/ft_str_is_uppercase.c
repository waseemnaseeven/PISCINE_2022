/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:44:11 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/15 17:19:21 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char *lettremaj = "HELLO";
	char *min = "hello";
	char *nombres = "4656";
	char *space = " ";
	char *rien = "";

	printf("%d\n", ft_str_is_uppercase(lettremaj));
	printf("%d\n", ft_str_is_uppercase(min));
	printf("%d\n", ft_str_is_uppercase(nombres));
	printf("%d\n", ft_str_is_uppercase(space));
	printf("%d\n", ft_str_is_uppercase(rien));
}*/
