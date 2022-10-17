/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:02:05 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/11 20:06:45 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	i = 0;
	while (i < n)
		((char *)s)[i++] = c;
	
}

int	main ()
{
	char b[] = "hello world !";

	// printf("%s\n",b);
	// ft_memset(b, 97, 1);
	// printf("hadiii deyalii : %s\n",b);
	ft_memset(b + 2, '_', 8);
	printf("hadiii deyal system : %s\n",b);
}
