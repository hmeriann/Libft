# include "libft.h"
/* считает количество элементов в листе. получает указатель на голову и возврашает количество элементов*/

int ft_lstsize(t_list *lst)
{
	int counter;
	t_list *tmp;

	counter = 0;
	if (lst == NULL)
		return (0);
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = tmp -> next;
		counter++;
	}
	return (counter);
}