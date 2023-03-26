/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:18:27 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/04 17:28:18 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_loop(int x, int y, int c, int r)
{
	while (c <= x && r >= 1)
	{
		if ((c == 1 || c == x) && (r == 1 || r == y))
		{
			ft_putchar('o');
		}
		else if ((c != 1 || c != x) && (r == 1 || r == y))
		{
			ft_putchar('-');
		}
		else if ((c == 1 || c == x) && (r != 1 || r != y))
		{
			ft_putchar('|');
		}
		else if ((c != 1 || c != x) && (r != 1 || r != y))
		{
			ft_putchar(' ');
		}
		c++;
	}
}

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (r <= y && x >= 1)
	{
		c = 1;
		ft_loop(x, y, c, r);
		ft_putchar('\n');
		r++;
	}
}
