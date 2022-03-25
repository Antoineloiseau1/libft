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

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	//char c = 'a';
	char str[30] = "aaabcabcd";
	//char *str2 = "coucou le nerd";
	int	n = -1243456;

	printf("%d\n", n);
	printf("%s\n", ft_itoa(n));
	
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
	return (0);
}
