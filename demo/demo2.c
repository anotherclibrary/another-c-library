#include "stla_pool.h"

#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Demo to show how objects are tracked\n");
  stla_pool_t *pool = stla_pool_init(1024);
  char *s = stla_pool_strdup(pool, argv[0]);
  // printf("%s\n", s);
  // stla_pool_destroy(pool);
  return 0;
}
