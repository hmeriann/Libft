/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:04:50 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/27 14:11:25 by hmeriann         ###   ########.fr       */
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

static int	isThereNeedle(const char *haystack, const char *needle, size_t len);
static int	indexOfTheFirstCharInHay(const char *haystack, const char *needle, \
									size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == NULL || *needle == '\0')
		return ((char *)haystack);
	else if (!&isThereNeedle || &ndexOfTheFirstCharInHay == 0)
		return (NULL);
	else
		return (*haystack[indexOfTheFirstCharInHay]);
}

static int	isThereNeedle(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	isStringPresented;

	i = 0;
	j = 0;
	isStringPresented = 0;
	while (*haystack != '\0' && (size_t)i <= len)
	{
		while (*needle != '\0')
		{
			if (*(char)needle[j] == *(char)haystack[i])
			{
				i++, j++, isStringPresented = 1;
			}
			else
				i++, j = 0, isStringPresented = 0;
		}
		return (isStringPresented);
	}
}

static int	indexOfTheFirstCharInHay(const char *haystack, const char *needle, \
									size_t len)
{
	int	i;
	int	j;
	int	isStringPresented;

	i = 0;
	j = 0;
	isStringPresented = 0;
	while (*haystack != '\0' && (size_t)i <= len)
	{
		while (*needle != '\0')
		{
			if (*(char)needle[j] == *(char)haystack[i])
			{
				i++, j++, isStringPresented = 1;
			}
			else
				i++, j = 0, isStringPresented = 0;
		}
		if (isStringPresented == 1)
			return (i - j);
		return (-1);
	}
}
