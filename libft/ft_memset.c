/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:34:13 by hmoulher          #+#    #+#             */
/*   Updated: 2018/11/14 10:43:21 by hmoulher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str_2;
	size_t	i;

	i = 0;
	str_2 = str;
	while (i < n)
	{
		str_2[i] = (char)c;
		i++;
	}
	return (str);
}