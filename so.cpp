#include <pybind11/pybind11.h>

namespace py = pybind11;

void forloop(int n) {
    // Your for loop
    for (int i = 0; i < n; ++i) {
        // Do some work in the loop
    }
}


// Module initialization function
PYBIND11_MODULE(module_name, m) {
    m.doc() = "I'm a docstring hehe";
    m.def("forloop", &forloop);

}
