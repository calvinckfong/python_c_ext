#include "main.h"
#include <Python.h>
#include <stdio.h>

PyObject* fib(PyObject* self, PyObject* args)
{
    int num = 0;
	if(!PyArg_ParseTuple(args, "i", &num))
    {
        printf("Too few parameters.\n");
		return NULL;
    }

    if (num<2)
    {
        printf("Argument too small.  Require 2 or greater.\n");
        return NULL;
    }

    int a0 = 1, a1 = 1, a2;
    printf("Fibonacci numbers:\n");
    printf("1 1 ");
    for (int i=2; i<num; i++)
    {
        a2 = a0 + a1;
        printf("%d ", a2);
        a0 = a1;
        a1 = a2;
    }
    printf("\n");

    return PyLong_FromLong(0);
}