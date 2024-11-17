#include "vec3.h"
#include <math.h>
#include <stdio.h>

double	vec3_lenght(const t_vec3 *v)
{
	return (sqrt(vec3_lenght_squared(v)));
}

double	vec3_lenght_squared(const t_vec3 *v)
{
	return (v->x * v->x + v->y * v->y + v->z * v->z);
}

void	vec3_mult(t_vec3 *v, double t)
{
	v->x *= t;
	v->y *= t;
	v->z *= t;
}

void	vec3_div(t_vec3 *v, double t)
{
	v->x /= t;
	v->y /= t;
	v->z /= t;
}

void	vec3_sum(t_vec3 *v, double t)
{
	v->x += t;
	v->y += t;
	v->z += t;
}

void	vec3_sub(t_vec3 *v, double t)
{
	v->x -= t;
	v->y -= t;
	v->z -= t;
}

void	vec3_set(t_vec3 *v, double x, double y, double z)
{
	if (!v)
		return;
	v->x = x;
	v->y = y;
	v->z = z;
}

void	write_color(int fd, const t_vec3 *color)
{
	double	r = color->x;
	double	g = color->y;
	double	b = color->z;

	int	ir = RGBB * r;
	int	ig = RGBB * g;
	int	ib = RGBB * b;
	dprintf(fd, "%d %d %d\n", ir, ig, ib);
}
