/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_3d.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:18:29 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:18:29 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_3D_H
# define CUBE_3D_H

# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <math.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <time.h>
# include <unistd.h>

# include "libft.h"
# include "get_next_line.h"
# include "mlx.h"

# define TITLE	"cube 3D"

# define ERR_MLX	1
# define ERR_ARGS	2
# define ERR_PARSE	3
# define ERR_MEM	4
# define ERR_BMP	5

# define WALL_N	0
# define WALL_S	1
# define WALL_W	2
# define WALL_E	3

# define K_EXIT			53

# define K_MOVE_FORWARD	13
# define K_MOVE_LEFT	0
# define K_MOVE_BACK	1
# define K_MOVE_RIGHT	2
# define K_TURN_LEFT	123
# define K_TURN_RIGHT	124

# define K_FOV_RESET	67
# define K_FOV_PLUS		69
# define K_FOV_MINUS	78

# define PL_SPEED	0.05
# define PI2		6.28318530718

typedef struct s_upoint
{
	unsigned int	x;
	unsigned int	y;
}	t_upoint;

typedef struct s_fpoint
{
	double		x;
	double		y;
}	t_fpoint;

typedef struct s_img
{
	void			*ptr;
	unsigned		*data;
	t_upoint		size;
	double			aspect;
	unsigned int	src_x;
	unsigned int	src_y;
	unsigned int	offset;
}	t_img;

typedef struct s_game
{
	bool			test;
	void			*mlx;
	void			*win;
	t_img			img;
	struct			s_player
	{
		t_fpoint	pos;
		double		angle;
		t_fpoint	vect;
	}				p;
	bool			key[512];
	struct			s_map
	{
		t_upoint	size;
		char		**grid;
	}				map;
	float			fov;
	float			col_center;
	double			col_step;
	double			col_scale;
	struct			s_column
	{
		unsigned int	height;
		double			texture_pos;
		char			dir;
	}				*column;
	unsigned int	color_ceil;
	unsigned int	color_floor;
	t_img			texture[4];
}	t_game;

void		player_set_fov(t_game *game, float fov, bool reset);
int			game_loop(t_game *game);

void		initialize_game(t_game *game);

void		parse(char *filename, t_game *game);
void		parse_scene(int file_fd, char **line, t_game *game);
void		parse_map(int file_fd, char *line, t_game *game);
void		validate_settings(t_game *game);

void		set_ceilfloor(const char *color_string, unsigned int *target, \
							t_game *game);
void		set_textures(char *string, t_game *game);
void		set_textures_import(char *path, t_img *dst_img, t_game *game);

void		set_map(t_game *game, t_list *map);
void		set_map_process(t_game *game);
void		set_map_check_cell(t_game *game, char **map, t_upoint pt);

void		player_control(t_game *game);
int			hook_key_press(int key_code, t_game *game);
int			hook_key_release(int key_code, t_game *game);
int			hook_exit(t_game *game);

void		player_control_borders(t_game *g);

void		ray_cast(t_game *game);
void		ray_intersect(t_game *g, double angle, unsigned int ray);
t_fpoint	ray_intersect_x(t_game *game, t_fpoint step);
t_fpoint	ray_intersect_y(t_game *game, t_fpoint step);

void		img_ceilfloor_fill_rgb(t_img *img, int ceil, int floor);
void		draw_walls(t_game *g);
void		draw_wall_scaled(t_img *game_img, const t_img *src_img, \
							const struct s_column *column, unsigned int x);

char		*atoi_limited(unsigned int *dst_int, const char *src_string, \
														unsigned int limit);
int			terminate(t_game *game, int return_value, char *message);
void		free_resources(t_game *g);

void		ft_putendl_fd(char *s, int fd);

#endif
