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
/*
void	ft_free_fct(void *data)
{
	printf("%d", *(int *)data);
	free(data);
}
*/

void	ft_list_clear(t_list *begin_list)
{
	t_list *sup = begin_list;
	t_list *next;

	while (sup)
	{
		next = sup->next;
		free(sup);
		sup = next;
	}
	sup = NULL;
	
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
	int a = 14;
	void *ptr_a = &a;
	list = ft_create_elem(ptr_a);
	
	print_list(list);

	ft_list_clear(list);
	int b = 15;
	void *ptr_b = &b;
	list = ft_create_elem(ptr_b);
	print_list(list);

}
