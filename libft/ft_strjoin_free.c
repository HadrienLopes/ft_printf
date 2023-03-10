/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:53:06 by hmoulher          #+#    #+#             */
/*   Updated: 2019/01/17 11:53:09 by hmoulher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *str, char *buff)
{
	char *free_str;

	free_str = str;
	if (!(str = ft_strjoin(str, buff)))
		return (0);
	if (free_str)
		free(free_str);
	return (str);
}

char	*ft_strjoin_eerf(char *str, char *buff)
{
	char *free_str;

	free_str = buff;
	if (!(buff = ft_strjoin(str, buff)))
		return (0);
	if (free_str)
		free(free_str);
	return (buff);
}
