/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:16:58 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/11 14:46:32 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_bis;
	char	*dest_bis;
	char	temp;

	src_bis = (char *)src;
	dest_bis = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest_bis > src_bis)
	{
		while (n > 0)
		{
			temp = src_bis[n - 1];
			dest_bis[n - 1] = temp;
			n--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
