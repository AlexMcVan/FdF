/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:30:11 by amarie-c          #+#    #+#             */
/*   Updated: 2021/07/01 11:18:52 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_neg(int nb)
{
	if (nb < 0)
		return (1);
	else
		return (0);
}

static int	ft_nb_digit(int nb)
{
	int	digit;

	digit = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		nb_digit;
	int		n_bis;

	nb_digit = ft_nb_digit(n);
	n_bis = n;
	buffer = ft_calloc((nb_digit + ft_is_neg(n) + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	if (ft_is_neg(n) == 1)
	{
		buffer[0] = '-';
		buffer[nb_digit + ft_is_neg(n) - 1] = - (n_bis % 10) + '0';
		n_bis = -(n / 10);
	}
	while (n_bis / 10 != 0 || n_bis % 10 != 0)
	{
		buffer[ft_nb_digit(n_bis) + ft_is_neg(n) - 1] = n_bis % 10 + '0';
		n_bis /= 10;
	}
	if (n == 0)
		buffer[0] = '0';
	buffer [nb_digit + ft_is_neg(n)] = '\0';
	return (buffer);
}
