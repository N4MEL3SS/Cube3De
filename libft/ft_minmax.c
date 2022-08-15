/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:35:37 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:35:37 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

uint32_t	ft_umin(uint32_t a, uint32_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

uint32_t	ft_umax(uint32_t a, uint32_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
