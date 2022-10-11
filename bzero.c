/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:08:13 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/11 20:20:28 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = 0;
}

/*void *ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	ft_memset(s, 0, n);
}*/

int	main ()
{
	char s[13]="hello world !";

	ft_bzero(s, 2);
	printf ("hadii deyaliii : %s\n", s+2);
	bzero(s, 2);
	printf ("hadii deyal system : %s\n", s+2);
}