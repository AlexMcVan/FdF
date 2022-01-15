/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:59 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 09:37:15 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_bis;
	size_t			i;
	unsigned char	char_c;

	i = 0;
	s_bis = (unsigned char *)s;
	char_c = (unsigned char)c;
	while (i < n - 1)
	{
		i++;
		if (s_bis[i] == char_c)
			return (&s_bis[i]);
	}
	return (NULL);
}
