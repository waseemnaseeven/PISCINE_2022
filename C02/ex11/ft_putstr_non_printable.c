/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:32:51 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/16 19:16:59 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (1);
}

void	ft_printhexa(char *hex, char *str)
{
	int	i;

	i = 0;
	hex = "0123456789abcdef";
	ft_putchar(hex[(unsigned char)str[i] / 16]);
	ft_putchar(hex[(unsigned char)str[i] % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_printhexa(hex, str + (unsigned char)i);
		}
		i++;
	}
}

int	main(void)
{
	char ex[] = "Coucou\ntu\tvas\rbien?Ë";
	char ex2[] = "";
	ft_putstr_non_printable(ex);
	printf("\n");
	return (0);
}
