/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:49:27 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/13 13:59:20 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char *lettremaj = "HELLO";
	char *min = "hello";
	char *nombres = "4656";
	char *space = " ";
	char *rien = "";

	printf("%d\n", ft_str_is_printable(lettremaj));
	printf("%d\n", ft_str_is_printable(min));
	printf("%d\n", ft_str_is_printable(nombres));
	printf("%d\n", ft_str_is_printable(space));
	printf("%d\n", ft_str_is_printable(rien));
}*/
