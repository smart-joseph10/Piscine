/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 18:13:00 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/10 15:15:55 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_base(char *base)
{
	int i;
	int j;
	int len;

	len = 0;
	j = 0;
	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	tmp;
	int		base_len;

	base_len = check_base(base);
	if (base_len == 0)
		return ;
	if (nbr != 0)
	{
		tmp = base[nbr % base_len];
		nbr = nbr / base_len;
		ft_putnbr_base(nbr, base);
		write(1, &tmp, 1);
	}
}
