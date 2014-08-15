// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/MediaResourceGetter

#ifndef org_chromium_content_browser_MediaResourceGetter_JNI
#define org_chromium_content_browser_MediaResourceGetter_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kMediaMetadataClassPath[] =
    "org/chromium/content/browser/MediaResourceGetter$MediaMetadata";
const char kMediaResourceGetterClassPath[] =
    "org/chromium/content/browser/MediaResourceGetter";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_MediaMetadata_clazz = NULL;
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_MediaResourceGetter_clazz = NULL;
}  // namespace

namespace content {

// Step 2: method stubs.

static base::subtle::AtomicWord g_MediaMetadata_getDurationInMilliseconds = 0;
static jint Java_MediaMetadata_getDurationInMilliseconds(JNIEnv* env, jobject
    obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaMetadata_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaMetadata_clazz,
      "getDurationInMilliseconds",

"("
")"
"I",
      &g_MediaMetadata_getDurationInMilliseconds);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaMetadata_getWidth = 0;
static jint Java_MediaMetadata_getWidth(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaMetadata_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaMetadata_clazz,
      "getWidth",

"("
")"
"I",
      &g_MediaMetadata_getWidth);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaMetadata_getHeight = 0;
static jint Java_MediaMetadata_getHeight(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaMetadata_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaMetadata_clazz,
      "getHeight",

"("
")"
"I",
      &g_MediaMetadata_getHeight);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaMetadata_isSuccess = 0;
static jboolean Java_MediaMetadata_isSuccess(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaMetadata_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaMetadata_clazz,
      "isSuccess",

"("
")"
"Z",
      &g_MediaMetadata_isSuccess);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaResourceGetter_extractMediaMetadata = 0;
static ScopedJavaLocalRef<jobject>
    Java_MediaResourceGetter_extractMediaMetadata(JNIEnv* env, jobject context,
    jstring url,
    jstring cookies) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaResourceGetter_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaResourceGetter_clazz,
      "extractMediaMetadata",

"("
"Landroid/content/Context;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"Lorg/chromium/content/browser/MediaResourceGetter$MediaMetadata;",
      &g_MediaResourceGetter_extractMediaMetadata);

  jobject ret =
    env->CallStaticObjectMethod(g_MediaResourceGetter_clazz,
      method_id, context, url, cookies);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_MediaMetadata_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kMediaMetadataClassPath).obj()));
  g_MediaResourceGetter_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kMediaResourceGetterClassPath).obj()));
  return true;
}
}  // namespace content

#endif  // org_chromium_content_browser_MediaResourceGetter_JNI