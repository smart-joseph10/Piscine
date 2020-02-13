/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:41:09 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/13 03:56:34 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
#define STRUCT_H

type struct		t_map_feature{
	int		x_len;
	int		y_len;
	char	**arr;
	char	empty;
	char	full;
	char	obstacle;
}				map_feature;



typedef struct		t_square_feature{
	int		x;
	int		y;
	int		len;
}				square_feature;
#endif
