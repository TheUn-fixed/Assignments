#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define p printf
#define s scanf

float mass, height, bmi;

void title()
{
	
	p("Am I in Danger?\n\n");
	
}

void input()
{
	
	p("Mass in pounds(lb):\t");
		s("%f", &mass);
	p("Height in Inches(in):\t");
		s("%f", &height);
	
}

void bmicalc()
{
	
	bmi = 703 * mass / (height * height);
	
}

main()
{
	
	title();
	input();
	bmicalc();
	
	if (bmi < 18.5)
	{
		
		p("\nBMI = %.2f", bmi);
		p("\n\nStatus: Underweight\n\nEat up, bruv.");
		
	}
	
	else if (bmi >= 30.0)
	{
		
		p("\nBMI = %.2f", bmi);
		p("\n\nStatus: Obese\n\nYou're in Danger!");
		
	}
	
	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		
		p("\nBMI = %.2f", bmi);
		p("\n\nStatus: Normal\n\nYou're Healthy!");
		
	}
	
	else if (bmi >= 25.0 && bmi <= 29.9)
	{
		
		p("\nBMI = %.2f", bmi);
		p("\n\nStatus: Overweight\n\nGo on a diet.");
		
	}
	
	else
	{
		
		p("\nError in Input!");
		
	}
	
	return 0;
	
}
