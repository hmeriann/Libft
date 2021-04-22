/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:08:01 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/22 16:02:40 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)s;
	
	if (n == 0)
		return;
	while (n != 0)
	{
		tmp[n - 1] = '\0';
		n--;
	}
}

int main(void)
{
	char arr[] = "123456789";
	int len = 9;
	
	ft_bzero(arr, 5);
	write(1, arr, len);

	return 0;
}