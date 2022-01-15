/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:36:47 by amarie-c          #+#    #+#             */
/*   Updated: 2021/07/15 09:43:02 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_isinside(char compare, char *set)
{
	while (*set)
	{
		if (compare == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*copy;

	begin = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_isinside(s1[begin], (char *) set) == 1)
		begin++;
	if (begin == ft_strlen(s1))
	{
		copy = ft_strdup("");
		if (!copy)
			return (NULL);
		else
			return (copy);
	}
	while (ft_isinside(s1[end - 1], (char *) set) == 1)
		end--;
	copy = ft_substr(s1, begin, end - begin);
	return (copy);
}
