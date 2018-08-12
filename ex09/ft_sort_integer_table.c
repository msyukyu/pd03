/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 08:59:05 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/12 12:29:00 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_partition(int *tab, int start, int end)
{
	int		s;
	int		i;
	int		j;

	i = start - 1;
	j = start;
	while (j < end)
	{
		if (tab[j] < tab[end])
		{
			i = i + 1;
			s = tab[j];
			tab[j] = tab[i];
			tab[i] = s;
		}
	}
	s = tab[i + 1];
	tab[i + 1] = tab[end];
	tab[end] = s;
	return i + 1;
}

void	ft_quicksort_integer_table(int *tab, int start, int end)
{
	int		m;

	if (start < end)
	{
		m = ft_partition_integer_table(tab, start, end);
		ft_quicksort_integer_table(tab, start, m - 1);
		ft_quicksort_integer_table(tab, m + 1, end);
	}
}

void	ft_sort_integer_table(int *tab, int size)
{
	ft_quicksort_integer_table(tab, 0, size - 1);
}

int		main(void)
{
	int tab
	return (0);
}
