#include <iostream>
#include <Python.h>

#include <conio.h>

int main()
{
    PyObject* pInt;

	Py_Initialize();

	PyRun_SimpleString("x=8\nprint(x*2)");
	
	Py_Finalize();

	printf("\nPress any key to exit...\n");
	if(!_getch()) _getch();
	return 0;
}