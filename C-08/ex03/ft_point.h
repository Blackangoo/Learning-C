#ifndef FT_POINT_H
    #define FT_POINT_H

    typedef struct s_point
    {
        int x;
        int y;
    } t_point;

    void set_point(t_point *point);

#endif
/*#include "ft_point.h"
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}
int main(void)
{
t_point point;
set_point(&point);
return (0);
}*/