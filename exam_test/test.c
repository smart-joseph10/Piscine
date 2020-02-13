/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 22:40:10 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/07 22:51:23 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	len;
	int	i;
	char tmp;

	len = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	i = 0;
	while(i<= (len+1)/2)
	{
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i] = tmp;
		i++;
	}
	write(1, str, len+1);
	return (str);
}

int	main(void)
{

//	char A[13] = "rainbow dash";

	rev_print("rainbow dash");
}
