
#include <stdio.h>

main() {
    float base_salary, hra_percent, da_percent, ta_percent;
    float hra, da, ta, gross_salary;
    
    printf("Enter the base salary: ");
    scanf("%f", &base_salary);

    printf("Enter the percentage of HRA: ");
    scanf("%f", &hra_percent);
    printf("Enter the percentage of DA: ");
    scanf("%f", &da_percent);
    printf("Enter the percentage of TA: ");
    scanf("%f", &ta_percent);
    
    hra = (hra_percent / 100) * base_salary;
    da = (da_percent / 100) * base_salary;
    ta = (ta_percent / 100) * base_salary;

    
    gross_salary = base_salary + hra + da + ta;

    
    printf("Gross Salary = %f\n", gross_salary);

    
}
