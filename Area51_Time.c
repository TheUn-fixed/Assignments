#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define p printf
#define s scanf

//Initialization of Integers
int time_input, hours, minutes;

//Object: Title
void title()
{
	
	p("Time in Area 51\n\n");
	
}

//Object: Input
void input()
{
	
	p("What time is it in Military Notation?\t");
		s("%d", &time_input);
	
}

//Object: Time Calculation
void timecalc()
{
	
	hours = (time_input / 100) - 12;
	minutes = (time_input % 100);
	
	if (time_input >= 0 && time_input <=1259)
	{
		
		hours = (time_input / 100);
		minutes = (time_input % 100);	
		
	}
	
	
}

//Object: Display Result
void display()
{
	
	
	if (time_input >= 0 && time_input <= 1159)
	{
		
		p("\nTime in Military Notation: %.4d", time_input);	
		p("\n\nTime in 12-hr Notation: %.2d:%.2d AM", hours, minutes);	
		
	}
	
	else if (time_input >= 1200 && time_input <= 2359)
	{
		p("\nTime in Military Notation: %.4d", time_input);
		p("\n\nTime in 12-hr Notation: %.2d:%.2d PM", hours, minutes);	
		
	}
	
	else
	{
		
		p("\nInput is Invalid!");
		
	}
	
	p("\n\nSeig Heil!");
	
}

//Main Function
main()
{
	
	title();
	input();
	timecalc();
	display();
	
	return 0;
	
}
