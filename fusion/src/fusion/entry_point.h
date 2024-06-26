#include "core.h"
#include "app.h"

bool g_running = true;

int main(int argc, char** argv)
{
    fusion_init();
    
    while (g_running)
    {
        app_t* app = fusion_app_create(argc, argv);

        fusion_app_run(app);

        fusion_app_terminate(app);
    }

    fusion_terminate();
}