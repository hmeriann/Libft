/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:04:50 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/02 20:26:48 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** The strnstr() function locates the first occurrence of the null-terminated
 * string needle in the string haystack, where not more than len characters are
 * searched.  Characters that appear after a `\0' character are not searched.
 * If needle is an empty string, haystack is returned; if needle occurs nowhere
 * in haystack, NULL is returned; otherwise a pointer to the first character of
 * the first occurrence of needle is returned.
**/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	min_len;

	min_len = len;
	if (ft_strlen(haystack) < len)
		min_len = ft_strlen(haystack);
	if (ft_strlen(needle) > min_len)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i <= min_len - ft_strlen(needle))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < len)
		{
			j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
