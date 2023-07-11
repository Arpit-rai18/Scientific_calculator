#include <stdio.h>
#include<math.h>
#define PI 3.14159265

float add(float *, float *);
float sub(float *, float *);
float multi(float *, float *);
float divi(float *, float *);
float sine(float );
float cosine(float );
float tangent(float );
float squareroot(float );
float power(float, float );
float logten(float );

int main()
{
    float num1, num2 ;
    float result;
    char ch;
    
    printf("\n************SCIENTIFIC CALCULATOR************\n\n");
    printf("Enter first number : ");
    scanf("%f",&num1);
    printf("Enter second number : ");
    scanf("%f",&num2);


    printf("\nChoose operation to perform (+,-,*,/, 1[sin], 2[cos], 3[tan], 4[squareroot],5[power],6[log]) :  ");
    scanf(" %c",&ch);

    result=0;
    switch(ch)
    {
        case '+':
  			result = add(&num1, &num2);
            printf("\nResult: %.2f %c %.2f = %.2f\n",num1,ch,num2,result);
  			break;
  		case '-':
  			result = sub(&num1, &num2);
            printf("\nResult: %.2f %c %.2f = %.2f\n",num1,ch,num2,result);
  			break;
  		case '*':
  			result = multi(&num1, &num2);
            printf("\nResult: %.2f %c %.2f = %.2f\n",num1,ch,num2,result);
  			break;
  		case '/':
  			result = divi(&num1, &num2);
            printf("\nResult: %.2f %c %.2f = %.2f\n",num1,ch,num2,result);
  			break;
        case '1':
  			result = sine(num1);
            printf("\nSin(%.2f) is equal to  %.2f\n", num1, result);
  			break;
        case '2':
  			result = cosine(num1);
            printf("\nCos(%.2f) is equal to  %.2f\n", num1, result);
  			break;
        case '3':
  			result = tangent(num1);
            printf("\nTan(%.2f) is equal  a %.2f\n", num1, result);
  			break;
        case '4':
  			result = squareroot(num1);
            printf("\nSquareroot of %.2f is %.2f\n", num1, result);
  			break;
        case '5':
  			result = power(num1, num2);
            printf("\nPower of %.2f ** %.2f is %.2f\n",num1, num2, result);
  			break;
        case '6':
  			result = logten(num1);
            printf("\nLog10 of %.2f is %f\n", num1, result);
  			break;

        default:
            printf("\n You have entered an Invalid operation.\n");
    }

    return 0;
}

float add(float *num1, float *num2)
{
    float res;
    res = *num1 + *num2;
	return res;
}

float sub(float *num1, float *num2)
{
	float res;
    res = *num1 - *num2;
	return res;
}

float multi(float *num1, float *num2)
{
	float res;
    res = *num1 * *num2;
	return res;
}

float divi(float *num1, float *num2)
{
	float res;
    res = *num1 / *num2;
	return res;
}
float sine(float num1)
{
    return (sin(num1*PI/180));
}
float cosine(float num1)
{
    return (cos(num1*PI/180));
}
float tangent(float num1)
{
    return (tan(num1*PI/180));
}
float squareroot(float num1)
{
    return (sqrt(num1));
}
float power(float num1, float num2)
{
    return (pow(num1, num2));
}
float logten(float num1)
{
    return (log10(num1));
}

