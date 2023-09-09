#include <stdio.h>

int main() {

    float TotalDistance = 0.0; 
    float fuelConsumed = 0.0;   
    float fuelConsumptionRate; 
    float dist1, dist2, dist3, dist4;
    float fuel1, fuel2, fuel3, fuel4;
    
    
    printf ("Enter the fuel consumption rate: ");
    scanf ("%f", &fuelConsumptionRate);


    printf ("Enter the distance travelled in the 1st section of the journey: ");
    scanf ("%f", &dist1);
    
    fuel1 = dist1 * fuelConsumptionRate;
    TotalDistance += dist1;
    fuelConsumed += fuel1;


    printf ("Enter the distance travelled in the 2nd section of the journey: ");
    scanf ("%f", &dist2);
    
    fuel2 = dist2 * fuelConsumptionRate;
    TotalDistance += dist2;
    fuelConsumed += fuel2;

   
	printf ("Enter the distance travelled in the 3rd section of the journey: ");
    scanf ("%f", &dist3);
    
    fuel3 = dist3 * fuelConsumptionRate;
    TotalDistance += dist3;
    fuelConsumed += fuel3;

    printf ("Enter the distance travelled in the 4th section of the journey: ");
    scanf ("%f", &dist4);
    
    fuel4 = dist4 * fuelConsumptionRate;
    TotalDistance += dist4;
    fuelConsumed += fuel4;

  
    printf("\nTotal distance covered: %.2f kilometers\n", TotalDistance);
    printf("Total fuel consumed: %.2f liters\n", fuelConsumed);

    return 0;
}
