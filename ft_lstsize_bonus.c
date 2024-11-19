/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:00:57 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/02 19:57:21 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		size;

	if (!lst)
		return (0);
	size = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
