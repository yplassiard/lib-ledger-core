// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from errors.djinni

package com.ledger.reactnative;

import co.ledger.core.Error;
import co.ledger.core.ErrorCode;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.WritableNativeArray;
import com.facebook.react.bridge.WritableNativeMap;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Optional;
import java.util.UUID;

public class RCTCoreError extends ReactContextBaseJavaModule {
    private final ReactApplicationContext reactContext;
    private Map<String, Error> javaObjects;
    public Map<String, Error> getJavaObjects()
    {
        return javaObjects;
    }

    public RCTCoreError(ReactApplicationContext reactContext)
    {
        super(reactContext);
        this.reactContext = reactContext;
        this.javaObjects = new HashMap<String, Error>();
    }

    @Override
    public String getName()
    {
        return "RCTCoreError";
    }
    @ReactMethod
    public void release(Map<String, String> currentInstance, Promise promise)
    {
        String uid = currentInstance.get("uid");
        if (uid.length() > 0)
        {
            this.javaObjects.remove(uid);
            promise.resolve(0);
        }
        else
        {
            promise.reject("Failed to release instance of RCTCoreError", "First parameter of RCTCoreError::release should be an instance of RCTCoreError");
        }
    }
    @ReactMethod
    public void log(Promise promise)
    {
        WritableNativeArray result = new WritableNativeArray();
        for (Map.Entry<String, Error> elem : this.javaObjects.entrySet())
        {
            result.pushString(elem.getKey());
        }
        promise.resolve(result);
    }
    @ReactMethod
    public void flush(Promise promise)
    {
        this.javaObjects.clear();
        promise.resolve(0);
    }

    @ReactMethod
    public void init(ErrorCode code, String message, Promise promise) {
        Error javaResult = new Error(code, message);

        String uuid = UUID.randomUUID().toString();
        this.javaObjects.put(uuid, javaResult);
        WritableNativeMap finalResult = new WritableNativeMap();
        finalResult.putString("type","RCTCoreError");
        finalResult.putString("uid",uuid);
        promise.resolve(finalResult);
    }
    @ReactMethod
    public void getCode(Map<String, String> currentInstance, Promise promise)
    {
        String uid = currentInstance.get("uid");
        if (uid.length() > 0)
        {
            Error javaObj = this.javaObjects.get(uid);
            ErrorCode result = javaObj.getCode();
            promise.resolve(result);
        }
        else
        {
            promise.reject("Failed to call RCTCoreError::getCode", "First parameter of RCTCoreError::getCode should be an instance of RCTCoreError");
        }
    }

    @ReactMethod
    public void getMessage(Map<String, String> currentInstance, Promise promise)
    {
        String uid = currentInstance.get("uid");
        if (uid.length() > 0)
        {
            Error javaObj = this.javaObjects.get(uid);
            String result = javaObj.getMessage();
            promise.resolve(result);
        }
        else
        {
            promise.reject("Failed to call RCTCoreError::getMessage", "First parameter of RCTCoreError::getMessage should be an instance of RCTCoreError");
        }
    }

}
