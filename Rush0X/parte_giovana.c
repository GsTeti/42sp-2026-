/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parte_giovana.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 17:06:19 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/01 18:17:35 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_number(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' || str[i] <= '9')
			return (1);
		i++;
	}
}

void	ft_str_nmr(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = (argv[1]);
		y = (argv[2]);

	}
	return (0);
}
