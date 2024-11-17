#ifndef VEC3_H
#define VEC3_H

#define RGBB 255.999

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}	t_vec3;

double	vec3_lenght_squared(const t_vec3 *v);
double	vec3_lenght(const t_vec3 *v);
void	vec3_mult(t_vec3 *v, double t);
void	vec3_div(t_vec3 *v, double t);
void	vec3_sum(t_vec3 *v, double t);
void	vec3_sub(t_vec3 *v, double t);
void	vec3_set(t_vec3 *v, double x, double y, double z);

void	write_color(int fd, const t_vec3 *color);

#endif	// VEC3_H