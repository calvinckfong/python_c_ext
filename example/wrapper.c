#include "main.h"

char example_func_docs[] = "Print the first n fibonacci numbers";

PyMethodDef example_funcs[] = {
	{	"fib",
		(PyCFunction)fib,
		METH_VARARGS,
		example_func_docs},
	{	NULL}
};

char example_mod_docs[] = "This is an example module.";

PyModuleDef example_mod = {
	PyModuleDef_HEAD_INIT,
	"example",
	example_mod_docs,
	-1,
	example_funcs,
	NULL,
	NULL,
	NULL,
	NULL
};

PyMODINIT_FUNC PyInit_example(void) {
	return PyModule_Create(&example_mod);
}