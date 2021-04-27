/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:47:53 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/27 14:11:25 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** The memccpy() function copies bytes from string src to string dst.
 * If the character c (as converted to an unsigned char)
 * occurs in the string src, the copy stops and a pointer
 * to the byte after the copy of c in the string dst is returned.
 * Oth-erwise, n bytes are copied, and a NULL pointer is returned.
 * The source and destination strings should not overlap,
 * as the behavior is undefined.
 **/
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*tmp_src;
	char	*tmp_dst;

	i = 0;
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	while (i < n)
	{
		((unsigned char *)tmp_dst)[i] = ((unsigned char *)tmp_src)[i];
		if (tmp_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}

// int main (void)
// {
//    // Массив источник данных
//    unsigned char src[15]= "123456789";

//    // Массив приемник данных
//    unsigned char dst[15]="";

//    // Копируем данные из массива src в массив dst
//    memccpy (dst, src,'7', 10);

//    // Вывод массива dst на консоль
//    printf ("dst: %s\n",dst);

//    return 0;
// }
