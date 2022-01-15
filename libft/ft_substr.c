/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:49:18 by amarie-c          #+#    #+#             */
/*   Updated: 2021/07/15 09:54:15 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newchain;
	size_t		i;

	if (len == 0 || s == NULL || ft_strlen(s) < (start + len))
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	newchain = ft_calloc(len + 1, sizeof(char));
	if (newchain == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newchain[i] = s[start + i];
		i++;
	}
	newchain[i] = '\0';
	return (newchain);
}
