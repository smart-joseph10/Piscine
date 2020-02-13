/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_draft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 21:09:04 by yojeong           #+#    #+#             */
/*   Updated: 2020/01/29 21:09:35 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	update(char *seven, int a, int b)
{
	write(1, seven, 7);
	if (seven[b] == '9')
	{
		seven[a]++;
		seven[b] = '0';
	}
	else
		seven[b]++;
}

void	ft_print_comb2(void)
{
	char	seven[7];

	seven[0] = '0';
	seven[1] = '0';
	seven[2] = ' ';
	seven[5] = ',';
	seven[6] = ' ';
	while (seven[0] != '9' || seven[1] != '8')
	{
		seven[3] = seven[0];
		if (seven[1] == '9')
		{
			seven[3]++;
			seven[4] = '0';
		}
		else
			seven[4] = seven[1] + 1;
		while (seven[3] != '9' || seven[4] != '9')
		{
			update(seven, 3, 4);
		}
		update(seven, 0, 1);
	}
	write(1, "98 99", 5);
}
