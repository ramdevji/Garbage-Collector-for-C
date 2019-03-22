
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <windows.h>

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


#include "C_garbageCollector.h"
#include "C_garbageColector_test.h"


// --------------------------------------------------------------------------
void on_exit( void )
{
	_CrtDumpMemoryLeaks();
}


// when the program terminates this is used to reclaim the whole heap memory
int main( void )
{
	atexit( on_exit );

	run_test_cases();

	_getch();
	return 0;
}
