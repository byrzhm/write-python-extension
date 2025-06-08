#include <Python.h>

static PyObject* my_add(PyObject* self, PyObject* args) {
  int a, b;
  if (!PyArg_ParseTuple(args, "ii", &a, &b)) return  nullptr;
  int result = a + b;
  return PyLong_FromLong(result);
}

static PyMethodDef MyMethods[] = {
  {"add", my_add, METH_VARARGS, "Add two integers."},
  {nullptr, nullptr, 0, nullptr}
};

static struct PyModuleDef mymodule = {
  PyModuleDef_HEAD_INIT,
  "my_module",
  nullptr,
  -1,
  MyMethods
};

PyMODINIT_FUNC PyInit_my_module(void) {
  return PyModule_Create(&mymodule);
}
