/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 00:09:42 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/13 00:09:46 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	answer;
	int *tmp;

	if (min >= max)
		return (0);
	answer = max - min;
	*range = (int*)malloc(sizeof(int) *answer);
	if (!*range)
		return (-1);
	tmp = *range;
	while (min <max)
		*(tmp++) = min++;
	return (answer);
}



int		ft_ultimate_range(int **range, int min, int max)
{
	int answer;
	int *tmp;

	if (min >= max)
		return (0);
	answer = max - min;
	*range = 


}
