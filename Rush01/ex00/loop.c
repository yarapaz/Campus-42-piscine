/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:19:09 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 19:44:00 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	switcher(int a, int b, int ***linea);

void	loop(int ****combs, int *input)
{
	switcher(input[8], input[12], &(*combs)[0]);
	switcher(input[9], input[13], &(*combs)[1]);
	switcher(input[10], input[14], &(*combs)[2]);
	switcher(input[11], input[15], &(*combs)[3]);
}
