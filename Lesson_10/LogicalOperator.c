#include "LogicalOperator.h"

int can_access_registry(int is_premium, int reputation, int has_2fa){
  if(reputation >= 100 && has_2fa || is_premium > 0){
    return 1;
  }
  return 0;
}