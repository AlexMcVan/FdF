/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:32:01 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/09 19:09:50 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_bis;
	unsigned char	*src_bis;
	unsigned char	c_bis;

	i = 0;
	dest_bis = (unsigned char *)dest;
	src_bis = (unsigned char *)src;
	c_bis = (unsigned char)c;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		if (src_bis[i] == c_bis)
		{
			dest_bis[i] = c_bis;
			return (&dest_bis[i + 1]);
		}
		dest_bis[i] = src_bis[i];
		i++;
	}
	return (NULL);
}
