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
<<<<<<< HEAD
// #include <stdio.h>
// #include <string.h>

||||||| ce0b89e

static int	isThereNeedle(const char *haystack, const char *needle, size_t len);
static int	indexOfTheFirstCharInHay(const char *haystack, const char *needle, \
									size_t len);

=======

>>>>>>> 195d716bd824b9ae07c35cba3d21fce197790f15
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
<<<<<<< HEAD
	size_t	needle_len;
	size_t	hay_len;
	size_t	i;
	size_t	j;
	size_t	min_len;

	hay_len = ft_strlen(haystack);
	// printf("%zu\n", hay_len);
	needle_len = ft_strlen(needle);
	// printf("%zu\n", needle_len);
	min_len = len;
	if (hay_len < len)
		min_len = hay_len;
	// printf("%zu\n", min_len); //сначала найти максимальную длину области поиска
	if (needle_len > min_len)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i <= min_len - needle_len)
	{
		// printf("i = %zu\n", i);
		j = 0;
		while (haystack[i + j] == needle[j] && j < len) //i - значение, которое закрепили в большой строке, j - двигаем, чтобы соответствовать индексу в мелкой строке
		{
			// printf("i = %zu, j = %zu, %c, %c\n", i, j, haystack[i + j], needle[j]);
			j++;
			if (j == needle_len) //значит, мы все сравнили удачно и вывалились за край нидла, то есть прошли весь кусок мелкой строки
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s1 = "abcd";
// 	char *s2 = "cd";
// 	size_t max = 4;

// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);

// 	printf("%s\n %s", i1, i2);
// }
||||||| ce0b89e
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
=======
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
>>>>>>> 195d716bd824b9ae07c35cba3d21fce197790f15
