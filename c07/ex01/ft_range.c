/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:40:11 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/12 21:13:37 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*answer;
	int	*tmp;

	if (min >=max)
		return (0);
	answer = malloc(sizeof(int) * ((long long)max - min));
	if (answer == 0)
		return (0);
	tmp = answer;
	while (min < max)
	{
		*(tmp) = min;
		tmp++;
		min++;
	}	
	return (answer);
}
