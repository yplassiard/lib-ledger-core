/*
 *
 * OperationApi
 * ledger-core
 *
 * Created by Pierre Pollastri on 03/07/2017.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#include "OperationApi.h"
#include <wallet/common/Amount.h>

namespace ledger {
    namespace core {

        OperationApi::OperationApi(const std::shared_ptr<AbstractAccount> &account) {
            _account = account;
        }

        std::string OperationApi::getUid() {
            return _backend.uid;
        }

        int32_t OperationApi::getAccountIndex() {
            return _account->getIndex();
        }

        api::OperationType OperationApi::getOperationType() {
            return _backend.type;
        }

        std::chrono::system_clock::time_point OperationApi::getDate() {
            return _backend.date;
        }

        std::vector<std::string> OperationApi::getSenders() {
            return _backend.senders;
        }

        std::vector<std::string> OperationApi::getRecipients() {
            return _backend.recipients;
        }

        Operation &OperationApi::getBackend() {
            return _backend;
        }

        api::WalletType OperationApi::getWalletType() {
            return _backend.walletType;
        }

        bool OperationApi::isInstanceOfBitcoinLikeOperation() {
            return _backend.walletType == api::WalletType::BITCOIN;
        }

        bool OperationApi::isInstanceOfEthereumLikeOperation() {
            return _backend.walletType == api::WalletType::ETHEREUM;
        }

        bool OperationApi::isInstanceOfRippleLikeOperation() {
            return _backend.walletType == api::WalletType::RIPPLE;
        }

        bool OperationApi::isComplete() {
            return _backend.bitcoinTransaction.nonEmpty();
        }

        std::shared_ptr<api::TrustIndicator> OperationApi::getTrust() {
            return _backend.trust;
        }

        std::shared_ptr<api::Preferences> OperationApi::getPreferences() {
            return _account->getOperationExternalPreferences(_backend.accountUid);
        }

        optional<int64_t> OperationApi::getBlockHeight() {
            return _backend.blockHeight.map<int64_t>([] (const uint64_t& v) {
                return (int64_t) v;
            });
        }

        std::shared_ptr<api::Amount> OperationApi::getFees() {
            return nullptr;
        }

        std::shared_ptr<api::Amount> OperationApi::getAmount() {
            return nullptr;
        }

        std::shared_ptr<api::BitcoinLikeOperation> OperationApi::asBitcoinLikeOperation() {
            return nullptr;
        }

    }
}