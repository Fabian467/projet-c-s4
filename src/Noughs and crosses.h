#pragma once
#include <p6/p6.h>

int fenetre()
{
    auto ctx = p6::Context{{1280, 720, "p6 example"}}; // Create a context with a window
    ctx.start();        
    
    return 0;                               // Start the p6 application
}