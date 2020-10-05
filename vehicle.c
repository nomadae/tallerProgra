#include "vehicle.h"
#include <stdio.h>
#include <stdlib.h>


Vehicle new_Vehicle(double top_speed, double armor, double weight){
  Vehicle vehicle;
  vehicle.top_speed = top_speed;
  vehicle.armor = armor;
  vehicle.weight = weight;
  return vehicle;
}

int print_Vehicle(Vehicle vehicle){
  printf("%le\t%le\t%le\n",vehicle.top_speed,vehicle.armor,vehicle.weight);
  return 1;
}

