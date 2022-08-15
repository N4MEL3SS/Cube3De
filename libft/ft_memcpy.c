/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:32:07 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:32:07 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cur;

	if (!dst && !src)
		return (NULL);
	cur = dst;
	while (n--)
		*cur++ = *(char *)src++;
	return (dst);
}
