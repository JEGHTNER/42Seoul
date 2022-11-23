/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:46:06 by jehelee           #+#    #+#             */
/*   Updated: 2022/11/23 15:20:13 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *string, char (*f)(unsigned int, char))
{
	char	*tmp_string;
	int		i;

	if (!string || !(f))
		return (0);
	tmp_string = malloc(sizeof(char) * (ft_strlen(string) + 1));
	if (!tmp_string)
		return (0);
	i = 0;
	while (string[i])
	{
		tmp_string[i] = f(i, string[i]);
		i++;
	}
	tmp_string[i] = '\0';
	return (tmp_string);
}