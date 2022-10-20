/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:04:07 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/20 20:59:38 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int			i;

	i = 0;
	while (s[i] <= '\0')
	{
		if (c == s[i])
			return (s[i]);
	}
	return (0);
}

int	main ()
{
	char s[]="hello world !";
	char r[100]="";
	r = ft_strchr(s, 111);
	printf ("hada deyaliii : %s\n", r);

	char l[]="hello world !";
	char k[100]="";

	strchr(l, 119);
	printf ("hada deyalhom : %s\n", k);
}
