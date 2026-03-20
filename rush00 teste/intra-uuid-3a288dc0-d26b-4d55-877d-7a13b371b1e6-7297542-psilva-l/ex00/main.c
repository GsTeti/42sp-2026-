/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:03:33 by lucsanto          #+#    #+#             */
/*   Updated: 2026/03/08 11:03:39 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solution(int matrix[4][4], int clues[16], int pos);
void	print_matrix(int matrix[4][4]);

int	error_text(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	params(char *str, int num_list[16])
{
	int	counter;
	int	max_numbs;

	counter = 0;
	max_numbs = 0;
	while (str[counter] != '\0' && max_numbs < 16)
	{
		if (str[counter] < '1' || str[counter] > '4')
			return (0);
		num_list[max_numbs] = str[counter] - '0';
		max_numbs++;
		counter++;
		if (max_numbs < 16)
		{
			if (str[counter] != ' ')
				return (0);
			counter++;
		}
	}
	if (max_numbs != 16 || str[counter] != '\0')
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	matrix[4][4];
	int	i;
	int	j;

	if (argc != 2)
		return (error_text());
	if (!params(argv[1], clues))
		return (error_text());
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	if (solution(matrix, clues, 0))
		print_matrix(matrix);
	else
		error_text();
	return (0);
}
