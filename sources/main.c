/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagmor <nagmor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:51:50 by nagmor            #+#    #+#             */
/*   Updated: 2023/11/23 14:38:26 by nagmor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	encode_rgb(int r, int g, int b)
{
	return (r << 16 | g << 8 | b);
}

typedef struct	s_vars
{
	void	*mlx_ptr;
	void	*win_ptr;
}				t_vars;

typedef struct s_mlx_data
{
	void	*mlx_ptr;
	void	*win_ptr;
}				t_mlx_data;

void	color_screen(t_vars *data, int color)
{
	int	x;
	int	y;

	x = 0;
	while (x < 480)
	{
		y = 0;
		while (y < 230)
		{
			mlx_pixel_put(data->mlx_ptr, data->win_ptr, x, y, color);
			y++;
		}
		x++;
	}

}

void	clear_all(void *mlx_ptr)
{
	mlx_destroy_display(mlx_ptr);
	free(mlx_ptr);
}

void	handle_input()
{
	
}

int	f(int keysym, t_vars *data)
{
	if (keysym == XK_r)
		color_screen(data, encode_rgb(255,0,0));
	if (keysym == XK_g)
		color_screen(data, encode_rgb(0,255,0));
	if (keysym == XK_b)
		color_screen(data, encode_rgb(0,0,255));
	return (0);
}

int	main(void)
{
	t_vars	vars;
	void	*img;
	char	*addr;
	int 	img_width;
	int		img_height;

	
	vars.mlx_ptr = mlx_init();
	if (!vars.mlx_ptr)
		return (1);
	img = mlx_xpm_file_to_image(vars.mlx_ptr, "./xpm/right_rabbit.xpm", &img_width, &img_height);
	vars.win_ptr = mlx_new_window(vars.mlx_ptr, 480, 230, "PINE");
	printf("img_width = %d\n", img_width);
	printf("img_height = %d\n", img_height);
	mlx_put_image_to_window(vars.mlx_ptr, vars.win_ptr, img, 0, 0);
	mlx_key_hook(vars.win_ptr, f, &vars);
	mlx_loop(vars.mlx_ptr);
	clear_all(vars.mlx_ptr);	
	return (0);
}