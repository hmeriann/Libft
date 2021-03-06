/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:18:44 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/12 17:19:46 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* итерирует по каждому элементу списка и применяет
к контенту каждого элемента функцию 'f'*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
