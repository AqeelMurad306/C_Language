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

  printf("\n*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t");
  printf("\n*\t\t\t\t\t\t\tMARKSHEET\t\t\t\t\t\t\t\t*\n");
  printf("*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t\n");

  printf("* NAME : \t %s \t\t\t\t\t\t\t\t\t\t\t\t\t* \n" ,name);
  printf("* ROLL NO : \t %d \t\t\t\t\t\t\t\t\t\t\t\t* \n" ,rollNo);
  printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\n");

  printf("* SUBJECTS \t\t\t");
  printf("MAX MARKS \t");
  printf("OBTAINED MARKS \t" );
  printf("\t GRADE \t\t\t*\n" );

  printf("* PHYSICS\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \t\t\t\t\t" ,sub1);

  if(sub1 > 100){
    printf("Error! ");
  }
  else if(sub1 >= 80){
    printf("A+ ");
  }
  else if(sub1 >= 70){
    printf("A ");
  }
  else if(sub1 >= 60){
    printf("B ");
  }
  else if(sub1 >= 50){
    printf("C ");
  }
  else if(sub1 > 40){
    printf("D ");
  }
  else{
    printf("F ");
  }
  printf("\t\t\t* \n");


  printf("* CHEMISTRY\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \t\t\t\t\t" ,sub2);

  if(sub2 > 100){
    printf("Error!");
  }
  else if(sub2 >= 80){
    printf("A+");
  }
  else if(sub2 >= 70){
    printf("A");
  }
  else if(sub2 >= 60){
    printf("B");
  }
  else if(sub2 >= 50){
    printf("C");
  }
  else if(sub2 > 40){
    printf("D");
  }
  else{
    printf("F");
  }
  printf("\t\t\t* \n");


  printf("* MATH\t\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \t\t\t\t\t" ,sub3);

  if(sub3 > 100){
    printf("Error!");
  }
  else if(sub3 >= 80){
    printf("A+");
  }
  else if(sub3 >= 70){
    printf("A");
  }
  else if(sub3 >= 60){
    printf("B");
  }
  else if(sub3 >= 50){
    printf("C");
  }
  else if(sub3 > 40){
    printf("D");
  }
  else{
    printf("F");
  }
  printf("\t\t\t* \n");


  printf("* URDU\t\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \t\t\t\t\t" ,sub4);

  if(sub4 > 100){
    printf("Error!");
  }
  else if(sub4 >= 80){
    printf("A+");
  }
  else if(sub4 >= 70){
    printf("A");
  }
  else if(sub4 >= 60){
    printf("B");
  }
  else if(sub4 >= 50){
    printf("C");
  }
  else if(sub4 > 40){
    printf("D");
  }
  else{
    printf("F");
  }
  printf("\t\t\t* \n");


  printf("* ISLAMIAT\t\t\t\t");
  printf("100\t\t\t");
  printf("%d \t\t\t\t\t" ,sub5);

  if(sub5 > 100){
    printf("Error!");
  }
  else if(sub5 >= 80){
    printf("A+");
  }
  else if(sub5 >= 70){
    printf("A");
  }
  else if(sub5 >= 60){
    printf("B");
  }
  else if(sub5 >= 50){
    printf("C");
  }
  else if(sub5 > 40){
    printf("D");
  }
  else{
    printf("F");
  }
  printf("\t\t\t* \n");

  
  printf("*\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*\n");
  printf("* Total \t\t\t\t");
  printf("500 \t\t");
  printf("%d \t\t\t\t\t\t\t* \n" ,total);

  printf("* OVERALL GRADE \t\t");
  printf(" \t\t\t");
  printf("%d%%\t\t\t\t\t" ,percentage);


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
  else if(percentage >= 50){
    printf("C");
  }
  else if(percentage > 40){
    printf("D");
  }
  else{
    printf("F");
  }
  printf("\t\t\t* \n");

  printf("*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t");




  
  
  

  return 0;
}