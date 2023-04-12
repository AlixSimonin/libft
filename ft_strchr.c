/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimonin <asimonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:58:56 by asimonin          #+#    #+#             */
/*   Updated: 2022/11/09 13:44:07 by asimonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[i]);
	else
		return (NULL);
}
/*
 #include <string.h>
 #include <stdio.h>

int	main()
{
 	char str[] = "ouiouiouiouibaguette";
 	printf("%s, %s\n", strchr(str, '\0'), ft_strchr(str, '\0'));
}
*/