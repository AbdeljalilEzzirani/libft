/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:24:31 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/08 18:49:26 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	count_words(char const *s, char c)
// {
// 	int	i;
// 	int	count;

// 	count = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c)
// 			i++;
// 		if (s[i] && s[i] != c)
// 		{
// 			count++;
// 			while (s[i] && s[i] != c)
// 				i++;
// 		}
// 	}
// 	return (count);
// }

// static void	**free_all(char **str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (NULL);
// }

// static char	**allocate_arrs(char const *s, char c, char **big, int words)
// {
// 	int		i;
// 	int		j;
// 	int		previous;

// 	i = 0;
// 	j = 0;
// 	previous = 0;
// 	while (s[i] && j < words)
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		previous = i;
// 		while (s[i] && s[i] != c)
// 			i++;
// 		big[j] = ft_substr(s, previous, (i - previous));
// 		if (big[j] == NULL)
// 		{
// 			free_all(big);
// 			return (NULL);
// 		}
// 		j++;
// 	}
// 	return (big);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		words;
// 	char	**big_arr;

// 	if (!s)
// 		return (NULL);
// 	words = count_words(s, c);
// 	big_arr = malloc(sizeof(char *) * (words + 1));
// 	if (!big_arr)
// 		return (NULL);
// 	big_arr = allocate_arrs(s, c, big_arr, words);
// 	big_arr[words] = 0;
// 	return (big_arr);
// }


// int	main ()
// {
// 	//char src[]="i__hello__world_how_are_you___";
// 	char			**p;
// 	int				i;

// 	i = 0;
// 	p = ft_split("", '_');
// 	while (p[i])
// 	{
// 		printf ("%s || ", p[i]);
// 		i++;
// 	}
// 	/*p[i - 1] = "problem";
// 	i = 0;
// 	printf ("\n");
// 	while (p[i])
// 	{
// 		printf ("%s || ", p[i]);
// 		i++;
// 	}*/

// }