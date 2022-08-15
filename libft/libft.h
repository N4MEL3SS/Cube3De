/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:18:45 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:18:45 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdint.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int			ft_isdigit(int c);

size_t		ft_strlen(const char *s);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strchr(const char *s, int c);

void		*ft_memcpy(void *dst, const void *src, size_t n);

void		*ft_assign_ptr(void **dst_ptr, void *src_ptr);
void		*ft_memset(void *b, int c, size_t len);

char		*ft_substr(char const *s, unsigned int start, size_t len);

void		ft_putendl_fd(char *s, int fd);

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		*ft_lstpop(t_list **lst);

int			ft_max(int a, int b);
uint32_t	ft_umin(uint32_t a, uint32_t b);
uint32_t	ft_umax(uint32_t a, uint32_t b);

#endif
