#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int Result;
	int firstAnswer;
	int secondAnswer;
	int thirdAnswer;
	int fourthAnswer;
	
	char ready[3];
	printf("___________________________________________________\n");
	printf("\t\t ## EVIL QUIZ ##\n");
	printf("Are u ready to take the most hard QUIZ !!  [yes/no]:");
	scanf("%s",&ready);	
	printf("\n__________________________________________________\n");
	if (strcmp ("no", ready) == 0){
	 printf("\n\n not brave enough HAHAHAHA !!");
	 return 0;
	 }
	 else if(strcmp ("yes",ready) == 0);
	 printf("\nYou dare challenging me > < !!!! \nlet's start\n\n");
	
	printf("Q #1:when Alan Turing invented the computer that solved a fiendish puzzle known as the Entscheidungsproblem ?\n\n1) 1938\n2) 1936\n3) 1935\nyour answer : ");
	scanf("%d",&firstAnswer);
	if(firstAnswer == 2)
	Result+=5;

	else
	Result-=5;
	
	printf("\nQ #2:what was the first programming language ?\n\n1) Algorithm for the Analytical Engine\n2) Autocode\n3) Pascal\nyour answer : ");
	scanf("%d",&secondAnswer);
	if(secondAnswer == 1)
	Result+=5;

	else
	Result-=5;
	
	printf("\nQ #3:who invented linux ubuntu ?\n\n1) James Gosling \n2) Linus Torvalds \n3) Mark Shuttleworth\nyour answer : ");
	scanf("%d",&thirdAnswer);
	if(thirdAnswer == 3){	
	Result+=5;
	}
	else
	Result-=5;
	
	printf("\nQ #4:when were computer mouse invented ?\n\n1) 1964 \n2) 1965 \n3) 1966\nyour answer : ");
	scanf("%d",&fourthAnswer);
	if(fourthAnswer == 1){	
	Result+=5;
	}
	else
	Result-=5;
	
	if(Result<0){
	Result = 0;
	}
	else 
	Result=Result;
	
		printf("\n\n\t your result is : %d /20 \n",Result);
	
	
	if(Result==0)
	printf("empty brain HAHAHA !!");
	else if(Result==5)
	printf("maybe next time");
	else if(Result==10)
	printf("you're a little bit close");
	else if(Result==15)
	printf("impressive");
	else if(Result==20)
	printf("AGHH you defeated me !!");
	
	
	return 0;
}



