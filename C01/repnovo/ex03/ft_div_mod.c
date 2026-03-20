/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:49:00 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/09 18:37:19 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(){

// 	int	num1;
// 	int num2;
// 	int division;
// 	int rest;

// 	printf("\nDigite um número: ");
// 	scanf("%d", &num1);
// 	printf("\n*************************\n");
// 	printf("\nDigite outro número: ");
// 	scanf("%d", &num2);
// 	printf("\n*************************\n");
// 	ft_div_mod(num1, num2, &division, &rest);
// 	printf("\nResultado da divisão: %d\n", division);
// 	printf("\nResultado do resto: %d\n", rest);
// 	printf("\n*************************\n");
// }
