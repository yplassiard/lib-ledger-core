// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#pragma once

#include "../../api/DatabaseBackend.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class DatabaseBackend final : ::djinni::JniInterface<::ledger::core::api::DatabaseBackend, DatabaseBackend> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::DatabaseBackend>;
    using CppOptType = std::shared_ptr<::ledger::core::api::DatabaseBackend>;
    using JniType = jobject;

    using Boxed = DatabaseBackend;

    ~DatabaseBackend();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<DatabaseBackend>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<DatabaseBackend>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    DatabaseBackend();
    friend ::djinni::JniClass<DatabaseBackend>;
    friend ::djinni::JniInterface<::ledger::core::api::DatabaseBackend, DatabaseBackend>;

};

}  // namespace djinni_generated
