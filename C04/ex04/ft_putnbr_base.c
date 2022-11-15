/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:52:35 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/23 08:33:39 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == 0)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		else if (base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_convert(int nbr, char *base, int len)
{
	if (nbr < 0)
	{
		if (nbr <= -len)
		{
			ft_convert(nbr / len, base, len);
			ft_convert(nbr % len, base, len);
		}
		else
			ft_putchar(base[-nbr]);
	}
	else
	{
		if (nbr >= len)
		{
			ft_convert(nbr / len, base, len);
			ft_convert(nbr % len, base, len);
		}
		else
			ft_putchar(base[nbr]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	error;
	int	len;

	error = ft_check_error(base);
	len = ft_strlen(base);
	if (error == 1)
	{
		if (nbr < 0)
			ft_putchar('-');
		ft_convert(nbr, base, len);
	}
}

/*int main (void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(12, "01");
	printf("\n");
	ft_putnbr_base(14, "poneyvif");
	printf("\n");
	ft_putnbr_base(42, "0123456789abcdef");
}*/
