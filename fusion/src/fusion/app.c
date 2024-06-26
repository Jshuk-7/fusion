#include "app.h"

#include <raylib.h>

extern bool g_running;

static void app_init(app_t* app)
{
    InitWindow(app->settings.width, app->settings.height, app->settings.name);
}

app_t* fusion_app_instance(const app_spec_t* spec)
{
    app_t* app = (app_t*)malloc(sizeof(app_t));
    app->settings.name = spec->name;
    app->settings.width = spec->width;
    app->settings.height = spec->height;
    app->settings.args = spec->args;

    app_init(app);

    return app;
}

void fusion_app_terminate(app_t* app)
{
	CloseWindow();

    free(app);

	g_running = false;
}

void fusion_app_run(app_t* app)
{
	while (!WindowShouldClose())
	{
		ClearBackground(BLUE);

		BeginDrawing();
		EndDrawing();
	}
}
