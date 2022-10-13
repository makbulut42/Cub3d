/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <iyarikan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:54:16 by iyarikan          #+#    #+#             */
/*   Updated: 2022/10/13 18:41:05 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_parse.h"

void	map_control(char *av)
{
	t_game		*game;
	t_control	*control;
	int			line;

	line = 0;
	if (cub_control(av))
		file_error(game, '1');
	game = file_(av, &line);
	parse(game);
	value_control(game);
	//map_check(game, control);
	check_chars(game);
	space_control(game);
	zero_control(game);
///	extra_line(&game, av);
}
