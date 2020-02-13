/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:31:34 by yojeong           #+#    #+#             */
/*   Updated: 2020/02/12 16:35:28 by yojeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	long long	len;
	char		*buf;

	len = 0;
	while(src[len] != 0)
		len ++;
	buf = (char *)malloc(len + 1);
	buf[len] = 0;
	while(--len >= 0)
		buf[len] = src[len];
	return (buf);
}
