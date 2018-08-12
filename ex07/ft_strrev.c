/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 04:43:11 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/12 08:38:54 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		l;
	int		i;
	char	c;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	l--;
	i = 0;
	while (i < (l + 1) / 2)
	{
		c = str[l - i];
		str[l - i] = str[i];
		str[i] = c;
		i++;
	}
	return (str);
}
