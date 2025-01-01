#include<stdio.h>

int main(){

    float distance_km , distance_mt, distance_feet, distance_inches, distance_cm;

    printf("Enter the km distance in two cities \n");
    scanf("%f", &distance_km);


    distance_mt = distance_km * 1000;
    distance_feet= distance_mt * 3.28084;
    distance_inches= distance_feet * 12;
    distance_cm = distance_km * 100000;


    printf(" Distance betwwen two cities  %f \n", distance_km);
    printf(" Distance in meter %f \n", distance_mt );
    printf(" Distance in feet  %f \n", distance_inches);
    printf("Distance in cm  %f \n ", distance_cm);

    return 0;
}