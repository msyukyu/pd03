/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 08:59:05 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/12 14:14:44 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		buffer;

	j = size;
	while (j > 1)
	{
		i = 0;
		while (i + 1 < j)
		{
			buffer = tab[i];
			if (buffer > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
			}
			i++;
		}
		j--;
	}
}
