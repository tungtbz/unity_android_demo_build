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
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;



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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.AttributeTargets
struct AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::m_attributeTarget
	int32_t ___m_attributeTarget_0;
	// System.Boolean System.AttributeUsageAttribute::m_allowMultiple
	bool ___m_allowMultiple_1;
	// System.Boolean System.AttributeUsageAttribute::m_inherited
	bool ___m_inherited_2;

public:
	inline static int32_t get_offset_of_m_attributeTarget_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_attributeTarget_0)); }
	inline int32_t get_m_attributeTarget_0() const { return ___m_attributeTarget_0; }
	inline int32_t* get_address_of_m_attributeTarget_0() { return &___m_attributeTarget_0; }
	inline void set_m_attributeTarget_0(int32_t value)
	{
		___m_attributeTarget_0 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_allowMultiple_1)); }
	inline bool get_m_allowMultiple_1() const { return ___m_allowMultiple_1; }
	inline bool* get_address_of_m_allowMultiple_1() { return &___m_allowMultiple_1; }
	inline void set_m_allowMultiple_1(bool value)
	{
		___m_allowMultiple_1 = value;
	}

	inline static int32_t get_offset_of_m_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_inherited_2)); }
	inline bool get_m_inherited_2() const { return ___m_inherited_2; }
	inline bool* get_address_of_m_inherited_2() { return &___m_inherited_2; }
	inline void set_m_inherited_2(bool value)
	{
		___m_inherited_2 = value;
	}
};

struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields
{
public:
	// System.AttributeUsageAttribute System.AttributeUsageAttribute::Default
	AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields, ___Default_3)); }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * get_Default_3() const { return ___Default_3; }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_3), (void*)value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
// System.Void System.AttributeUsageAttribute::.ctor(System.AttributeTargets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeUsageAttribute__ctor_m5114E18826A49A025D48DC71904C430BD590656D (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, int32_t ___validOn0, const RuntimeMethod* method);
// System.Void System.AttributeUsageAttribute::set_Inherited(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeUsageAttribute_set_Inherited_m56105980C36CB71AECD398C6077739BDFD2085E0_inline (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.AttributeUsageAttribute::set_AllowMultiple(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeUsageAttribute_set_AllowMultiple_mF412CDAFFE16D056721EF81A1EC04ACE63612055_inline (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, bool ___value0, const RuntimeMethod* method);
static void AssemblyU2DCSharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[1];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[3];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
}
static void Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_CustomAttributesCacheGenerator__textField(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GenericTinyMessage_1_tEC7FC32E8C93B59A3818145841A4DB22E986B93F_CustomAttributesCacheGenerator_U3CContentU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GenericTinyMessage_1_tEC7FC32E8C93B59A3818145841A4DB22E986B93F_CustomAttributesCacheGenerator_GenericTinyMessage_1_get_Content_m6304EC1918F3AA561C530D7C563B346235B13722(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GenericTinyMessage_1_tEC7FC32E8C93B59A3818145841A4DB22E986B93F_CustomAttributesCacheGenerator_GenericTinyMessage_1_set_Content_m1857F23876E589A4EF9BC2AAC660B6F0B101B151(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_U3CCancelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_U3CContentU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_get_Cancel_m3DCF463580AA7E25FD2A1F14E13B34BA1652ADB4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_set_Cancel_m7B868BA1196917F73AEC095654721CA39112D485(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_get_Content_m7D3C7C02805B68A5E857D9037EC918975F14A966(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_set_Content_m1784A582163AEB65E538DFFD810992F4B9694637(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_U3CProxyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_U3CSubscriptionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_get_Proxy_mA84A0F445B473A3E180664CB3710B8DBA2E6373D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_set_Proxy_mE1A215D065FBDEEB1E2E5BC105EE8C4904E4F09D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_get_Subscription_mC63C5E9DB56A061DFDF7E01FE7DFE81830FC9D84(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_set_Subscription_m5BE260857D7EB9D7497EEF041E29B46B730EFCFF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__5_1_t1827E100ADAAB9916BE224299B7B52599748D2A2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__6_1_t5E6C111673919E0EDA478506EC2EBA14CDCB53A2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__7_1_tB3759474E6D2334D196F08662E6D552E58CAE398_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__8_1_tBA34B7696D1304EDB279B88FCEEC7CCD597145A4_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass18_0_1_t0C3B37335C47F9521F90BF5B7C322FD52DCEF2CC_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass18_1_1_t28B049F51B979D846583723A19107F6AC78F651D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass19_0_1_tF1AA94527714C242A76E894C05568FDE9DC66D1E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass20_0_1_t3681567A3390409BD2B6A9F53CEDEC357B5A0C02_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SafeDictionary_2_t9C16D68F1763AEA55EC0B62776BE1B3454680EFF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void U3CU3Ec_tA4B7CC564A17F6AE6130A0C6AB84C27FD9C08A83_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AssemblyExtensions_t09FC7059431923CFF74463EDF40EC7C7FB472638_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void AssemblyExtensions_t09FC7059431923CFF74463EDF40EC7C7FB472638_CustomAttributesCacheGenerator_AssemblyExtensions_SafeGetTypes_m6C33ADA410F8414561E944612F5B4492A651F836(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec_t6A38D8A9504EB6FA9CE8042FF6FC794F58D39039_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TypeExtensions_tA6EC7C92E486681C9747C8190C11B690B728DC07_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TypeExtensions_tA6EC7C92E486681C9747C8190C11B690B728DC07_CustomAttributesCacheGenerator_TypeExtensions_GetGenericMethod_m60AEE8AC73FBCEC2470B2CA2F92A25B8EF8C7B9A(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass3_0_t92AEC296D2342BC83C890E3470FE75370D6352BA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tD8A6CB07BBD4FC4875D8AE09FA064A14FA5C4BB5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t6D0186C4A345EBEEBC19D6548F2BF336C7A11442_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__3_0_mF4B6103FE5105D2C589615028E6FC6CEE829AF83(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__4_0_m5CDDBAC32370A735DDE76C6A9DC9A15336650B4B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__5_0_m987E0F734D4CB36FE59148F1F850CC0E5C7EB8AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__6_0_m47FCED881B428C52F1A836B189BB25518C3A01CC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t7170CB1F54A7C0A8D643F8B3103609C64E4296E3_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass4_0_t8CAC4287C094800D4CAD91CCA9C3D77077235083_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectFactoryBase_t19CB28504BE77D325EFD7B5652160B3CFFAEE9DD_CustomAttributesCacheGenerator_U3CConstructorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectFactoryBase_t19CB28504BE77D325EFD7B5652160B3CFFAEE9DD_CustomAttributesCacheGenerator_ObjectFactoryBase_get_Constructor_mC44CCA920243371EAA3F96D96546668243D382E8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectFactoryBase_t19CB28504BE77D325EFD7B5652160B3CFFAEE9DD_CustomAttributesCacheGenerator_ObjectFactoryBase_set_Constructor_m43D910F9FBAD936D2EA010AD37CBBC25001A2AC0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateSingletonFactory_t63C0B6A6A986B6FA93435013D1B2F57701BE7E9B_CustomAttributesCacheGenerator_U3CCreatesTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DelegateSingletonFactory_t63C0B6A6A986B6FA93435013D1B2F57701BE7E9B_CustomAttributesCacheGenerator_DelegateSingletonFactory_get_CreatesType_m73C383DC551C8FDBAA1F11D9E93CA875485323E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_U3CTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_get_Type_m118DDA7F4944222D727CDE6F3C4759CB9DF57801(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_set_Type_m4853054603C767DBBD4A7A2ED9A65ED1C4212011(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_get_Name_m55E364F6AED9F92701F762037DC8EAB88A9BE351(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_set_Name_m2ACB522FA6374DDC46358DD64DEAC24B015DF27E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectConstructor_t116424F02187118C9E161B25BF487FD34A6F11F1_CustomAttributesCacheGenerator_ObjectConstructor_Invoke_m6343301A476C9DCDD475E3319CFB6320B53646AB____parameters0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass29_0_1_t2623DC8C2D4B80B2640554365C5D11AEE3945D66_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass30_0_1_t7B7576836CB67204C9798551CC81743A3714DE87_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tA28E647ECA835239D22681F3DC69BA7E958947D3_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass113_0_t5EFBA4F242A44542A075347328ECA6FCBEE4B4E2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass113_1_tA4321C34E7703D4CBB33437FE386A56FF320ABD5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass117_0_tED5D249053C92CBD006F0A037757B85EEDBD3B65_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass140_0_t6F9347C101A83BB971C1F7B1C90F60CF0079E8AF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass141_0_t221FF92962B40B73C2230824D8A0A5060433247D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass142_0_t74C3447AB7E8E76AD0B75424C1AD818A3E5D6292_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsClass_m9989DF2E6633AD20691E7615AF847FBD4AB1339A(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsAbstract_mE92EB70ED9A967CE70E588A2E96A0ED78F804C38(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsInterface_m8B10FB3EC35852A34DE5C5D6D31ECC4184F73751(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsPrimitive_m73695B1A30402EAD31B3348044980471E471F6AA(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsValueType_mBDB17B369A41EEE8C1B7517355B43E591EC342DB(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsGenericType_m4967E32F3686C4C5A30CFEEA382B2FE2DDF57676(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsGenericParameter_m2A7396B943616114EE0AC27213AFA661E54D0D25(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsGenericTypeDefinition_m140028987824C10DB947121BBB2E1185F4895CA9(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsNestedPrivate_m5727D50246D9225A73253064369811C461D160B2(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_BaseType_m300D267A49B724A2E1369728F94F785FA14B5D6C(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_Assembly_m497DA7827B5F93A3FD64B6EC6EA2A4E55AE96747(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void TinyIoCConstructorAttribute_tF7648A4E20912783DC904DA1F7C96DDAC0CFADB2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * tmp = (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C *)cache->attributes[0];
		AttributeUsageAttribute__ctor_m5114E18826A49A025D48DC71904C430BD590656D(tmp, 32LL, NULL);
		AttributeUsageAttribute_set_Inherited_m56105980C36CB71AECD398C6077739BDFD2085E0_inline(tmp, false, NULL);
		AttributeUsageAttribute_set_AllowMultiple_mF412CDAFFE16D056721EF81A1EC04ACE63612055_inline(tmp, false, NULL);
	}
}
static void U3CU3Ec_t94B80E79C749D3F7F3B76C41CAC8053C8CB8DC18_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[76] = 
{
	U3CU3Ec__5_1_t1827E100ADAAB9916BE224299B7B52599748D2A2_CustomAttributesCacheGenerator,
	U3CU3Ec__6_1_t5E6C111673919E0EDA478506EC2EBA14CDCB53A2_CustomAttributesCacheGenerator,
	U3CU3Ec__7_1_tB3759474E6D2334D196F08662E6D552E58CAE398_CustomAttributesCacheGenerator,
	U3CU3Ec__8_1_tBA34B7696D1304EDB279B88FCEEC7CCD597145A4_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass18_0_1_t0C3B37335C47F9521F90BF5B7C322FD52DCEF2CC_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass18_1_1_t28B049F51B979D846583723A19107F6AC78F651D_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass19_0_1_tF1AA94527714C242A76E894C05568FDE9DC66D1E_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass20_0_1_t3681567A3390409BD2B6A9F53CEDEC357B5A0C02_CustomAttributesCacheGenerator,
	SafeDictionary_2_t9C16D68F1763AEA55EC0B62776BE1B3454680EFF_CustomAttributesCacheGenerator,
	U3CU3Ec_tA4B7CC564A17F6AE6130A0C6AB84C27FD9C08A83_CustomAttributesCacheGenerator,
	AssemblyExtensions_t09FC7059431923CFF74463EDF40EC7C7FB472638_CustomAttributesCacheGenerator,
	U3CU3Ec_t6A38D8A9504EB6FA9CE8042FF6FC794F58D39039_CustomAttributesCacheGenerator,
	TypeExtensions_tA6EC7C92E486681C9747C8190C11B690B728DC07_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass3_0_t92AEC296D2342BC83C890E3470FE75370D6352BA_CustomAttributesCacheGenerator,
	U3CU3Ec_tD8A6CB07BBD4FC4875D8AE09FA064A14FA5C4BB5_CustomAttributesCacheGenerator,
	U3CU3Ec_t6D0186C4A345EBEEBC19D6548F2BF336C7A11442_CustomAttributesCacheGenerator,
	U3CU3Ec_t7170CB1F54A7C0A8D643F8B3103609C64E4296E3_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass4_0_t8CAC4287C094800D4CAD91CCA9C3D77077235083_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass29_0_1_t2623DC8C2D4B80B2640554365C5D11AEE3945D66_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass30_0_1_t7B7576836CB67204C9798551CC81743A3714DE87_CustomAttributesCacheGenerator,
	U3CU3Ec_tA28E647ECA835239D22681F3DC69BA7E958947D3_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass113_0_t5EFBA4F242A44542A075347328ECA6FCBEE4B4E2_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass113_1_tA4321C34E7703D4CBB33437FE386A56FF320ABD5_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass117_0_tED5D249053C92CBD006F0A037757B85EEDBD3B65_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass140_0_t6F9347C101A83BB971C1F7B1C90F60CF0079E8AF_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass141_0_t221FF92962B40B73C2230824D8A0A5060433247D_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass142_0_t74C3447AB7E8E76AD0B75424C1AD818A3E5D6292_CustomAttributesCacheGenerator,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator,
	TinyIoCConstructorAttribute_tF7648A4E20912783DC904DA1F7C96DDAC0CFADB2_CustomAttributesCacheGenerator,
	U3CU3Ec_t94B80E79C749D3F7F3B76C41CAC8053C8CB8DC18_CustomAttributesCacheGenerator,
	Test_tB521413BD14DFDD715F0C78DB4B6392F71A6EED5_CustomAttributesCacheGenerator__textField,
	GenericTinyMessage_1_tEC7FC32E8C93B59A3818145841A4DB22E986B93F_CustomAttributesCacheGenerator_U3CContentU3Ek__BackingField,
	CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_U3CCancelU3Ek__BackingField,
	CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_U3CContentU3Ek__BackingField,
	SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_U3CProxyU3Ek__BackingField,
	SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_U3CSubscriptionU3Ek__BackingField,
	ObjectFactoryBase_t19CB28504BE77D325EFD7B5652160B3CFFAEE9DD_CustomAttributesCacheGenerator_U3CConstructorU3Ek__BackingField,
	DelegateSingletonFactory_t63C0B6A6A986B6FA93435013D1B2F57701BE7E9B_CustomAttributesCacheGenerator_U3CCreatesTypeU3Ek__BackingField,
	TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_U3CTypeU3Ek__BackingField,
	TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	GenericTinyMessage_1_tEC7FC32E8C93B59A3818145841A4DB22E986B93F_CustomAttributesCacheGenerator_GenericTinyMessage_1_get_Content_m6304EC1918F3AA561C530D7C563B346235B13722,
	GenericTinyMessage_1_tEC7FC32E8C93B59A3818145841A4DB22E986B93F_CustomAttributesCacheGenerator_GenericTinyMessage_1_set_Content_m1857F23876E589A4EF9BC2AAC660B6F0B101B151,
	CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_get_Cancel_m3DCF463580AA7E25FD2A1F14E13B34BA1652ADB4,
	CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_set_Cancel_m7B868BA1196917F73AEC095654721CA39112D485,
	CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_get_Content_m7D3C7C02805B68A5E857D9037EC918975F14A966,
	CancellableGenericTinyMessage_1_tD456CFA56CD1AF847217E3799C409BC15654ABAE_CustomAttributesCacheGenerator_CancellableGenericTinyMessage_1_set_Content_m1784A582163AEB65E538DFFD810992F4B9694637,
	SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_get_Proxy_mA84A0F445B473A3E180664CB3710B8DBA2E6373D,
	SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_set_Proxy_mE1A215D065FBDEEB1E2E5BC105EE8C4904E4F09D,
	SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_get_Subscription_mC63C5E9DB56A061DFDF7E01FE7DFE81830FC9D84,
	SubscriptionItem_t4AC8D8D4BAC04D3760D6846CA51796DD07568FB1_CustomAttributesCacheGenerator_SubscriptionItem_set_Subscription_m5BE260857D7EB9D7497EEF041E29B46B730EFCFF,
	AssemblyExtensions_t09FC7059431923CFF74463EDF40EC7C7FB472638_CustomAttributesCacheGenerator_AssemblyExtensions_SafeGetTypes_m6C33ADA410F8414561E944612F5B4492A651F836,
	TypeExtensions_tA6EC7C92E486681C9747C8190C11B690B728DC07_CustomAttributesCacheGenerator_TypeExtensions_GetGenericMethod_m60AEE8AC73FBCEC2470B2CA2F92A25B8EF8C7B9A,
	TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__3_0_mF4B6103FE5105D2C589615028E6FC6CEE829AF83,
	TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__4_0_m5CDDBAC32370A735DDE76C6A9DC9A15336650B4B,
	TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__5_0_m987E0F734D4CB36FE59148F1F850CC0E5C7EB8AE,
	TinyIoCContainer_t52DE8D4157E94F3097ED0F697D400F36A7C071D6_CustomAttributesCacheGenerator_TinyIoCContainer_U3CAutoRegisterU3Eb__6_0_m47FCED881B428C52F1A836B189BB25518C3A01CC,
	ObjectFactoryBase_t19CB28504BE77D325EFD7B5652160B3CFFAEE9DD_CustomAttributesCacheGenerator_ObjectFactoryBase_get_Constructor_mC44CCA920243371EAA3F96D96546668243D382E8,
	ObjectFactoryBase_t19CB28504BE77D325EFD7B5652160B3CFFAEE9DD_CustomAttributesCacheGenerator_ObjectFactoryBase_set_Constructor_m43D910F9FBAD936D2EA010AD37CBBC25001A2AC0,
	DelegateSingletonFactory_t63C0B6A6A986B6FA93435013D1B2F57701BE7E9B_CustomAttributesCacheGenerator_DelegateSingletonFactory_get_CreatesType_m73C383DC551C8FDBAA1F11D9E93CA875485323E6,
	TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_get_Type_m118DDA7F4944222D727CDE6F3C4759CB9DF57801,
	TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_set_Type_m4853054603C767DBBD4A7A2ED9A65ED1C4212011,
	TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_get_Name_m55E364F6AED9F92701F762037DC8EAB88A9BE351,
	TypeRegistration_tA99A3011872495C2855A8B8EF0D1E998551E6656_CustomAttributesCacheGenerator_TypeRegistration_set_Name_m2ACB522FA6374DDC46358DD64DEAC24B015DF27E,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsClass_m9989DF2E6633AD20691E7615AF847FBD4AB1339A,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsAbstract_mE92EB70ED9A967CE70E588A2E96A0ED78F804C38,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsInterface_m8B10FB3EC35852A34DE5C5D6D31ECC4184F73751,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsPrimitive_m73695B1A30402EAD31B3348044980471E471F6AA,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsValueType_mBDB17B369A41EEE8C1B7517355B43E591EC342DB,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsGenericType_m4967E32F3686C4C5A30CFEEA382B2FE2DDF57676,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsGenericParameter_m2A7396B943616114EE0AC27213AFA661E54D0D25,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsGenericTypeDefinition_m140028987824C10DB947121BBB2E1185F4895CA9,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_IsNestedPrivate_m5727D50246D9225A73253064369811C461D160B2,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_BaseType_m300D267A49B724A2E1369728F94F785FA14B5D6C,
	ReverseTypeExtender_tF996143935217BB95CECBA9014BC4DF38B8FEC4C_CustomAttributesCacheGenerator_ReverseTypeExtender_Assembly_m497DA7827B5F93A3FD64B6EC6EA2A4E55AE96747,
	ObjectConstructor_t116424F02187118C9E161B25BF487FD34A6F11F1_CustomAttributesCacheGenerator_ObjectConstructor_Invoke_m6343301A476C9DCDD475E3319CFB6320B53646AB____parameters0,
	AssemblyU2DCSharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeUsageAttribute_set_Inherited_m56105980C36CB71AECD398C6077739BDFD2085E0_inline (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_inherited_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeUsageAttribute_set_AllowMultiple_mF412CDAFFE16D056721EF81A1EC04ACE63612055_inline (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_allowMultiple_1(L_0);
		return;
	}
}
