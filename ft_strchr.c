/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:27:43 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/27 14:11:25 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp_s;

	tmp_s = (const char *)s;
	if ((char)c == '\0')
		{
			while (*tmp_s != '\0')
				tmp_s++;
			return ((char *)s);
		}
	else
	{
		while (*tmp_s != '\0')
			if (*tmp_s == (char)c)
				return ((char *)s);
			tmp_s++;
	}
	return (0);
}
