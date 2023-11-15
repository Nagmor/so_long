/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:51:50 by nagmor            #+#    #+#             */
/*   Updated: 2023/11/15 13:14:14 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(void)
{
	void	*mlx_ptr;
	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (1);
	mlx_new_window(mlx_ptr, 480, 230, "test");
	mlx_loop(mlx_ptr);
	mlx_destroy_display(mlx_ptr);
	free(mlx_ptr);
	return (0);
}