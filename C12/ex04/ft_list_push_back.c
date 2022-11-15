#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);

}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *f;
	t_list *node = *begin_list;

	if (*begin_list)
	{
		f = ft_create_elem(data);
		while (node->next != NULL) 
			node = node->next;
		node->next = f;
	}
	else
		*begin_list = ft_create_elem(data);

}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d",*(int *)list->data);
		list = list->next;
	}
}

int main(void)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	list = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	void *ptr_a = &a;
	void *ptr_b = &b;
	void *ptr_c = &c;
	ft_list_push_back(&list, ptr_a);
	ft_list_push_back(&list, ptr_b);
	ft_list_push_back(&list, ptr_c);

	print_list(list);
}
