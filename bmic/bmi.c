#include <stdio.h>
#include <math.h>

float bmi(float weight, float height){
    float c =0;
    c = weight/(height*height);
    return (c);
}

void check_bmi(float bmi_value){
    if (bmi_value <= 18.5) {
        printf("Underweight \n");
    } else {
        if (bmi_value > 18.5 && bmi_value < 25  ){
            printf("Normal Weight \n");
        } else {
            if (bmi_value >=25  && bmi_value < 30  ){
                printf("Overweight \n");
            } else{
                printf("Obesity \n");
            }
        }
    }
}


int  main(){
    float param1 =0;
    float param2 = 0;
    
    printf("Enter your weight in kg: ");
    scanf("%f",&param1);
    printf("Enter  your height in meters: ");
    scanf("%f",&param2);

    if ( param1 >0 && param2 >0 && param2 < 3 && param1 < 500){
        float bmi_value = 0;
        bmi_value = bmi(param1, param2);
        printf("Your BMI is %.2f \n", bmi_value);
        check_bmi(bmi_value);
    }else{
        printf("There is some error.\n");
    }
     return 0;
}
