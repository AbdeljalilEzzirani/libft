/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:20:19 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/08 00:06:54 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;
	size_t				j;

	i = 0;
	if (s == NULL)
		return (NULL);
	j = ft_strlen(s);
	if (start >= j)
		return (NULL);// khaseha tereturner (NULL)
	if (len > j)
		len = j - start;
	p = (char *) malloc (sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int	main ()
{
	char str[]="hello world !";
	char *ptr;
	ptr = ft_substr(str, 16, 20);
	printf ("%s\n", ptr);
}*/