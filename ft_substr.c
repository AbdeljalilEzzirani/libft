/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:20:19 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/02 15:39:42 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;

	i = 0;
	if (!s[i])
		return (NULL);
	p = (char *) malloc (sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (i <= len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[len + 1] = '\0';
	return (p);
}

/*int	main ()
{
	char str[200]="hello world !";
	char *ptr;
	ptr = ft_substr(str, 6, 8);
	printf ("%s\n", ptr);

	//char src[200]="hello world !";
	//char *p;
	//p = ft_substr(src, 6, 4);
	//printf ("%s\n", p);
}*/
