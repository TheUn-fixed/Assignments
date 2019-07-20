#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define p printf
#define s scanf

char color;

void title()
{
	
	p("What Hazard is This?\n\n");
	
}

void input()
{
	
	p("Color Code:\nOrange : Ammonia\nBrown : Carbon Monoxide\nYellow : Hydrogen\nGreen : Oxygen");
	p("\n\nInput color of container\t");
		s(" %c", &color);
	
}

main()
{
	
	title();
	input();
	
	if (toupper(color) == 'O')
	{
		
		p("\nContainer Color: Orange");
		p("\n\nContents: Ammonia");
		
	}
	
	else if (toupper(color) == 'B')
	{
		
		p("\nContainer Color: Brown");
		p("\n\nContents: Carbon Monoxide");
		
	}
	
	else if (toupper(color) == 'Y')
	{
		
		p("\nContainer Color: Yellow");
		p("\n\nContents: Hydrogen");
		
	}
	
	else if (toupper(color) == 'G')
	{
		
		p("\nContainer Color: Green");
		p("\n\nContents: Oxygen");
		
	}
	
	else 
	{
		
		p("\nContents Unknown");
		
	}
	
	p("\n\nKeep Safe! Wear a Hazmat suit");
	
	return 0;
	
}
