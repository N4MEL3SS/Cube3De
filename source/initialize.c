/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:19:24 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:19:24 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube_3d.h"

static inline void	get_screen_size(void *mlx_ptr, int *size_x, int *size_y)
{
	(void)mlx_ptr;
	mlx_get_screen_size(size_x, size_y);
}

void	initialize_game(t_game *g)
{
	int	n;

	get_screen_size(g->mlx, (int *)&g->img.size.x, (int *)&g->img.size.y);
	g->img.aspect = (double)g->img.size.x / (double)g->img.size.y;
	g->win = mlx_new_window(g->mlx, g->img.size.x, g->img.size.y, TITLE);
	if (g->win == NULL)
		terminate(g, ERR_MLX, strerror(errno));
	g->img.ptr = mlx_new_image(g->mlx, g->img.size.x, g->img.size.y);
	if (g->img.ptr == NULL)
		terminate(g, ERR_MLX, strerror(errno));
	g->img.data = (unsigned int *)mlx_get_data_addr(g->img.ptr, &n, &n, &n);
	g->column = malloc(g->img.size.x * sizeof(*g->column));
	if (g->column == NULL)
		terminate(g, ERR_MEM, "Memory allocation failed (ray columns)");
	g->p.vect.y = sin(g->p.angle);
	g->p.vect.x = cos(g->p.angle);
	player_set_fov(g, 0, true);
}
