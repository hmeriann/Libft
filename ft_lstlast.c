#include "libft.h"
/* передвигает начало списка вниз по списку и находит последний элемент списка*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp -> next)
		tmp = tmp -> next;
	return(tmp);
}