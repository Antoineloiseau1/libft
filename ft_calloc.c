/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:01:59 by anloisea          #+#    #+#             */
/*   Updated: 2022/03/21 17:09:25 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	if (count == 0 || size == 0)
		return (NULL);
	if (count * size > 4294967295)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = malloc(count * size);
	i = 0;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
