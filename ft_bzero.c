/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:46:22 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/30 17:21:21 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main ()
{
	char s[200]="hello world ! hello world ?!";
	size_t i;

	i = 5;
	ft_bzero(s + 5, i);
	printf ("%s\n", s);


	char sv[200]="hello world ! hello world ?!";
	size_t j;

	j = 5;
	bzero(sv + 5, j);
	printf ("%s\n", sv);
}*/
