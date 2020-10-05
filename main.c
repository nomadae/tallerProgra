#include <stdio.h>
#include <stdlib.h>
#include "vehicle.h"

int main(){
  Vehicle vehicle;
  vehicle = new_Vehicle(150.0,100.0,200.0);
  print_Vehicle(vehicle);
  //printf("Hello World\n");
  return 0;
}
