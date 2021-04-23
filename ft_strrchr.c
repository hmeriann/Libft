/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:48:01 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/23 18:27:07 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp_s;
	char	*last_c;

	tmp_s = (char *)s;
	last_c = NULL;
	if ((char)c == '\0')
		{
			while (*tmp_s++)
				tmp_s++;
			return ((char *)last_c);
		}
	else
	{
		while (*tmp_s++)
			{
				if (*tmp_s == (char)c)
					*last_c = *tmp_s;
			}
			tmp_s++;
		return ((char *)last_c);
	}
	return (0);
}
