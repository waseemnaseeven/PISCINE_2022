/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:21:23 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/18 13:30:53 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_error(char *base)
{
	int	i;
	int	lenbase;
	int	j;

	i = 0;
	lenbase = ft_strlen(base);
	while (base[i])
	{
		if (base[0] == 0 || base[1] == 0)
			return (0);
		else if (base[i] == '-' || base[i] == '+')
			return (0);
		else if ((base[i] == 32) || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (j < lenbase)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	whitespaces_sign_check(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	check_nbr_base(char *base, char c, int *ptr_k)
{
	int	k;

	k = 0;
	while (base[k])
	{
		if (base[k] == c)
		{
			*ptr_k = k;
			return (1);
		}
		k++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	lenbase;
	int	k;

	i = 0;
	result = 0;
	sign = whitespaces_sign_check(str, &i);
	lenbase = ft_strlen(base);
	k = 0;
	if (ft_check_error(base) == 1)
	{
		while (check_nbr_base(base, str[i], &k) == 1)
		{
			result *= lenbase;
			result += k;
			i++;
		}	
	}
	return (result * sign);
}
