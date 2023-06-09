/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:10:12 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 18:06:38 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*concatenated;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	concatenated = (char *)malloc(sizeof(char) * (len + 1));
	if (!concatenated)
		return (0);
	concatenated[len] = '\0';
	i = 0;
	while (s1[i])
	{
		concatenated[i] = s1[i];
		i ++;
	}
	len = i;
	while (s2[i - len])
	{
		concatenated[i] = s2[i - len];
		i ++;
	}
	return (concatenated);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 2)
// 	{
// 		char const *s1 = argv[1];
// 		char const *s2 = argv[2];
// 		char *return_type = ft_strjoin(s1, s2);
// 		printf("%s ", return_type);
// 		free(return_type);
// 	}
// 	return (0);
// }