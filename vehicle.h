//
// Created by gcdominguez on 05/10/20.
//
#ifndef VEHICLE_H
#define VEHICLE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

  typedef struct{
    double top_speed; // in km*hr
    double armor; // in mm 
    double weight; // kg
  }Vehicle;

  Vehicle new_Vehicle(double top_speed, double armor, double weight);
  int print_Vehicle(Vehicle vehicle);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* PEOPLE_H */
