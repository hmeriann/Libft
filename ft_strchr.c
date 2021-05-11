/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:27:43 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/30 15:29:34 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/** находит первое появление заданного символа в строке.**/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (1)
	{
		if (*ptr == (unsigned char)c)
			return ((char *)ptr);
		if (*ptr == '\0')
			break ;
		ptr++;
	}
	return (NULL);
}
