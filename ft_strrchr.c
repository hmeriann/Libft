/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:48:01 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/01 15:51:35 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*tmp != '\0')
		tmp++;
	if (c == '\0')
		return ((char *)tmp);
	while (tmp-- >= s)
	{
		if (*tmp == (unsigned char)c)
			return ((char *)tmp);
	}
	return (NULL);
}
