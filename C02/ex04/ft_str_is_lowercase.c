/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:21:03 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/14 10:36:10 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char *mel = "Hello";

	printf("%d\n", ft_str_is_lowercase(lettremaj));
	printf("%d\n", ft_str_is_lowercase(min));
	printf("%d\n", ft_str_is_lowercase(nombres));
	printf("%d\n", ft_str_is_lowercase(space));
	printf("%d\n", ft_str_is_lowercase(rien));
	printf("%d\n", ft_str_is_lowercase(mel));
}*/
