# include "libft.h"
/*добавляет элемент в конец списка*/

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew_element;

	lstnew_element = (t_list *)malloc(sizeof(t_list));
	if (lstnew_element = NULL)
		return (NULL);
	lstnew_element -> content = content;
	lstnew_element -> next = NULL;
	return (lstnew_element);
}