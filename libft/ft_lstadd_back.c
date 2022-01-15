/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 17:02:10 by amarie-c          #+#    #+#             */
/*   Updated: 2021/07/01 11:35:12 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*node;

	if (!alst || !new)
		return ;
	node = *alst;
	if (!*alst)
		*alst = new;
	else
	{	
		while (node->next != NULL)
			node = (*node).next;
		node -> next = new;
		new -> next = NULL;
	}
}
