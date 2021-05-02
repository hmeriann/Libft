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
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
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