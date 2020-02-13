/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:59:41 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/03 22:25:36 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conv(unsigned char np)
{
	char *hexa;

	hexa = "0123456789abcdef";
	if (np > 16)
	{
		ft_conv(np / 16);
		ft_conv(np % 16);
	}
	else
		ft_putchar(hexa[(int)np]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_conv(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
