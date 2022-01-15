/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:01:12 by amarie-c          #+#    #+#             */
/*   Updated: 2021/07/07 11:10:48 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*copy;
	t_list	*temp;

	if (!del || !lst || !f)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
	{
		return (0);
	}
	copy = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&copy, del);
			return (0);
		}
		temp = temp->next;
		lst = lst->next;
	}
	temp->next = NULL;
	return (copy);
}
