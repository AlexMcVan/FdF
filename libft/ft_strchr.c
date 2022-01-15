/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:31:18 by amarie-c          #+#    #+#             */
/*   Updated: 2021/05/26 10:45:36 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *lookin, int lookfor)
{
	int		i;
	char	*lookin_bis;

	lookin_bis = (char *)lookin;
	i = 0;
	while (lookin_bis[i] != '\0')
	{
		if (lookin_bis[i] == lookfor)
			return (&lookin_bis[i]);
		i++;
	}
	if (lookfor == '\0')
		return (&lookin_bis[i]);
	return (NULL);
}
