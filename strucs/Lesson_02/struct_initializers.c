#include <stdio.h>
#include "struct_initializers.h"

int main() {

  //zero initialize a struct  
  struct City cl = {0};
  
  //positional initialization
  struct City c1 = {"New York", 40, -74};

  //designated initialization
  struct City c = {
    .name = "San Francisco",
    .lat = 37,
    .lon = -122
  };

  struct City c2;
  c2.lat = 41; // Set the latitude
  printf("Latitude: %d", c2.lat); // Print the latitude




  return 0;

}