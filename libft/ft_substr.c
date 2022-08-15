/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:33:18 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:33:18 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*cur;

	substr = malloc(++len);
	if (substr == NULL)
		return (NULL);
	cur = substr;
	s += start;
	while (--len)
		*cur++ = *s++;
	*cur = '\0';
	return (substr);
}
