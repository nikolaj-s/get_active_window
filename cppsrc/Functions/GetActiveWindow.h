#include <napi.h>

namespace functionexample {
    std::string get_active_window();
    Napi::String get_active_window_wrapped(const Napi::CallbackInfo& info);
    Napi::Object Init(Napi::Env env, Napi::Object exports);
}