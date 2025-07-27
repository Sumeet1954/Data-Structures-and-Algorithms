//(e) Write a program to receive values of latitude ( L1,L2) and longitude ( G1,G2) in degrees,
// of two places on the earth and output the distance (D) between them in nautical miles. 
//The formula for distance in nautical miles is:
//D=3963 cos^ -1 ( sin L * 1sin L * 2 +cos L1 cos L2^ * cos(G2-G1))

#include<stdio.h>
#include<math.h>
#define pi 3.14

int main() {
    // latitude (L1, L2) and longitude (G1, G2)
    float L1, L2, G1, G2;
    printf("Enter the Latitude and Longitude of First Point (L1 G1 in degrees): ");
    scanf("%f%f", &L1, &G1);
    printf("Enter the Latitude and Longitude of Second Point (L2 G2 in degrees): ");
    scanf("%f%f", &L2, &G2);

    // Convert degrees to radians
    float r_L1 = L1 * (pi / 180.0);
    float r_L2 = L2 * (pi / 180.0);
    float r_G1 = G1 * (pi / 180.0);
    float r_G2 = G2 * (pi / 180.0);

    // Calculate the distance using the spherical law of cosines
    float D = 3963 * acos(sin(r_L1) * sin(r_L2) + cos(r_L1) * cos(r_L2) * cos(r_G2 - r_G1));
    printf("\nDistance between the two points = %.2f nautical miles\n", D);
    return 0;
}