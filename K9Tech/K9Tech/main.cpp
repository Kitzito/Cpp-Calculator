//C++ program to display Cruz Tech
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int opp,d,i,gcd,HCF,lcm,exponent,f=1,base;
    int Num1,Num2;
    string c;
    long long power=1;
    float results,results1,results2,w,x,y,z,root,root1,root2;
do{
    cout <<"# Welcome to K9 Tech # \n";
    cout <<"# Contact Cruz Tech at +237682726566 or email K9 Tech at mnkitzito@gmail.com \n";
    cout <<"#K9 Tech is Proudly Sponsored by Bill'sUpdates, Ambition Motors, Lydia's Foundation and KADEV Inc \n";
    cout <<"0. Exit: \n";
    cout <<"1. Addition: \n";
    cout <<"2. Subtraction: \n";
    cout <<"3. Multiplication: \n";
    cout <<"4. Division: \n";
    cout <<"5. Modulus: \n";
    cout <<"6. Average: \n";
    cout <<"7. Square: \n";
    cout <<"8. Sine: \n";
    cout <<"9. Cosine: \n";
    cout <<"10. square Root: \n";
    cout <<"11. Cube Root: \n";
    cout <<"12. Logarithm10: \n";
    cout <<"13. Tangent: \n";
    cout <<"14. Factorial: \n";
    cout <<"15. HCF: \n";
    cout <<"16. LCM: \n";
    cout <<"17. Power Series: \n";
    cout <<"18. Quadratic Equation: \n";
    cout <<"Select Operation: ";
    cin >>opp;

switch(opp){

case 0:
    cout <<"Exit \n";
    cout <<"K9 Tech is proudly sponsored by Bill'sUpdates, Ambition Motors, Lydia's Foundation and KADEV Inc: \n";
    cout <<"contact K9Tech at +237682726566 or email Cruz Tech at mnkitzito@gmail.com: \n";
    cout <<"Thanks for patronizing K9 Tech: \n";
    exit(0);
    break;

case 1:
    cout <<"Addition: \n";
    cout <<"Num1: ";
    cin>>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    results=Num1+Num2;
    cout <<"Addition of "<<Num1<<" and "<<Num2<<" is "<<results<<" ",Num1,Num2,results;
    break;

case 2:
    cout <<"Subtraction: \n";
    cout <<"Num1: ";
    cin >>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    results=Num1-Num2;
    cout <<"Subtraction of "<<Num1<<" and "<<Num2<<" is "<<results<<" ", Num1,Num2,results;
    break;

case 3:
    cout <<"Multiplication: \n";
    cout <<"Num1: ";
    cin >>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    results=Num1*Num2;
    cout <<"Multiplication of "<<Num1<<" and "<<Num2<<" is "<<results<<" ",Num1,Num2,results;
    break;

case 4:
    cout <<"Division: \n";
    cout <<"Num1: ";
    cin >>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    while(Num2==0){
        cout <<"Denominator Cannot be Zero, input another number:";
        cin >>Num2;
    }
    results=Num1/Num2;
    cout <<"Division of "<<Num1<<" and "<<Num2<<" is "<<results<<" ",Num1,Num2,results;
    break;

case 5:
    cout <<"Modulus: \n";
    cout <<"Num1: ";
    cin >>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    results=Num1%Num2;
    cout <<"Modulus of "<<Num1<<" and "<<Num2<<" is "<<results<<" ",Num1,Num2,results;
    break;

case 6:
    cout <<"Average: \n";
    cout <<"Num1: ";
    cin >>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    results=(Num1+Num2)/2;
    cout <<"Average of "<<Num1<<" and "<<Num2<<" is "<<results<<" ",Num1,Num2,results;
    break;

case 7:
    //square1 = Num1*Num1;
    //square2 = Num2*Num2;
    if(opp==7){
    cout <<"Square: \n";
    cout <<"do you want to square two numbers? (y/n): \n";
    cin >>c;
    cin >>c;
    }
    if(c=='n'){
        cout <<"Square: \n";
        cout <<"Num1: ";
        cin >>Num1;
        results=Num1*Num1;
        cout <<"Square of "<<Num1<<" is "<<results<<" ",Num1,results;
    }
    else if(c=='y'){
        cout <<"Square: \n";
        cout <<"Num1: ";
        cin >>Num1;
        cout <<"Num2: ";
        cin >>Num2;
        results1=Num1*Num1;
        results2=Num2*Num2;
        cout <<"Square of "<<Num1<<" and "<<Num2<<" is "<<results1<<" and "<<results2<<" ",Num1,Num2,results1,results2;
    }
        else{
            cout <<"invalid input";
        }
        break;

case 8:
    //sine1 = sine(Num1);
    //sine2 = sine(Num2);
    if(opp==8){
        cout <<"Sine: \n";
        cout <<"do you want sine of two numbers? (y/n): \n";
        cin >>c;
        cin >>c;
    }
    if(c=='n'){
        cout <<"Sine: \n";
        cout <<"Num1: ";
        cin >>Num1;
        results=sin(Num1*3.14159/180);
        cout <<"sine of "<<Num1<<" is "<<results<<" ",Num1,results;
    }
    else if(c=='y'){
        cout <<"Sine: \n";
        cout <<"Num1: ";
        cin >>Num1;
        cout <<"Num2: ";
        cin >>Num2;
        results1=sin(Num1*3.14159/180);
        results2=sin(Num2*3.14159/180);
        cout <<"Sine of "<<Num1<<" and "<<Num2<<" is "<<results1<<" and "<<results2<<" ",Num1,Num2,results1,results2;
    }
    else{
        cout <<"invalid input";
    }
    break;

case 9:
    if(opp==9){
        cout <<"Cos: \n";
        cout <<"do you want cos of two numbers? (y/n): \n";
        cin >>c;
        cin >>c;
    }
    if(c=='n'){
        cout <<"Cos: \n";
        cout <<"Num1: ";
        cin >>Num1;
        results=cos(Num1*(22/7)/180);
        cout <<"Cos of "<<Num1<<" is "<<results<<" ",Num1,results;
    }
    else if(c=='y'){
        cout <<"Cos: \n";
        cout <<"Num1: ";
        cin >>Num1;
        cout <<"Num2: ";
        cin >>Num2;
        results1=cos(Num1*(22/7)/180);
        results2=cos(Num2*(22/7)/180);
        cout <<"Cos of "<<Num1<<" and "<<Num2<<" is "<<results1<<" and "<<results2<<" ",Num1,Num2,results1,results2;
    }
    else{
        cout <<"invalid input";
    }
    break;

case 10:
    //sqrt = (Num1)^1/2;
    //sqrt = (Num2)^1/2;
    if(opp==10){
    cout <<"Square Root: \n";
    cout <<"do you want square root of two numbers? (y/n): \n";
    cin >>c;
    cin >>c;
    }
    if(c=='n'){
    cout <<"Square Root: \n";
    cout <<"Num1: ";
    cin >>Num1;
    results=sqrt(Num1);
    cout <<"Square Root of "<<Num1<<" is "<<results<<" ",Num1,results;
    }
    else if(c=='y'){
        cout <<"Square Root: \n";
        cout <<"Num1: ";
        cin >>Num1;
        cout <<"Num2: ";
        cin >>Num2;
        results1=sqrt(Num1);
        results2=sqrt(Num2);
        cout <<"Square Root of "<<Num1<<" and "<<Num2<<" is "<<results1<<" and "<<results2<<" ",Num1,Num2,results1,results2;
    }
    else{
        cout <<"invalid input";
    }
    break;

case 11:
    //cbrt1 = Num1^1/3;
    //cbrt2 = Num2^1/3;
    if(opp==11){
        cout <<"Cube Root: \n";
        cout <<"do you want cube root of two numbers? (y/n): \n";
        cin >>c;
        cin >>c;
    }
    if(c=='n'){
        cout <<"Cube Root: \n";
        cout <<"Num1: ";
        cin >>Num1;
        results=cbrt(Num1);
        cout <<"Cube Root of "<<Num1<<" is "<<results<<" ",Num1,results;
    }
    else if(c=='y'){
        cout <<"Cube Root: \n";
        cout <<"Num1: ";
        cin >>Num1;
        cout <<"Num2: ";
        cin >>Num2;
        results1=cbrt(Num1);
        results2=cbrt(Num2);
        cout <<"Cube Root of "<<Num1<<" and "<<Num2<<" is "<<results1<<" and "<<results2<<" ",Num1,Num2,results1,results2;
    }
    else{
        cout <<"invalid input";
    }
    break;

case 12:
    //log = log10(Num1);
    //log = log10(Num2);
    if(opp==12){
        cout <<"Logarithm10: \n";
        cout <<"do you want log10 of two numbers? (y/n): \n";
        cin >>c;
        cin >>c;
    }
    if(c=='n'){
        cout <<"Log10: \n";
        cout <<"Num1: ";
        cin >>Num1;
        while(Num1<0){
            cout <<"Log10 of a negative number does not exist, input another number: ";
            cin >>Num1;
        }
        results=log10(Num1);
        cout <<"log10 of "<<Num1<<" is "<<results<<" ",Num1,results;
    }
    else if(c=='y'){
        cout <<"Log10: \n";
        cout <<"Num1: ";
        cin >>Num1;
        while(Num1<0){
            cout <<"Log10 of a negative number does not exist, input another number: ";
            cin >>Num1;
        }
        cout <<"Num2: ";
        cin >>Num2;
        while(Num2<0){
            cout <<"Log10 of a negative number does not exist, input another number: ";
            cin >>Num2;
        }
        results1=log10(Num1);
        results2=log10(Num2);
        cout <<"log10 of "<<Num1<<" and "<<Num2<<" is "<<results1<<" and "<<results2<<" ",Num1,Num2,results1,results2;
    }
    else{
        cout <<"invalid input";
    }
    break;

case 13:
    if(opp==13){
        cout <<"Tangent: \n";
        cout <<"do you want tangent of two numbers? (y/n): ";
        cin >>c;
        cin >>c;
    }
    if(c=='n'){
        cout <<"Tangent: \n";
        cout <<"Num1: ";
        cin >>Num1;
    while(Num1==90){
        cout <<"Tangent of 90 is undefined, input another number: ";
        cin >>Num1;
    }
    results=tan(Num1*3.14159/180);
    cout <<"Tangent of "<<Num1<<" is "<<results<<" ",Num1,results;
    }
    else if(c=='y'){
        cout <<"Tangent: \n";
        cout <<"Num1: ";
        cin >>Num1;
    while(Num1==90){
        cout <<"Tangent of 90 is undefined, input another number: ";
        cin >>Num1;
    }
    cout <<"Num2: ";
    cin >>Num2;
    while(Num2==90){
        cout <<"Tangent of 90 is undefined, input another number: ";
        cin >>Num2;
    }
    results1=tan(Num1*3.14159/180);
    results2=tan(Num2*3.14159/180);
    cout <<"Tangent of "<<Num1<<" and "<<Num2<<" is "<<results1<<" and "<<results2<<" ",Num1,Num2,results1,results2;
    }
    else{
        cout <<"invalid input!!";
    }
    break;

case 14:
    //Factorial
    cout <<"Factorial: \n";
    cout <<"Num1: ";
    cin >>Num1;
    for(i=1; i<=Num1; i++)
        f=f*i;
    cout <<"Factorial of "<<Num1<<" is "<<f<<" ",Num1,f;
    break;

case 15:
    //HCF
    cout <<"HCF: \n";
    cout <<"Num1: ";
    cin >>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    for(i=1; i<Num1 && i<=Num2; ++i){
        if(Num1%i==0 && Num2%i==0)
            gcd=i;
    }
    cout <<"HCF of "<<Num1<<" and "<<Num2<<" is "<<gcd<<" ",Num1,Num2,gcd;
    break;

case 16:
    cout <<"LCM: \n";
    cout <<"Num1: ";
    cin >>Num1;
    cout <<"Num2: ";
    cin >>Num2;
    for(i=1;i<=Num1 && i<=Num2; ++i){
        if(Num1%i==0 && Num2%i==0)
            gcd=i;
    }
    lcm=(Num1*Num2)/gcd;
    cout <<"LCM of "<<Num1<<" and "<<Num2<<" is "<<lcm<<" ",Num1,Num2,lcm;
    break;

case 17:
    cout <<"Power Series: \n";
    cout <<"Base: ";
    cin >>base;
    cout <<"exponent: ";
    cin >>exponent;
    for(i=1; i<=exponent; i++)
    {
        power=power*base;
    }
    cout <<" "<<base<<" ^ "<<exponent<<" = "<<power<<" ",base,exponent,power;
    break;
/*
case 18:
    cout <<"Quadratic Equation: \n";
    cout <<"w: ";
    cin >>w;
    cout <<"x: ";
    cin >>x;
    cout <<"y: ";
    cin >>y;
    z=x*x-4*w*y;
    if(d<0){
        cout <<"Roots are complex number: \n";
        cout <<"Roots of quadratic equation are: ";
        cout <<"%.3f%+.3fi",-x/(2*w),sqrt(-z)/(2*w);
        cout <<",%.3f%+.3fi",-x/(2*w),-sqrt(-z)/(2*w);
    }
    else if(z==0){
        cout <<"both roots are equal. \n";
        root1=-x/(2*w);
        cout <<"root of quadratic equation is %.3f",root1;
    }
    else{
        cout <<"roots are real numbers. \n";
        root1=(-x+sqrt(z))/(2*w);
        root2=(-x-sqrt(z))/(2*w);
        cout <<"roots of quadratic equation are: %.3f,%.3f",root1,root2;
    }
    break;
*/
    default:
    cout <<"Syntactic Error!!!";
    cout <<"\n select operation: ";
    cin >>opp;
    break;
}
    cout <<"\nproceed to to other calculations?(y/n): ";
    cin >>d;
    cin >>c;
    //cin >>opp;
}
while((c=='y')&&(opp!=0));
}
