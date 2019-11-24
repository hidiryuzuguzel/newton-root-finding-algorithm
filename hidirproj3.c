/*EE242 PROJECT3: Root Finding Software For Third Degree Polynomials
Name of the Student: Hýdýr Yüzügüzel
Student Number:2008401159
E-mail:hidir.yuzuguzel@boun.edu.tr
*/
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
//The function that calculates the derivative of the given polynom
float derivative(float a,float b,float x){
      float res=0.0;
      res=(3*x*x)+(2*a*x)+b;
      return res;
      }

int main(int argc, char *argv[])
{
    float a=0.0,b=0.0,c=0.0,in=0.0,emach=0.0,y=0.0;
    a=atof(argv[1]);
    b=atof(argv[2]);
    c=atof(argv[3]);
    emach=atof(argv[4]);
    in=atof(argv[5]);
    y=in-((float)(in*in*in+a*in*in+b*in+c)/derivative(a,b,in));
    //The if statement controls if the initial guess is exact root it prints and terminates
    if((in*in*in+a*in*in+b*in+c)==0){
               printf("current app. root=%f value of function=%f\n",in,(in*in*in+a*in*in+b*in+c));
               system("PAUSE"); 
               return 0;  
    }
    //The while loop consists of the Newton's iteration algorithm that compares the difference between successive approximate roots with predefined emach
    while(1){
             //The if statement controls if the derivative of the function is zero and terminates
             if(derivative(a,b,in)==0){
                                       printf("current app. root=%f value of function=%f\n",in,(in*in*in+a*in*in+b*in+c));
                                       printf("derivative is 0\n");
                                       system("PAUSE"); 
                                         return 0;
                                       }
               //The if statement controls if absolute value of the difference between successive approximate roots equals to predefined emach, prints the outputs and terminates
               if(fabs(y-in)==emach){
                                  printf("current app. root=%f value of function=%f\n",in,(in*in*in+a*in*in+b*in+c));
                                  break;  
               } 
               //The if statement contols if absolute value of the difference between successive approximate roots is smaller and terminates
               if(fabs(y-in)<emach){
                                  break;
               }
               printf("current app. root=%f value of function=%f\n",in,(in*in*in+a*in*in+b*in+c));
               in=y; // it updates the appoximate root
               y=in-((float)(in*in*in+a*in*in+b*in+c)/derivative(a,b,in));
           
    }
        
  system("PAUSE");   
  return 0;
}
