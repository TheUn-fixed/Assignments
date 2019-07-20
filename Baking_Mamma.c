#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#define p printf
#define s scanf

//Type of Bread
char type_b;
//Bread Size
char size_b;
//Baking Procedure
char proc_b;

void title()
{
	
	p("Baking Mamma!\n\n");
	
}

void type()
{
	
	p("What type of Bread would you want to bake?\t");
		s(" %c", &type_b);
	
}

void size()
{
	
	p("\n\nWill the size be doubled?\t");
		s(" %c", &size_b);
	
}

void procedure()
{
	
	p("\n\nDo you opt to do it manually?\t");
		s(" %c", &proc_b);
	
}

main()
{
	
	title();
	type();
	
	if (toupper(type_b) == 'W')
	{
		
		size();
		
		if (toupper(size_b) == 'N')
		{
			
			p("Primaryy Kneading:\t 15 mins");
			p("\nPrimary Rising:\t\t 60 mins");
			p("\nSecondary Kneading:\t 18 mins");
			p("\nSecondary Rising:\t 20 mins");
			p("\nLoaf Shaping:\t\t 2 secs");
			
			procedure();
			
			if (toupper(proc_b) == 'N')
			{
				
				p("\nFinal rising:\t 75 mins");
				p("\nBaking:\t\t 45 mins");
				p("\nCooling:\t 30 mins");
				p("Total Baking Time:\t 263 mins and 2 secs");
				
			}
			
			else if (toupper(proc_b) == 'Y')
			{
				
				p("\nPlease remove dough from oven.");
				p("\n\nTotal Baking Time:\t 113 mins and 2 secs");
				
			}
			
			else
			{
				
				p("\n\nWhat do you want to do???");
				
			}
			
		}
		
		else if (toupper(size_b) == 'Y')
		{
			
			p("Primaryy Kneading:\t 22 mins and 30 secs");
			p("\nPrimary Rising:\t\t 90 mins");
			p("\nSecondary Kneading:\t 27 mins");
			p("\nSecondary Rising:\t 30 mins");
			p("\nLoaf Shaping:\t\t 3 secs");
			
			procedure();
			
			if (toupper(proc_b) == 'N')
			{
				
				p("\nFinal rising:\t 112 mins and 30 secs");
				p("\nBaking:\t\t 67 mins and 30 secs");
				p("\nCooling:\t 45 mins");
				p("\n\nTotal Baking Time:\t 394 mins and 33 secs");
				
			}
			
			else if (toupper(proc_b) == 'Y')
			{
				
				p("\nPlease remove dough from oven.");
				p("\n\nTotal Baking Time:\t 169 mins and 33 secs");
				
			}
			
			else
			{
				
				p("\n\nWhat do you want to do???");
				
			}
			
		}
		
	}
	
	else if (toupper(type_b) == 'S')
	{
		
		size();
		if (toupper(size_b) == 'N')
		{
			
			p("Primaryy Kneading:\t 20 mins");
			p("\nPrimary Rising:\t\t 60 mins");
			p("\nSecondary Kneading:\t 33 mins");
			p("\nSecondary Rising:\t 30 mins");
			p("\nLoaf Shaping:\t\t 2 secs");
			
			procedure();
			
			if (toupper(proc_b) == 'N')
			{
				
				p("\nFinal rising:\t 75 mins");
				p("\nBaking:\t\t 35 mins");
				p("\nCooling:\t 30 mins");
				p("\n\nTotal Baking Time:\t 283 mins and 2 secs");
				
			}
			
			else if (toupper(proc_b) == 'Y')
			{
				
				p("\nPlease remove dough from oven.");
				p("\n\nTotal Baking Time:\t 143 mins and 2 secs");
				
			}
			
			else
			{
				
				p("\n\nWhat do you want to do???");
				
			}
			
		}
		
		else if (toupper(size_b) == 'Y')
		{
			
			p("Primaryy Kneading:\t 30 mins");
			p("\nPrimary Rising:\t\t 90 mins");
			p("\nSecondary Kneading:\t 49 mins and 30 secs");
			p("\nSecondary Rising:\t 45 mins");
			p("\nLoaf Shaping:\t\t 3 secs");
			
			procedure();
			
			if (toupper(proc_b) == 'N')
			{
				
				p("\nFinal rising:\t 112 mins and 30 secs");
				p("\nBaking:\t\t 52 mins and 30 secs");
				p("\nCooling:\t 45 mins");
				p("\n\nTotal Baking Time:\t 424 mins and 33 secs");
				
			}
			
			else if (toupper(proc_b) == 'Y')
			{
				
				p("\nPlease remove dough from oven.");
				p("\n\nTotal Baking Time:\t 214 mins and 33 secs");
				
			}
			
			else
			{
				
				p("\n\nWhat do you want to do???");
				
			}
			
		}
		
	}
	
	else 
	{
		
		p("Error!");
		
	}
	
	return 0;
	
}
