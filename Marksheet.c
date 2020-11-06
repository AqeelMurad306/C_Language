#include <stdio.h>

int main() {
  int sub1,sub2,sub3,sub4,sub5;

  printf("Enter your Physics Marks: ");
  scanf("%d" ,&sub1);
  printf("Enter your Chemistry Marks: ");
  scanf("%d" ,&sub2);
  printf("Enter your Math Marks: ");
  scanf("%d" ,&sub3);
  printf("Enter your Urdu Marks: ");
  scanf("%d" ,&sub4);
  printf("Enter your Islamiat Marks: ");
  scanf("%d" ,&sub5);

  int total = sub1+sub2+sub3+sub4+sub5;
  int percentage = (total*100)/500;

  char name[50];
  int rollNo;
  printf("Enter your Name: ");
  scanf("%s" , name);
  printf("Enter your Roll No: ");
  scanf("%d" ,&rollNo);

  printf("\n\t\t\t\t\tMARKSHEET \n\n");

  printf("NAME : \t %s \n" ,name);
  printf("ROLL NO : \t %d \n\n" ,rollNo);

  printf("SUBJECTS \t\t");
  printf("MAX MARKS \t");
  printf("OBTAINED MARKS \n" );

  printf("PHYSICS\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \n" ,sub1);

  printf("CHEMISTRY\t\t\t");
  printf("100\t\t\t");
  printf("%d \n" ,sub2);

  printf("MATH\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \n" ,sub3);

  printf("URDU\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \n" ,sub4);

  printf("ISLAMIAT\t\t\t");
  printf("100\t\t\t");
  printf("%d \n" ,sub5);

  printf("\nTotal \t\t\t\t");
  printf("500 \t\t");
  printf("%d \n" ,total);

  printf("OVERALL GRADE \t\t");
  printf(" \t\t\t");
  printf("%d%%\t\t\t" ,percentage);


  if(percentage > 100){
    printf("Error!");
  }
  else if(percentage >= 80){
    printf("A+");
  }
  else if(percentage >= 70){
    printf("A");
  }
  else if(percentage >= 60){
    printf("B");
  }
  else if(percentage >= 56){
    printf("C");
  }
  else if(percentage > 50){
    printf("D");
  }
  else{
    printf("F");
  }






  
  
  

  return 0;
}