#include <stdio.h>
#include <stdlib.h>
#include "vec3.h"
#include "unistd.h"

int	main(void)
{
	int	image_width = 256;
	int	image_height = 256;
	int	image_r = image_width - abs(image_width - 255);
	int image_g = image_height - abs(image_height - 256);
	int image_b = 0;

	dprintf(STDOUT_FILENO,"P3\n%d %d\n255\n", image_width, image_height);
	for (int j = 0; j < image_height; j++)
	{
		for (int i = 0; i < image_width; i++)
		{
			t_vec3	color;
			vec3_set(&color, (double)i / image_r, (double)j / image_g, image_b);
			write_color(STDOUT_FILENO, &color);
		}
	}
	return (0);
}