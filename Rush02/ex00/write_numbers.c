/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:28:31 by ablancha          #+#    #+#             */
/*   Updated: 2022/08/28 18:46:51 by ablancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_print_value(char *new_str);
char	*ft_find(char *dict, char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	write_numbers(char *dict, char *tab)
{
	int	i;
	int	index;
	int	size;
	char	*div;
	(void)	*dict;
	//char	find[2];

	index = 0;
	i = 0;
	size = ft_strlen(tab);
	while(i < size)
	{
		ft_putchar(tab[i]);
		if(ft_strlen(tab+i)%3 == 2)
        {
            if (tab[i] == '1')
			{
                ft_putchar(tab[i+1]);
				write(1, " ", 1);
        		i++;
            }                	
			else
            {
    			write(1, "0", 1);
				write(1, " ", 1);
            }
        }
		else if(((ft_strlen(tab+i+1)%3 ==0) || ft_strlen(tab+i)%3 == 0  ) && i != size-1 && tab[i] != '0')
        {
			div = malloc(sizeof(char) *ft_strlen(tab+i));
			div[0] = '1';
			index = 1;
			while(index < ft_strlen(tab+i))
			{
				div[index] = '0';
				index++;
			}
			write(1, " ", 1);
			ft_putstr(div);
			write(1, " ", 1);
    	}
		i++;
	}
}
