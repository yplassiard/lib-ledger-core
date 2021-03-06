// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_NJSCONFIGURATION_HPP
#define DJINNI_GENERATED_NJSCONFIGURATION_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/Configuration.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSConfiguration: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSConfiguration() {};
    NJSConfiguration(const std::shared_ptr<ledger::core::api::Configuration> &iConfiguration):_Configuration(iConfiguration){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::Configuration> &object);
    static Nan::Persistent<ObjectTemplate> Configuration_prototype;
    std::shared_ptr<ledger::core::api::Configuration> getCppImpl(){return _Configuration;};

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::Configuration> _Configuration;
};
#endif //DJINNI_GENERATED_NJSCONFIGURATION_HPP
