/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:58:13 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/10 14:20:44 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\r') || (c == '\t')
		|| (c == '\v') || (c == '\f'))
		return (1);
	else
		return (0);
}

static int	is_signe(char c)
{
	if ((c == '-') || (c == '+'))
		return (1);
	else
		return (0);
}

static int	is_chiffre(char c)
{
	if ((c <= '9') && (c >= '0'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			signe;
	long int	nb;

	i = 0;
	nb = 0;
	signe = 1;
	while (is_space(str[i]) == 1)
		i++;
	while (is_signe(str[i]) == 1)
	{
		if (str[i] == '-')
			signe = -signe;
		if (is_signe(str[i - 1]) == 1)
			return (0);
		i++;
	}
	while (is_chiffre(str[i]) == 1)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(nb * signe));
}
