/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:26:53 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 14:24:53 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbofelements, size_t sizeofelement)
{
	void	*space;
	size_t	size;

	size = nbofelements * sizeofelement;
	space = (void *)malloc((nbofelements) * sizeofelement);
	if (space == NULL)
		return (NULL);
	ft_bzero(space, size);
	return (space);
}
