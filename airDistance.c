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
    airDistance=acos(sin(latitudeOrigin) * sin(latitudeDestination) + cos(latitudeOrigin) * cos(latitudeDestination)*cos(delta)) *rediousEarth;
    printf("Origin = %lg degree , %lg degree\n",latitudeOrigin*=180/M_PI,longtitudeOrigin*=180/M_PI);
    printf("Destination = %lg degree, %lg degree\n",latitudeDestination*=180/M_PI, longtitudeDestination*=180/M_PI);
    printf("Air distance is %lg Km\n",airDistance);
    return 0;
}