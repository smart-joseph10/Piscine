/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:44:02 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/05 18:21:12 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[i])
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = 0;
	return (dest);
}
