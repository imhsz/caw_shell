// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/NetworkChangeNotifier

#ifndef org_chromium_net_NetworkChangeNotifier_JNI
#define org_chromium_net_NetworkChangeNotifier_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kNetworkChangeNotifierClassPath[] =
    "org/chromium/net/NetworkChangeNotifier";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_NetworkChangeNotifier_clazz = NULL;
}  // namespace

namespace net {

// Step 2: method stubs.
static void NotifyConnectionTypeChanged(JNIEnv* env, jobject obj,
    jlong nativePtr,
    jint newConnectionType) {
  DCHECK(nativePtr) << "NotifyConnectionTypeChanged";
  NetworkChangeNotifierDelegateAndroid* native =
      reinterpret_cast<NetworkChangeNotifierDelegateAndroid*>(nativePtr);
  return native->NotifyConnectionTypeChanged(env, obj, newConnectionType);
}

static base::subtle::AtomicWord g_NetworkChangeNotifier_init = 0;
static ScopedJavaLocalRef<jobject> Java_NetworkChangeNotifier_init(JNIEnv* env,
    jobject context) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_NetworkChangeNotifier_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_NetworkChangeNotifier_clazz,
      "init",

"("
"Landroid/content/Context;"
")"
"Lorg/chromium/net/NetworkChangeNotifier;",
      &g_NetworkChangeNotifier_init);

  jobject ret =
    env->CallStaticObjectMethod(g_NetworkChangeNotifier_clazz,
      method_id, context);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_NetworkChangeNotifier_getCurrentConnectionType
    = 0;
static jint Java_NetworkChangeNotifier_getCurrentConnectionType(JNIEnv* env,
    jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_NetworkChangeNotifier_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_NetworkChangeNotifier_clazz,
      "getCurrentConnectionType",

"("
")"
"I",
      &g_NetworkChangeNotifier_getCurrentConnectionType);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_NetworkChangeNotifier_addNativeObserver = 0;
static void Java_NetworkChangeNotifier_addNativeObserver(JNIEnv* env, jobject
    obj, jlong nativeChangeNotifier) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_NetworkChangeNotifier_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_NetworkChangeNotifier_clazz,
      "addNativeObserver",

"("
"J"
")"
"V",
      &g_NetworkChangeNotifier_addNativeObserver);

  env->CallVoidMethod(obj,
      method_id, nativeChangeNotifier);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_NetworkChangeNotifier_removeNativeObserver =
    0;
static void Java_NetworkChangeNotifier_removeNativeObserver(JNIEnv* env, jobject
    obj, jlong nativeChangeNotifier) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_NetworkChangeNotifier_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_NetworkChangeNotifier_clazz,
      "removeNativeObserver",

"("
"J"
")"
"V",
      &g_NetworkChangeNotifier_removeNativeObserver);

  env->CallVoidMethod(obj,
      method_id, nativeChangeNotifier);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_NetworkChangeNotifier_forceConnectivityState =
    0;
static void Java_NetworkChangeNotifier_forceConnectivityState(JNIEnv* env,
    jboolean networkAvailable) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_NetworkChangeNotifier_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_NetworkChangeNotifier_clazz,
      "forceConnectivityState",

"("
"Z"
")"
"V",
      &g_NetworkChangeNotifier_forceConnectivityState);

  env->CallStaticVoidMethod(g_NetworkChangeNotifier_clazz,
      method_id, networkAvailable);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_NetworkChangeNotifier_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kNetworkChangeNotifierClassPath).obj()));
  static const JNINativeMethod kMethodsNetworkChangeNotifier[] = {
    { "nativeNotifyConnectionTypeChanged",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(NotifyConnectionTypeChanged) },
  };
  const int kMethodsNetworkChangeNotifierSize =
      arraysize(kMethodsNetworkChangeNotifier);

  if (env->RegisterNatives(g_NetworkChangeNotifier_clazz,
                           kMethodsNetworkChangeNotifier,
                           kMethodsNetworkChangeNotifierSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace net

#endif  // org_chromium_net_NetworkChangeNotifier_JNI