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

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3703825541;
// Mono.Security.ASN1
struct ASN1_t3752917377;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// Mono.Security.X509.X509Extension
struct X509Extension_t4211806919;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN13752917377.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C"  void X509ExtensionCollection__ctor_m2030423328 (X509ExtensionCollection_t3703825541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C"  void X509ExtensionCollection__ctor_m1676008680 (X509ExtensionCollection_t3703825541 * __this, ASN1_t3752917377 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m2595246751 (X509ExtensionCollection_t3703825541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C"  int32_t X509ExtensionCollection_IndexOf_m414644343 (X509ExtensionCollection_t3703825541 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C"  X509Extension_t4211806919 * X509ExtensionCollection_get_Item_m3721152683 (X509ExtensionCollection_t3703825541 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;