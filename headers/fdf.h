/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:45:14 by amarie-c          #+#    #+#             */
/*   Updated: 2022/01/18 15:48:03 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define ERROR -1
# define SUCESS 0

# include "mlx.h"
# include "libft.h"
# include <unistd.h>

typedef struct s_pos
{
	int	x;
	int	y;
	int	z;
}				t_pos;

typedef struct e_env
{
	void	*mlx_ptr;
	void	*win_ptr;
}				t_env;

#endif