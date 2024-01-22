#include <iostream>
#include <Windows.h>
#include <napi.h>
#include "Functions/GetActiveWindow.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
    return functionexample::Init(env, exports);
}

NODE_API_MODULE(Get_Active_Window, InitAll);