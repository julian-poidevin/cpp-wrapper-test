#include <stdio.h>
#include "myapi.h"
#include "libapi_wrapper.h"

void myapi_function()
{
    printf("myapi called\n");
    libapi_wrapper_function(); // Call function from myapi_function
}
