// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeAccount.hpp"  // my header
#include "BitcoinLikeOutputListCallback.hpp"
#include "I32Callback.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeAccount::BitcoinLikeAccount() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeAccount, BitcoinLikeAccount>("co/ledger/core/BitcoinLikeAccount$CppProxy") {}

BitcoinLikeAccount::~BitcoinLikeAccount() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeAccount_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::BitcoinLikeAccount>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeAccount_00024CppProxy_native_1getUTXO(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_from, jint j_to, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->getUTXO(::djinni::I32::toCpp(jniEnv, j_from),
                     ::djinni::I32::toCpp(jniEnv, j_to),
                     ::djinni_generated::BitcoinLikeOutputListCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeAccount_00024CppProxy_native_1getUTXOCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeAccount>(nativeRef);
        ref->getUTXOCount(::djinni_generated::I32Callback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
