/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_fts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:52:46 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/08 17:52:52 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//garante que nao tenha repetiÃ§ao
int	is_valid(int matrix[4][4], int line, int column, int v)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[line][i] == v)
			return (0);
		if (matrix[i][column] == v)
			return (0);
		i++;
	}
	return (1);
}

//conta quantos predios sao vistos de certo ponto de vista
int	visibility(int *arr, int start, int step)
{
	int	i;
	int	count;
	int	max;
	int	loop;

	i = start;
	count = 0;
	max = 0;
	loop = 0;
	while (loop < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			count++;
		}
		i += step;
		loop++;
	}
	return (count);
}

//escreve a matriz no terminal
void	print_matrix(int matrix[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = matrix[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
