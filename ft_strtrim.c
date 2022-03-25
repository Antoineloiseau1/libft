/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:21:52 by anloisea          #+#    #+#             */
/*   Updated: 2022/03/22 16:27:10 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_checkset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	int	ft_alloc(const char *s1, const char *set)
{
	int		size;
	size_t	i;

	size = 0;
	i = 0;
	while (ft_checkset(s1[i], set) && s1[i])
		i++;
	while (!ft_checkset(s1[i], set) && s1[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	size_t	i;
	int		j;

	trim = malloc(ft_alloc(s1, set) * sizeof(*trim));
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (ft_checkset(s1[i], set) && s1[i])
		i++;
	j = 0;
	while (!ft_checkset(s1[i], set) && s1[i])
	{
		trim[j] = s1[i];
		i++;
		j++;
	}
	trim[j] = 0;
	return (trim);
}
