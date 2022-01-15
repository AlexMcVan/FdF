/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:19:53 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 11:55:20 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	length_src;

	i = 0;
	length_src = 0;
	if (dest == NULL)
		return (0);
	while (src[length_src] != '\0')
	{
		length_src++;
	}
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dest[i] = ((char *)src)[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length_src);
}
