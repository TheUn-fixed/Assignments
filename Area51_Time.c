#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define p printf
#define s scanf

int time_input, hours, minutes;

void title()
{
	
	p("Area51 Time\n\n");
	
}

void input()
{
	
	p("What time is it in Military Notation?\t");
		s("%d", &time_input);
	
}

void timecalc()
{
	
	hours = (time_input / 100) - 12;
	minutes = ((time_input % 100));
	
}

void display()
{
	
	p("\nTime in Military Notation: %d", time_input);
	
	if (time_input >= 0 && time_input <= 1159)
	{
		
		p("\n\nTime in 12-hr Notation: %.2d:%.2d AM", hours, minutes);	
		
	}
	
	else if (time_input >= 1200 && time_input <= 2359)
	{
		
		p("\n\nTime in 12-hr Notation: %.2d:%.2d PM", hours, minutes);	
		
	}
	
	else
	{
		
		p("Input is Invalid!");
		
	}
	
	p("\n\nSeig Heil!");
	
}

main()
{
	
	title();
	input();
	timecalc();
	display();
	
	return 0;
	
}

