#pragma once

#include "core.h"

typedef struct app_cmd_args_t
{
	int argc;
	char** argv;
} app_cmd_args_t;

typedef struct app_spec_t
{
	const char* name;
    uint32_t width;
    uint32_t height;
	app_cmd_args_t args;
} app_spec_t;

typedef struct app_t
{
    app_spec_t settings;
} app_t;

app_t* fusion_app_create(int argc, char** argv);
app_t* fusion_app_instance(const app_spec_t* spec);

void fusion_app_terminate(app_t* app);

void fusion_app_run(app_t* app);