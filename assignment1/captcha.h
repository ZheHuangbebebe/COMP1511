int read_pbm(char filename[], int height, int width, int pixels[height][width]);
int get_pbm_dimensions(char filename[], int *height, int *width);
void print_image(int height, int width, int pixels[height][width]);
void get_bounding_box(int height, int width, int pixels[height][width],
                  int *start_row, int *start_column, int *box_height, int *box_width);
void copy_pixels(int height, int width, int pixels[height][width],
                 int start_row, int start_column, int copy_height, int copy_width,
                 int copy[copy_height][copy_width]);
double get_horizontal_balance(int height, int width, int pixels[height][width]);
double get_vertical_balance(int height, int width, int pixels[height][width]);
double get_tallness(int height, int width);
double get_density(int height, int width, int pixels[height][width]);
int get_holes(int height, int width);
double get_white_density(int height, int width, int pixels[height][width]);
double get_middle_line(int height, int width, int pixels[height][width]);
int get_front_point(int height, int width, int pixels[height][width]);
int get_back_point(int height, int width, int pixels[height][width]);
void find_one_four_seven(int height, int width, int pixels[height][width]);
int space(int height, int width, int pixels[height][width]);
double get_real_density(int height, int width, int pixels[height][width]);
void get_left_trend(int height, int width, int pixels[height][width]);
void find_zero_four(int height, int width, int sum);
void find_one_two(int height, int width, int pixels[height][width]);

