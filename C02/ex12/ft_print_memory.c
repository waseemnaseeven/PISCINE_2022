/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:55:14 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/15 13:07:06 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhexa(char *hex, char *str)
{
	int	i;

	i = 0;
	hex = "0123456789abcdef";
	if (i < 2)
	{
		ft_putchar(hex[str[i] / 16]);
		ft_putchar(hex[str[i] % 16]);
	}
}

/*void	ft_printable(char *addr, int i)
{
	int	j;
	int	len;

	j = 0;
	if ((i + 1) % 16 == 0)
		len = 16;
	while (j < 16 - len) // boucle pour les espace
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
			ft_putchar(' ');
		j++;
	}
	if ((16 - len) % 2)
		ft_putchar(' ');
	j = 0;
	while (j < len)
	{
		if (*(addr + i / 16 * 16 + j) >= 32 && *(addr + i / 16 * 16 + j) <= 126)
			ft_putchar(*(addr + i / 16 * 16 + j));
		else
			ft_putchar('.');
		j++;
	}
	ft_putchar('\n');
	
}*/

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;	
	char	*tab;
	int		j;
	char	*hex;
	
	i = 0;
	tab = '\0';
	hex = '\0';	
	//if (addr && size > 0) // gere si size egal a 0
	{
		while (i < size)
		{
			while (tab[i] != '\0')
			{
				tab = addr;
				ft_printhexa(hex, addr + i); //fonction pour les hex
				//if (i % 2) // toutes les deux lettres
					//ft_putchar(' ');
				//if ((i + 1) % 16 == 0 || (i + 1) == size) // pour prendre l'occurence dapres ?
					// ft_printable(addr, i);
				i++;
			}	
			i++;
		}
	}
}

/*int	main(void)
{
	char	*tab;

	tab = "Bonjour les amin";
	ft_print_memory(tab, 16);
}*/
