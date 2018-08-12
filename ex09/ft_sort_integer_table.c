/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 08:59:05 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/12 09:47:15 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_quicksort_integer_table(int *tab, int start, int end)
{
	int m;


	m = (end - start) / 2;
	:
	ft_quicksort_integer_table(tab, start, m);
	ft_quicksort_integer_table(tab, m, end);
}

void	ft_sort_integer_table(int *tab, int size)
{
	ft_quicksort_integer_table(tab, 0, size);
}
