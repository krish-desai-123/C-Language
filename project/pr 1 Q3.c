
#include <stdio.h>

main() {
    int first_angle, second_angle, third_angle,a;
    
    printf("Enter the first angle: ");
    scanf("%d", &first_angle);

    printf("Enter the second angle: ");
    scanf("%d", &second_angle);
    
    a=first_angle+second_angle;
    
    third_angle=180-a;
     printf("third angle = %d\n", third_angle);
    
}