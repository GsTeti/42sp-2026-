/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:07:23 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/01 18:45:08 by ferde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	test_value(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Invalid value.\n", 15);
		return (1);
	}
	else
		return (0);
}

void	tf_print_row(int column, int x, char first_char, char second_char)
{
	if (column == 1 || column == x)
		write(1, &first_char, 1);
	else
		write(1, &second_char, 1);
}

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (test_value(x, y) == 1)
		return ;
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (row == 1)
				tf_print_row(column, x, 'A', 'B');
			else if (row == y)
				tf_print_row(column, x, 'C', 'B');
			else
				tf_print_row(column, x, 'B', ' ');
		column++;
		}
		write(1, "\n", 1);
		row++;
	}
}
