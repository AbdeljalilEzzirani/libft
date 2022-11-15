/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:43:03 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/15 18:07:47 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t				i;
	size_t				j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len > 0)
	{
		j = 0;
		while  (needle[i + j] == haystack[j])
		{
			j++;
			if (needle[j + i] == '\0')
			return (&((char *)haystack)[i]);
		}
		i++;
	}
}*/
char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int						i;
	int						j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}
// int	main ()
// {
// 	char hays[]="heakllo akdbez";
// 	char need[]="";
// 	printf ("hada deyalii : %s\n", ft_strnstr(hays, need, 11));	
// 	char heep[]="heakllo akdbez";
// 	char nuud[]="";
// 	printf ("hada system : %s\n", strnstr(heep, nuud, 11));
// }
