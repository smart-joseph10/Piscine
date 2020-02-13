/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 02:01:32 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/13 07:00:00 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	bsq(char *file)
{
	map_feature		*map;
	square_feature	*square;	

	if (file != 0)
		map = read_file(file);
	else
		map = read_stdin();
	if (map == 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	square = find_bsq(map);
	if (!square ->len)
		ft_putstr("map error\n");

	else
		print(map, square);
	free_map(map, map->y_len);
	free(square);
}

int		main(int argc, char *argv[])
{
	int i;

	if (argc <= 1)
		bsq(0);
	else
	{
		i = 1;
		while (i++ < argc)
			bsq(argv[i]);
	}
	return (0);
}
