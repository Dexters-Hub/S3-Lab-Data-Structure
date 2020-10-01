#include <stdio.h>
#include <math.h>

struct poly
{
  float coeff;
  int exp;
};

//declaration of polynomials
struct poly a[50], b[50], c[50];

int main()
{
  int i;
  int deg1, deg2; 
  int k = 0, l = 0, m = 0;
  
  printf("Enter the Degree of the 1st polynomial:");
  scanf("%d", &deg1);

  // Reading Coefficients from User Input of 1st Polynomial
    for (i = 0; i <= deg1; i++)
  {
    printf("\nEnter the coeff of x^%d :", i);
    scanf("%f", &a[i].coeff);

    //entering values in exponent of the polynomial terms
    a[k++].exp = i;
  }

  // Reading Coefficients from User Input of 2nd Polynomial
  printf("\nEnter the Degree of 2nd polynomial:");
  scanf("%d", &deg2);

  for (i = 0; i <= deg2; i++)
  {
    printf("\nEnter the coeff of x^%d :", i);
    scanf("%f", &b[i].coeff);
    b[l++].exp = i;
  }

  //Printing the First Polynomial
  printf("\nExpression 1 = %.1f", a[0].coeff);
  for (i = 1; i <= deg1; i++)
  {
    printf("+ %.1fx^%d", a[i].coeff, a[i].exp);
  }

  //Printing the Second Polynomial
  printf("\nExpression 2 = %.1f", b[0].coeff);
  for (i = 1; i <= deg2; i++)
  {
    printf("+ %.1fx^%d", b[i].coeff, b[i].exp);
  }

  // Adding the Polynomials
  if (deg1 > deg2)
  {
    for (i = 0; i <= deg2; i++)
    {
      c[m].coeff = a[i].coeff + b[i].coeff;
      c[m].exp = a[i].exp;
      m++;
    }

    for (i = deg2 + 1; i <= deg1; i++)
    {
      c[m].coeff = a[i].coeff;
      c[m].exp = a[i].exp;
      m++;
    }
  }
  else
  {
    for (i = 0; i <= deg1; i++)
    {
      c[m].coeff = a[i].coeff + b[i].coeff;
      c[m].exp = a[i].exp;
      m++;
    }

    for (i = deg1 + 1; i <= deg2; i++)
    {
      c[m].coeff = b[i].coeff;
      c[m].exp = b[i].exp;
      m++;
    }
  }

  //Printing the Sum of the polynomials
  printf("\nExpression after addition  = %.1f", c[0].coeff);
  for (i = 1; i < m; i++)
  {
    printf("+ %.1fx^%d", c[i].coeff, c[i].exp);
  }

  return 0;
}
