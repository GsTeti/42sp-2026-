/* ************************************************************************** */
/*	                                                                      */
/*                                                        :::      ::::::::   */
/*   rush01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:53:22 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/08 11:53:22 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(int matrix[4][4], int line, int column, int v);
int		visibility(int *arr, int start, int step);
void	print_matrix(int matrix[4][4]);

//valida linha atual comparando com esquerda e direita
int	check_row(int matrix[4][4], int views[16], int line)
{
	int	row[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		row[i] = matrix[line][i];
		i++;
	}
	if (visibility(row, 0, 1) != views[8 + line])
		return (0);
	if (visibility(row, 3, -1) != views[12 + line])
		return (0);
	return (1);
}

//valida coluna atual comparando com baixo e cima
int	check_col(int matrix[4][4], int views[16], int col)
{
	int	temp_col[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		temp_col[i] = matrix[i][col];
		i++;
	}
	if (visibility(temp_col, 0, 1) != views[col])
		return (0);
	if (visibility(temp_col, 3, -1) != views[4 + col])
		return (0);
	return (1);
}

//valida fim da linha/coluna
int	check_visibility(int matrix[4][4], int clues[16], int line, int col)
{
	if (col == 3)
	{
		if (check_row(matrix, clues, line) == 0)
			return (0);
	}
	if (line == 3)
	{
		if (check_col(matrix, clues, col) == 0)
			return (0);
	}
	return (1);
}

//preenche cada 'casa' recursivamente
int	solution(int matrix[4][4], int clues[16], int pos)
{
	int	line;
	int	col;
	int	num;

	line = pos / 4;
	col = pos % 4;
	num = 1;
	if (pos == 16)
		return (1);
	while (num <= 4)
	{
		if (is_valid(matrix, line, col, num))
		{
			matrix[line][col] = num;
			if (check_visibility(matrix, clues, line, col))
			{
				if (solution(matrix, clues, pos + 1))
					return (1);
			}
			matrix[line][col] = 0;
		}
		num++;
	}
	return (0);
}
