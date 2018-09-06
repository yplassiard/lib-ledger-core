// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKESCRIPTCHUNK_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKESCRIPTCHUNK_HPP_JNI_

#include "../../api/BitcoinLikeScriptChunk.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikeScriptChunk final : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeScriptChunk, BitcoinLikeScriptChunk> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeScriptChunk>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeScriptChunk>;
    using JniType = jobject;

    using Boxed = BitcoinLikeScriptChunk;

    ~BitcoinLikeScriptChunk();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<BitcoinLikeScriptChunk>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<BitcoinLikeScriptChunk>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    BitcoinLikeScriptChunk();
    friend ::djinni::JniClass<BitcoinLikeScriptChunk>;
    friend ::djinni::JniInterface<::ledger::core::api::BitcoinLikeScriptChunk, BitcoinLikeScriptChunk>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKESCRIPTCHUNK_HPP_JNI_