# include "libft.h"
/*добавляет элемент в начало списка: говорим, что new встает перед *lst, а указатель на *lst теперь указываетс на new */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}