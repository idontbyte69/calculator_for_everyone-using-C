#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include <stdlib.h>

struct choice
{
    char choice_char;
    int choice_int;
    float choice_float;
};
struct choice ch;

void calculator_op();
void basic_math();
void formula();
void area();
void volume();
void medical();
void play_math();
void conversion();

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();

void square();
void rectangle();
void triangle();
void circle();
void trapezoid();
void ellipse();
void cylinder_volume();
void cube_volume();
void cuboid_volume();
// void square_volume();
// void sphere_volume();
void slope();

void mbr_women();
void mbr_men();
void dose_cal();
void cal_need();
void cal_men();
void cal_women();

void prime_num();
void swap();
void fibonacci();
void palindrome();
void leap_year();
void armstrong_num();
void reverse_num();
void gcd_lcm();

void c_f();

int main(){
    
    calculator_op();
    
    return 0;
}

                        
                        // // // FUNCTION DEFINATIONS // // // 

void calculator_op(){
    printf("\n\n\n\n");
    printf("     ----------------- “CALCULATOR FOR EVERYONE” -----------------\n");
    printf("     ------ ONE CALCULATOR CAN DO 1000 TYPES OF CALCULATION ------\n\n");
    printf("           *** WELCOME TO OUR MODERN CALCULATOR ***");
    
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("\n                  %s", asctime(ptr));
    
    printf("\n      *******************************************************\n       *****************************************************");
    printf("\n\nChoose any of these type of Calculation you want to do: \n\n1. Basic Math(+, -, *, /, ^)\n2. Area, Volume, Slope and so more\n3. Medical Field\n4. Land Calculation\n5. Play with number by calculation\n6. Conversion\n\nInput: ");
    scanf("%d", &ch.choice_int);
    switch (ch.choice_int) {
    case 1:basic_math();
        break;
    case 2:formula();
        break;
    case 3:medical();
        break;
    case 4:calculator_op();
        break;
    case 5:play_math();
        break;
    case 6:conversion();
        break;
    default:
        printf("\n\n************* Invalid Input ***************\nRestart the Program\nPlease try to give values from 1 to 6");
        calculator_op();
        break;
    }

}
void basic_math(){
    printf("*** CHOOSE ONE FROM THE LIST\n\n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulus\n");
    printf("6. Power \n");
    printf("7. Factorial \n\nInput: ");
    scanf("%d", &ch.choice_int);
    switch (ch.choice_int) {
    case 1:addition();
        break;
    case 2:subtraction();
        break;
    case 3:multiplication();
        break;
    case 4:division();
        break;
    case 5:modulus();
        break;
    case 6:power();
        break;
    case 7:factorial();
        break;
    default:
        printf("************* Invalid Input ***************\nRestart the Program\nPlease try to give values from 1 to 7");
        basic_math();
        break;
    }
}
void formula(){
    printf("\n\n*** CHOSE ONE FROM THE LIST ***\n\n");
    printf("1. Area \n");
    printf("2. Volume \n");
    printf("3. Slope \n");
    printf("4. Angle \n");
    printf("5. Circumference\n\nInput:");
    scanf("%d",&ch.choice_int);
    switch (ch.choice_int){
    case 1:area();
        break;
    case 2:volume();
        break;
    case 3: slope();
        break;
    default:
        printf("Please select from option 1 to 4");
        formula();
        break;
    }
}
void area(){
    printf("\n\n1. Square\n2. Rectangle\n3. Triangle\n4. Circle\n5. Trapezoid\n6. Ellipse\n\n");
    printf("Choose one from above options: ");
    scanf("%d", &ch.choice_int);
    switch (ch.choice_int){
    case 1:square();
        break;
    case 2:rectangle();
        break;
    case 3:triangle();
        break;
    case 4:circle();
        break;
    case 5:trapezoid();
        break;
    case 6:ellipse();
        break;
    default:    
        printf("Please select from option 1 to 6");
        area();
        break;
    }  
}
void volume(){
    printf("\n\n1. Cylinder\n2. Cube\n3. Rectangular Solid or Cuboid\n4. Square or Rectangular Pyramid\n5. Sphere\n\n");
    printf("Choose one from above options: ");
    scanf("%d", &ch.choice_int);
    switch (ch.choice_int){
    case 1:cylinder_volume();
        break;
    case 2:cube_volume();
        break;
    case 3:cuboid_volume();
        break;
    // case 4:square_volume();
    //     break;
    // case 5:sphere_volume();
    //     break;
    default:    
        printf("Please select from option 1 to 5");
        volume();
        break;
    }
}
void slope(){
    printf("Enter Cordinates below: \n");
    printf("x1 = ");
    scanf("%f",&ch.choice_float);
    int x1 = ch.choice_float;
    printf("y1 = ");
    scanf("%f",&ch.choice_float);
    int y1 = ch.choice_float;
    printf("x2 = ");
    scanf("%f",&ch.choice_float);
    int x2 = ch.choice_float;
    printf("y2 = ");
    scanf("%f",&ch.choice_float);
    int y2 = ch.choice_float;
    float slope = (y2 - y1)/(x2 - x1);
    printf("The Slope m = %.4f", slope);
}
void medical(){
    printf("\n\n*** CHOSE ONE FROM THE LIST ***\n\n");
    printf("1. Dose calculation per weight prescribed per minute \n");
    printf("2. BMR for Men \n");
    printf("3. BMR for Women \n");
    printf("4. Calorie Needs \n\nInput: ");
    scanf("%d",&ch.choice_int);
    switch (ch.choice_int){
    case 1:dose_cal();
        break;
    case 2:mbr_men();
        break;
    case 3:mbr_women();
        break;
    case 4:cal_need();
        break;
    default:
        printf("Please select from option 1 to 3");
        medical();
        break;
    }
}
void conversion(){
    printf("\nChoose one from given options: \n");
    printf("1. Celcius to Fahrenheit\n");
    printf("2. Fahrenheit to Celcius\n");
    printf("3. Meter to Kilo Meter\n");
    printf("4. Kilo Meter to Meter\n");
    scanf("%d", &ch.choice_int);
    switch (ch.choice_int){
    case 1: c_f();
        break;
    default:
        conversion();
        break;
    }
}


//////////////  BASIC MATH CALCULATION //////////////////
void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}
void subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("\n%d - %d = %d\n", a, b, c); 
}
void multiplication()
{
    int a, b, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &a); 
    printf("Please enter second number: "); 
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}
void division()
{
    int a, b, d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}
void modulus()
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}
void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}
int factorial()
{
    int i,fact=1,num;
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
    if (num<0){
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}


void square(){
    printf("\n * * * * * * * * \n");
    printf("*       a       *\n");
    printf("*               *\n");
    printf("*               *\n");
    printf("* a           a *\n");
    printf("*               *\n");
    printf("*               *\n");
    printf("*       a       *\n");
    printf(" * * * * * * * * \n\n");
    printf("\nEnter value for Side of the Square: ");
    scanf("%d", &ch.choice_int);
    int area = pow(ch.choice_int,2);
    printf("\nThe area of the Square is %d\n\n", area);
}
void rectangle(){
    printf("\n  * * * * * * * * * * * * \n");
    printf("*             L           *\n");
    printf("*                         *\n");
    printf("*                         *\n");
    printf("* W                     W *\n");
    printf("*                         *\n");
    printf("*                         *\n");
    printf("*             L           *\n");
    printf("  * * * * * * * * * * * * \n");
    printf("\nEnter values of Length(L) and Weidth(W) Rectangle: \n");
    printf("L = ");
    scanf("%d", &ch.choice_int);
    int l = ch.choice_int;
    printf("W = ");
    scanf("%d", &ch.choice_int);
    int w = ch.choice_int;
    int area = l * w;
    printf("\nThe area of the Rectangle is %d\n\n", area);
}
void triangle(){
    printf("\n              *\n");
    printf("             *|*\n");
    printf("            * | *\n");
    printf("           *  |  *\n");
    printf("          *   |H  *\n");
    printf("         *    ||   *\n");
    printf("        *     |H    *\n");
    printf("       *      |e     *\n");
    printf("      *       |i      *\n");
    printf("     *        |g       *\n");
    printf("    *         |h        *\n");
    printf("   *          |t         *\n");
    printf("  *           |           *\n");
    printf(" * * * * * * * * * * * * * *\n");
    printf("        B(Base)    ");
    printf("\nEnter values for Height(H) and Base(B) of the Triangle: \n");
    printf("H (Height) = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    printf("B (Base) = ");
    scanf("%f", &ch.choice_float);
    float b = ch.choice_float;
    float area = 0.5 * h * b;
    printf("\nThe area of the Triangle is %.3f\n\n", area);
}
void circle(){
    printf("\nEnter value for Radius of the circle: \n");
    printf("Radius: ");
    scanf("%f", &ch.choice_float);
    float area = 3.1416 * (pow(ch.choice_float, 2));
    printf("\nThe area of the Circle is %.3f\n\n", area);
}
void trapezoid(){
    printf("\nEnter values of Base1, Base2 and Vertical Height(H) of the Trapazoid: \n");
    printf("Base 1 = ");
    scanf("%f", &ch.choice_float);
    float b1 = ch.choice_float;
    printf("Base2 = ");
    scanf("%f", &ch.choice_float);
    float b2 = ch.choice_float;
    printf("H (Vertical Height) = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    float area = 0.5 * (b1+b2) * h ;
    printf("\nThe area of the Triangle is %.3f\n\n", area);
}
void ellipse(){
    printf("\nEnter values for major axis and minor axis redius: \n");
    printf("Radius for major axis = ");
    scanf("%f", &ch.choice_float);
    float major = ch.choice_float;
    printf("Radius for minor axis = ");
    scanf("%f", &ch.choice_float);
    float minor = ch.choice_float;
    float area = 3.1416 * major * minor;
    printf("\nThe area of the Ellipse is %.3f\n\n", area);
}


void cylinder_volume(){
    printf("\nEnter values of Radius of the Circular base(R) and Height(H) Rectangle: \n");
    printf("R = ");
    scanf("%f", &ch.choice_float);
    float r = ch.choice_float;
    printf("H = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    float volume = 3.1416*(pow(r,2))*h;
    printf("\nThe volume of the Rectangle is %.3f\n\n", volume);
}
void cube_volume(){
    printf("\nEnter value for Side of the Cube: ");
    scanf("%d", &ch.choice_int);
    int area = pow(ch.choice_int,3);
    printf("\nThe volume of the Cube is %d\n\n", area);
}
void cuboid_volume(){
    printf("\nEnter values for Length(L), Width(W)  and Height(H) of the Trapazoid: \n");
    printf("L = ");
    scanf("%f", &ch.choice_float);
    float l = ch.choice_float;
    printf("W = ");
    scanf("%f", &ch.choice_float);
    float w = ch.choice_float;
    printf("H = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    float area = l * w * h ;
    printf("\nThe volume of the Rectangular Solid or Cuboid is %.3f\n\n", area);
}
// void square_volume();
// void sphere_volume();


void mbr_women(){
    printf("\nFor calculating BMR you need to give some value: \n1.Weight(kg) = ");
    scanf("%f", &ch.choice_float);
    float w = ch.choice_float;
    printf("\nHeight(cm) = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    printf("Age(years) = ");
    scanf("%f", &ch.choice_float);
    float age = ch.choice_float;
    float bmr = 655.1 + (9.563 * w) + (1.850 * h) - (4.676 * age);
    printf("BMR = %.3f", bmr);
}
void mbr_men(){
    printf("\nFor calculating BMR you need to give some value: \n1.Weight(kg) = ");
    scanf("%f", &ch.choice_float);
    float w = ch.choice_float;
    printf("\nHeight(cm) = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    printf("Age(years) = ");
    scanf("%f", &ch.choice_float);
    float age = ch.choice_float;
    float bmr = 66.5 + (13.75 * w) + (5.003 * h) - (6.75 * age);
    printf("BMR = %.3f", bmr);
}
void cal_men(){
    printf("\nFor calculating BMR you need to give some value: \n1.Weight(kg) = ");
    scanf("%f", &ch.choice_float);
    float w = ch.choice_float;
    printf("\nHeight(cm) = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    printf("Age(years) = ");
    scanf("%f", &ch.choice_float);
    float age = ch.choice_float;
    float bmr = 66.5 + (13.75 * w) + (5.003 * h) - (6.75 * age);
    printf("BMR = %.3f\n", bmr);
    printf("\n\nChoose your activity factor: \n");
    printf("\n1. Light/No Exercise\n2. Light Excercise/Sports 1-3 Days per week\n3. Moderate Exercise/Sports 3-5 Days per week\n4. Hard exercise/Sports 6-7 Days a week\n5. Very hard exercise/Sports & a Physical job\n\n");
    scanf("%d", &ch.choice_int);
    printf("\n");
    switch (ch.choice_int){
    case 1:
        printf("Callorie you need: \nBMR * 1.2 = %.3f", bmr*1.2);
        break;
    case 2:
        printf("Callorie you need: \nBMR * 1.375 = %.3f", bmr*1.375);
        break;
    case 3:
        printf("Callorie you need: \nBMR * 1.55 = %.3f", bmr*1.55);
        break;
    case 4:
        printf("Callorie you need: \nBMR * 1.725 = %.3f", bmr*1.725);
        break;
    case 5:
        printf("Callorie you need: \nBMR * 1.9 = %.3f", bmr*1.9);
        break;
    
    default:
        printf("INVALID INPUT!! PLEASE TRY TO GIVE INPUT FROM 1-5");
        cal_men();
        break;
    }
}
void cal_women(){
    printf("\nFor calculating BMR you need to give some value: \n1.Weight(kg) = ");
    scanf("%f", &ch.choice_float);
    float w = ch.choice_float;
    printf("\nHeight(cm) = ");
    scanf("%f", &ch.choice_float);
    float h = ch.choice_float;
    printf("Age(years) = ");
    scanf("%f", &ch.choice_float);
    float age = ch.choice_float;
    float bmr = 655.1 + (9.563 * w) + (1.850 * h) - (4.676 * age);
    printf("BMR = %.3f\n", bmr);
    printf("\nChoose your activity factor: \n");
    printf("\n1. Light/No Exercise\n2. Light Excercise/Sports 1-3 Days per week\n3. Moderate Exercise/Sports 3-5 Days per week\n4. Hard exercise/Sports 6-7 Days a week\n5. Very hard exercise/Sports & a Physical job\n\n");
    scanf("%d", &ch.choice_int);
    printf("\n");
    switch (ch.choice_int){
    case 1:
        printf("Callorie you need: \nBMR * 1.2 = %.3f", bmr*1.2);
        break;
    case 2:
        printf("Callorie you need: \nBMR * 1.375 = %.3f", bmr*1.375);
        break;
    case 3:
        printf("Callorie you need: \nBMR * 1.55 = %.3f", bmr*1.55);
        break;
    case 4:
        printf("Callorie you need: \nBMR * 1.725 = %.3f", bmr*1.725);
        break;
    case 5:
        printf("Callorie you need: \nBMR * 1.9 = %.3f", bmr*1.9);
        break;
    default:
        printf("INVALID INPUT!! PLEASE TRY TO GIVE INPUT FROM 1-5");
        cal_women();
        break;
    }
}
void cal_need(){
    printf("Choose your Gender: \n1. Male\n2. Female\n\n");
    scanf("%d", &ch.choice_int);
    if (ch.choice_int == 1){
        cal_men();
    }else if(ch.choice_int == 2){
        cal_women();
    }else{
        cal_need();
    }
    
}
void dose_cal(){
    printf("Choose your Gender: \n1. Male\n2. Female\n\n");
    scanf("%d", &ch.choice_int);
    if (ch.choice_int == 1){
        cal_men();
    }else if(ch.choice_int == 2){
        cal_women();
    }else{
        cal_need();
    } 
}


void play_math(){
    printf("\nChoose one from given options: \n");
    printf("1. Prime Number Detection\n");
    printf("2. Swap 2 numbers within their Variables\n");
    printf("3. Fibonacci Series\n");
    printf("4. Palindrome Number Detection\n");
    printf("5. Leap year Detection \n");
    printf("6. Armstrong Number Detection\n");
    printf("7. Reverse any number \n");
    printf("8. Find GCD & LCM\n\n");
    scanf("%d", &ch.choice_int);
    switch (ch.choice_int){
    case 1:prime_num();
        break;
    case 2:swap();
        break;
    case 3:fibonacci();
        break;
    case 4:palindrome();
        break;
    case 5:leap_year();
        break;
    case 6:armstrong_num();
        break;
    case 7:reverse_num();
        break;
    case 8:gcd_lcm();
        break;
    default:
        play_math();
        break;
    }
}
void prime_num(){
    int i, num, p = 0;
    printf("Please enter a number: \n");
    scanf("%d", &ch.choice_int);
    num = ch.choice_int;
    for(i=1; i<=num; i++){
      if(num%i==0){
         p++;
      }
    }
    if(p==2){
      printf("Entered number is %d "\
             "and it is a prime number.",num);
   }else{
      printf("Entered number is %d "\
             "and it is not a prime number.",num);
   }
}
void swap(){
    int A, B;
    printf("Please enter the 1st number : ");
    scanf("%d",&A);
    printf("\nPlease enter the 2nd number : ");
    scanf("%d",&B);
    printf("\nBefore swapping:\n");
    printf("A - %d \nB - %d", A, B);
    A = A - B;
    B = A + B;
    A = B - A;
    printf("\nAfter swapping:\n");
    printf("A - %d \nB - %d", A, B);
}
void fibonacci(){
    int f1=0, f2=1, fib_ser, cnt=2, lmt;
    printf("Please enter the limit of the Fibonacci series :");
    scanf("%d",&ch.choice_int);
    lmt = ch.choice_int; 
    printf("\nFibonacci series is: \n%d \n%d \n",f1,f2);
    while (cnt < lmt){
        fib_ser=f1+f2;
        cnt++;
        printf("%d\n",fib_ser);
        f1=f2;
        f2=fib_ser;
   }
}
void palindrome(){
    int number, t, rev=0, rmndr;
    printf("Please enter a number to check Palindrome : ");
    scanf("%d",&ch.choice_int);
    printf("\nEntered number: %d", ch.choice_int);
    number = ch.choice_int;
    t = ch.choice_int;
    while (number > 0){
        rmndr = number%10;
        rev = rev*10 + rmndr;
        number = number/10;
    }
    printf("\nReversed number: %d", rev);
    if(t == rev){
        printf("\nEntered number %d is a palindrome", t);
    }else{
        printf("\nEntered number %d is not a palindrome", t);
     }
}
void leap_year(){
    printf("\nPlease enter a year to check whether it is a leap year or not");
    scanf("%d", &ch.choice_int);
    int year =ch.choice_int;
    if ( year%400 == 0)
        printf("\n%d is a leap year", year);
    else if ( year%100 == 0)
        printf("\n%d is not a leap year", year);
    else if ( year%4 == 0 )
        printf("\n%d is a leap year", year);
    else
        printf("\n%d is not a leap year", year); 
}
void armstrong_num(){
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &ch.choice_int);
    originalNum = ch.choice_int;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if (result == ch.choice_int)
        printf("%d is an Armstrong number.", ch.choice_int);
    else
        printf("%d is not an Armstrong number.", ch.choice_int);

}
void reverse_num(){
    int n, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &ch.choice_int);
    n = ch.choice_int;
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d", reverse);
}
void gcd_lcm(){
    int num1, num2, gcd, lcm, remainder, numerator, denominator;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2){
        numerator = num1;
        denominator = num2;
    }else{
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0){
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}
void c_f(){
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
}






























