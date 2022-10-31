/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:02:05 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/30 17:17:49 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// void *ft_memset(void *b, int c, size_t len)
// {
// 	size_t i;

// 	i = 0;
// 	while (i <= len)
// 		((char *)b)[i++] = c;
// 	b = (void *)b;
// 	return (b);
// }

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char *str = (char*)s;
	i = 0;
	while (i < n)
		str[i++] = c;
	return str;
}

/*int	main()
{
	char	str[] = "Hello";
	char	p = 'p';
	printf("%s", ft_memset(str, p, 4));
	return (0);
}*/


/*int	main ()
{
	char *b = NULL;

	// printf("%s\n",b);
	// ft_memset(b, 97, 1);
	// printf("hadiii deyalii : %s\n",b);
	ft_memset(b + 2, '_', 8);
	printf("hadiii deyal system : %s\n",b);
	memset(b + 2, '_', 8);
	printf("hadiii deyal system : %s\n",b);
}*/
