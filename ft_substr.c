/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:22 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/02 20:50:54 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;	
	size_t	return_len;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	return_len = ft_min((s_len - start), len);
	tmp = (char *)malloc(sizeof(char) * (return_len + 1));
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, s + start, return_len + 1);
	return (tmp);
}

// int main (void)
// {
// 	char *str = "i just want this part #############";
// 	size_t size = 22;
// 	char *ret = ft_substr(str, 0, size);

// 	printf("%s\n", ret);
// }