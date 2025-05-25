#include <stdio.h>
int nota;
int main()
{
    printf("Ingrese la nota: ");
    scanf("%d",&nota);
    
    printf("\nTabla de calificaciones:\n");
    printf("90-100: A\n");
    printf("80-89 : B\n");
    printf("70-79 : C\n");
    printf("60-69 : D\n");
    printf("0-59  : F\n");
    
    if(nota>=90){
     printf("Calificacion A");
    }
    else if(nota>=80 && nota<90){
      printf("Calificacion B");
    }
    else if(nota>=70 && nota<80){
      printf("Calificacion C");
    }
    else if(nota>=60 && nota<70){
      printf("Calificacion D");
    }
    else if(nota<60){
      printf("Calificacion F");
    }
    return 0;
}