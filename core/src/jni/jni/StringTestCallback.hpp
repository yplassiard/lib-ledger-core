// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "../../api/StringTestCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class StringTestCallback final : ::djinni::JniInterface<::ledger::core::api::StringTestCallback, StringTestCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::StringTestCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::StringTestCallback>;
    using JniType = jobject;

    using Boxed = StringTestCallback;

    ~StringTestCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<StringTestCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<StringTestCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    StringTestCallback();
    friend ::djinni::JniClass<StringTestCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::StringTestCallback, StringTestCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::StringTestCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::experimental::optional<std::string> & value, const std::experimental::optional<::ledger::core::api::Error> & error) override;
        void onValue(const std::string & value) override;
        std::string getValue() override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::StringTestCallback, ::djinni_generated::StringTestCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/StringTestCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Ljava/lang/String;Lco/ledger/core/Error;)V") };
    const jmethodID method_onValue { ::djinni::jniGetMethodID(clazz.get(), "onValue", "(Ljava/lang/String;)V") };
    const jmethodID method_getValue { ::djinni::jniGetMethodID(clazz.get(), "getValue", "()Ljava/lang/String;") };
};

}  // namespace djinni_generated
