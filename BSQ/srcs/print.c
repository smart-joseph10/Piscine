/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remodeling.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 07:15:46 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/13 07:15:59 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	modify_map(map_feature *map, square_feature *square)
{
	int		i;
	int		j;
	char	full;

	full = map->full;
	i = square->y - square->len;
	while (++i <= square->y)
	{
		j = square->x - square->len;
		while (++j <= square->x)
			map->arr[i][j] = full;
	}
}

void	print(map_feature *map, square_feature *square)
{
	int		i;

	modify_map(map, square);
	i = -1;
	while (++i < map->y_len)
	{
		write(1, map->arr[i], map->x_len);
		ft_putchar('\n');
	}
}
