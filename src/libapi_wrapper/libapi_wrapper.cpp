#include <iostream>
#include "libapi_wrapper.h"
#include "libapi.h"

void libapi_wrapper_function()
{
    std::cout << "libapi_wrapper_function called" << std::endl;
    libapi_function(); // Call function from libapi
}
