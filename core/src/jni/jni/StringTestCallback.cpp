// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "StringTestCallback.hpp"  // my header
#include "Error.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

StringTestCallback::StringTestCallback() : ::djinni::JniInterface<::ledger::core::api::StringTestCallback, StringTestCallback>() {}

StringTestCallback::~StringTestCallback() = default;

StringTestCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

StringTestCallback::JavaProxy::~JavaProxy() = default;

void StringTestCallback::JavaProxy::onCallback(const std::experimental::optional<std::string> & c_value, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::StringTestCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(jniEnv, c_value)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void StringTestCallback::JavaProxy::onValue(const std::string & c_value) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::StringTestCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onValue,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_value)));
    ::djinni::jniExceptionCheck(jniEnv);
}
std::string StringTestCallback::JavaProxy::getValue() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::StringTestCallback>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getValue);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
