double find_average_fuel_price(struct bot *b);
double profit_ratio(struct location *c, struct location *d, struct location *a, struct bot *b,struct commodity *e);
int find_distance(struct location *a,struct location *c,struct bot *b);
int transaction_commodity_distance(struct bot *b);
int find_location_size(struct bot *b);
int nearest_fuel2(struct location *a,struct bot *b);
int transaction_commodity_action(struct bot *b);
int dump(struct bot *b);
int nearest_location(struct bot *b);
int profit_sell(struct bot *b);
