#pragma once

#include <windows.h>

#include "parse.h"

#include <thread>

#define FR_VERSION "v1"

extern HWND g_hwnd;
extern HMODULE g_module;
extern HANDLE g_process;

void unload_dll();
