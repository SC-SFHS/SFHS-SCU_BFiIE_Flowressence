#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
	}
};


// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}
};

struct DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.InteropServices.CallingConvention
struct CallingConvention_tCD05DC1A211D9713286784F4DDDE1BA18B839924 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConvention_tCD05DC1A211D9713286784F4DDDE1BA18B839924, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.CharSet
struct CharSet_tF37E3433B83409C49A52A325333BFBC08ACD6E4B 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharSet_tF37E3433B83409C49A52A325333BFBC08ACD6E4B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};


// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::m_callingConvention
	int32_t ___m_callingConvention_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::CharSet
	int32_t ___CharSet_1;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::BestFitMapping
	bool ___BestFitMapping_2;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_3;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::SetLastError
	bool ___SetLastError_4;

public:
	inline static int32_t get_offset_of_m_callingConvention_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F, ___m_callingConvention_0)); }
	inline int32_t get_m_callingConvention_0() const { return ___m_callingConvention_0; }
	inline int32_t* get_address_of_m_callingConvention_0() { return &___m_callingConvention_0; }
	inline void set_m_callingConvention_0(int32_t value)
	{
		___m_callingConvention_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_2() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F, ___BestFitMapping_2)); }
	inline bool get_BestFitMapping_2() const { return ___BestFitMapping_2; }
	inline bool* get_address_of_BestFitMapping_2() { return &___BestFitMapping_2; }
	inline void set_BestFitMapping_2(bool value)
	{
		___BestFitMapping_2 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_3() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F, ___ThrowOnUnmappableChar_3)); }
	inline bool get_ThrowOnUnmappableChar_3() const { return ___ThrowOnUnmappableChar_3; }
	inline bool* get_address_of_ThrowOnUnmappableChar_3() { return &___ThrowOnUnmappableChar_3; }
	inline void set_ThrowOnUnmappableChar_3(bool value)
	{
		___ThrowOnUnmappableChar_3 = value;
	}

	inline static int32_t get_offset_of_SetLastError_4() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F, ___SetLastError_4)); }
	inline bool get_SetLastError_4() const { return ___SetLastError_4; }
	inline bool* get_address_of_SetLastError_4() { return &___SetLastError_4; }
	inline void set_SetLastError_4(bool value)
	{
		___SetLastError_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::.ctor(System.Runtime.InteropServices.CallingConvention)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedFunctionPointerAttribute__ctor_m4EE271163D421DF82BBCD7D91ED68D8EE26544F7 (UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F * __this, int32_t ___callingConvention0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, bool ___error1, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
static void Oculus_Platform_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x41\x73\x73\x65\x6D\x62\x6C\x79\x2D\x43\x53\x68\x61\x72\x70\x2D\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[2];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[3];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
}
static void GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CStartU3Eb__8_0_m38545CAE0160272C4FD179300BF8155506859D8F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CSetPresenceU3Eb__9_0_m8D546B0A26DABE165F7E42CA4BEA7CDF32248B46(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CSetPresenceU3Eb__9_1_mF421E7B57010E1E90CD6DC37A13CFE768A0ADA32(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CClearPresenceU3Eb__10_0_m7B5D3C5902D8D0130B1101CA68F983593BF6B11F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CClearPresenceU3Eb__10_1_mE5A4FBFF0A82C3110F4662407D09B133DAD986DC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CLaunchInvitePanelU3Eb__11_0_mFCB2BD47B6C67FAC4EC1556B0FA1B4575E60798D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CLaunchRosterPanelU3Eb__12_0_m4658FE1FF2C89B8241AD64904C2CAC4A4A76D72A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AbuseReportType_t71E68FFACA89187564A2A415A7346953A1F91041_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void AbuseReportType_t71E68FFACA89187564A2A415A7346953A1F91041_CustomAttributesCacheGenerator_Object(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x42\x4A\x45\x43\x54"), NULL);
	}
}
static void AbuseReportType_t71E68FFACA89187564A2A415A7346953A1F91041_CustomAttributesCacheGenerator_User(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x53\x45\x52"), NULL);
	}
}
static void AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Collect(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x4F\x4C\x4C\x45\x43\x54"), NULL);
	}
}
static void AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Optional(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x50\x54\x49\x4F\x4E\x41\x4C"), NULL);
	}
}
static void AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Skip(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x4B\x49\x50"), NULL);
	}
}
static void AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Simple(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x49\x4D\x50\x4C\x45"), NULL);
	}
}
static void AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Bitfield(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x49\x54\x46\x49\x45\x4C\x44"), NULL);
	}
}
static void AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Count(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x4F\x55\x4E\x54"), NULL);
	}
}
static void FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F * tmp = (UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F *)cache->attributes[0];
		UnmanagedFunctionPointerAttribute__ctor_m4EE271163D421DF82BBCD7D91ED68D8EE26544F7(tmp, 2LL, NULL);
	}
}
static void ChallengeCreationType_t66AC47DB223FE87260C3E4DE202D19567B81EC00_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void ChallengeCreationType_t66AC47DB223FE87260C3E4DE202D19567B81EC00_CustomAttributesCacheGenerator_UserCreated(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x53\x45\x52\x5F\x43\x52\x45\x41\x54\x45\x44"), NULL);
	}
}
static void ChallengeCreationType_t66AC47DB223FE87260C3E4DE202D19567B81EC00_CustomAttributesCacheGenerator_DeveloperCreated(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x45\x56\x45\x4C\x4F\x50\x45\x52\x5F\x43\x52\x45\x41\x54\x45\x44"), NULL);
	}
}
static void ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_AllVisible(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x4C\x4C\x5F\x56\x49\x53\x49\x42\x4C\x45"), NULL);
	}
}
static void ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_Participating(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x41\x52\x54\x49\x43\x49\x50\x41\x54\x49\x4E\x47"), NULL);
	}
}
static void ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_Invited(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x56\x49\x54\x45\x44"), NULL);
	}
}
static void ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_ParticipatingOrInvited(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x41\x52\x54\x49\x43\x49\x50\x41\x54\x49\x4E\x47\x5F\x4F\x52\x5F\x49\x4E\x56\x49\x54\x45\x44"), NULL);
	}
}
static void ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_InviteOnly(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x56\x49\x54\x45\x5F\x4F\x4E\x4C\x59"), NULL);
	}
}
static void ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_Public(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x55\x42\x4C\x49\x43"), NULL);
	}
}
static void ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_Private(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x52\x49\x56\x41\x54\x45"), NULL);
	}
}
static void CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_InSync(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x5F\x53\x59\x4E\x43"), NULL);
	}
}
static void CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_NeedsDownload(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x45\x45\x44\x53\x5F\x44\x4F\x57\x4E\x4C\x4F\x41\x44"), NULL);
	}
}
static void CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_RemoteDownloading(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x52\x45\x4D\x4F\x54\x45\x5F\x44\x4F\x57\x4E\x4C\x4F\x41\x44\x49\x4E\x47"), NULL);
	}
}
static void CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_NeedsUpload(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x45\x45\x44\x53\x5F\x55\x50\x4C\x4F\x41\x44"), NULL);
	}
}
static void CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_LocalUploading(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x4F\x43\x41\x4C\x5F\x55\x50\x4C\x4F\x41\x44\x49\x4E\x47"), NULL);
	}
}
static void CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_InConflict(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x5F\x43\x4F\x4E\x46\x4C\x49\x43\x54"), NULL);
	}
}
static void CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_Ok(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x4B"), NULL);
	}
}
static void CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_BetterVersionStored(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x45\x54\x54\x45\x52\x5F\x56\x45\x52\x53\x49\x4F\x4E\x5F\x53\x54\x4F\x52\x45\x44"), NULL);
	}
}
static void CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_ManualMergeRequired(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x41\x4E\x55\x41\x4C\x5F\x4D\x45\x52\x47\x45\x5F\x52\x45\x51\x55\x49\x52\x45\x44"), NULL);
	}
}
static void KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_String(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x54\x52\x49\x4E\x47"), NULL);
	}
}
static void KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_Int(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x54\x45\x47\x45\x52"), NULL);
	}
}
static void KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_Double(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x4F\x55\x42\x4C\x45"), NULL);
	}
}
static void KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_Success(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x55\x43\x43\x45\x53\x53"), NULL);
	}
}
static void LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedRoomFull(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x49\x4C\x45\x44\x5F\x52\x4F\x4F\x4D\x5F\x46\x55\x4C\x4C"), NULL);
	}
}
static void LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedGameAlreadyStarted(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x49\x4C\x45\x44\x5F\x47\x41\x4D\x45\x5F\x41\x4C\x52\x45\x41\x44\x59\x5F\x53\x54\x41\x52\x54\x45\x44"), NULL);
	}
}
static void LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedRoomNotFound(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x49\x4C\x45\x44\x5F\x52\x4F\x4F\x4D\x5F\x4E\x4F\x54\x5F\x46\x4F\x55\x4E\x44"), NULL);
	}
}
static void LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedUserDeclined(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x49\x4C\x45\x44\x5F\x55\x53\x45\x52\x5F\x44\x45\x43\x4C\x49\x4E\x45\x44"), NULL);
	}
}
static void LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedOtherReason(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x49\x4C\x45\x44\x5F\x4F\x54\x48\x45\x52\x5F\x52\x45\x41\x53\x4F\x4E"), NULL);
	}
}
static void LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Normal(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x52\x4D\x41\x4C"), NULL);
	}
}
static void LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Invite(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x56\x49\x54\x45"), NULL);
	}
}
static void LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Coordinated(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x4F\x4F\x52\x44\x49\x4E\x41\x54\x45\x44"), NULL);
	}
}
static void LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Deeplink(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x45\x45\x50\x4C\x49\x4E\x4B"), NULL);
	}
}
static void LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_None(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x4E\x45"), NULL);
	}
}
static void LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_Friends(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x52\x49\x45\x4E\x44\x53"), NULL);
	}
}
static void LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_UserIds(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x53\x45\x52\x5F\x49\x44\x53"), NULL);
	}
}
static void LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_Top(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x54\x4F\x50"), NULL);
	}
}
static void LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_CenteredOnViewer(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x45\x4E\x54\x45\x52\x45\x44\x5F\x4F\x4E\x5F\x56\x49\x45\x57\x45\x52"), NULL);
	}
}
static void LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_CenteredOnViewerOrTop(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x45\x4E\x54\x45\x52\x45\x44\x5F\x4F\x4E\x5F\x56\x49\x45\x57\x45\x52\x5F\x4F\x52\x5F\x54\x4F\x50"), NULL);
	}
}
static void LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_Public(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x55\x42\x4C\x49\x43"), NULL);
	}
}
static void LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_Friends(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x52\x49\x45\x4E\x44\x53"), NULL);
	}
}
static void LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_OnlyMe(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x4E\x4C\x59\x5F\x4D\x45"), NULL);
	}
}
static void LivestreamingMicrophoneStatus_t60C2556A3CEB983FA445CBDDA5302254C2B1748C_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LivestreamingMicrophoneStatus_t60C2556A3CEB983FA445CBDDA5302254C2B1748C_CustomAttributesCacheGenerator_MicrophoneOn(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x49\x43\x52\x4F\x50\x48\x4F\x4E\x45\x5F\x4F\x4E"), NULL);
	}
}
static void LivestreamingMicrophoneStatus_t60C2556A3CEB983FA445CBDDA5302254C2B1748C_CustomAttributesCacheGenerator_MicrophoneOff(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x49\x43\x52\x4F\x50\x48\x4F\x4E\x45\x5F\x4F\x46\x46"), NULL);
	}
}
static void LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_Success(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x55\x43\x43\x45\x53\x53"), NULL);
	}
}
static void LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_NoPackageSet(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x5F\x50\x41\x43\x4B\x41\x47\x45\x5F\x53\x45\x54"), NULL);
	}
}
static void LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_NoFbConnect(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x5F\x46\x42\x5F\x43\x4F\x4E\x4E\x45\x43\x54"), NULL);
	}
}
static void LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_NoSessionId(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x5F\x53\x45\x53\x53\x49\x4F\x4E\x5F\x49\x44"), NULL);
	}
}
static void LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_MissingParameters(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x49\x53\x53\x49\x4E\x47\x5F\x50\x41\x52\x41\x4D\x45\x54\x45\x52\x53"), NULL);
	}
}
static void MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Required(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x52\x45\x51\x55\x49\x52\x45\x44"), NULL);
	}
}
static void MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_High(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x48\x49\x47\x48"), NULL);
	}
}
static void MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Medium(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x45\x44\x49\x55\x4D"), NULL);
	}
}
static void MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Low(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x4F\x57"), NULL);
	}
}
static void MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void MatchmakingStatApproach_t19790808DCD73886EE9E7D0CFEA589261ADA8217_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void MatchmakingStatApproach_t19790808DCD73886EE9E7D0CFEA589261ADA8217_CustomAttributesCacheGenerator_Trailing(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x54\x52\x41\x49\x4C\x49\x4E\x47"), NULL);
	}
}
static void MatchmakingStatApproach_t19790808DCD73886EE9E7D0CFEA589261ADA8217_CustomAttributesCacheGenerator_Swingy(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x57\x49\x4E\x47\x59"), NULL);
	}
}
static void MediaContentType_tE752B0D518F26AFB56FC3AE2039DC16A3B1C3081_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void MediaContentType_tE752B0D518F26AFB56FC3AE2039DC16A3B1C3081_CustomAttributesCacheGenerator_Photo(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x48\x4F\x54\x4F"), NULL);
	}
}
static void Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_CustomAttributesCacheGenerator_U3CHandleExtraMessageTypesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_CustomAttributesCacheGenerator_Message_set_HandleExtraMessageTypes_m5F0840B8B95CC20402DBF25C1737A1F37FF5CC94(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_CustomAttributesCacheGenerator_Message_get_HandleExtraMessageTypes_mED1333755A1A52BCE5C8E1FCB8E5A2F327FF231F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_DestinationUnavailable(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x45\x53\x54\x49\x4E\x41\x54\x49\x4F\x4E\x5F\x55\x4E\x41\x56\x41\x49\x4C\x41\x42\x4C\x45"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_DlcRequired(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x4C\x43\x5F\x52\x45\x51\x55\x49\x52\x45\x44"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_General(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x47\x45\x4E\x45\x52\x41\x4C"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_GroupFull(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x47\x52\x4F\x55\x50\x5F\x46\x55\x4C\x4C"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_InviterNotJoinable(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x56\x49\x54\x45\x52\x5F\x4E\x4F\x54\x5F\x4A\x4F\x49\x4E\x41\x42\x4C\x45"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_LevelNotHighEnough(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x45\x56\x45\x4C\x5F\x4E\x4F\x54\x5F\x48\x49\x47\x48\x5F\x45\x4E\x4F\x55\x47\x48"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_LevelNotUnlocked(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x45\x56\x45\x4C\x5F\x4E\x4F\x54\x5F\x55\x4E\x4C\x4F\x43\x4B\x45\x44"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_NetworkTimeout(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x45\x54\x57\x4F\x52\x4B\x5F\x54\x49\x4D\x45\x4F\x55\x54"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_NoLongerAvailable(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x5F\x4C\x4F\x4E\x47\x45\x52\x5F\x41\x56\x41\x49\x4C\x41\x42\x4C\x45"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_UpdateRequired(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x50\x44\x41\x54\x45\x5F\x52\x45\x51\x55\x49\x52\x45\x44"), NULL);
	}
}
static void MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_TutorialRequired(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x54\x55\x54\x4F\x52\x49\x41\x4C\x5F\x52\x45\x51\x55\x49\x52\x45\x44"), NULL);
	}
}
static void NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Connecting(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x4F\x4E\x4E\x45\x43\x54\x49\x4E\x47"), NULL);
	}
}
static void NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Disconnected(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x49\x53\x43\x4F\x4E\x4E\x45\x43\x54\x45\x44"), NULL);
	}
}
static void NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Connected(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x4F\x4E\x4E\x45\x43\x54\x45\x44"), NULL);
	}
}
static void NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_LocalTerminated(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x4F\x43\x41\x4C\x5F\x54\x45\x52\x4D\x49\x4E\x41\x54\x45\x44"), NULL);
	}
}
static void NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_ServerTerminated(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x45\x52\x56\x45\x52\x5F\x54\x45\x52\x4D\x49\x4E\x41\x54\x45\x44"), NULL);
	}
}
static void NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_Failed(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x49\x4C\x45\x44"), NULL);
	}
}
static void NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_Lost(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x4F\x53\x54"), NULL);
	}
}
static void NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB_CustomAttributesCacheGenerator_None(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x4E\x45"), NULL);
	}
}
static void NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB_CustomAttributesCacheGenerator_Internal(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x54\x45\x52\x4E\x41\x4C"), NULL);
	}
}
static void NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53_CustomAttributesCacheGenerator_Ambisonic(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x4D\x42\x49\x53\x4F\x4E\x49\x43"), NULL);
	}
}
static void NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53_CustomAttributesCacheGenerator_Mono(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x4F\x4E\x4F"), NULL);
	}
}
static void PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Join(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4A\x6F\x69\x6E"), NULL);
	}
}
static void PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Leave(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x65\x61\x76\x65"), NULL);
	}
}
static void PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Invite(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6E\x76\x69\x74\x65"), NULL);
	}
}
static void PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Uninvite(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x6E\x76\x69\x74\x65"), NULL);
	}
}
static void PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Connected(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x4F\x4E\x4E\x45\x43\x54\x45\x44"), NULL);
	}
}
static void PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Timeout(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x54\x49\x4D\x45\x4F\x55\x54"), NULL);
	}
}
static void PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Closed(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x4C\x4F\x53\x45\x44"), NULL);
	}
}
static void PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Granted(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x47\x52\x41\x4E\x54\x45\x44"), NULL);
	}
}
static void PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Denied(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x45\x4E\x49\x45\x44"), NULL);
	}
}
static void PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Blocked(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x4C\x4F\x43\x4B\x45\x44"), NULL);
	}
}
static void PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20_CustomAttributesCacheGenerator_Microphone(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x49\x43\x52\x4F\x50\x48\x4F\x4E\x45"), NULL);
	}
}
static void PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20_CustomAttributesCacheGenerator_WriteExternalStorage(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x57\x52\x49\x54\x45\x5F\x45\x58\x54\x45\x52\x4E\x41\x4C\x5F\x53\x54\x4F\x52\x41\x47\x45"), NULL);
	}
}
static void Rooms_t520BB38DC1A41718B70106694A7D8854EB8E887D_CustomAttributesCacheGenerator_Rooms_SetRoomInviteNotificationCallback_m7E8804125565D1CEC412E4C80FE2E1133E94B06C(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x53\x65\x74\x52\x6F\x6F\x6D\x49\x6E\x76\x69\x74\x65\x41\x63\x63\x65\x70\x74\x65\x64\x4E\x6F\x74\x69\x66\x69\x63\x61\x74\x69\x6F\x6E\x43\x61\x6C\x6C\x62\x61\x63\x6B"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_Success(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x55\x43\x43\x45\x53\x53"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_Uninitialized(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x49\x4E\x49\x54\x49\x41\x4C\x49\x5A\x45\x44"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_PreLoaded(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x52\x45\x5F\x4C\x4F\x41\x44\x45\x44"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_FileInvalid(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x49\x4C\x45\x5F\x49\x4E\x56\x41\x4C\x49\x44"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_SignatureInvalid(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x49\x47\x4E\x41\x54\x55\x52\x45\x5F\x49\x4E\x56\x41\x4C\x49\x44"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_UnableToVerify(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x41\x42\x4C\x45\x5F\x54\x4F\x5F\x56\x45\x52\x49\x46\x59"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_VersionMismatch(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x56\x45\x52\x53\x49\x4F\x4E\x5F\x4D\x49\x53\x4D\x41\x54\x43\x48"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_InvalidCredentials(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x56\x41\x4C\x49\x44\x5F\x43\x52\x45\x44\x45\x4E\x54\x49\x41\x4C\x53"), NULL);
	}
}
static void PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_NotEntitled(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x54\x5F\x45\x4E\x54\x49\x54\x4C\x45\x44"), NULL);
	}
}
static void PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_CustomAttributesCacheGenerator_ovrAppID(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_CustomAttributesCacheGenerator_ovrMobileAppID(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_CustomAttributesCacheGenerator_ovrUseStandalonePlatform(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_CustomAttributesCacheGenerator_U3CRequestIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_CustomAttributesCacheGenerator_Request_get_RequestID_m2FC9CBB00C4E9062465F6B4A7487104F8A7338BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_CustomAttributesCacheGenerator_Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_None(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x4E\x45"), NULL);
	}
}
static void RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_CurrentCapacity(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x55\x52\x52\x45\x4E\x54\x5F\x43\x41\x50\x41\x43\x49\x54\x59"), NULL);
	}
}
static void RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_StartedAgo(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x54\x41\x52\x54\x45\x44\x5F\x41\x47\x4F"), NULL);
	}
}
static void RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_EndingIn(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x45\x4E\x44\x49\x4E\x47\x5F\x49\x4E"), NULL);
	}
}
static void RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_LookingForAMatch(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x4F\x4F\x4B\x49\x4E\x47\x5F\x46\x4F\x52\x5F\x41\x5F\x4D\x41\x54\x43\x48"), NULL);
	}
}
static void RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_None(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x4E\x45"), NULL);
	}
}
static void RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_Everyone(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x45\x56\x45\x52\x59\x4F\x4E\x45"), NULL);
	}
}
static void RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_FriendsOfMembers(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x52\x49\x45\x4E\x44\x53\x5F\x4F\x46\x5F\x4D\x45\x4D\x42\x45\x52\x53"), NULL);
	}
}
static void RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_FriendsOfOwner(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x52\x49\x45\x4E\x44\x53\x5F\x4F\x46\x5F\x4F\x57\x4E\x45\x52"), NULL);
	}
}
static void RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_InvitedUsers(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x56\x49\x54\x45\x44\x5F\x55\x53\x45\x52\x53"), NULL);
	}
}
static void RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_AreIn(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x52\x45\x5F\x49\x4E"), NULL);
	}
}
static void RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_AreKicked(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x52\x45\x5F\x4B\x49\x43\x4B\x45\x44"), NULL);
	}
}
static void RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_CanJoin(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x41\x4E\x5F\x4A\x4F\x49\x4E"), NULL);
	}
}
static void RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_IsFull(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x53\x5F\x46\x55\x4C\x4C"), NULL);
	}
}
static void RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_NoViewer(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x5F\x56\x49\x45\x57\x45\x52"), NULL);
	}
}
static void RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_PolicyPrevents(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x4F\x4C\x49\x43\x59\x5F\x50\x52\x45\x56\x45\x4E\x54\x53"), NULL);
	}
}
static void RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979_CustomAttributesCacheGenerator_Lock(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x4F\x43\x4B"), NULL);
	}
}
static void RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979_CustomAttributesCacheGenerator_Unlock(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4C\x4F\x43\x4B"), NULL);
	}
}
static void RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Matchmaking(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x41\x54\x43\x48\x4D\x41\x4B\x49\x4E\x47"), NULL);
	}
}
static void RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Moderated(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x4F\x44\x45\x52\x41\x54\x45\x44"), NULL);
	}
}
static void RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Private(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x52\x49\x56\x41\x54\x45"), NULL);
	}
}
static void RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Solo(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x4F\x4C\x4F"), NULL);
	}
}
static void SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9_CustomAttributesCacheGenerator_Oculus(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x43\x55\x4C\x55\x53"), NULL);
	}
}
static void SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9_CustomAttributesCacheGenerator_FacebookGameroom(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x43\x45\x42\x4F\x4F\x4B\x5F\x47\x41\x4D\x45\x52\x4F\x4F\x4D"), NULL);
	}
}
static void SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F_CustomAttributesCacheGenerator_Unreliable(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x52\x45\x4C\x49\x41\x42\x4C\x45"), NULL);
	}
}
static void SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F_CustomAttributesCacheGenerator_Reliable(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x52\x45\x4C\x49\x41\x42\x4C\x45"), NULL);
	}
}
static void SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Dropbox(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x52\x4F\x50\x42\x4F\x58"), NULL);
	}
}
static void ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Facebook(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x46\x41\x43\x45\x42\x4F\x4F\x4B"), NULL);
	}
}
static void ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Google(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x47\x4F\x4F\x47\x4C\x45"), NULL);
	}
}
static void ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Instagram(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x49\x4E\x53\x54\x41\x47\x52\x41\x4D"), NULL);
	}
}
static void ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_RemoteMedia(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x52\x45\x4D\x4F\x54\x45\x5F\x4D\x45\x44\x49\x41"), NULL);
	}
}
static void ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2_CustomAttributesCacheGenerator_Shared(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x48\x41\x52\x45\x44"), NULL);
	}
}
static void ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2_CustomAttributesCacheGenerator_Canceled(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x41\x4E\x43\x45\x4C\x45\x44"), NULL);
	}
}
static void UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F * tmp = (UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F *)cache->attributes[0];
		UnmanagedFunctionPointerAttribute__ctor_m4EE271163D421DF82BBCD7D91ED68D8EE26544F7(tmp, 2LL, NULL);
	}
}
static void SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Unavailable(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x41\x56\x41\x49\x4C\x41\x42\x4C\x45"), NULL);
	}
}
static void SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Suppressed(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x53\x55\x50\x50\x52\x45\x53\x53\x45\x44"), NULL);
	}
}
static void SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Active(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x43\x54\x49\x56\x45"), NULL);
	}
}
static void TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_OneHour(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x4E\x45\x5F\x48\x4F\x55\x52"), NULL);
	}
}
static void TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_OneDay(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x4E\x45\x5F\x44\x41\x59"), NULL);
	}
}
static void TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_OneWeek(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x4E\x45\x5F\x57\x45\x45\x4B"), NULL);
	}
}
static void TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_ThirtyDays(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x54\x48\x49\x52\x54\x59\x5F\x44\x41\x59\x53"), NULL);
	}
}
static void TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_NinetyDays(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x49\x4E\x45\x54\x59\x5F\x44\x41\x59\x53"), NULL);
	}
}
static void UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045_CustomAttributesCacheGenerator_None(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x4F\x4E\x45"), NULL);
	}
}
static void UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045_CustomAttributesCacheGenerator_PresenceAlphabetical(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x52\x45\x53\x45\x4E\x43\x45\x5F\x41\x4C\x50\x48\x41\x42\x45\x54\x49\x43\x41\x4C"), NULL);
	}
}
static void UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F_CustomAttributesCacheGenerator_Online(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x4E\x4C\x49\x4E\x45"), NULL);
	}
}
static void UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F_CustomAttributesCacheGenerator_Offline(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x46\x46\x4C\x49\x4E\x45"), NULL);
	}
}
static void VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B16000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x31\x36\x30\x30\x30"), NULL);
	}
}
static void VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B24000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x32\x34\x30\x30\x30"), NULL);
	}
}
static void VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B32000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x33\x32\x30\x30\x30"), NULL);
	}
}
static void VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B64000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x36\x34\x30\x30\x30"), NULL);
	}
}
static void VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B96000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x39\x36\x30\x30\x30"), NULL);
	}
}
static void VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B128000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x31\x32\x38\x30\x30\x30"), NULL);
	}
}
static void VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F_CustomAttributesCacheGenerator_Enabled(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x45\x4E\x41\x42\x4C\x45\x44"), NULL);
	}
}
static void VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F_CustomAttributesCacheGenerator_Disabled(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x44\x49\x53\x41\x42\x4C\x45\x44"), NULL);
	}
}
static void VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62_CustomAttributesCacheGenerator_Muted(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x55\x54\x45\x44"), NULL);
	}
}
static void VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62_CustomAttributesCacheGenerator_Unmuted(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4D\x55\x54\x45\x44"), NULL);
	}
}
static void VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_Unknown(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x55\x4E\x4B\x4E\x4F\x57\x4E"), NULL);
	}
}
static void VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_HZ24000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x48\x5A\x32\x34\x30\x30\x30"), NULL);
	}
}
static void VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_HZ44100(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x48\x5A\x34\x34\x31\x30\x30"), NULL);
	}
}
static void VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_HZ48000(CustomAttributesCache* cache)
{
	{
		DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA * tmp = (DescriptionAttribute_tBDFA332A8D0CD36C090BA99110241E2A4A6F25DA *)cache->attributes[0];
		DescriptionAttribute__ctor_m88B8CF110270B3759BE4A9D17D6B1A4A17305D9E(tmp, il2cpp_codegen_string_new_wrapper("\x48\x5A\x34\x38\x30\x30\x30"), NULL);
	}
}
static void UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F * tmp = (UnmanagedFunctionPointerAttribute_t3361C55E19F9905230FD9C1691B0FE0FD341B43F *)cache->attributes[0];
		UnmanagedFunctionPointerAttribute__ctor_m4EE271163D421DF82BBCD7D91ED68D8EE26544F7(tmp, 2LL, NULL);
	}
}
static void ApplicationInvite_t9E1FBE9D406E0F9DDECA57179EEDE15022376579_CustomAttributesCacheGenerator_Destination(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x44\x65\x73\x74\x69\x6E\x61\x74\x69\x6F\x6E\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void ApplicationInvite_t9E1FBE9D406E0F9DDECA57179EEDE15022376579_CustomAttributesCacheGenerator_Recipient(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x52\x65\x63\x69\x70\x69\x65\x6E\x74\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void AssetDetails_tCEDC597EDC94CD8FD817E1B10D90F96F7CFE6B1A_CustomAttributesCacheGenerator_Language(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x4C\x61\x6E\x67\x75\x61\x67\x65\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Challenge_t6F642431E088FA2D371A8CBB6DD6BEFC1F49ADE8_CustomAttributesCacheGenerator_InvitedUsers(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x49\x6E\x76\x69\x74\x65\x64\x55\x73\x65\x72\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Challenge_t6F642431E088FA2D371A8CBB6DD6BEFC1F49ADE8_CustomAttributesCacheGenerator_Participants(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x50\x61\x72\x74\x69\x63\x69\x70\x61\x6E\x74\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void DeserializableList_1_t142D0F8F732608295401AB354B9A70DD58AF3D2F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void DeserializableList_1_t142D0F8F732608295401AB354B9A70DD58AF3D2F_CustomAttributesCacheGenerator_DeserializableList_1_t142D0F8F732608295401AB354B9A70DD58AF3D2F____Data_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m058D2B798E9AB7E7778A6DB04C3FE7011C660F4C(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x49\x4C\x69\x73\x74\x20\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x6F\x6E\x20\x74\x68\x65\x20\x44\x65\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x62\x6C\x65\x4C\x69\x73\x74\x20\x6F\x62\x6A\x65\x63\x74\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), false, NULL);
	}
}
static void LaunchDetails_tD537AC77BB0D2E64BE1BC51C9CBF264F1956ECB5_CustomAttributesCacheGenerator_Users(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x55\x73\x65\x72\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Leaderboard_t44045CBF5DBFF96C1DEA0B4C98DA156549AB6D64_CustomAttributesCacheGenerator_Destination(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x44\x65\x73\x74\x69\x6E\x61\x74\x69\x6F\x6E\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void LeaderboardEntry_t79DC6BE545601DB8B26173B66E3149BD2FD605AA_CustomAttributesCacheGenerator_SupplementaryMetric(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x53\x75\x70\x70\x6C\x65\x6D\x65\x6E\x74\x61\x72\x79\x4D\x65\x74\x72\x69\x63\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void MatchmakingEnqueueResult_t469532DC36B0F5781AAA7495D5D9D125B4774129_CustomAttributesCacheGenerator_AdminSnapshot(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x41\x64\x6D\x69\x6E\x53\x6E\x61\x70\x73\x68\x6F\x74\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void MatchmakingEnqueuedUser_tB75CA3088E13AE7316B5C3BA2BED23B1B3668272_CustomAttributesCacheGenerator_User(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x55\x73\x65\x72\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_U3CIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_set_ID_m1778A2666D9C305F4D35DF593626D5F0C337226F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_get_State_mC2B21B34F2ED64AC8FE6632995FF67EC96F728A7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_set_State_m2111B922C7ABC5A309AF6E375DA27F257ED01F5F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_InvitedUsers(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x49\x6E\x76\x69\x74\x65\x64\x55\x73\x65\x72\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_Leader(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x4C\x65\x61\x64\x65\x72\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_Room(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x52\x6F\x6F\x6D\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_Users(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x55\x73\x65\x72\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6_CustomAttributesCacheGenerator_U3CIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6_CustomAttributesCacheGenerator_PingResult_get_ID_mDF782C297DA1365591EDFB22741A75FEC8E9C724(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6_CustomAttributesCacheGenerator_PingResult_set_ID_mF198896BB8E0C1E23B74F439F12B179E5747D5A2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_InvitedUsers(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x49\x6E\x76\x69\x74\x65\x64\x55\x73\x65\x72\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_MatchedUsers(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x4D\x61\x74\x63\x68\x65\x64\x55\x73\x65\x72\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_Owner(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x4F\x77\x6E\x65\x72\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_Teams(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x54\x65\x61\x6D\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_Users(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x55\x73\x65\x72\x73\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3_CustomAttributesCacheGenerator_Room(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x44\x65\x70\x72\x65\x63\x61\x74\x65\x64\x20\x69\x6E\x20\x66\x61\x76\x6F\x72\x20\x6F\x66\x20\x52\x6F\x6F\x6D\x4F\x70\x74\x69\x6F\x6E\x61\x6C"), NULL);
	}
}
static void PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_invitesList(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_invitePrefab(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_camera(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_remoteHead(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB_CustomAttributesCacheGenerator_m_eventSystem(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void AchievementsManager_tC81523B7AC71104FF25F4DF8EBE6EEED9E467FAA_CustomAttributesCacheGenerator_AchievementsManager_U3CCheckForAchievmentUpdatesU3Eb__4_0_mC5738481101737DB746D692AA1A58D1165CFF3CD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GoalMover_tDE38B4ACA15D509CBBC9DD64101763A50FA66EDC_CustomAttributesCacheGenerator_MAX_OFFSET(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GoalMover_tDE38B4ACA15D509CBBC9DD64101763A50FA66EDC_CustomAttributesCacheGenerator_m_speed(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_timerText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_camera(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_idleCameraTransform(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_matchmakeButtonText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_playerAreas(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_PRACTICE_WARMUP_TIME(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_MATCH_WARMUP_TIME(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_MATCH_TIME(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_MATCH_COOLDOWN_TIME(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_mostWinsLeaderboard(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_highestScoresLeaderboard(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_leaderboardEntryPrefab(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_flytext(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerArea_tC26F915E2EB42016BD2594324558B273A3A60A98_CustomAttributesCacheGenerator_m_ballPrefab(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90_CustomAttributesCacheGenerator_m_eventSystem(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BoardPosition_t14BC6B07C7639B216F788B643C9E5C66CFB26BCD_CustomAttributesCacheGenerator_x(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 2.0f, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BoardPosition_t14BC6B07C7639B216F788B643C9E5C66CFB26BCD_CustomAttributesCacheGenerator_y(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[1];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 2.0f, NULL);
	}
}
static void EyeCamera_t4A422CCE94D1B53355D3F0AE04AD2BEB94FC5759_CustomAttributesCacheGenerator_m_eventSystem(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EyeCamera_t4A422CCE94D1B53355D3F0AE04AD2BEB94FC5759_CustomAttributesCacheGenerator_m_gameController(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void EyeCamera_t4A422CCE94D1B53355D3F0AE04AD2BEB94FC5759_CustomAttributesCacheGenerator_m_gazeTracker(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameBoard_t5A6A75E955915D159F7CFBC6106C4D95CE042203_CustomAttributesCacheGenerator_m_playerColors(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameBoard_t5A6A75E955915D159F7CFBC6106C4D95CE042203_CustomAttributesCacheGenerator_m_proposedMoveColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameBoard_t5A6A75E955915D159F7CFBC6106C4D95CE042203_CustomAttributesCacheGenerator_m_positions(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_matchmaking(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_board(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_pieceA(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_pieceB(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_powerPiece(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_unusableColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_unselectedColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_selectedColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_highlightedColor(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_ballCountText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_player0Text(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_player1Text(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_type(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_prefabA(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_prefabB(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_prefabPower(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void IAPManager_tB614AADD372AA2A24C2B4B042D85063013E5E4ED_CustomAttributesCacheGenerator_m_gameController(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void IAPManager_tB614AADD372AA2A24C2B4B042D85063013E5E4ED_CustomAttributesCacheGenerator_m_priceText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchmakingManager_tF12DB61E005BAFCDEC55F595C2D4C65A8D46E767_CustomAttributesCacheGenerator_m_gameController(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchmakingManager_tF12DB61E005BAFCDEC55F595C2D4C65A8D46E767_CustomAttributesCacheGenerator_m_matchButtonText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MatchmakingManager_tF12DB61E005BAFCDEC55F595C2D4C65A8D46E767_CustomAttributesCacheGenerator_m_infoText(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_U3CpacketIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_U3CtextStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_get_packetID_m75E0598ADD4BB45224DB84CD04AF515A2FB52177(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_set_packetID_m6647D7848A8B0E0FCBB45C1FF46A57509BC6BC97(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_set_textString_m4C89E322F41EC1EAFDB25D614A9E35BC90E4E233(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_UserFailedEntitlementCheck(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_UserPassedEntitlementCheck(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_add_UserFailedEntitlementCheck_mC83822083E12EA41234035C589078A1AA2B16520(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_remove_UserFailedEntitlementCheck_mFDBC491B5758C42834EAD122517C0028CA143301(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_add_UserPassedEntitlementCheck_m1080DE26624BD6BCBB90471EE8D8B5BD3CA8EA46(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_remove_UserPassedEntitlementCheck_mD29248A6BB79809A803E463999A9777236D6DE03(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tE7F3BF6ADDFC687E39395932298603F7F18B6406_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Oculus_Platform_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Oculus_Platform_AttributeGenerators[327] = 
{
	FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303_CustomAttributesCacheGenerator,
	UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563_CustomAttributesCacheGenerator,
	UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD_CustomAttributesCacheGenerator,
	DeserializableList_1_t142D0F8F732608295401AB354B9A70DD58AF3D2F_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tE7F3BF6ADDFC687E39395932298603F7F18B6406_CustomAttributesCacheGenerator,
	AbuseReportType_t71E68FFACA89187564A2A415A7346953A1F91041_CustomAttributesCacheGenerator_Unknown,
	AbuseReportType_t71E68FFACA89187564A2A415A7346953A1F91041_CustomAttributesCacheGenerator_Object,
	AbuseReportType_t71E68FFACA89187564A2A415A7346953A1F91041_CustomAttributesCacheGenerator_User,
	AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Unknown,
	AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Collect,
	AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Optional,
	AbuseReportVideoMode_tC4D269068E8CFD22E6BD12E3A6AE61FD48083436_CustomAttributesCacheGenerator_Skip,
	AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Unknown,
	AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Simple,
	AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Bitfield,
	AchievementType_tA36C5ABCAB022E3F7D81F7EABD4B10A4216F81C2_CustomAttributesCacheGenerator_Count,
	ChallengeCreationType_t66AC47DB223FE87260C3E4DE202D19567B81EC00_CustomAttributesCacheGenerator_Unknown,
	ChallengeCreationType_t66AC47DB223FE87260C3E4DE202D19567B81EC00_CustomAttributesCacheGenerator_UserCreated,
	ChallengeCreationType_t66AC47DB223FE87260C3E4DE202D19567B81EC00_CustomAttributesCacheGenerator_DeveloperCreated,
	ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_Unknown,
	ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_AllVisible,
	ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_Participating,
	ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_Invited,
	ChallengeViewerFilter_t2A71EDAA0FA76BBABA2B0554577048782082AE62_CustomAttributesCacheGenerator_ParticipatingOrInvited,
	ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_Unknown,
	ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_InviteOnly,
	ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_Public,
	ChallengeVisibility_t0407EE010E3C771C081EC71426773B5D9BD685B1_CustomAttributesCacheGenerator_Private,
	CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_Unknown,
	CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_InSync,
	CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_NeedsDownload,
	CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_RemoteDownloading,
	CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_NeedsUpload,
	CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_LocalUploading,
	CloudStorageDataStatus_t56AF412E9D1A9B10CE6481C0CA77E676B3BA5BAB_CustomAttributesCacheGenerator_InConflict,
	CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_Unknown,
	CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_Ok,
	CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_BetterVersionStored,
	CloudStorageUpdateStatus_tF9A4AAAFB252CD7F9638AAA26DA8E32064827C20_CustomAttributesCacheGenerator_ManualMergeRequired,
	KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_String,
	KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_Int,
	KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_Double,
	KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402_CustomAttributesCacheGenerator_Unknown,
	LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_Unknown,
	LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_Success,
	LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedRoomFull,
	LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedGameAlreadyStarted,
	LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedRoomNotFound,
	LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedUserDeclined,
	LaunchResult_tCE1CBC984AEC9D72D769D9F052A0597580B3DE54_CustomAttributesCacheGenerator_FailedOtherReason,
	LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Unknown,
	LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Normal,
	LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Invite,
	LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Coordinated,
	LaunchType_t7A4947B7A97837EDC9AE783715A7329697522C37_CustomAttributesCacheGenerator_Deeplink,
	LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_None,
	LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_Friends,
	LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_Unknown,
	LeaderboardFilterType_t503A4C684B108ED484758A738719BA737DF73F55_CustomAttributesCacheGenerator_UserIds,
	LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_Top,
	LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_CenteredOnViewer,
	LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_CenteredOnViewerOrTop,
	LeaderboardStartAt_t012A5C781CBDE86447AAC60A283950FBE29FC701_CustomAttributesCacheGenerator_Unknown,
	LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_Unknown,
	LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_Public,
	LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_Friends,
	LivestreamingAudience_tF0A0E8B2533FC5671B986D3B8C1FDF2FA8532EF9_CustomAttributesCacheGenerator_OnlyMe,
	LivestreamingMicrophoneStatus_t60C2556A3CEB983FA445CBDDA5302254C2B1748C_CustomAttributesCacheGenerator_Unknown,
	LivestreamingMicrophoneStatus_t60C2556A3CEB983FA445CBDDA5302254C2B1748C_CustomAttributesCacheGenerator_MicrophoneOn,
	LivestreamingMicrophoneStatus_t60C2556A3CEB983FA445CBDDA5302254C2B1748C_CustomAttributesCacheGenerator_MicrophoneOff,
	LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_Success,
	LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_Unknown,
	LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_NoPackageSet,
	LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_NoFbConnect,
	LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_NoSessionId,
	LivestreamingStartStatus_tA07422794BFF9B8853F10BBA4A301A3905774E1D_CustomAttributesCacheGenerator_MissingParameters,
	MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Required,
	MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_High,
	MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Medium,
	MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Low,
	MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF_CustomAttributesCacheGenerator_Unknown,
	MatchmakingStatApproach_t19790808DCD73886EE9E7D0CFEA589261ADA8217_CustomAttributesCacheGenerator_Unknown,
	MatchmakingStatApproach_t19790808DCD73886EE9E7D0CFEA589261ADA8217_CustomAttributesCacheGenerator_Trailing,
	MatchmakingStatApproach_t19790808DCD73886EE9E7D0CFEA589261ADA8217_CustomAttributesCacheGenerator_Swingy,
	MediaContentType_tE752B0D518F26AFB56FC3AE2039DC16A3B1C3081_CustomAttributesCacheGenerator_Unknown,
	MediaContentType_tE752B0D518F26AFB56FC3AE2039DC16A3B1C3081_CustomAttributesCacheGenerator_Photo,
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_CustomAttributesCacheGenerator_U3CHandleExtraMessageTypesU3Ek__BackingField,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_Unknown,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_DestinationUnavailable,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_DlcRequired,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_General,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_GroupFull,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_InviterNotJoinable,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_LevelNotHighEnough,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_LevelNotUnlocked,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_NetworkTimeout,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_NoLongerAvailable,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_UpdateRequired,
	MultiplayerErrorErrorKey_t9DE4D4EA5991AAE074C816F2658E9958BDCADA0C_CustomAttributesCacheGenerator_TutorialRequired,
	NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Unknown,
	NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Connecting,
	NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Disconnected,
	NetSyncConnectionStatus_tA303CF4238C981D2E42EFA494A19B5D502295AC4_CustomAttributesCacheGenerator_Connected,
	NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_Unknown,
	NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_LocalTerminated,
	NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_ServerTerminated,
	NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_Failed,
	NetSyncDisconnectReason_t7D669DF843DB4B15269CDE4E8680FAD472747412_CustomAttributesCacheGenerator_Lost,
	NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB_CustomAttributesCacheGenerator_Unknown,
	NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB_CustomAttributesCacheGenerator_None,
	NetSyncVoipMicSource_t28F1992A2DE9D49C82C50D1D85208569A89C9ACB_CustomAttributesCacheGenerator_Internal,
	NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53_CustomAttributesCacheGenerator_Unknown,
	NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53_CustomAttributesCacheGenerator_Ambisonic,
	NetSyncVoipStreamMode_t5F958C5364166EB2B864FC87600B8339DD629C53_CustomAttributesCacheGenerator_Mono,
	PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Unknown,
	PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Join,
	PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Leave,
	PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Invite,
	PartyUpdateAction_tAA085458499F17A4B65A47CB147B554F769A7315_CustomAttributesCacheGenerator_Uninvite,
	PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Unknown,
	PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Connected,
	PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Timeout,
	PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_CustomAttributesCacheGenerator_Closed,
	PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Unknown,
	PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Granted,
	PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Denied,
	PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD_CustomAttributesCacheGenerator_Blocked,
	PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20_CustomAttributesCacheGenerator_Unknown,
	PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20_CustomAttributesCacheGenerator_Microphone,
	PermissionType_t73D31E7186C51E17A62EAF3847C2F9FE0C9DAC20_CustomAttributesCacheGenerator_WriteExternalStorage,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_Success,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_Uninitialized,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_PreLoaded,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_FileInvalid,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_SignatureInvalid,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_UnableToVerify,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_VersionMismatch,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_Unknown,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_InvalidCredentials,
	PlatformInitializeResult_t64B0DB5DD73F0490D7C7E5383BE088F3B69BDD9B_CustomAttributesCacheGenerator_NotEntitled,
	PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_CustomAttributesCacheGenerator_ovrAppID,
	PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_CustomAttributesCacheGenerator_ovrMobileAppID,
	PlatformSettings_t9047C3D108E0AF05F3D88A956C943E6BC05224EB_CustomAttributesCacheGenerator_ovrUseStandalonePlatform,
	Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_CustomAttributesCacheGenerator_U3CRequestIDU3Ek__BackingField,
	RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_Unknown,
	RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_None,
	RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_CurrentCapacity,
	RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_StartedAgo,
	RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_EndingIn,
	RichPresenceExtraContext_t2B6E08D1AEC12DCC0007397EDA0BE0BD00865140_CustomAttributesCacheGenerator_LookingForAMatch,
	RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_None,
	RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_Everyone,
	RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_FriendsOfMembers,
	RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_FriendsOfOwner,
	RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_InvitedUsers,
	RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2_CustomAttributesCacheGenerator_Unknown,
	RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_Unknown,
	RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_AreIn,
	RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_AreKicked,
	RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_CanJoin,
	RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_IsFull,
	RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_NoViewer,
	RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB_CustomAttributesCacheGenerator_PolicyPrevents,
	RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979_CustomAttributesCacheGenerator_Unknown,
	RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979_CustomAttributesCacheGenerator_Lock,
	RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979_CustomAttributesCacheGenerator_Unlock,
	RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Unknown,
	RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Matchmaking,
	RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Moderated,
	RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Private,
	RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6_CustomAttributesCacheGenerator_Solo,
	SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9_CustomAttributesCacheGenerator_Unknown,
	SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9_CustomAttributesCacheGenerator_Oculus,
	SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9_CustomAttributesCacheGenerator_FacebookGameroom,
	SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F_CustomAttributesCacheGenerator_Unreliable,
	SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F_CustomAttributesCacheGenerator_Reliable,
	SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F_CustomAttributesCacheGenerator_Unknown,
	ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Unknown,
	ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Dropbox,
	ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Facebook,
	ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Google,
	ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_Instagram,
	ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B_CustomAttributesCacheGenerator_RemoteMedia,
	ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2_CustomAttributesCacheGenerator_Unknown,
	ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2_CustomAttributesCacheGenerator_Shared,
	ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2_CustomAttributesCacheGenerator_Canceled,
	SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Unknown,
	SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Unavailable,
	SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Suppressed,
	SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC_CustomAttributesCacheGenerator_Active,
	TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_Unknown,
	TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_OneHour,
	TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_OneDay,
	TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_OneWeek,
	TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_ThirtyDays,
	TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2_CustomAttributesCacheGenerator_NinetyDays,
	UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045_CustomAttributesCacheGenerator_Unknown,
	UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045_CustomAttributesCacheGenerator_None,
	UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045_CustomAttributesCacheGenerator_PresenceAlphabetical,
	UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F_CustomAttributesCacheGenerator_Unknown,
	UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F_CustomAttributesCacheGenerator_Online,
	UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F_CustomAttributesCacheGenerator_Offline,
	VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_Unknown,
	VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B16000,
	VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B24000,
	VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B32000,
	VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B64000,
	VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B96000,
	VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A_CustomAttributesCacheGenerator_B128000,
	VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F_CustomAttributesCacheGenerator_Unknown,
	VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F_CustomAttributesCacheGenerator_Enabled,
	VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F_CustomAttributesCacheGenerator_Disabled,
	VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62_CustomAttributesCacheGenerator_Unknown,
	VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62_CustomAttributesCacheGenerator_Muted,
	VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62_CustomAttributesCacheGenerator_Unmuted,
	VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_Unknown,
	VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_HZ24000,
	VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_HZ44100,
	VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D_CustomAttributesCacheGenerator_HZ48000,
	ApplicationInvite_t9E1FBE9D406E0F9DDECA57179EEDE15022376579_CustomAttributesCacheGenerator_Destination,
	ApplicationInvite_t9E1FBE9D406E0F9DDECA57179EEDE15022376579_CustomAttributesCacheGenerator_Recipient,
	AssetDetails_tCEDC597EDC94CD8FD817E1B10D90F96F7CFE6B1A_CustomAttributesCacheGenerator_Language,
	Challenge_t6F642431E088FA2D371A8CBB6DD6BEFC1F49ADE8_CustomAttributesCacheGenerator_InvitedUsers,
	Challenge_t6F642431E088FA2D371A8CBB6DD6BEFC1F49ADE8_CustomAttributesCacheGenerator_Participants,
	LaunchDetails_tD537AC77BB0D2E64BE1BC51C9CBF264F1956ECB5_CustomAttributesCacheGenerator_Users,
	Leaderboard_t44045CBF5DBFF96C1DEA0B4C98DA156549AB6D64_CustomAttributesCacheGenerator_Destination,
	LeaderboardEntry_t79DC6BE545601DB8B26173B66E3149BD2FD605AA_CustomAttributesCacheGenerator_SupplementaryMetric,
	MatchmakingEnqueueResult_t469532DC36B0F5781AAA7495D5D9D125B4774129_CustomAttributesCacheGenerator_AdminSnapshot,
	MatchmakingEnqueuedUser_tB75CA3088E13AE7316B5C3BA2BED23B1B3668272_CustomAttributesCacheGenerator_User,
	NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_U3CIDU3Ek__BackingField,
	NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_InvitedUsers,
	Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_Leader,
	Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_Room,
	Party_t178DC369E19ECEFFF59C9DD9B1258DF6656FFBEB_CustomAttributesCacheGenerator_Users,
	PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6_CustomAttributesCacheGenerator_U3CIDU3Ek__BackingField,
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_InvitedUsers,
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_MatchedUsers,
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_Owner,
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_Teams,
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_CustomAttributesCacheGenerator_Users,
	UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3_CustomAttributesCacheGenerator_Room,
	PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_invitesList,
	PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_invitePrefab,
	PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_camera,
	PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_CustomAttributesCacheGenerator_m_remoteHead,
	VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB_CustomAttributesCacheGenerator_m_eventSystem,
	GoalMover_tDE38B4ACA15D509CBBC9DD64101763A50FA66EDC_CustomAttributesCacheGenerator_MAX_OFFSET,
	GoalMover_tDE38B4ACA15D509CBBC9DD64101763A50FA66EDC_CustomAttributesCacheGenerator_m_speed,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_timerText,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_camera,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_idleCameraTransform,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_matchmakeButtonText,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_playerAreas,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_PRACTICE_WARMUP_TIME,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_MATCH_WARMUP_TIME,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_MATCH_TIME,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_MATCH_COOLDOWN_TIME,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_mostWinsLeaderboard,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_highestScoresLeaderboard,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_leaderboardEntryPrefab,
	MatchController_t214BA25B74D88ECD1591ACE5EE2551FB51F50E99_CustomAttributesCacheGenerator_m_flytext,
	PlayerArea_tC26F915E2EB42016BD2594324558B273A3A60A98_CustomAttributesCacheGenerator_m_ballPrefab,
	VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90_CustomAttributesCacheGenerator_m_eventSystem,
	BoardPosition_t14BC6B07C7639B216F788B643C9E5C66CFB26BCD_CustomAttributesCacheGenerator_x,
	BoardPosition_t14BC6B07C7639B216F788B643C9E5C66CFB26BCD_CustomAttributesCacheGenerator_y,
	EyeCamera_t4A422CCE94D1B53355D3F0AE04AD2BEB94FC5759_CustomAttributesCacheGenerator_m_eventSystem,
	EyeCamera_t4A422CCE94D1B53355D3F0AE04AD2BEB94FC5759_CustomAttributesCacheGenerator_m_gameController,
	EyeCamera_t4A422CCE94D1B53355D3F0AE04AD2BEB94FC5759_CustomAttributesCacheGenerator_m_gazeTracker,
	GameBoard_t5A6A75E955915D159F7CFBC6106C4D95CE042203_CustomAttributesCacheGenerator_m_playerColors,
	GameBoard_t5A6A75E955915D159F7CFBC6106C4D95CE042203_CustomAttributesCacheGenerator_m_proposedMoveColor,
	GameBoard_t5A6A75E955915D159F7CFBC6106C4D95CE042203_CustomAttributesCacheGenerator_m_positions,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_matchmaking,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_board,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_pieceA,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_pieceB,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_powerPiece,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_unusableColor,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_unselectedColor,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_selectedColor,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_highlightedColor,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_ballCountText,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_player0Text,
	GameController_t52D6DADFCF643EEDED3D5558AF144543DD2EBAC9_CustomAttributesCacheGenerator_m_player1Text,
	GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_type,
	GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_prefabA,
	GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_prefabB,
	GamePiece_tE5DFD89BE9FD6C8D8273D904F4DE2EB242EEFE76_CustomAttributesCacheGenerator_m_prefabPower,
	IAPManager_tB614AADD372AA2A24C2B4B042D85063013E5E4ED_CustomAttributesCacheGenerator_m_gameController,
	IAPManager_tB614AADD372AA2A24C2B4B042D85063013E5E4ED_CustomAttributesCacheGenerator_m_priceText,
	MatchmakingManager_tF12DB61E005BAFCDEC55F595C2D4C65A8D46E767_CustomAttributesCacheGenerator_m_gameController,
	MatchmakingManager_tF12DB61E005BAFCDEC55F595C2D4C65A8D46E767_CustomAttributesCacheGenerator_m_matchButtonText,
	MatchmakingManager_tF12DB61E005BAFCDEC55F595C2D4C65A8D46E767_CustomAttributesCacheGenerator_m_infoText,
	chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_U3CpacketIDU3Ek__BackingField,
	chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_U3CtextStringU3Ek__BackingField,
	EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_UserFailedEntitlementCheck,
	EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_UserPassedEntitlementCheck,
	GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CStartU3Eb__8_0_m38545CAE0160272C4FD179300BF8155506859D8F,
	GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CSetPresenceU3Eb__9_0_m8D546B0A26DABE165F7E42CA4BEA7CDF32248B46,
	GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CSetPresenceU3Eb__9_1_mF421E7B57010E1E90CD6DC37A13CFE768A0ADA32,
	GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CClearPresenceU3Eb__10_0_m7B5D3C5902D8D0130B1101CA68F983593BF6B11F,
	GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CClearPresenceU3Eb__10_1_mE5A4FBFF0A82C3110F4662407D09B133DAD986DC,
	GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CLaunchInvitePanelU3Eb__11_0_mFCB2BD47B6C67FAC4EC1556B0FA1B4575E60798D,
	GroupPresenceSample_t04EBEC215A905180CF76022B54041E120B375C16_CustomAttributesCacheGenerator_GroupPresenceSample_U3CLaunchRosterPanelU3Eb__12_0_m4658FE1FF2C89B8241AD64904C2CAC4A4A76D72A,
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_CustomAttributesCacheGenerator_Message_set_HandleExtraMessageTypes_m5F0840B8B95CC20402DBF25C1737A1F37FF5CC94,
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_CustomAttributesCacheGenerator_Message_get_HandleExtraMessageTypes_mED1333755A1A52BCE5C8E1FCB8E5A2F327FF231F,
	Rooms_t520BB38DC1A41718B70106694A7D8854EB8E887D_CustomAttributesCacheGenerator_Rooms_SetRoomInviteNotificationCallback_m7E8804125565D1CEC412E4C80FE2E1133E94B06C,
	Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_CustomAttributesCacheGenerator_Request_get_RequestID_m2FC9CBB00C4E9062465F6B4A7487104F8A7338BC,
	Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_CustomAttributesCacheGenerator_Request_set_RequestID_mB248C21CEAB92CF7F595F0D95714EBA81847BBFF,
	NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E,
	NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_set_ID_m1778A2666D9C305F4D35DF593626D5F0C337226F,
	NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_get_State_mC2B21B34F2ED64AC8FE6632995FF67EC96F728A7,
	NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_CustomAttributesCacheGenerator_NetworkingPeer_set_State_m2111B922C7ABC5A309AF6E375DA27F257ED01F5F,
	PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6_CustomAttributesCacheGenerator_PingResult_get_ID_mDF782C297DA1365591EDFB22741A75FEC8E9C724,
	PingResult_t02CE1D631A607C859757D6496AB1E41A39A72FA6_CustomAttributesCacheGenerator_PingResult_set_ID_mF198896BB8E0C1E23B74F439F12B179E5747D5A2,
	AchievementsManager_tC81523B7AC71104FF25F4DF8EBE6EEED9E467FAA_CustomAttributesCacheGenerator_AchievementsManager_U3CCheckForAchievmentUpdatesU3Eb__4_0_mC5738481101737DB746D692AA1A58D1165CFF3CD,
	chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_get_packetID_m75E0598ADD4BB45224DB84CD04AF515A2FB52177,
	chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_set_packetID_m6647D7848A8B0E0FCBB45C1FF46A57509BC6BC97,
	chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47,
	chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_CustomAttributesCacheGenerator_chatPacket_set_textString_m4C89E322F41EC1EAFDB25D614A9E35BC90E4E233,
	EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_add_UserFailedEntitlementCheck_mC83822083E12EA41234035C589078A1AA2B16520,
	EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_remove_UserFailedEntitlementCheck_mFDBC491B5758C42834EAD122517C0028CA143301,
	EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_add_UserPassedEntitlementCheck_m1080DE26624BD6BCBB90471EE8D8B5BD3CA8EA46,
	EntitlementCheck_t64A0DAE7BD046B43397F095E2685AA6AD29FDCA7_CustomAttributesCacheGenerator_EntitlementCheck_remove_UserPassedEntitlementCheck_mD29248A6BB79809A803E463999A9777236D6DE03,
	DeserializableList_1_t142D0F8F732608295401AB354B9A70DD58AF3D2F_CustomAttributesCacheGenerator_DeserializableList_1_t142D0F8F732608295401AB354B9A70DD58AF3D2F____Data_PropertyInfo,
	Oculus_Platform_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
