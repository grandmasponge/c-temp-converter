#include<stdio.h>

struct myprogram
{
    char type[30];
    int temp;
    float temp_multiplier;
    float final_temp;

};


int main()
{
   struct myprogram moby;

   printf("celcuis to farenheight converter"); 
   printf("if you want to convert celcuis to farenheight say farenheight \n is you want the other way round please say celcuis");
   scanf("%s", moby.type);


   if (moby.type == "celcuis") {

    printf("input the number you want to convert into farenheight");
    scanf("%s", moby.temp);
    moby.final_temp = farenheight(moby.temp);
    printf("your final temp is %f f");

   } else if (moby.type == "farenheight") 
   {
    printf("input the number you want to convert into farenheight");
    scanf("%s", moby.temp);
    moby.final_temp = celcuis(moby.temp);
    printf("your final temp is %f", moby.final_temp);
   }
   return 0;
}

int farenheight(moby) {
    struct myprogram coby;
    coby.temp_multiplier = 1.8;

    coby.final_temp = moby * coby.temp_multiplier + 32;

    return coby.final_temp;
}

int celcuis(moby) {
    struct myprogram coby2;

    int calculation;
    coby2.temp_multiplier = 0.5556;
    calculation = moby - 32;
    coby2.final_temp = calculation / coby2.temp_multiplier;

    return coby2.final_temp;
}