/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_borders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:17:02 by celadia           #+#    #+#             */
/*   Updated: 2022/08/15 14:17:02 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube_3d.h"

void	player_control_borders(t_game *game)
{
	if (game->p.angle > PI2)
		game->p.angle -= PI2;
	if (game->p.angle < 0)
		game->p.angle += PI2;
	if (game->p.pos.x < 0)
		game->p.pos.x = 0.0001;
	if (game->p.pos.y < 0)
		game->p.pos.y = 0.0001;
	if (game->p.pos.x >= game->map.size.x)
		game->p.pos.x = game->map.size.x - 0.0001;
	if (game->p.pos.y >= game->map.size.y)
		game->p.pos.y = game->map.size.y - 0.0001;
}
