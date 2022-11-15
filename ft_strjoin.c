/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:43:28 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/15 17:58:58 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char					*ptr;
	size_t					totalenergie;
	int						i;
	int						j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	totalenergie = (i + j);
	ptr = (char *) malloc ((totalenergie + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcat((char *)s1, (char *)s2, (totalenergie + 1));
	ft_strlcpy(ptr, (char *)s1, (totalenergie + 1));
	ptr[totalenergie +1] = '\0';
	return (ptr);
}
//settar "32" te2aked menoo waach rayekoon
// int	main ()
// {
// 	char s3[200]="hello world !";
// 	char s4[200]="abdeljalil _!loop";
// 	char *ptr;
// 	ptr = ft_strjoin(s3, s4);
// 	printf ("%s\n", ptr);
// }
