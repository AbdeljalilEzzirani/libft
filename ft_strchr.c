/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:04:07 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/15 17:53:57 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if ((char )c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char )c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main ()
// {
// 	char s[]="hello world !";
// 	char *p;
// 	p = ft_strchr(s, '\0');
// 	printf ("hada deyaliii : %s\n", p);

// 	char l[]="hello world !";
// 	char *d;
// 	d = strchr(l, '\0');
// 	printf ("hada deyalhom : %s\n", d);
// }
// hena be9aat liya lcas li ila 3ettitihaa 0 ou '\0'
// khasseha te3ettek behaal system wakha raah resulta 
// hiya lii ttalebiin liiya lman strchr
