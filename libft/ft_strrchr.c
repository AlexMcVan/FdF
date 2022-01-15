/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:56:05 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 10:25:59 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *searchin, int searchfor)
{
	int		i;
	char	*searchin_char;
	char	searchfor_char;

	searchin_char = (char *)searchin;
	searchfor_char = (char)searchfor;
	i = 0;
	while (searchin_char[i] != '\0')
	{
		i++;
	}
	if (searchfor_char == '\0')
		return (&searchin_char[i]);
	while (i > -1)
	{
		if (searchin_char[i] == searchfor_char)
			return (&searchin_char[i]);
		i--;
	}
	return (NULL);
}
