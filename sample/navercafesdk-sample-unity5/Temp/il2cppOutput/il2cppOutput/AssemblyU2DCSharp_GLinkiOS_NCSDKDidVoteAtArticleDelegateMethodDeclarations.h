﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GLinkiOS/NCSDKDidVoteAtArticleDelegate
struct NCSDKDidVoteAtArticleDelegate_t7_13;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GLinkiOS/NCSDKDidVoteAtArticleDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKDidVoteAtArticleDelegate__ctor_m7_53 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKDidVoteAtArticleDelegate::Invoke(System.Int32)
extern "C" void NCSDKDidVoteAtArticleDelegate_Invoke_m7_54 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NCSDKDidVoteAtArticleDelegate_t7_13(Il2CppObject* delegate, int32_t ___articleId);
// System.IAsyncResult GLinkiOS/NCSDKDidVoteAtArticleDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKDidVoteAtArticleDelegate_BeginInvoke_m7_55 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, int32_t ___articleId, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKDidVoteAtArticleDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKDidVoteAtArticleDelegate_EndInvoke_m7_56 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;