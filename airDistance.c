#include<stdio.h>
#include<math.h>
int main(){
    double latitudeOrigin,latitudeDestination,longtitudeOrigin,longtitudeDestination;
    double airDistance, delta;
    const float rediousEarth= 6371;
    printf("\t\tEnter the values in Degree\t\t\n");
    printf("Enter the value of Latitude and Longtitude of Origin(Latitude,longtitude):");
    scanf("%lf,%lf",&latitudeOrigin,&longtitudeOrigin);
    printf("Enter the value of Latitude and Longtitude of Destination(latitude ,longtitude):");
    scanf("%lf,%lf",&latitudeDestination,&longtitudeDestination);
    latitudeOrigin*=(M_PI/180);
    latitudeDestination*=(M_PI/180);
    longtitudeOrigin*=(M_PI/180);
    longtitudeDestination*=(M_PI/180);
    delta=longtitudeDestination-longtitudeOrigin;

    return 0;
}