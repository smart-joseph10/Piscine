/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 21:33:00 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/10 20:31:11 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_len = 0;
char *g_base;
int g_sign = 1;
int g_result = 0;

int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		g_len++;
	}
	return (g_len);
}

int	ft_str_check(char c)
{
	int i;

	i = 0;
	while (i < g_len)
	{
		if (c == g_base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int cnt;

	g_base = base;
	g_len = check_base(base);
	if (g_len == 0)
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			g_sign *= -1;
	while (str[i])
	{
		cnt = ft_str_check(str[i]);
		if (cnt == -1)
			break ;
		g_result *= g_len;
		g_result += cnt;
		i++;
	}
	g_result *= g_sign;
	return (g_result);
}
