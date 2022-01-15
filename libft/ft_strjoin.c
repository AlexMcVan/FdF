/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:23:37 by amarie-c          #+#    #+#             */
/*   Updated: 2021/07/15 09:06:03 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*junction;
	size_t	i;
	
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	junction = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (junction == NULL || (len1 == 0 && len2 == 0))
		return (NULL);
	i = 0;
	while (i < len1)
	{
		junction[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		junction[len1 + i] = s2[i];
		i++;
	}
	junction[len1 + i] = '\0';
	return (junction);
}
