/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <amarie-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 17:27:31 by amarie-c          #+#    #+#             */
/*   Updated: 2022/01/15 14:47:10 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

void	ft_putnbr_fd(int n, int fd)
{
	int	reste;

	if (n / 10 == 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		reste = n % 10;
		if (reste < 0)
			reste = -reste;
		ft_putchar_fd('0' + reste, fd);
	}
}*/

int	escape(int key, void *param)
{
	if (key == 53)
		mlx_destroy_window(mlx_ptr, win_ptr);
	//ft_putnbr_fd(key, 1);
	return (0);
}
int	main(void)
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "test_window");
	int i = 10;
	while (i < 200)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, i, i, 0x00FF0000);
		i++;
	}
	mlx_key_hook(win_ptr, escape, (void *)0);
	mlx_loop(mlx_ptr);
}

//gcc -Wall -Wextra -Werror main.c -I /usr/local/include  -L /usr/local/lib -lmlx -framework OpenGL -framework AppKit