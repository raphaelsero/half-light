﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.Gradient
struct Gradient_t3067099924;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;

struct Gradient_t3067099924_marshaled_pinvoke;
struct Gradient_t3067099924;;
struct Gradient_t3067099924_marshaled_pinvoke;;
extern RuntimeClass* Gradient_t3067099924_il2cpp_TypeInfo_var;
extern const uint32_t MinMaxGradient_t3677460847_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
struct Gradient_t3067099924_marshaled_com;
struct Gradient_t3067099924_marshaled_com;;



#ifndef U3CMODULEU3E_T692745536_H
#define U3CMODULEU3E_T692745536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745536 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745536_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef MAINMODULE_T2320046318_H
#define MAINMODULE_T2320046318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t2320046318 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t2320046318, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t1800779281 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t1800779281 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t1800779281 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t2320046318_marshaled_pinvoke
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t2320046318_marshaled_com
{
	ParticleSystem_t1800779281 * ___m_ParticleSystem_0;
};
#endif // MAINMODULE_T2320046318_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GRADIENT_T3067099924_H
#define GRADIENT_T3067099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3067099924  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3067099924, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3067099924_H
#ifndef PARTICLECOLLISIONEVENT_T4055032941_H
#define PARTICLECOLLISIONEVENT_T4055032941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleCollisionEvent
struct  ParticleCollisionEvent_t4055032941 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t3722313464  ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t3722313464  ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;

public:
	inline static int32_t get_offset_of_m_Intersection_0() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_Intersection_0)); }
	inline Vector3_t3722313464  get_m_Intersection_0() const { return ___m_Intersection_0; }
	inline Vector3_t3722313464 * get_address_of_m_Intersection_0() { return &___m_Intersection_0; }
	inline void set_m_Intersection_0(Vector3_t3722313464  value)
	{
		___m_Intersection_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_2() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_Velocity_2)); }
	inline Vector3_t3722313464  get_m_Velocity_2() const { return ___m_Velocity_2; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_2() { return &___m_Velocity_2; }
	inline void set_m_Velocity_2(Vector3_t3722313464  value)
	{
		___m_Velocity_2 = value;
	}

	inline static int32_t get_offset_of_m_ColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t4055032941, ___m_ColliderInstanceID_3)); }
	inline int32_t get_m_ColliderInstanceID_3() const { return ___m_ColliderInstanceID_3; }
	inline int32_t* get_address_of_m_ColliderInstanceID_3() { return &___m_ColliderInstanceID_3; }
	inline void set_m_ColliderInstanceID_3(int32_t value)
	{
		___m_ColliderInstanceID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLECOLLISIONEVENT_T4055032941_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PARTICLE_T1882894987_H
#define PARTICLE_T1882894987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/Particle
struct  Particle_t1882894987 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t3722313464  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t3722313464  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t3722313464  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t3722313464  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t3722313464  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t3722313464  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t3722313464  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t3722313464  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t2600501292  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_12;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_13;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Position_0)); }
	inline Vector3_t3722313464  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t3722313464 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t3722313464  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Velocity_1)); }
	inline Vector3_t3722313464  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t3722313464  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_AnimatedVelocity_2)); }
	inline Vector3_t3722313464  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t3722313464 * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t3722313464  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_InitialVelocity_3)); }
	inline Vector3_t3722313464  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t3722313464 * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t3722313464  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_AxisOfRotation_4)); }
	inline Vector3_t3722313464  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t3722313464 * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t3722313464  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Rotation_5)); }
	inline Vector3_t3722313464  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t3722313464 * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t3722313464  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_AngularVelocity_6)); }
	inline Vector3_t3722313464  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t3722313464 * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t3722313464  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_StartSize_7)); }
	inline Vector3_t3722313464  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t3722313464 * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t3722313464  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_StartColor_8)); }
	inline Color32_t2600501292  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_t2600501292 * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_t2600501292  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_10() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_Lifetime_10)); }
	inline float get_m_Lifetime_10() const { return ___m_Lifetime_10; }
	inline float* get_address_of_m_Lifetime_10() { return &___m_Lifetime_10; }
	inline void set_m_Lifetime_10(float value)
	{
		___m_Lifetime_10 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_11() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_StartLifetime_11)); }
	inline float get_m_StartLifetime_11() const { return ___m_StartLifetime_11; }
	inline float* get_address_of_m_StartLifetime_11() { return &___m_StartLifetime_11; }
	inline void set_m_StartLifetime_11(float value)
	{
		___m_StartLifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_12() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_EmitAccumulator0_12)); }
	inline float get_m_EmitAccumulator0_12() const { return ___m_EmitAccumulator0_12; }
	inline float* get_address_of_m_EmitAccumulator0_12() { return &___m_EmitAccumulator0_12; }
	inline void set_m_EmitAccumulator0_12(float value)
	{
		___m_EmitAccumulator0_12 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_13() { return static_cast<int32_t>(offsetof(Particle_t1882894987, ___m_EmitAccumulator1_13)); }
	inline float get_m_EmitAccumulator1_13() const { return ___m_EmitAccumulator1_13; }
	inline float* get_address_of_m_EmitAccumulator1_13() { return &___m_EmitAccumulator1_13; }
	inline void set_m_EmitAccumulator1_13(float value)
	{
		___m_EmitAccumulator1_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T1882894987_H
#ifndef PARTICLESYSTEMGRADIENTMODE_T862789074_H
#define PARTICLESYSTEMGRADIENTMODE_T862789074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemGradientMode
struct  ParticleSystemGradientMode_t862789074 
{
public:
	// System.Int32 UnityEngine.ParticleSystemGradientMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParticleSystemGradientMode_t862789074, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMGRADIENTMODE_T862789074_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MINMAXGRADIENT_T3677460847_H
#define MINMAXGRADIENT_T3677460847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MinMaxGradient
struct  MinMaxGradient_t3677460847 
{
public:
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_t3067099924 * ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_t3067099924 * ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_t2555686324  ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_t2555686324  ___m_ColorMax_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3677460847, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_GradientMin_1() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3677460847, ___m_GradientMin_1)); }
	inline Gradient_t3067099924 * get_m_GradientMin_1() const { return ___m_GradientMin_1; }
	inline Gradient_t3067099924 ** get_address_of_m_GradientMin_1() { return &___m_GradientMin_1; }
	inline void set_m_GradientMin_1(Gradient_t3067099924 * value)
	{
		___m_GradientMin_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GradientMin_1), value);
	}

	inline static int32_t get_offset_of_m_GradientMax_2() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3677460847, ___m_GradientMax_2)); }
	inline Gradient_t3067099924 * get_m_GradientMax_2() const { return ___m_GradientMax_2; }
	inline Gradient_t3067099924 ** get_address_of_m_GradientMax_2() { return &___m_GradientMax_2; }
	inline void set_m_GradientMax_2(Gradient_t3067099924 * value)
	{
		___m_GradientMax_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GradientMax_2), value);
	}

	inline static int32_t get_offset_of_m_ColorMin_3() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3677460847, ___m_ColorMin_3)); }
	inline Color_t2555686324  get_m_ColorMin_3() const { return ___m_ColorMin_3; }
	inline Color_t2555686324 * get_address_of_m_ColorMin_3() { return &___m_ColorMin_3; }
	inline void set_m_ColorMin_3(Color_t2555686324  value)
	{
		___m_ColorMin_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMax_4() { return static_cast<int32_t>(offsetof(MinMaxGradient_t3677460847, ___m_ColorMax_4)); }
	inline Color_t2555686324  get_m_ColorMax_4() const { return ___m_ColorMax_4; }
	inline Color_t2555686324 * get_address_of_m_ColorMax_4() { return &___m_ColorMax_4; }
	inline void set_m_ColorMax_4(Color_t2555686324  value)
	{
		___m_ColorMax_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_t3677460847_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Gradient_t3067099924_marshaled_pinvoke ___m_GradientMin_1;
	Gradient_t3067099924_marshaled_pinvoke ___m_GradientMax_2;
	Color_t2555686324  ___m_ColorMin_3;
	Color_t2555686324  ___m_ColorMax_4;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_t3677460847_marshaled_com
{
	int32_t ___m_Mode_0;
	Gradient_t3067099924_marshaled_com* ___m_GradientMin_1;
	Gradient_t3067099924_marshaled_com* ___m_GradientMax_2;
	Color_t2555686324  ___m_ColorMin_3;
	Color_t2555686324  ___m_ColorMax_4;
};
#endif // MINMAXGRADIENT_T3677460847_H
#ifndef EMITPARAMS_T2216423628_H
#define EMITPARAMS_T2216423628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmitParams
struct  EmitParams_t2216423628 
{
public:
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_t1882894987  ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_10;

public:
	inline static int32_t get_offset_of_m_Particle_0() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_Particle_0)); }
	inline Particle_t1882894987  get_m_Particle_0() const { return ___m_Particle_0; }
	inline Particle_t1882894987 * get_address_of_m_Particle_0() { return &___m_Particle_0; }
	inline void set_m_Particle_0(Particle_t1882894987  value)
	{
		___m_Particle_0 = value;
	}

	inline static int32_t get_offset_of_m_PositionSet_1() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_PositionSet_1)); }
	inline bool get_m_PositionSet_1() const { return ___m_PositionSet_1; }
	inline bool* get_address_of_m_PositionSet_1() { return &___m_PositionSet_1; }
	inline void set_m_PositionSet_1(bool value)
	{
		___m_PositionSet_1 = value;
	}

	inline static int32_t get_offset_of_m_VelocitySet_2() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_VelocitySet_2)); }
	inline bool get_m_VelocitySet_2() const { return ___m_VelocitySet_2; }
	inline bool* get_address_of_m_VelocitySet_2() { return &___m_VelocitySet_2; }
	inline void set_m_VelocitySet_2(bool value)
	{
		___m_VelocitySet_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotationSet_3() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_AxisOfRotationSet_3)); }
	inline bool get_m_AxisOfRotationSet_3() const { return ___m_AxisOfRotationSet_3; }
	inline bool* get_address_of_m_AxisOfRotationSet_3() { return &___m_AxisOfRotationSet_3; }
	inline void set_m_AxisOfRotationSet_3(bool value)
	{
		___m_AxisOfRotationSet_3 = value;
	}

	inline static int32_t get_offset_of_m_RotationSet_4() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_RotationSet_4)); }
	inline bool get_m_RotationSet_4() const { return ___m_RotationSet_4; }
	inline bool* get_address_of_m_RotationSet_4() { return &___m_RotationSet_4; }
	inline void set_m_RotationSet_4(bool value)
	{
		___m_RotationSet_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocitySet_5() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_AngularVelocitySet_5)); }
	inline bool get_m_AngularVelocitySet_5() const { return ___m_AngularVelocitySet_5; }
	inline bool* get_address_of_m_AngularVelocitySet_5() { return &___m_AngularVelocitySet_5; }
	inline void set_m_AngularVelocitySet_5(bool value)
	{
		___m_AngularVelocitySet_5 = value;
	}

	inline static int32_t get_offset_of_m_StartSizeSet_6() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_StartSizeSet_6)); }
	inline bool get_m_StartSizeSet_6() const { return ___m_StartSizeSet_6; }
	inline bool* get_address_of_m_StartSizeSet_6() { return &___m_StartSizeSet_6; }
	inline void set_m_StartSizeSet_6(bool value)
	{
		___m_StartSizeSet_6 = value;
	}

	inline static int32_t get_offset_of_m_StartColorSet_7() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_StartColorSet_7)); }
	inline bool get_m_StartColorSet_7() const { return ___m_StartColorSet_7; }
	inline bool* get_address_of_m_StartColorSet_7() { return &___m_StartColorSet_7; }
	inline void set_m_StartColorSet_7(bool value)
	{
		___m_StartColorSet_7 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeedSet_8() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_RandomSeedSet_8)); }
	inline bool get_m_RandomSeedSet_8() const { return ___m_RandomSeedSet_8; }
	inline bool* get_address_of_m_RandomSeedSet_8() { return &___m_RandomSeedSet_8; }
	inline void set_m_RandomSeedSet_8(bool value)
	{
		___m_RandomSeedSet_8 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetimeSet_9() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_StartLifetimeSet_9)); }
	inline bool get_m_StartLifetimeSet_9() const { return ___m_StartLifetimeSet_9; }
	inline bool* get_address_of_m_StartLifetimeSet_9() { return &___m_StartLifetimeSet_9; }
	inline void set_m_StartLifetimeSet_9(bool value)
	{
		___m_StartLifetimeSet_9 = value;
	}

	inline static int32_t get_offset_of_m_ApplyShapeToPosition_10() { return static_cast<int32_t>(offsetof(EmitParams_t2216423628, ___m_ApplyShapeToPosition_10)); }
	inline bool get_m_ApplyShapeToPosition_10() const { return ___m_ApplyShapeToPosition_10; }
	inline bool* get_address_of_m_ApplyShapeToPosition_10() { return &___m_ApplyShapeToPosition_10; }
	inline void set_m_ApplyShapeToPosition_10(bool value)
	{
		___m_ApplyShapeToPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t2216423628_marshaled_pinvoke
{
	Particle_t1882894987  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_ApplyShapeToPosition_10;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t2216423628_marshaled_com
{
	Particle_t1882894987  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_ApplyShapeToPosition_10;
};
#endif // EMITPARAMS_T2216423628_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef PARTICLESYSTEMRENDERER_T2065813411_H
#define PARTICLESYSTEMRENDERER_T2065813411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemRenderer
struct  ParticleSystemRenderer_t2065813411  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMRENDERER_T2065813411_H

extern "C" void Gradient_t3067099924_marshal_pinvoke(const Gradient_t3067099924& unmarshaled, Gradient_t3067099924_marshaled_pinvoke& marshaled);
extern "C" void Gradient_t3067099924_marshal_pinvoke_back(const Gradient_t3067099924_marshaled_pinvoke& marshaled, Gradient_t3067099924& unmarshaled);
extern "C" void Gradient_t3067099924_marshal_pinvoke_cleanup(Gradient_t3067099924_marshaled_pinvoke& marshaled);
extern "C" void Gradient_t3067099924_marshal_com(const Gradient_t3067099924& unmarshaled, Gradient_t3067099924_marshaled_com& marshaled);
extern "C" void Gradient_t3067099924_marshal_com_back(const Gradient_t3067099924_marshaled_com& marshaled, Gradient_t3067099924& unmarshaled);
extern "C" void Gradient_t3067099924_marshal_com_cleanup(Gradient_t3067099924_marshaled_com& marshaled);


// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void MainModule__ctor_m1745438521 (MainModule_t2320046318 * __this, ParticleSystem_t1800779281 * ___particleSystem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m163824593 (ParticleSystem_t1800779281 * __this, bool ___withChildren0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
extern "C"  void Particle_set_startColor_m3825027702 (Particle_t1882894987 * __this, Color32_t2600501292  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startColor(UnityEngine.Color32)
extern "C"  void EmitParams_set_startColor_m4087630947 (EmitParams_t2216423628 * __this, Color32_t2600501292  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/MainModule::SetStartColor(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxGradient&)
extern "C"  void MainModule_SetStartColor_m80337950 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___system0, MinMaxGradient_t3677460847 * ___gradient1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
extern "C"  void MainModule_set_startColor_m2395076276 (MainModule_t2320046318 * __this, MinMaxGradient_t3677460847  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::.ctor()
extern "C"  void Gradient__ctor_m173848750 (Gradient_t3067099924 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::.ctor(UnityEngine.Color)
extern "C"  void MinMaxGradient__ctor_m720220502 (MinMaxGradient_t3677460847 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C"  bool ParticleSystem_get_isPlaying_m1820717466 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	typedef bool (*ParticleSystem_get_isPlaying_m1820717466_ftn) (ParticleSystem_t1800779281 *);
	static ParticleSystem_get_isPlaying_m1820717466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_get_isPlaying_m1820717466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
extern "C"  MainModule_t2320046318  ParticleSystem_get_main_m3006917117 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	MainModule_t2320046318  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		MainModule_t2320046318  L_0;
		memset(&L_0, 0, sizeof(L_0));
		MainModule__ctor_m1745438521((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		MainModule_t2320046318  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m163824593 (ParticleSystem_t1800779281 * __this, bool ___withChildren0, const RuntimeMethod* method)
{
	typedef void (*ParticleSystem_Play_m163824593_ftn) (ParticleSystem_t1800779281 *, bool);
	static ParticleSystem_Play_m163824593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParticleSystem_Play_m163824593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::Play(System.Boolean)");
	_il2cpp_icall_func(__this, ___withChildren0);
}
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m882713458 (ParticleSystem_t1800779281 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		bool L_0 = V_0;
		ParticleSystem_Play_m163824593(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t2216423628_marshal_pinvoke(const EmitParams_t2216423628& unmarshaled, EmitParams_t2216423628_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.get_m_Particle_0();
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.get_m_PositionSet_1());
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.get_m_VelocitySet_2());
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.get_m_AxisOfRotationSet_3());
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.get_m_RotationSet_4());
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.get_m_AngularVelocitySet_5());
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.get_m_StartSizeSet_6());
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.get_m_StartColorSet_7());
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.get_m_RandomSeedSet_8());
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.get_m_StartLifetimeSet_9());
	marshaled.___m_ApplyShapeToPosition_10 = static_cast<int32_t>(unmarshaled.get_m_ApplyShapeToPosition_10());
}
extern "C" void EmitParams_t2216423628_marshal_pinvoke_back(const EmitParams_t2216423628_marshaled_pinvoke& marshaled, EmitParams_t2216423628& unmarshaled)
{
	Particle_t1882894987  unmarshaled_m_Particle_temp_0;
	memset(&unmarshaled_m_Particle_temp_0, 0, sizeof(unmarshaled_m_Particle_temp_0));
	unmarshaled_m_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.set_m_Particle_0(unmarshaled_m_Particle_temp_0);
	bool unmarshaled_m_PositionSet_temp_1 = false;
	unmarshaled_m_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.set_m_PositionSet_1(unmarshaled_m_PositionSet_temp_1);
	bool unmarshaled_m_VelocitySet_temp_2 = false;
	unmarshaled_m_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.set_m_VelocitySet_2(unmarshaled_m_VelocitySet_temp_2);
	bool unmarshaled_m_AxisOfRotationSet_temp_3 = false;
	unmarshaled_m_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.set_m_AxisOfRotationSet_3(unmarshaled_m_AxisOfRotationSet_temp_3);
	bool unmarshaled_m_RotationSet_temp_4 = false;
	unmarshaled_m_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.set_m_RotationSet_4(unmarshaled_m_RotationSet_temp_4);
	bool unmarshaled_m_AngularVelocitySet_temp_5 = false;
	unmarshaled_m_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.set_m_AngularVelocitySet_5(unmarshaled_m_AngularVelocitySet_temp_5);
	bool unmarshaled_m_StartSizeSet_temp_6 = false;
	unmarshaled_m_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.set_m_StartSizeSet_6(unmarshaled_m_StartSizeSet_temp_6);
	bool unmarshaled_m_StartColorSet_temp_7 = false;
	unmarshaled_m_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.set_m_StartColorSet_7(unmarshaled_m_StartColorSet_temp_7);
	bool unmarshaled_m_RandomSeedSet_temp_8 = false;
	unmarshaled_m_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.set_m_RandomSeedSet_8(unmarshaled_m_RandomSeedSet_temp_8);
	bool unmarshaled_m_StartLifetimeSet_temp_9 = false;
	unmarshaled_m_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.set_m_StartLifetimeSet_9(unmarshaled_m_StartLifetimeSet_temp_9);
	bool unmarshaled_m_ApplyShapeToPosition_temp_10 = false;
	unmarshaled_m_ApplyShapeToPosition_temp_10 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_10);
	unmarshaled.set_m_ApplyShapeToPosition_10(unmarshaled_m_ApplyShapeToPosition_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t2216423628_marshal_pinvoke_cleanup(EmitParams_t2216423628_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t2216423628_marshal_com(const EmitParams_t2216423628& unmarshaled, EmitParams_t2216423628_marshaled_com& marshaled)
{
	marshaled.___m_Particle_0 = unmarshaled.get_m_Particle_0();
	marshaled.___m_PositionSet_1 = static_cast<int32_t>(unmarshaled.get_m_PositionSet_1());
	marshaled.___m_VelocitySet_2 = static_cast<int32_t>(unmarshaled.get_m_VelocitySet_2());
	marshaled.___m_AxisOfRotationSet_3 = static_cast<int32_t>(unmarshaled.get_m_AxisOfRotationSet_3());
	marshaled.___m_RotationSet_4 = static_cast<int32_t>(unmarshaled.get_m_RotationSet_4());
	marshaled.___m_AngularVelocitySet_5 = static_cast<int32_t>(unmarshaled.get_m_AngularVelocitySet_5());
	marshaled.___m_StartSizeSet_6 = static_cast<int32_t>(unmarshaled.get_m_StartSizeSet_6());
	marshaled.___m_StartColorSet_7 = static_cast<int32_t>(unmarshaled.get_m_StartColorSet_7());
	marshaled.___m_RandomSeedSet_8 = static_cast<int32_t>(unmarshaled.get_m_RandomSeedSet_8());
	marshaled.___m_StartLifetimeSet_9 = static_cast<int32_t>(unmarshaled.get_m_StartLifetimeSet_9());
	marshaled.___m_ApplyShapeToPosition_10 = static_cast<int32_t>(unmarshaled.get_m_ApplyShapeToPosition_10());
}
extern "C" void EmitParams_t2216423628_marshal_com_back(const EmitParams_t2216423628_marshaled_com& marshaled, EmitParams_t2216423628& unmarshaled)
{
	Particle_t1882894987  unmarshaled_m_Particle_temp_0;
	memset(&unmarshaled_m_Particle_temp_0, 0, sizeof(unmarshaled_m_Particle_temp_0));
	unmarshaled_m_Particle_temp_0 = marshaled.___m_Particle_0;
	unmarshaled.set_m_Particle_0(unmarshaled_m_Particle_temp_0);
	bool unmarshaled_m_PositionSet_temp_1 = false;
	unmarshaled_m_PositionSet_temp_1 = static_cast<bool>(marshaled.___m_PositionSet_1);
	unmarshaled.set_m_PositionSet_1(unmarshaled_m_PositionSet_temp_1);
	bool unmarshaled_m_VelocitySet_temp_2 = false;
	unmarshaled_m_VelocitySet_temp_2 = static_cast<bool>(marshaled.___m_VelocitySet_2);
	unmarshaled.set_m_VelocitySet_2(unmarshaled_m_VelocitySet_temp_2);
	bool unmarshaled_m_AxisOfRotationSet_temp_3 = false;
	unmarshaled_m_AxisOfRotationSet_temp_3 = static_cast<bool>(marshaled.___m_AxisOfRotationSet_3);
	unmarshaled.set_m_AxisOfRotationSet_3(unmarshaled_m_AxisOfRotationSet_temp_3);
	bool unmarshaled_m_RotationSet_temp_4 = false;
	unmarshaled_m_RotationSet_temp_4 = static_cast<bool>(marshaled.___m_RotationSet_4);
	unmarshaled.set_m_RotationSet_4(unmarshaled_m_RotationSet_temp_4);
	bool unmarshaled_m_AngularVelocitySet_temp_5 = false;
	unmarshaled_m_AngularVelocitySet_temp_5 = static_cast<bool>(marshaled.___m_AngularVelocitySet_5);
	unmarshaled.set_m_AngularVelocitySet_5(unmarshaled_m_AngularVelocitySet_temp_5);
	bool unmarshaled_m_StartSizeSet_temp_6 = false;
	unmarshaled_m_StartSizeSet_temp_6 = static_cast<bool>(marshaled.___m_StartSizeSet_6);
	unmarshaled.set_m_StartSizeSet_6(unmarshaled_m_StartSizeSet_temp_6);
	bool unmarshaled_m_StartColorSet_temp_7 = false;
	unmarshaled_m_StartColorSet_temp_7 = static_cast<bool>(marshaled.___m_StartColorSet_7);
	unmarshaled.set_m_StartColorSet_7(unmarshaled_m_StartColorSet_temp_7);
	bool unmarshaled_m_RandomSeedSet_temp_8 = false;
	unmarshaled_m_RandomSeedSet_temp_8 = static_cast<bool>(marshaled.___m_RandomSeedSet_8);
	unmarshaled.set_m_RandomSeedSet_8(unmarshaled_m_RandomSeedSet_temp_8);
	bool unmarshaled_m_StartLifetimeSet_temp_9 = false;
	unmarshaled_m_StartLifetimeSet_temp_9 = static_cast<bool>(marshaled.___m_StartLifetimeSet_9);
	unmarshaled.set_m_StartLifetimeSet_9(unmarshaled_m_StartLifetimeSet_temp_9);
	bool unmarshaled_m_ApplyShapeToPosition_temp_10 = false;
	unmarshaled_m_ApplyShapeToPosition_temp_10 = static_cast<bool>(marshaled.___m_ApplyShapeToPosition_10);
	unmarshaled.set_m_ApplyShapeToPosition_10(unmarshaled_m_ApplyShapeToPosition_temp_10);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/EmitParams
extern "C" void EmitParams_t2216423628_marshal_com_cleanup(EmitParams_t2216423628_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startColor(UnityEngine.Color32)
extern "C"  void EmitParams_set_startColor_m4087630947 (EmitParams_t2216423628 * __this, Color32_t2600501292  ___value0, const RuntimeMethod* method)
{
	{
		Particle_t1882894987 * L_0 = __this->get_address_of_m_Particle_0();
		Color32_t2600501292  L_1 = ___value0;
		Particle_set_startColor_m3825027702(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_StartColorSet_7((bool)1);
		return;
	}
}
extern "C"  void EmitParams_set_startColor_m4087630947_AdjustorThunk (RuntimeObject * __this, Color32_t2600501292  ___value0, const RuntimeMethod* method)
{
	EmitParams_t2216423628 * _thisAdjusted = reinterpret_cast<EmitParams_t2216423628 *>(__this + 1);
	EmitParams_set_startColor_m4087630947(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t2320046318_marshal_pinvoke(const MainModule_t2320046318& unmarshaled, MainModule_t2320046318_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void MainModule_t2320046318_marshal_pinvoke_back(const MainModule_t2320046318_marshaled_pinvoke& marshaled, MainModule_t2320046318& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t2320046318_marshal_pinvoke_cleanup(MainModule_t2320046318_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t2320046318_marshal_com(const MainModule_t2320046318& unmarshaled, MainModule_t2320046318_marshaled_com& marshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
extern "C" void MainModule_t2320046318_marshal_com_back(const MainModule_t2320046318_marshaled_com& marshaled, MainModule_t2320046318& unmarshaled)
{
	Exception_t* ___m_ParticleSystem_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ParticleSystem' of type 'MainModule': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ParticleSystem_0Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MainModule
extern "C" void MainModule_t2320046318_marshal_com_cleanup(MainModule_t2320046318_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void MainModule__ctor_m1745438521 (MainModule_t2320046318 * __this, ParticleSystem_t1800779281 * ___particleSystem0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t1800779281 * L_0 = ___particleSystem0;
		__this->set_m_ParticleSystem_0(L_0);
		return;
	}
}
extern "C"  void MainModule__ctor_m1745438521_AdjustorThunk (RuntimeObject * __this, ParticleSystem_t1800779281 * ___particleSystem0, const RuntimeMethod* method)
{
	MainModule_t2320046318 * _thisAdjusted = reinterpret_cast<MainModule_t2320046318 *>(__this + 1);
	MainModule__ctor_m1745438521(_thisAdjusted, ___particleSystem0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
extern "C"  void MainModule_set_startColor_m2395076276 (MainModule_t2320046318 * __this, MinMaxGradient_t3677460847  ___value0, const RuntimeMethod* method)
{
	{
		ParticleSystem_t1800779281 * L_0 = __this->get_m_ParticleSystem_0();
		MainModule_SetStartColor_m80337950(NULL /*static, unused*/, L_0, (&___value0), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void MainModule_set_startColor_m2395076276_AdjustorThunk (RuntimeObject * __this, MinMaxGradient_t3677460847  ___value0, const RuntimeMethod* method)
{
	MainModule_t2320046318 * _thisAdjusted = reinterpret_cast<MainModule_t2320046318 *>(__this + 1);
	MainModule_set_startColor_m2395076276(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ParticleSystem/MainModule::SetStartColor(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxGradient&)
extern "C"  void MainModule_SetStartColor_m80337950 (RuntimeObject * __this /* static, unused */, ParticleSystem_t1800779281 * ___system0, MinMaxGradient_t3677460847 * ___gradient1, const RuntimeMethod* method)
{
	typedef void (*MainModule_SetStartColor_m80337950_ftn) (ParticleSystem_t1800779281 *, MinMaxGradient_t3677460847 *);
	static MainModule_SetStartColor_m80337950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MainModule_SetStartColor_m80337950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem/MainModule::SetStartColor(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxGradient&)");
	_il2cpp_icall_func(___system0, ___gradient1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MinMaxGradient
extern "C" void MinMaxGradient_t3677460847_marshal_pinvoke(const MinMaxGradient_t3677460847& unmarshaled, MinMaxGradient_t3677460847_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Mode_0 = unmarshaled.get_m_Mode_0();
	if (unmarshaled.get_m_GradientMin_1() != NULL) Gradient_t3067099924_marshal_pinvoke(*unmarshaled.get_m_GradientMin_1(), marshaled.___m_GradientMin_1);
	if (unmarshaled.get_m_GradientMax_2() != NULL) Gradient_t3067099924_marshal_pinvoke(*unmarshaled.get_m_GradientMax_2(), marshaled.___m_GradientMax_2);
	marshaled.___m_ColorMin_3 = unmarshaled.get_m_ColorMin_3();
	marshaled.___m_ColorMax_4 = unmarshaled.get_m_ColorMax_4();
}
extern "C" void MinMaxGradient_t3677460847_marshal_pinvoke_back(const MinMaxGradient_t3677460847_marshaled_pinvoke& marshaled, MinMaxGradient_t3677460847& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MinMaxGradient_t3677460847_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_m_Mode_temp_0 = 0;
	unmarshaled_m_Mode_temp_0 = marshaled.___m_Mode_0;
	unmarshaled.set_m_Mode_0(unmarshaled_m_Mode_temp_0);
	unmarshaled.set_m_GradientMin_1((Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var));
	Gradient__ctor_m173848750(unmarshaled.get_m_GradientMin_1(), NULL);
	Gradient_t3067099924_marshal_pinvoke_back(marshaled.___m_GradientMin_1, *unmarshaled.get_m_GradientMin_1());
	unmarshaled.set_m_GradientMax_2((Gradient_t3067099924 *)il2cpp_codegen_object_new(Gradient_t3067099924_il2cpp_TypeInfo_var));
	Gradient__ctor_m173848750(unmarshaled.get_m_GradientMax_2(), NULL);
	Gradient_t3067099924_marshal_pinvoke_back(marshaled.___m_GradientMax_2, *unmarshaled.get_m_GradientMax_2());
	Color_t2555686324  unmarshaled_m_ColorMin_temp_3;
	memset(&unmarshaled_m_ColorMin_temp_3, 0, sizeof(unmarshaled_m_ColorMin_temp_3));
	unmarshaled_m_ColorMin_temp_3 = marshaled.___m_ColorMin_3;
	unmarshaled.set_m_ColorMin_3(unmarshaled_m_ColorMin_temp_3);
	Color_t2555686324  unmarshaled_m_ColorMax_temp_4;
	memset(&unmarshaled_m_ColorMax_temp_4, 0, sizeof(unmarshaled_m_ColorMax_temp_4));
	unmarshaled_m_ColorMax_temp_4 = marshaled.___m_ColorMax_4;
	unmarshaled.set_m_ColorMax_4(unmarshaled_m_ColorMax_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MinMaxGradient
extern "C" void MinMaxGradient_t3677460847_marshal_pinvoke_cleanup(MinMaxGradient_t3677460847_marshaled_pinvoke& marshaled)
{
	Gradient_t3067099924_marshal_pinvoke_cleanup(marshaled.___m_GradientMin_1);
	Gradient_t3067099924_marshal_pinvoke_cleanup(marshaled.___m_GradientMax_2);
}




// Conversion methods for marshalling of: UnityEngine.ParticleSystem/MinMaxGradient
extern "C" void MinMaxGradient_t3677460847_marshal_com(const MinMaxGradient_t3677460847& unmarshaled, MinMaxGradient_t3677460847_marshaled_com& marshaled)
{
	marshaled.___m_Mode_0 = unmarshaled.get_m_Mode_0();
	if (unmarshaled.get_m_GradientMin_1() != NULL) Gradient_t3067099924_marshal_com(*unmarshaled.get_m_GradientMin_1(), *marshaled.___m_GradientMin_1);
	if (unmarshaled.get_m_GradientMax_2() != NULL) Gradient_t3067099924_marshal_com(*unmarshaled.get_m_GradientMax_2(), *marshaled.___m_GradientMax_2);
	marshaled.___m_ColorMin_3 = unmarshaled.get_m_ColorMin_3();
	marshaled.___m_ColorMax_4 = unmarshaled.get_m_ColorMax_4();
}
extern "C" void MinMaxGradient_t3677460847_marshal_com_back(const MinMaxGradient_t3677460847_marshaled_com& marshaled, MinMaxGradient_t3677460847& unmarshaled)
{
	int32_t unmarshaled_m_Mode_temp_0 = 0;
	unmarshaled_m_Mode_temp_0 = marshaled.___m_Mode_0;
	unmarshaled.set_m_Mode_0(unmarshaled_m_Mode_temp_0);
	if (unmarshaled.get_m_GradientMin_1() != NULL)
	{
		Gradient__ctor_m173848750(unmarshaled.get_m_GradientMin_1(), NULL);
		Gradient_t3067099924_marshal_com_back(*marshaled.___m_GradientMin_1, *unmarshaled.get_m_GradientMin_1());
	}
	if (unmarshaled.get_m_GradientMax_2() != NULL)
	{
		Gradient__ctor_m173848750(unmarshaled.get_m_GradientMax_2(), NULL);
		Gradient_t3067099924_marshal_com_back(*marshaled.___m_GradientMax_2, *unmarshaled.get_m_GradientMax_2());
	}
	Color_t2555686324  unmarshaled_m_ColorMin_temp_3;
	memset(&unmarshaled_m_ColorMin_temp_3, 0, sizeof(unmarshaled_m_ColorMin_temp_3));
	unmarshaled_m_ColorMin_temp_3 = marshaled.___m_ColorMin_3;
	unmarshaled.set_m_ColorMin_3(unmarshaled_m_ColorMin_temp_3);
	Color_t2555686324  unmarshaled_m_ColorMax_temp_4;
	memset(&unmarshaled_m_ColorMax_temp_4, 0, sizeof(unmarshaled_m_ColorMax_temp_4));
	unmarshaled_m_ColorMax_temp_4 = marshaled.___m_ColorMax_4;
	unmarshaled.set_m_ColorMax_4(unmarshaled_m_ColorMax_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.ParticleSystem/MinMaxGradient
extern "C" void MinMaxGradient_t3677460847_marshal_com_cleanup(MinMaxGradient_t3677460847_marshaled_com& marshaled)
{
	if (&(*marshaled.___m_GradientMin_1) != NULL) Gradient_t3067099924_marshal_com_cleanup(*marshaled.___m_GradientMin_1);
	if (&(*marshaled.___m_GradientMax_2) != NULL) Gradient_t3067099924_marshal_com_cleanup(*marshaled.___m_GradientMax_2);
}
// System.Void UnityEngine.ParticleSystem/MinMaxGradient::.ctor(UnityEngine.Color)
extern "C"  void MinMaxGradient__ctor_m720220502 (MinMaxGradient_t3677460847 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		__this->set_m_Mode_0(0);
		__this->set_m_GradientMin_1((Gradient_t3067099924 *)NULL);
		__this->set_m_GradientMax_2((Gradient_t3067099924 *)NULL);
		Color_t2555686324  L_0 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_ColorMin_3(L_0);
		Color_t2555686324  L_1 = ___color0;
		__this->set_m_ColorMax_4(L_1);
		return;
	}
}
extern "C"  void MinMaxGradient__ctor_m720220502_AdjustorThunk (RuntimeObject * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	MinMaxGradient_t3677460847 * _thisAdjusted = reinterpret_cast<MinMaxGradient_t3677460847 *>(__this + 1);
	MinMaxGradient__ctor_m720220502(_thisAdjusted, ___color0, method);
}
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MinMaxGradient::op_Implicit(UnityEngine.Color)
extern "C"  MinMaxGradient_t3677460847  MinMaxGradient_op_Implicit_m1001680824 (RuntimeObject * __this /* static, unused */, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	MinMaxGradient_t3677460847  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Color_t2555686324  L_0 = ___color0;
		MinMaxGradient_t3677460847  L_1;
		memset(&L_1, 0, sizeof(L_1));
		MinMaxGradient__ctor_m720220502((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		MinMaxGradient_t3677460847  L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32)
extern "C"  void Particle_set_startColor_m3825027702 (Particle_t1882894987 * __this, Color32_t2600501292  ___value0, const RuntimeMethod* method)
{
	{
		Color32_t2600501292  L_0 = ___value0;
		__this->set_m_StartColor_8(L_0);
		return;
	}
}
extern "C"  void Particle_set_startColor_m3825027702_AdjustorThunk (RuntimeObject * __this, Color32_t2600501292  ___value0, const RuntimeMethod* method)
{
	Particle_t1882894987 * _thisAdjusted = reinterpret_cast<Particle_t1882894987 *>(__this + 1);
	Particle_set_startColor_m3825027702(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
