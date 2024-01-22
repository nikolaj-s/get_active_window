#include "GetActiveWindow.h"
#include <string>
#include <Windows.h>

std::string functionexample::get_active_window() {
    char windowTitle[256];

    HWND foregroundWindow = GetForegroundWindow();

    GetWindowText(foregroundWindow, windowTitle, sizeof(windowTitle));

    return std::string(windowTitle);

}

Napi::String functionexample::get_active_window_wrapped(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::String returnValue = Napi::String::New(env, functionexample::get_active_window());

    return returnValue;
}

Napi::Object functionexample::Init(Napi::Env env, Napi::Object exports) {
    exports.Set("get_active_window", Napi::Function::New(env, functionexample::get_active_window_wrapped));

    return exports;
}

