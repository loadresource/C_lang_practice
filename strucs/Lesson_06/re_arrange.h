typedef struct SneklangVar {
  double weight;
  int value;
  int scope_level;
  char *name;
  char is_constant;
  char type;
} sneklang_var_t;