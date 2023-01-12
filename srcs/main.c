#include "../includes/cub3d.h"

// lol

void	init(t_data *data)
{
	ft_bzero(data, sizeof(data));
	ft_bzero(data->texture, sizeof(t_texture));
}

int32_t	main(int argc, char const *argv[])
{
	t_data	data;

	(void)argc;
	(void)argv;
	// init(&data);
	data.mlx = mlx_init();
	data.win = mlx_new_window(data.mlx, SCREEN_WIDTH, SCREEN_HEIGHT, "yo");
	// key_hooks(&data);
	mlx_hook(data.win, KEY_PRESS, 0, key_handler, &data);
	mlx_hook(data.win, RED_CROSS, 0, x_close, &data);
	mlx_loop(data.mlx);
	return (0);
}
