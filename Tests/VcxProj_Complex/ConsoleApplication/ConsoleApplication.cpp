// ConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <DynamicLib.h>
#include "StaticLib.h"


int main()
{
	printf("Console app started.\n");
	PrintfFromDynamicLib();
	PrintfFromStaticLib();

    return 0;
}

