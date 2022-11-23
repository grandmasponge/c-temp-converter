#include<stdio.h>

struct myprogram
{

    int temp;
    float temp_multiplier;
    float final_temp;

};


int main()
{
   struct myprogram moby;
   

   char type[12];

   printf("celcuis to farenheight converter"); 
   printf("if you want to convert celcuis to farenheight say farenheight \n is you want the other way round please say celcuis:");
   scanf("%s", type);
   printf("%s", type);
  
  if (strcmp(type, "celcuis") == 0) {
     printf("enter the temprature\n");
     scanf("%d", &moby.temp);
     moby.final_temp = celcuis(moby.temp);
     printf("the final temp in celcuis is %f", moby.final_temp);
     
  }
  else if (strcmp(type, "farenheight") == 0) {
      printf("enter a temprature");
      scanf("%d", &moby.temp);
      moby.final_temp = farenheight(moby.temp);
      printf(" your temp is: %f f", moby.final_temp);
  }
  
  return 0;
}



int farenheight(moby) {
    struct myprogram coby;
    coby.temp_multiplier = 1.8;
    int calculation;
    calculation = moby * coby.temp_multiplier;
    coby.final_temp = calculation + 32;

    return coby.final_temp;
}

int celcuis(moby) {
    struct myprogram coby2;

    int calculation;
    coby2.temp_multiplier = 0.5556;
    calculation = moby - 32;
    coby2.final_temp = calculation * coby2.temp_multiplier;

    return coby2.final_temp;
}