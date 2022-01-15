/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:43:26 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/09 17:05:52 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isalnum(int character)
{
	if ((character >= 65 && character <= 90)
		|| (character >= 97 && character <= 122)
		|| (character >= 48 && character <= 57))
		return (1);
	else
		return (0);
}
