#include<stdio.h>
int addTheNums(int x,int y)
{
    int sum;
    if(x>y)
    sum=x+y;
    else
    sum = x-y;
    return sum;
}

float averageOfNums(int x,int y)
{
    float average;
    return ((float)(x)+(float)(y))/2;
}

void fun1(int x){
if(x>10)printf("fun1 prints %d  \n ",x);
else{printf("fun1 prints %d  \n",10);}
}

void fun2(int x){
if(x>100)printf("fun2 prints %d \n",x);
else{printf("fun2 prints %d \n",100);}
while(x>10)x--;
}

int maxOfNums(int x, int y){
    int max;
    if(x>y){max = x; 
    fun1(x);}
    else {max = y; fun2(y);}
    while(x-y!=0)x++;
    return max;
}
int minOfNums(int x, int y){
    int min;
    if(x>y){
        min = y; 
        fun1(y);}
    else {
        min = x;
        fun2(x);}
    return min;
}


int main()
{
    int number1,number2;
    int sum;
    float avg;
    int max;
    int min;

    printf("Enter the first integer number: ");
    scanf("%d",&number1);
 
    printf("Enter the second integer number: ");
    scanf("%d",&number2);   
     
    sum=addTheNums(number1,number2);
    avg=averageOfNums(number1,number2);
    max=maxOfNums(number1,number2);
    min=minOfNums(number1, number2);
    printf("Number1: %d, Number2: %d\n",number1,number2);
    printf("Sum: %d, Average: %f Max: %d Min %d\n",sum,avg,max,min);
     
    return 0;
}
