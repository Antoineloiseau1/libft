/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:03:07 by anloisea          #+#    #+#             */
/*   Updated: 2022/03/22 17:05:12 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str)
{
	for(int i = 0; str[i]; i++)
		write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	//char c = 'a';

	char str[30] = "aaabcabcda\n";
//	char *str2 = "cda";
	t_list **begin;
	t_list *first = ft_lstnew(str);
	begin = &first;

	printf("%p\n", begin);
//	int	n = -1243456;

	//printf("%s\n", ft_strtrim(str, str2));
	//printf("%d\n", n);
	//printf("%s\n", ft_itoa(n));
	
	//printf("%s\n", ft_strnstr(str, "cd", 8)); 	//STRNSTR

	/*puts(str);									//STRLCAT
	int	check = ft_strlcat(str, str2, 22);
	printf("Check = %d\n", check);
	puts(str);*/

	/*printf("str avant memmove:\n%s\n", str);		// MEMMOVE
	ft_memmove(str, str + 2, 3);
	printf("str apres memmove:\n%s\n", str);*/


	/*ft_strlcpy(str, str2, 19);					//strlcpy
	puts(str);*/

	/*ft_memcpy(str, str2, 15);						//MEMCPY
	puts(str);*/

	/*ft_memset(str, '0', 10);						//MEMSET
	printf("%s\n", str);*/

	/*ft_bzero(str, 0);								//BZERO
	printf("%s\n", str);*/
	
	//printf("%s\n", ft_strchr(argv[1], c));		//STRCHR
	//printf("%s\n", ft_strrchr(argv[1], c));		//STRRCHR
	free(begin);
	free(first);
	return (0);
}
