#include "fusion/app.h"
#include "fusion/entry_point.h"

app_t* fusion_app_create(int argc, char** argv)
{
    app_cmd_args_t args = {.argc=argc, .argv=argv};
    app_spec_t spec = {.name="Window", .width=600, .height=400, .args=args};
    return fusion_app_instance(&spec);
}