/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:14:06 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/18 09:16:43 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	sign_whitespaces(char *str, int *ptr)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = sign_whitespaces(str, &i);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

/*int	main(void)
{
	char	*str = "    ---+--+1234ab567";
	printf("%d\n", atoi(str));
	printf("%d", ft_atoi(str));
}*/
