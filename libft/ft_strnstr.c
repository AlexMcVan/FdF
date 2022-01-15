/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:55:42 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 12:31:26 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystack_bis;
	char	*needle_bis;

	i = 0;
	j = 0;
	haystack_bis = (char *)haystack;
	needle_bis = (char *)needle;
	if (ft_strlen(needle) == 0 || needle == NULL)
		return (haystack_bis);
	while (haystack_bis[i] && i < len)
	{
		if (haystack_bis[i] == needle_bis[j])
			j++;
		else
			j = 0;
		if (needle_bis[j] == '\0')
			return (haystack_bis + 1 + i - j);
		i++;
	}
	return (NULL);
}
