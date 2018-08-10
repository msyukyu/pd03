/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:08:35 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/10 15:38:50 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str + '\0');
		str++;
	}
}

int main(void)
{
	char str[] = "123456789012345";
	ft_putstr(&str);
	return (0);
}
