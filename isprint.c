/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:40:12 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/10 22:16:21 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main ()
{
	int	s;
	int j;

	s = 126;
	j = ft_isprint(s);
	printf("hadii deyalii :%d\n", j);
	j = isprint(s);
	printf("hadii deyaal system :%d\n", j);
}
