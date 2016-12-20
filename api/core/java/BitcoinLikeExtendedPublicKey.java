// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class BitcoinLikeExtendedPublicKey {
    public abstract BitcoinLikeAddress derive(String path);

    public abstract String toBase58();

    public static native BitcoinLikeExtendedPublicKey fromBase58(BitcoinLikeNetworkParameters params, String address, String path);

    private static final class CppProxy extends BitcoinLikeExtendedPublicKey
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public BitcoinLikeAddress derive(String path)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_derive(this.nativeRef, path);
        }
        private native BitcoinLikeAddress native_derive(long _nativeRef, String path);

        @Override
        public String toBase58()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_toBase58(this.nativeRef);
        }
        private native String native_toBase58(long _nativeRef);
    }
}
