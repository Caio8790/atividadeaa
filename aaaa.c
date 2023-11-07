#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main () { 

  setlocale(LC_ALL,"portuguese");

int temperatura;

printf("digite a temperatura: ");
scanf("%f",&temperatura);

if (temperatura >= 25 ) {
    printf("clima ensolarado\n");
 }

else if ( temperatura < 15){


printf("clima chuvoso\n");
}
 
else {   
    printf("clima nublado\n");

}


  return 0;
        
}       