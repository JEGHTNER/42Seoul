/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:55:52 by jehelee           #+#    #+#             */
/*   Updated: 2022/11/15 12:38:58 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*dst_tmp;
	const char	*src_tmp;
	size_t		i;

	dst_tmp = (char *) dst;
	src_tmp = (const char *) src;
	i = 0;
	while (i < len)
	{
		dst_tmp[i] = src_tmp[i];
		i++;
	}
	return (dst);
}