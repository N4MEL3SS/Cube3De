/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:18:39 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:18:39 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "libft.h"

# define MAX_FDS 32
# define BIG_BUF 262144
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 65536
# endif

typedef struct s_buf
{
	char		*s;
	char		*cur;
	uint32_t	max;
	uint32_t	cap;
}	t_buf;

int	get_next_line(int fd, char **line);

#endif
