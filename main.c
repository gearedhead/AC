#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


float set_temperature;
float room_temperature;




bool temp_test(float s_t, float r_t){
 bool test;
 if (s_t>r_t){
    test =0;
    printf("Set Temperature is Higher than Room Temperature \n");
    return test;
 }
 else if (s_t<=r_t){
    test =1;
    printf("Set Temperature is Equal or Lower than Room Temperature \n");
    return test;
 }

 return 0;

}





int main()
{
    printf("Hello world!\n");

    bool temp_test1;

    temp_test1=temp_test(26.0,30.0);
    //printf("%d",temp_test1);

    if (temp_test1==true){
     printf("Compressor is Turned on");
    }
    else if (temp_test1==false){
     printf("Cannot Turn on Compressor");
    }


    return 0;
}
