#include<stdio.h>
//include math library to use it function
#include<math.h>
//the program about to find distance between two place
int main(){
    //made variable according the program
    double latitudeOrigin,latitudeDestination,longtitudeOrigin,longtitudeDestination;
    double airDistance, delta;
    //made constant of rediuos of the earth 
    const float rediousEarth= 6371;
    //prompt msg to user to get input and user should give input in degree
    printf("\t\tEnter the values in Degree\t\t\n");
    printf("Enter the value of Latitude and Longtitude of Origin(Latitude,longtitude):");
    scanf("%lf,%lf",&latitudeOrigin,&longtitudeOrigin);
    printf("Enter the value of Latitude and Longtitude of Destination(latitude ,longtitude):");
    scanf("%lf,%lf",&latitudeDestination,&longtitudeDestination);
    //Degree convert to redia(redian=pi/180 *degree)
    latitudeOrigin*=(M_PI/180);
    latitudeDestination*=(M_PI/180);
    longtitudeOrigin*=(M_PI/180);
    longtitudeDestination*=(M_PI/180);
    //find delta according instruction
    delta=longtitudeDestination-longtitudeOrigin;
    //spherical law to find the distance
    airDistance=acos(sin(latitudeOrigin) * sin(latitudeDestination) + cos(latitudeOrigin) * cos(latitudeDestination)*cos(delta)) *rediousEarth;
    //origin and destination output convert to degree(degree=180/pi*redian)
    printf("Origin = %lg degree , %lg degree\n",latitudeOrigin*=180/M_PI,longtitudeOrigin*=180/M_PI);
    printf("Destination = %lg degree, %lg degree\n",latitudeDestination*=180/M_PI, longtitudeDestination*=180/M_PI);
    //distance result show in prompt
    printf("Air distance is %lg Km\n",airDistance);
    return 0;
}