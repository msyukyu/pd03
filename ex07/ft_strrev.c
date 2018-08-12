/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 04:43:11 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/12 05:42:24 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		l;
	int		i;
	char	c;
	char	*s;
	char	*e;

	l = 0;
	*e = *str;
	*s = *str;
	while (str[l] != '\0')
	{
		printf("%d", i);
		l++;
		e++;
	}
	e--;
	l--;
	i = 0;
	while (i < l / 2)
	{
		c = *e;
		*e = *s;
		*s = c;
		i++;
		s++;
		e--;
	}
	return (str);
}

int		main(void)
{
	char *str = "abcde";

	printf("%s", str);
	str = ft_strrev(str);
	printf("%c", '\n');
	printf("%s", str);
	return (0);
}
