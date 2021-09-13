#include<stdio.h> 

int main()

{ 

  int n; 

  printf("Enter marks:"); 

  scanf("%d", &n); if (n>=85) 

  { 

    printf("Grade A"); 

  } 

  else if (n>=70 && n<=84) 

  { 

    printf("Grade B"); 

  } 

  else if (n>=55 && n<=69) 

  { 

    printf("Grade C"); 

  } 

  else if (n>40 && n<=54) 

  { 

    printf("Grade D"); 

  } 

  else 

  { 

    printf("Grade F"); 

  } 

}
