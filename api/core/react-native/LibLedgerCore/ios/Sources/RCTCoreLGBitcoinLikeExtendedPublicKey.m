// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#import "RCTCoreLGBitcoinLikeExtendedPublicKey.h"


@implementation RCTCoreLGBitcoinLikeExtendedPublicKey
//Export module
RCT_EXPORT_MODULE(RCTCoreLGBitcoinLikeExtendedPublicKey)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGBitcoinLikeExtendedPublicKey alloc] init];
    }
    return self;
}

RCT_REMAP_METHOD(derive,derive:(nonnull NSString *)path withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl derive:path]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeExtendedPublicKey::derive", nil);
    }
}

RCT_REMAP_METHOD(toBase58,toBase58WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl toBase58]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeExtendedPublicKey::toBase58", nil);
    }
}

RCT_REMAP_METHOD(getRootPath,getRootPathWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl getRootPath]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeExtendedPublicKey::getRootPath", nil);
    }
}

RCT_REMAP_METHOD(fromBase58,fromBase58:(nonnull LGBitcoinLikeNetworkParameters *)params
                               address:(nonnull NSString *)address
                                  path:(nullable NSString *)path withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[LGBitcoinLikeExtendedPublicKey fromBase58:params address:address path:path]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeExtendedPublicKey::fromBase58", nil);
    }
}
@end