/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:02:05 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/11 17:50:13 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i <= len)
		((char *)b)[i++] = c;
	b = (void *)b;
	return (b);
}

int	main ()
{
	char b[] = "hello world !";

	printf("%s\n",b);
	ft_memset(b, 97, 1);
	printf("hadiii deyalii : %s\n",b);
	memset(b, 97,1);
	printf("hadiii deyal system : %s\n",b);
}
