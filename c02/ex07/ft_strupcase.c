/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 15:32:17 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/03 20:50:23 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (97 <= str[count] && str[count] <= 122)
		{
			str[count] -= 32;
			count++;
		}
		else
		{
			count++;
		}
	}
	return (str);
}
