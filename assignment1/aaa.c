#include <stdio.h>
#include "captcha.h"
#include<math.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
    int height, width, start_row, start_column, box_width, box_height;
    double vertical_balance;
	double horizontal_balance;
	int holes;
	double tallness;
	double holes_fraction;
	double density;
	double middle_line;
	int front_point;
	int back_point;
	double real_density;
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <image-file>\n", argv[0]);
        return 1;
    }

    if (get_pbm_dimensions(argv[1], &height, &width) != 1) {
        return 1;
    }

    int pixels[height][width];
    if (read_pbm(argv[1], height, width, pixels)) {
        get_bounding_box(height, width, pixels, &start_row, &start_column, &box_height, &box_width);

        int box_pixels[box_height][box_width];
        copy_pixels(height, width, pixels, start_row, start_column, box_height, box_width, box_pixels);

        vertical_balance = get_vertical_balance(box_height, box_width, box_pixels);
		horizontal_balance = get_horizontal_balance(box_height, box_width, box_pixels);
		tallness = get_tallness(box_height, box_width);
		holes = get_holes(box_height, box_width);
		density = get_density(box_height, box_width, box_pixels);
		holes_fraction = get_white_density(box_height, box_width, box_pixels);
		middle_line=get_middle_line(box_height, box_width, box_pixels);
		real_density=get_real_density(box_height, box_width, box_pixels);
		//get_left_trend(box_height, box_width, box_pixels);
		//front_point=get_front_point(box_height, box_width, box_pixels);
		//back_point=get_back_point(box_height, box_width, box_pixels);
		if(density>(middle_line-0.05))
		{
		find_one_four_seven(box_height, box_width, box_pixels);
		}
		else
		{
		


		}
		//space(box_height, box_width, box_pixels);
		

		//printf("%.3lf %.3lf",middle_line, real_density);
      //  printf("%.3lf %.3lf %.3lf, %.3lf, %d, %.3lf	\n",horizontal_balance,vertical_balance,tallness,density, holes,middle_line);
	

	
    }
    return 0;
}
