// 10 Dec 2025
// Revision
// #include<stdio.h>  //Header file to use printf and scanf function
//printf: it is function used to print
//scanf: It is dunction used to take input
//It is single line comment
/* 
It is multi line comment .
Comment are ignored by compiler.
C is compiler based programming language.

 */

 //Basic program
 //Every program start with main function
 //instead of int main also void can be used and not need to write return 0;
 //Every line of code in c ends with semi colon;
 //For multi line comment select the code and press ctrl + shift+ A and also used to uncomment
 //To compile and run code
 //   gcc filename.c
 //    ./a.out
 //example
 
 #include<stdio.h>
 void main(){
    printf("This is a way to print any message!!");
 }
 

 //format specifier: %d for int, %c for character, %f for float, %lf for double
 //Data type : integer, float, double, char, array of char is called string but there is no specific string data type
 
 //Variable: It is used to store data
 // Data type should be specified to each variable ex: int num = 12;
// \n (backslash n[\n] is used to go in new line.)

 
 #include<stdio.h>
 int main(){
    printf("This is way to print any message.\n");
    int num1 = 12;
    int num2 = 34;
    printf("%d\n",num1+num2); //Addition
    printf("%d\n",num1-num2); //Subtraction
    printf("%d\n",num1*num2);//Multiplication
    printf("%f\n",num1/num2);//Division
    printf("%d\n",num1%2); //It return 1 for odd and 0 for even


    return 0;
 } 

 //Conditional statement
 //WAP to find greater number between two number
 
 #include<stdio.h>
 int main(){
    int num1, num2;
    printf("Enter 1st num: ");
    scanf("%d",&num1); // & : Ampersand or address of sign used to provide address of variable
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    if(num1==num2){  //for and operation use && and for or operation use ||
        printf("%d is equal to %d.",num1,num2);

    }
    else if(num1>num2){ //else if can be used multiple times as required
        printf("%d is greater than %d.",num1, num2);
    }
    else{ //Else is default statement , there is no condition
         printf("%d is greater than %d.",num2,num1);
    }

 } 

 //Loop: for, while, switch case

 //for loop
 //WAP to find sum of natural number from 1 to 100.
 
 #include <stdio.h>
 int main(){

    int sum = 0;
    for(int i = 1; i<=100;i++){  //i++ = increment, i-- = decrement
        sum += i;
    }
    printf("The sum of natural number from 1 to 100 is %d.",sum);

    return 0;
 }
 


 //while loop
 //WAP to find sum of only odd number from 1 to 100.
 
 #include<stdio.h>
 int main(){
    int i = 1;
    int sum = 0;
    int esum = 0;
    while (i<=100){
        if(i%2== 1){  //I%2 ==1 seperate odd number only on basis of remainder
             sum +=i;
        }
        else{
            esum +=i;
        }
        
      i+=1;
    }
    printf("The sum of only odd number from 1 to 100 is %d.\n",sum);
    printf("The sum of only even number from 1 to 100 is %d.",esum);

    return 0;
 } 



 //Switch case
 //It used for you have limited option[ ex: Traffic Light]
 //WAP to show weather according using switch case

 #include<stdio.h>
 int main(){
    int day;
    printf("Enter any day in number like for sunday 1: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Sunday, Enjoy good weather!!");
        break;
    case 2:
        printf("Monday, Weather will hot.");
        break;
    case 3:
        printf("Tuesday, Little windy");
        break;
    case 4:
        printf("Wednesday, Rainy");
        break;
    case 5:
        printf("Thursday, Sunny");
        break;
    case 6:
        printf("Friday, Mix of sunny and windy");
        break;
    case 7:
        printf("Saturday, Heavy Rainy");
        break;
    
    default:
        printf("Week has only seven days. Please enter only 1 to 7.");
        break;
    }
    return 0;
 }


  



// 11 Dec 2025
 //WAP to find simple interest
 #include<stdio.h>
 int  main(){
    int P,T,R;
    //Use space to enter multiple value
    printf("Enter P, T and R: ");
    scanf("%d%d%d",&P,&T,&R);
    float si =(P*T*R)/100;
    printf("The simple interest is %f.",si);

    return 0;
 }











