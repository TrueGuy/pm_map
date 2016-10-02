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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished
struct TlsClientFinished_t187975082;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientFinished__ctor_m863578238 (TlsClientFinished_t187975082 * __this, Context_t658806145 * ___context0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsSsl3()
extern "C"  void TlsClientFinished_ProcessAsSsl3_m3611558442 (TlsClientFinished_t187975082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsTls1()
extern "C"  void TlsClientFinished_ProcessAsTls1_m3633929561 (TlsClientFinished_t187975082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;