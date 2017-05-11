// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEOUTPUT_HPP
#define DJINNI_GENERATED_BITCOINLIKEOUTPUT_HPP

#include "../utils/optional.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class Amount;

class BitcoinLikeOutput {
public:
    virtual ~BitcoinLikeOutput() {}

    virtual std::string getTransactionHash() = 0;

    virtual int32_t getOutputIndex() = 0;

    virtual std::experimental::optional<std::string> getAddressDerivationPath() = 0;

    virtual std::shared_ptr<Amount> getValue() = 0;

    virtual std::vector<uint8_t> getScript() = 0;

    virtual std::experimental::optional<std::string> getAddress() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKEOUTPUT_HPP
