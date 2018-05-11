// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKETRANSACTIONBUILDER_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKETRANSACTIONBUILDER_HPP


#include "../../../core/src/api/BitcoinLikeNetworkParameters.hpp"
#include "../../../core/src/api/BitcoinLikePickingStrategy.hpp"
#include "../../../core/src/api/Currency.hpp"
#include "../../../core/src/api/CurrencyUnit.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSBitcoinLikeScriptCpp.hpp"
#include "NJSBitcoinLikeTransactionCallback.hpp"
#include "NJSBitcoinLikeTransactionCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BitcoinLikeTransactionBuilder.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeTransactionBuilder: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeTransactionBuilder() {};
    NJSBitcoinLikeTransactionBuilder(const std::shared_ptr<ledger::core::api::BitcoinLikeTransactionBuilder> &iBitcoinLikeTransactionBuilder):_BitcoinLikeTransactionBuilder(iBitcoinLikeTransactionBuilder){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeTransactionBuilder> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeTransactionBuilder_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeTransactionBuilder> getCppImpl(){return _BitcoinLikeTransactionBuilder;};

private:
    /**
     * Add the given input to the final transaction.
     * @param transactionhash The hash of the transaction in where the UTXO can be located.
     * @params index Index of the UTXO in the previous transaction
     * @params sequence Sequence number to add at the end of the input serialization. This can be used for RBF transaction
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(addInput);

    /**
     * Add the given output to the final transaction
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(addOutput);

    /**
     * If needed the transaction will send its change to the given path. It is possible to add multiple change path.
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(addChangePath);

    /**
     * Exclude UTXO from the coin selection (alias UTXO picking). You can call this method multiple times to exclude multiple
     * UTXO.
     * @param transactionHash The hash of the transaction in which this UTXO can be found.
     * @param outputIndex The position of the output in the previous transaction,
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(excludeUtxo);

    /** @return A reference on the same builder in order to chain calls. */
    static NAN_METHOD(setNumberOfChangeAddresses);

    /**
     * Set the maximum amount per change output. By default there is no max amount.
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setMaxAmountOnChange);

    /**
     * Set the minimum amount per change output. By default this value is the dust value of the currency.
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setMinAmountOnChange);

    /**
     * Set the UTXO picking strategy (see [[BitcoinLikePickingStrategy]]).
     * @param strategy The strategy to adopt in order to select which input to use in the transaction.
     * @param sequence The sequence value serialized at the end of the raw transaction. If you don't know what to put here
     * just use 0xFFFFFF
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(pickInputs);

    /**
     * Send funds to the given address. This method can be called multiple times to send to multiple addresses.
     * @param amount The value to send
     * @param address Address of the recipient
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(sendToAddress);

    /**
     * Set the amount of fees per byte (of the raw transaction).
     * @return A reference on the same builder in order to chain calls.
     */
    static NAN_METHOD(setFeesPerByte);

    /** Build a transaction from the given builder parameters. */
    static NAN_METHOD(build);

    /**
     * Creates a clone of this builder.
     * @return A copy of the current builder instance.
     */
    static NAN_METHOD(clone);

    /** Reset the current instance to its initial state */
    static NAN_METHOD(reset);

    static NAN_METHOD(parseRawUnsignedTransaction);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
    std::shared_ptr<ledger::core::api::BitcoinLikeTransactionBuilder> _BitcoinLikeTransactionBuilder;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKETRANSACTIONBUILDER_HPP