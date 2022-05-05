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
// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB;
// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



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

// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_0), (void*)value);
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


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void UnityEngine.HideInInspector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9 (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.HeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * __this, String_t* ___header0, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
static void PathCreator_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_OnModified(CustomAttributesCache* cache)
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
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_points(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_isClosed(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_space(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_controlMode(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_autoControlLength(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_boundsUpToDate(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_bounds(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_perAnchorNormalsAngle(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_globalNormalsAngle(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_flipNormals(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_BezierPath_add_OnModified_m55907110369088B1D0FEBE4B1547587124521C85(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_BezierPath_remove_OnModified_mE4878246DCE71F1EE4C9135CF1533BF67AC8722C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t80D20C2F539236538BFF8BBF4828B0526F417F57_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_anchorSize(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x70\x70\x65\x61\x72\x61\x6E\x63\x65"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_visibleBehindObjects(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x68\x6F\x75\x6C\x64\x20\x74\x68\x65\x20\x70\x61\x74\x68\x20\x73\x74\x69\x6C\x6C\x20\x62\x65\x20\x64\x72\x61\x77\x6E\x20\x77\x68\x65\x6E\x20\x62\x65\x68\x69\x6E\x64\x20\x6F\x62\x6A\x65\x63\x74\x73\x20\x69\x6E\x20\x74\x68\x65\x20\x73\x63\x65\x6E\x65\x3F"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_visibleWhenNotSelected(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x68\x6F\x75\x6C\x64\x20\x74\x68\x65\x20\x70\x61\x74\x68\x20\x62\x65\x20\x64\x72\x61\x77\x6E\x20\x65\x76\x65\x6E\x20\x77\x68\x65\x6E\x20\x74\x68\x65\x20\x70\x61\x74\x68\x20\x6F\x62\x6A\x65\x63\x74\x20\x69\x73\x20\x6E\x6F\x74\x20\x73\x65\x6C\x65\x63\x74\x65\x64\x3F"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_hideAutoControls(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x49\x66\x20\x74\x72\x75\x65\x2C\x20\x63\x6F\x6E\x74\x72\x6F\x6C\x20\x70\x6F\x69\x6E\x74\x73\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x68\x69\x64\x64\x65\x6E\x20\x77\x68\x65\x6E\x20\x74\x68\x65\x20\x63\x6F\x6E\x74\x72\x6F\x6C\x20\x70\x6F\x69\x6E\x74\x20\x6D\x6F\x64\x65\x20\x69\x73\x20\x73\x65\x74\x20\x74\x6F\x20\x61\x75\x74\x6F\x6D\x61\x74\x69\x63\x2E\x20\x4F\x74\x68\x65\x72\x77\x69\x73\x65\x20\x74\x68\x65\x79\x20\x77\x69\x6C\x6C\x20\x69\x6E\x61\x63\x74\x69\x76\x65\x2C\x20\x62\x75\x74\x20\x73\x74\x69\x6C\x6C\x20\x76\x69\x73\x69\x62\x6C\x65\x2E"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_anchor(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6E\x63\x68\x6F\x72\x20\x43\x6F\x6C\x6F\x75\x72\x73"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_control(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x6E\x74\x72\x6F\x6C\x20\x43\x6F\x6C\x6F\x75\x72\x73"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_bezierPath(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x42\x65\x7A\x69\x65\x72\x20\x50\x61\x74\x68\x20\x43\x6F\x6C\x6F\x75\x72\x73"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_vertexPath(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x56\x65\x72\x74\x65\x78\x20\x50\x61\x74\x68\x20\x43\x6F\x6C\x6F\x75\x72\x73"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_normals(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x6F\x72\x6D\x61\x6C\x73"), NULL);
	}
}
static void GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_normalsLength(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.0f, 1.0f, NULL);
	}
}
static void MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_U3CMinU3Ek__BackingField(CustomAttributesCache* cache)
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
static void MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_U3CMaxU3Ek__BackingField(CustomAttributesCache* cache)
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
static void MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_get_Min_m27A2B5B03253FDB598A862C4D442C3AA8E708C92(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_set_Min_m9FD8F40067AFD1DE82C63946AC69E206A271BC73(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_get_Max_m9FA0BB60BC2F8AF54B40A517C972877DE7827AE6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_set_Max_m8FD4CF8C1193E6FDF240679623D8A13F6DE3DC68(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_pathUpdated(CustomAttributesCache* cache)
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
static void PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_editorData(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_initialized(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[1];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_PathCreator_add_pathUpdated_m821CD0FF90A3409BB6F798A380BDDF3A95CFC6BD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_PathCreator_remove_pathUpdated_m9D31D7A3761BE9E62CF1284D781B57D66475D1F2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_bezierOrVertexPathModified(CustomAttributesCache* cache)
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
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_bezierCreated(CustomAttributesCache* cache)
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
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator__bezierPath(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_vertexPathUpToDate(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_add_bezierOrVertexPathModified_mA850F1226CF2CEEC7B452D928025A31A0429A005(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_remove_bezierOrVertexPathModified_m8071D439BA735C2E0767B9FD68A7381AC6CF8A4F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_add_bezierCreated_m36BED7EDAC1E1CE3BBA7D299561F9ADFE2CE40D0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_remove_bezierCreated_m4CB55AF9EC87568DDCB54BDD27271CC305C176E2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_PathCreator_AttributeGenerators[];
const CustomAttributesCacheGenerator g_PathCreator_AttributeGenerators[45] = 
{
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator,
	U3CU3Ec_t80D20C2F539236538BFF8BBF4828B0526F417F57_CustomAttributesCacheGenerator,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_OnModified,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_points,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_isClosed,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_space,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_controlMode,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_autoControlLength,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_boundsUpToDate,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_bounds,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_perAnchorNormalsAngle,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_globalNormalsAngle,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_flipNormals,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_anchorSize,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_visibleBehindObjects,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_visibleWhenNotSelected,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_hideAutoControls,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_anchor,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_control,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_bezierPath,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_vertexPath,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_normals,
	GlobalDisplaySettings_t1E4F925AFF1655DA1E78689D98562740C1F61812_CustomAttributesCacheGenerator_normalsLength,
	MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_U3CMinU3Ek__BackingField,
	MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_U3CMaxU3Ek__BackingField,
	PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_pathUpdated,
	PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_editorData,
	PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_initialized,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_bezierOrVertexPathModified,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_bezierCreated,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator__bezierPath,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_vertexPathUpToDate,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_BezierPath_add_OnModified_m55907110369088B1D0FEBE4B1547587124521C85,
	BezierPath_t5A983BEA6E294B249D3F9E1DC64D8E25FC403093_CustomAttributesCacheGenerator_BezierPath_remove_OnModified_mE4878246DCE71F1EE4C9135CF1533BF67AC8722C,
	MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_get_Min_m27A2B5B03253FDB598A862C4D442C3AA8E708C92,
	MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_set_Min_m9FD8F40067AFD1DE82C63946AC69E206A271BC73,
	MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_get_Max_m9FA0BB60BC2F8AF54B40A517C972877DE7827AE6,
	MinMax3D_t0FADB73FC3F18BB9704D4BC72A34C33A1A243A77_CustomAttributesCacheGenerator_MinMax3D_set_Max_m8FD4CF8C1193E6FDF240679623D8A13F6DE3DC68,
	PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_PathCreator_add_pathUpdated_m821CD0FF90A3409BB6F798A380BDDF3A95CFC6BD,
	PathCreator_tEAFF4162C74932B2FE5D882239E40D49A7F8B804_CustomAttributesCacheGenerator_PathCreator_remove_pathUpdated_m9D31D7A3761BE9E62CF1284D781B57D66475D1F2,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_add_bezierOrVertexPathModified_mA850F1226CF2CEEC7B452D928025A31A0429A005,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_remove_bezierOrVertexPathModified_m8071D439BA735C2E0767B9FD68A7381AC6CF8A4F,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_add_bezierCreated_m36BED7EDAC1E1CE3BBA7D299561F9ADFE2CE40D0,
	PathCreatorData_t419679050DD058D86D64983CF48BB2723C3FEEDD_CustomAttributesCacheGenerator_PathCreatorData_remove_bezierCreated_m4CB55AF9EC87568DDCB54BDD27271CC305C176E2,
	PathCreator_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
