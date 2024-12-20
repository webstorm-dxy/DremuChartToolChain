#include "project.h"


#include <pybind11/pybind11.h>



namespace py = pybind11;

int add(int i, int j) { return i + j; }

PYBIND11_MODULE(dcc, m) {
  m.doc() = "pybind11 example plugin"; // optional module docstring

  m.def("add", &add, "A function which adds two numbers");//定义函数

  py::class_<Project>(m,"Project") //定义类的方法
    .def(py::init())
    .def("test",&Project::test);
}