/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:47:46 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 09:47:18 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;
	size_t			i;

	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	i = 0;
	while (s1_bis && s2_bis && i < n - 1)
	{
		if (s1_bis[i] != s2_bis[i])
			return (s1_bis[i] - s2_bis[i]);
		i++;
	}
	return (s1_bis[i] - s2_bis[i]);
}
