# include "libft.h"
/* считает количество элементов в листе. получает указатель на голову и возврашает количество элементов*/

int ft_lstsize(t_list *lst)
{
	int counter;
	t_list *tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp -> next != NULL)
	{
		tmp = tmp -> next;
		counter++;
	}
	return (counter);
}