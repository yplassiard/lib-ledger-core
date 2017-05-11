// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#import <Foundation/Foundation.h>
@class LGDatabaseBackend;
@class LGDynamicObject;
@class LGWalletPoolBuilder;
@protocol LGHttpClient;
@protocol LGLogPrinter;
@protocol LGPathResolver;
@protocol LGRandomNumberGenerator;
@protocol LGThreadDispatcher;
@protocol LGWalletPoolCallback;
@protocol LGWebSocketClient;


@interface LGWalletPoolBuilder : NSObject

- (nullable LGWalletPoolBuilder *)setHttpClient:(nullable id<LGHttpClient>)client;

- (nullable LGWalletPoolBuilder *)setWebsocketClient:(nullable id<LGWebSocketClient>)client;

- (nullable LGWalletPoolBuilder *)setPathResolver:(nullable id<LGPathResolver>)pathResolver;

- (nullable LGWalletPoolBuilder *)setLogPrinter:(nullable id<LGLogPrinter>)printer;

- (nullable LGWalletPoolBuilder *)setThreadDispatcher:(nullable id<LGThreadDispatcher>)dispatcher;

- (nullable LGWalletPoolBuilder *)setName:(nonnull NSString *)name;

- (nullable LGWalletPoolBuilder *)setPassword:(nonnull NSString *)password;

- (nullable LGWalletPoolBuilder *)setRandomNumberGenerator:(nullable id<LGRandomNumberGenerator>)rng;

- (nullable LGWalletPoolBuilder *)setDatabaseBackend:(nullable LGDatabaseBackend *)backend;

- (nullable LGWalletPoolBuilder *)setConfiguration:(nullable LGDynamicObject *)configuration;

- (void)build:(nullable id<LGWalletPoolCallback>)listener;

+ (nullable LGWalletPoolBuilder *)createInstance;

@end
