/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehelee <jehelee@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:03:07 by jehelee           #+#    #+#             */
/*   Updated: 2022/11/23 20:29:46 by jehelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *trim_set)
{
	while (*trim_set)
	{
		if (c == *trim_set)
			return (1);
		trim_set++;
	}
	return (0);
}

static int	get_start(char const *string1, char const *trim_set)
{
	int	i;

	i = 0;
	while (string1[i] && check_set(string1[i], trim_set))
		i++;
	return (i);
}

static int	get_end(char const *string1, char const *trim_set)
{
	int	i;

	i = ft_strlen(string1) - 1;
	while (i >= 0 && check_set(string1[i], trim_set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *string1, char const *trim_set)
{
	int		start;
	int		end;
	char	*tmp_string;

	if (!string1 || !trim_set)
		return (0);
	start = get_start(string1, trim_set);
	end = get_end(string1, trim_set);
	if (start > end)
		return (ft_strdup(""));
	tmp_string = malloc(sizeof(char) * (end - start + 2));
	if (!tmp_string)
		return (0);
	ft_strlcpy(tmp_string, &string1[start], (end - start + 1) + 1);
	return (tmp_string);
}
