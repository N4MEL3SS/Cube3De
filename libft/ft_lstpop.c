/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:34:43 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:34:43 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstpop(t_list **lst)
{
	void	*data;
	t_list	*cur;

	data = (*lst)->content;
	cur = *lst;
	*lst = (*lst)->next;
	free(cur);
	return (data);
}
