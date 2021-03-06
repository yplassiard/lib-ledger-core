// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#include "HttpClient.hpp"  // my header
#include "HttpRequest.hpp"

namespace djinni_generated {

HttpClient::HttpClient() : ::djinni::JniInterface<::ledger::core::api::HttpClient, HttpClient>() {}

HttpClient::~HttpClient() = default;

HttpClient::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

HttpClient::JavaProxy::~JavaProxy() = default;

void HttpClient::JavaProxy::execute(const std::shared_ptr<::ledger::core::api::HttpRequest> & c_request) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::HttpClient>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_execute,
                           ::djinni::get(::djinni_generated::HttpRequest::fromCpp(jniEnv, c_request)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
