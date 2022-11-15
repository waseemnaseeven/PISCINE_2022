#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

#include "ft_list.h"

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);

}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *f;

	if (*begin_list)
	{
		f = ft_create_elem(data);
		f->next = *begin_list;
		*begin_list = f;
		
	}
	else
		*begin_list = ft_create_elem(data);

}

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	else
		return ft_list_size(begin_list->next) + 1;
}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d\n", *(int *)list->data);
		list = list->next;
	}
}

int main(void)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	list = NULL;
	int a = 6;
	int b = 6;
	int c = 7;
	void *ptr_a = &a;
	void *ptr_b = &b;
	void *ptr_c = &c;
	ft_list_push_front(&list, ptr_a);
	ft_list_push_front(&list, ptr_b);
	ft_list_push_front(&list, ptr_c);
	ft_list_size(list);

	print_list(list);
	printf("%d\n", ft_list_size(list));
	return (0);
}

