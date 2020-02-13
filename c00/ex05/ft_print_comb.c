/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:17:37 by yojeong           #+#    #+#             */
/*   Updated: 2020/01/28 18:06:46 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char triple[5];

	triple[0] = '0' - 1;
	triple[3] = ',';
	triple[4] = ' ';
	while (++triple[0] <= '6')
	{
		triple[1] = triple[0];
		while (++triple[1] <= '8')
		{
			triple[2] = triple[1];
			while (++triple[2] <= '9')
			{
				write(1, triple, 5);
			}
		}
	}
	write(1, "789", 3);
}
