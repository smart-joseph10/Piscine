
#ifndef FIND_BSQ_H
# define FIND_BSQ_H

# include "struct.h"

square_feature	*find_bsq(map_feature *map);
void		        change_square(square_feature *square, int x, int y, int len);
int			        **make_arr(map_feature *map);
int			        check_square(int **arr, int i, int j);
#endif