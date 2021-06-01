#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6;
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Transactions.IEnlistmentNotification[]
struct IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93;
// System.Transactions.ISinglePhaseNotification[]
struct ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Transactions.Enlistment
struct Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Transactions.IEnlistmentNotification
struct IEnlistmentNotification_t6B61ECFE2855F2BF5AEA542666F7A0AD7BC66F8D;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Transactions.IPromotableSinglePhaseNotification
struct IPromotableSinglePhaseNotification_t69682072BDC83F8A2099963CA95184C664D9F1E9;
// System.Transactions.ISinglePhaseNotification
struct ISinglePhaseNotification_t8F572ED406F02A7E46E4EC2093B8811A34664F78;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t2C57432D0E16E189A54128FB690B388F03940CA5;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Transactions.SinglePhaseEnlistment
struct SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Transactions.Transaction
struct Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926;
// System.Transactions.TransactionAbortedException
struct TransactionAbortedException_t8AA0F818F56036713B32C1FED813C32448912140;
// System.Transactions.TransactionCompletedEventHandler
struct TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A;
// System.Transactions.TransactionEventArgs
struct TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650;
// System.Transactions.TransactionException
struct TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2;
// System.Transactions.TransactionInformation
struct TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75;
// System.Transactions.TransactionScope
struct TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Transactions.Transaction/AsyncCommit
struct AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnlistmentNotification_t6B61ECFE2855F2BF5AEA542666F7A0AD7BC66F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPromotableSinglePhaseNotification_t69682072BDC83F8A2099963CA95184C664D9F1E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralB0FCBD1BB0D5DDFC7C1E4FBDBC8880AC0B13F325;
IL2CPP_EXTERN_C String_t* _stringLiteralE450D74F5D2BAAB6C582160F56F824E1F2E7676D;
IL2CPP_EXTERN_C String_t* _stringLiteralF9789EC5E59C155776C9BDFF4642FAB40304D870;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2E3F693A04E161333C84549B9B4A612237EACEBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAB2525EFFAA0A0B78B8220CAA70AA8A9D9C3C06F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3BE50F6522C6BE0260BD69ED0F93B84402A97F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2DF32E00ACC77C20E6475BE145D40290D77FB978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7A7FCFE3CE62DF7E41643CD891C0F1998E20B001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m875D2DF156AA0A1EF70C04A899B4864B54AAA98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1DBBFD613792B387ABEFCB5AFC4F3087309C16CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transaction_Rollback_mF1798BA0B7518E5DDBF99796040E8E558C2F6CE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_mC7A6D2B1DEDC13CBDB00EE32D6923327E8264AD1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAB256E3ACA1C5EF116656CCB4FC3449631A38F5F 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>
struct List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6, ____items_1)); }
	inline IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93* get__items_1() const { return ____items_1; }
	inline IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6_StaticFields, ____emptyArray_5)); }
	inline IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IEnlistmentNotificationU5BU5D_tEC660AE892673C596543BC6922D94C1D6489AD93* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>
struct List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6, ____items_1)); }
	inline ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7* get__items_1() const { return ____items_1; }
	inline ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6_StaticFields, ____emptyArray_5)); }
	inline ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ISinglePhaseNotificationU5BU5D_t7E59973BEC5B395850FA8A08C8370949BF3F84C7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Transactions.Enlistment
struct Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C  : public RuntimeObject
{
public:
	// System.Boolean System.Transactions.Enlistment::done
	bool ___done_0;

public:
	inline static int32_t get_offset_of_done_0() { return static_cast<int32_t>(offsetof(Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C, ___done_0)); }
	inline bool get_done_0() const { return ___done_0; }
	inline bool* get_address_of_done_0() { return &___done_0; }
	inline void set_done_0(bool value)
	{
		___done_0 = value;
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
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

// System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>
struct Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E, ___list_0)); }
	inline List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * get_list_0() const { return ___list_0; }
	inline List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.MonoTODOAttribute
struct MonoTODOAttribute_t2C57432D0E16E189A54128FB690B388F03940CA5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Transactions.SinglePhaseEnlistment
struct SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4  : public Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C
{
public:
	// System.Transactions.Transaction System.Transactions.SinglePhaseEnlistment::tx
	Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___tx_1;
	// System.Object System.Transactions.SinglePhaseEnlistment::abortingEnlisted
	RuntimeObject * ___abortingEnlisted_2;

public:
	inline static int32_t get_offset_of_tx_1() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4, ___tx_1)); }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * get_tx_1() const { return ___tx_1; }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 ** get_address_of_tx_1() { return &___tx_1; }
	inline void set_tx_1(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * value)
	{
		___tx_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tx_1), (void*)value);
	}

	inline static int32_t get_offset_of_abortingEnlisted_2() { return static_cast<int32_t>(offsetof(SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4, ___abortingEnlisted_2)); }
	inline RuntimeObject * get_abortingEnlisted_2() const { return ___abortingEnlisted_2; }
	inline RuntimeObject ** get_address_of_abortingEnlisted_2() { return &___abortingEnlisted_2; }
	inline void set_abortingEnlisted_2(RuntimeObject * value)
	{
		___abortingEnlisted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abortingEnlisted_2), (void*)value);
	}
};


// System.Transactions.TransactionEventArgs
struct TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Transactions.Transaction System.Transactions.TransactionEventArgs::transaction
	Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___transaction_1;

public:
	inline static int32_t get_offset_of_transaction_1() { return static_cast<int32_t>(offsetof(TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650, ___transaction_1)); }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * get_transaction_1() const { return ___transaction_1; }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 ** get_address_of_transaction_1() { return &___transaction_1; }
	inline void set_transaction_1(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * value)
	{
		___transaction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_1), (void*)value);
	}
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Transactions.IsolationLevel
struct IsolationLevel_t01E6A6A02B4C5537E51140B9A2539674DC1FD4D4 
{
public:
	// System.Int32 System.Transactions.IsolationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolationLevel_t01E6A6A02B4C5537E51140B9A2539674DC1FD4D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Transactions.TransactionStatus
struct TransactionStatus_tD63177BBDE3165D32EA17F7350563AC72E4C52DC 
{
public:
	// System.Int32 System.Transactions.TransactionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransactionStatus_tD63177BBDE3165D32EA17F7350563AC72E4C52DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Transactions.Transaction
struct Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926  : public RuntimeObject
{
public:
	// System.Transactions.IsolationLevel System.Transactions.Transaction::level
	int32_t ___level_1;
	// System.Transactions.TransactionInformation System.Transactions.Transaction::info
	TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * ___info_2;
	// System.Collections.ArrayList System.Transactions.Transaction::dependents
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___dependents_3;
	// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::volatiles
	List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * ___volatiles_4;
	// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::durables
	List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * ___durables_5;
	// System.Transactions.IPromotableSinglePhaseNotification System.Transactions.Transaction::pspe
	RuntimeObject* ___pspe_6;
	// System.Transactions.Transaction/AsyncCommit System.Transactions.Transaction::asyncCommit
	AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * ___asyncCommit_7;
	// System.Boolean System.Transactions.Transaction::committing
	bool ___committing_8;
	// System.Boolean System.Transactions.Transaction::committed
	bool ___committed_9;
	// System.Boolean System.Transactions.Transaction::aborted
	bool ___aborted_10;
	// System.Transactions.TransactionScope System.Transactions.Transaction::scope
	TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * ___scope_11;
	// System.Exception System.Transactions.Transaction::innerException
	Exception_t * ___innerException_12;
	// System.Guid System.Transactions.Transaction::tag
	Guid_t  ___tag_13;
	// System.Transactions.TransactionCompletedEventHandler System.Transactions.Transaction::TransactionCompleted
	TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * ___TransactionCompleted_14;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___info_2)); }
	inline TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * get_info_2() const { return ___info_2; }
	inline TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 ** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_2), (void*)value);
	}

	inline static int32_t get_offset_of_dependents_3() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___dependents_3)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_dependents_3() const { return ___dependents_3; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_dependents_3() { return &___dependents_3; }
	inline void set_dependents_3(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___dependents_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dependents_3), (void*)value);
	}

	inline static int32_t get_offset_of_volatiles_4() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___volatiles_4)); }
	inline List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * get_volatiles_4() const { return ___volatiles_4; }
	inline List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 ** get_address_of_volatiles_4() { return &___volatiles_4; }
	inline void set_volatiles_4(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * value)
	{
		___volatiles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___volatiles_4), (void*)value);
	}

	inline static int32_t get_offset_of_durables_5() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___durables_5)); }
	inline List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * get_durables_5() const { return ___durables_5; }
	inline List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 ** get_address_of_durables_5() { return &___durables_5; }
	inline void set_durables_5(List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * value)
	{
		___durables_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___durables_5), (void*)value);
	}

	inline static int32_t get_offset_of_pspe_6() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___pspe_6)); }
	inline RuntimeObject* get_pspe_6() const { return ___pspe_6; }
	inline RuntimeObject** get_address_of_pspe_6() { return &___pspe_6; }
	inline void set_pspe_6(RuntimeObject* value)
	{
		___pspe_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pspe_6), (void*)value);
	}

	inline static int32_t get_offset_of_asyncCommit_7() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___asyncCommit_7)); }
	inline AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * get_asyncCommit_7() const { return ___asyncCommit_7; }
	inline AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 ** get_address_of_asyncCommit_7() { return &___asyncCommit_7; }
	inline void set_asyncCommit_7(AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * value)
	{
		___asyncCommit_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asyncCommit_7), (void*)value);
	}

	inline static int32_t get_offset_of_committing_8() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___committing_8)); }
	inline bool get_committing_8() const { return ___committing_8; }
	inline bool* get_address_of_committing_8() { return &___committing_8; }
	inline void set_committing_8(bool value)
	{
		___committing_8 = value;
	}

	inline static int32_t get_offset_of_committed_9() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___committed_9)); }
	inline bool get_committed_9() const { return ___committed_9; }
	inline bool* get_address_of_committed_9() { return &___committed_9; }
	inline void set_committed_9(bool value)
	{
		___committed_9 = value;
	}

	inline static int32_t get_offset_of_aborted_10() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___aborted_10)); }
	inline bool get_aborted_10() const { return ___aborted_10; }
	inline bool* get_address_of_aborted_10() { return &___aborted_10; }
	inline void set_aborted_10(bool value)
	{
		___aborted_10 = value;
	}

	inline static int32_t get_offset_of_scope_11() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___scope_11)); }
	inline TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * get_scope_11() const { return ___scope_11; }
	inline TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED ** get_address_of_scope_11() { return &___scope_11; }
	inline void set_scope_11(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * value)
	{
		___scope_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scope_11), (void*)value);
	}

	inline static int32_t get_offset_of_innerException_12() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___innerException_12)); }
	inline Exception_t * get_innerException_12() const { return ___innerException_12; }
	inline Exception_t ** get_address_of_innerException_12() { return &___innerException_12; }
	inline void set_innerException_12(Exception_t * value)
	{
		___innerException_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___innerException_12), (void*)value);
	}

	inline static int32_t get_offset_of_tag_13() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___tag_13)); }
	inline Guid_t  get_tag_13() const { return ___tag_13; }
	inline Guid_t * get_address_of_tag_13() { return &___tag_13; }
	inline void set_tag_13(Guid_t  value)
	{
		___tag_13 = value;
	}

	inline static int32_t get_offset_of_TransactionCompleted_14() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926, ___TransactionCompleted_14)); }
	inline TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * get_TransactionCompleted_14() const { return ___TransactionCompleted_14; }
	inline TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A ** get_address_of_TransactionCompleted_14() { return &___TransactionCompleted_14; }
	inline void set_TransactionCompleted_14(TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * value)
	{
		___TransactionCompleted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TransactionCompleted_14), (void*)value);
	}
};

struct Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_ThreadStaticFields
{
public:
	// System.Transactions.Transaction System.Transactions.Transaction::ambient
	Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___ambient_0;

public:
	inline static int32_t get_offset_of_ambient_0() { return static_cast<int32_t>(offsetof(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_ThreadStaticFields, ___ambient_0)); }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * get_ambient_0() const { return ___ambient_0; }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 ** get_address_of_ambient_0() { return &___ambient_0; }
	inline void set_ambient_0(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * value)
	{
		___ambient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ambient_0), (void*)value);
	}
};


// System.Transactions.TransactionInformation
struct TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75  : public RuntimeObject
{
public:
	// System.String System.Transactions.TransactionInformation::local_id
	String_t* ___local_id_0;
	// System.Guid System.Transactions.TransactionInformation::dtcId
	Guid_t  ___dtcId_1;
	// System.DateTime System.Transactions.TransactionInformation::creation_time
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___creation_time_2;
	// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::status
	int32_t ___status_3;

public:
	inline static int32_t get_offset_of_local_id_0() { return static_cast<int32_t>(offsetof(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75, ___local_id_0)); }
	inline String_t* get_local_id_0() const { return ___local_id_0; }
	inline String_t** get_address_of_local_id_0() { return &___local_id_0; }
	inline void set_local_id_0(String_t* value)
	{
		___local_id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___local_id_0), (void*)value);
	}

	inline static int32_t get_offset_of_dtcId_1() { return static_cast<int32_t>(offsetof(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75, ___dtcId_1)); }
	inline Guid_t  get_dtcId_1() const { return ___dtcId_1; }
	inline Guid_t * get_address_of_dtcId_1() { return &___dtcId_1; }
	inline void set_dtcId_1(Guid_t  value)
	{
		___dtcId_1 = value;
	}

	inline static int32_t get_offset_of_creation_time_2() { return static_cast<int32_t>(offsetof(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75, ___creation_time_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_creation_time_2() const { return ___creation_time_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_creation_time_2() { return &___creation_time_2; }
	inline void set_creation_time_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___creation_time_2 = value;
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75, ___status_3)); }
	inline int32_t get_status_3() const { return ___status_3; }
	inline int32_t* get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(int32_t value)
	{
		___status_3 = value;
	}
};


// System.Transactions.TransactionManager
struct TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69  : public RuntimeObject
{
public:

public:
};

struct TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_StaticFields
{
public:
	// System.TimeSpan System.Transactions.TransactionManager::defaultTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___defaultTimeout_0;
	// System.TimeSpan System.Transactions.TransactionManager::maxTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___maxTimeout_1;

public:
	inline static int32_t get_offset_of_defaultTimeout_0() { return static_cast<int32_t>(offsetof(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_StaticFields, ___defaultTimeout_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_defaultTimeout_0() const { return ___defaultTimeout_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_defaultTimeout_0() { return &___defaultTimeout_0; }
	inline void set_defaultTimeout_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___defaultTimeout_0 = value;
	}

	inline static int32_t get_offset_of_maxTimeout_1() { return static_cast<int32_t>(offsetof(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_StaticFields, ___maxTimeout_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_maxTimeout_1() const { return ___maxTimeout_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_maxTimeout_1() { return &___maxTimeout_1; }
	inline void set_maxTimeout_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___maxTimeout_1 = value;
	}
};


// System.Transactions.TransactionOptions
struct TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 
{
public:
	// System.Transactions.IsolationLevel System.Transactions.TransactionOptions::level
	int32_t ___level_0;
	// System.TimeSpan System.Transactions.TransactionOptions::timeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___timeout_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_timeout_1() { return static_cast<int32_t>(offsetof(TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0, ___timeout_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_timeout_1() const { return ___timeout_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_timeout_1() { return &___timeout_1; }
	inline void set_timeout_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___timeout_1 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Transactions.TransactionCompletedEventHandler
struct TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A  : public MulticastDelegate_t
{
public:

public:
};


// System.Transactions.TransactionException
struct TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Transactions.TransactionScope
struct TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED  : public RuntimeObject
{
public:
	// System.Transactions.Transaction System.Transactions.TransactionScope::transaction
	Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___transaction_1;
	// System.Transactions.Transaction System.Transactions.TransactionScope::oldTransaction
	Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___oldTransaction_2;
	// System.Transactions.TransactionScope System.Transactions.TransactionScope::parentScope
	TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * ___parentScope_3;
	// System.TimeSpan System.Transactions.TransactionScope::timeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___timeout_4;
	// System.Int32 System.Transactions.TransactionScope::nested
	int32_t ___nested_5;
	// System.Boolean System.Transactions.TransactionScope::disposed
	bool ___disposed_6;
	// System.Boolean System.Transactions.TransactionScope::completed
	bool ___completed_7;
	// System.Boolean System.Transactions.TransactionScope::isRoot
	bool ___isRoot_8;
	// System.Boolean System.Transactions.TransactionScope::asyncFlowEnabled
	bool ___asyncFlowEnabled_9;

public:
	inline static int32_t get_offset_of_transaction_1() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___transaction_1)); }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * get_transaction_1() const { return ___transaction_1; }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 ** get_address_of_transaction_1() { return &___transaction_1; }
	inline void set_transaction_1(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * value)
	{
		___transaction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transaction_1), (void*)value);
	}

	inline static int32_t get_offset_of_oldTransaction_2() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___oldTransaction_2)); }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * get_oldTransaction_2() const { return ___oldTransaction_2; }
	inline Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 ** get_address_of_oldTransaction_2() { return &___oldTransaction_2; }
	inline void set_oldTransaction_2(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * value)
	{
		___oldTransaction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldTransaction_2), (void*)value);
	}

	inline static int32_t get_offset_of_parentScope_3() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___parentScope_3)); }
	inline TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * get_parentScope_3() const { return ___parentScope_3; }
	inline TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED ** get_address_of_parentScope_3() { return &___parentScope_3; }
	inline void set_parentScope_3(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * value)
	{
		___parentScope_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentScope_3), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___timeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_timeout_4() const { return ___timeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_nested_5() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___nested_5)); }
	inline int32_t get_nested_5() const { return ___nested_5; }
	inline int32_t* get_address_of_nested_5() { return &___nested_5; }
	inline void set_nested_5(int32_t value)
	{
		___nested_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of_isRoot_8() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___isRoot_8)); }
	inline bool get_isRoot_8() const { return ___isRoot_8; }
	inline bool* get_address_of_isRoot_8() { return &___isRoot_8; }
	inline void set_isRoot_8(bool value)
	{
		___isRoot_8 = value;
	}

	inline static int32_t get_offset_of_asyncFlowEnabled_9() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED, ___asyncFlowEnabled_9)); }
	inline bool get_asyncFlowEnabled_9() const { return ___asyncFlowEnabled_9; }
	inline bool* get_address_of_asyncFlowEnabled_9() { return &___asyncFlowEnabled_9; }
	inline void set_asyncFlowEnabled_9(bool value)
	{
		___asyncFlowEnabled_9 = value;
	}
};

struct TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED_StaticFields
{
public:
	// System.Transactions.TransactionOptions System.Transactions.TransactionScope::defaultOptions
	TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  ___defaultOptions_0;

public:
	inline static int32_t get_offset_of_defaultOptions_0() { return static_cast<int32_t>(offsetof(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED_StaticFields, ___defaultOptions_0)); }
	inline TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  get_defaultOptions_0() const { return ___defaultOptions_0; }
	inline TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * get_address_of_defaultOptions_0() { return &___defaultOptions_0; }
	inline void set_defaultOptions_0(TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  value)
	{
		___defaultOptions_0 = value;
	}
};


// System.Transactions.Transaction/AsyncCommit
struct AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058  : public MulticastDelegate_t
{
public:

public:
};


// System.Transactions.TransactionAbortedException
struct TransactionAbortedException_t8AA0F818F56036713B32C1FED813C32448912140  : public TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Enlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enlistment__ctor_m1C3A5A8FBEAA30B7B521852C3F55BEEA500A86D0 (Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C * __this, const RuntimeMethod* method);
// System.Void System.Transactions.SinglePhaseEnlistment::Aborted(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment_Aborted_m39F39E636D09558C8F625A7C2EE54E22449C4CF6 (SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_m7B4C680EE4BA8AAD6F9AA0064C95D9BA8CF7EE70 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___x0, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___y1, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_mF1798BA0B7518E5DDBF99796040E8E558C2F6CE0 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, Exception_t * ___ex0, RuntimeObject * ___abortingEnlisted1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::.ctor()
inline void List_1__ctor_m875D2DF156AA0A1EF70C04A899B4864B54AAA98A (List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::.ctor()
inline void List_1__ctor_m7A7FCFE3CE62DF7E41643CD891C0F1998E20B001 (List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.Void System.Transactions.TransactionInformation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionInformation__ctor_m26EDAF5CF2DC713EBFF84334E3F421B42ED101C3 (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE (const RuntimeMethod* method);
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * Transaction_get_CurrentInternal_m9273924910DA43754BDF65AABEFF2F100067140E_inline (const RuntimeMethod* method);
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * Transaction_get_TransactionInformation_mB6B49BCD44F319177C5DF8C5C235E0B3ADDF43E6 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method);
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_mF29A6A17193E7A622E7A0CED9272ED6394B6517C_inline (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m506071EFBD6FB02C028BA114C1B80ED457C97AA4 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::get_Durables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * Transaction_get_Durables_m6A7906B5716D895D5FFF6E063F38855256ED37AE (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Count()
inline int32_t List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_inline (List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_Equals_m1F9E7E64B3E048B60B5A8ABD88D66C94830191F9 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___t0, const RuntimeMethod* method);
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m682099FE7905941584E0E611E810662FD0206F74 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___x0, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___y1, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m110A69817FF1F2B17D0B5C76B51FF56D8022BB3D (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.Transactions.Transaction::FireCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_FireCompleted_mBD7B551B22CAEFBF01B183290E31D0403D0E4C65 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m43307B424E13256D3E80426973D76E8B45318FFF (TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m225626CB276BC8FC07D925FD1D1B68213040ED73 (SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::get_Volatiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * Transaction_get_Volatiles_m1A672C1315737DA3EEEA767C2E43B006CF2D7EB9 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification>::GetEnumerator()
inline Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E  List_1_GetEnumerator_m2DF32E00ACC77C20E6475BE145D40290D77FB978 (List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E  (*) (List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m3BE50F6522C6BE0260BD69ED0F93B84402A97F22_inline (Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::MoveNext()
inline bool Enumerator_MoveNext_mAB2525EFFAA0A0B78B8220CAA70AA8A9D9C3C06F (Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Transactions.IEnlistmentNotification>::Dispose()
inline void Enumerator_Dispose_m2E3F693A04E161333C84549B9B4A612237EACEBA (Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m1DBBFD613792B387ABEFCB5AFC4F3087309C16CE_inline (List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_set_Aborted_mC6BECB0A5B705A3F70808A7BB522CA855DBC220B (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_mE970DB4C612F8EDFE91FE7C17E9F972BA3570DB9_inline (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionEventArgs::.ctor(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_m46D199373B2A0EDE4761EDDDFF56BB55BC05C999 (TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * __this, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___transaction0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionCompletedEventHandler::Invoke(System.Object,System.Transactions.TransactionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_Invoke_m88DF0C0799246E4FC40459FD1D81590830C58D6F (TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * __this, RuntimeObject * ___sender0, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * ___e1, const RuntimeMethod* method);
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * Transaction_get_Scope_mC623DDF0801F4CA233293245179E2B2B2B2DC8E3_inline (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_m0DFD5AE4868D4DC375E60A5EA2B80A7E3CA980F9_inline (TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_mBDF838FC1FD2C25B9B9D6C46C0385BD484D5E834 (TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m706C9889BB4C40404DCB02C62B4BA84F5963BF33 (TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_mCD40F79DAF4808D02EDBC2B28BCB62C709C41ECC (TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m54043F92E08342467699C9618B84A119033D4B99 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m20F619D15EAA349C6CE181A65A47C336200EBD19 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_m809B4E761E68A974DCE454C30595ADE72DCE3A91 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method);
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionOptions__ctor_mAAA0154B3DFDB08E3CF934C8B3A418701412B9E2 (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * __this, int32_t ___level0, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___timeout1, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m75E2D5C2DD7E312101F4B7C21E0989A86EF79674 (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  ___x0, TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  ___y1, const RuntimeMethod* method);
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_mFEB2BA0745641E759610E24E5AD97A7C48F4FE7D (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m907A5F2E995A63D5DCBF39AB6D26D382CD83F873 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_mA618C9A342D29B7B5EA1679E2E78BCDA9C67BA5A (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * __this, const RuntimeMethod* method);
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TransactionManager_get_DefaultTimeout_m78A9126DA290AB3B06B22A7A2400545985BB0F4A_inline (const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void System.Transactions.Enlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enlistment__ctor_m1C3A5A8FBEAA30B7B521852C3F55BEEA500A86D0 (Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_done_0((bool)0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.MonoTODOAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_m98A61F34976748237A0D932CCFD5BDBB6DC9FBDB (MonoTODOAttribute_t2C57432D0E16E189A54128FB690B388F03940CA5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Transactions.SinglePhaseEnlistment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment__ctor_m225626CB276BC8FC07D925FD1D1B68213040ED73 (SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * __this, const RuntimeMethod* method)
{
	{
		Enlistment__ctor_m1C3A5A8FBEAA30B7B521852C3F55BEEA500A86D0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.SinglePhaseEnlistment::Aborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment_Aborted_m7BC2556693576BF6BF7E88BF772E02AD963D146A (SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * __this, const RuntimeMethod* method)
{
	{
		SinglePhaseEnlistment_Aborted_m39F39E636D09558C8F625A7C2EE54E22449C4CF6(__this, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.SinglePhaseEnlistment::Aborted(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinglePhaseEnlistment_Aborted_m39F39E636D09558C8F625A7C2EE54E22449C4CF6 (SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0 = __this->get_tx_1();
		bool L_1;
		L_1 = Transaction_op_Inequality_m7B4C680EE4BA8AAD6F9AA0064C95D9BA8CF7EE70(L_0, (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_2 = __this->get_tx_1();
		Exception_t * L_3 = ___e0;
		RuntimeObject * L_4 = __this->get_abortingEnlisted_2();
		NullCheck(L_2);
		Transaction_Rollback_mF1798BA0B7518E5DDBF99796040E8E558C2F6CE0(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
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
// System.Collections.Generic.List`1<System.Transactions.IEnlistmentNotification> System.Transactions.Transaction::get_Volatiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * Transaction_get_Volatiles_m1A672C1315737DA3EEEA767C2E43B006CF2D7EB9 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m875D2DF156AA0A1EF70C04A899B4864B54AAA98A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * L_0 = __this->get_volatiles_4();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * L_1 = (List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 *)il2cpp_codegen_object_new(List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6_il2cpp_TypeInfo_var);
		List_1__ctor_m875D2DF156AA0A1EF70C04A899B4864B54AAA98A(L_1, /*hidden argument*/List_1__ctor_m875D2DF156AA0A1EF70C04A899B4864B54AAA98A_RuntimeMethod_var);
		__this->set_volatiles_4(L_1);
	}

IL_0013:
	{
		List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * L_2 = __this->get_volatiles_4();
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.Transactions.ISinglePhaseNotification> System.Transactions.Transaction::get_Durables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * Transaction_get_Durables_m6A7906B5716D895D5FFF6E063F38855256ED37AE (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A7FCFE3CE62DF7E41643CD891C0F1998E20B001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_0 = __this->get_durables_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_1 = (List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 *)il2cpp_codegen_object_new(List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6_il2cpp_TypeInfo_var);
		List_1__ctor_m7A7FCFE3CE62DF7E41643CD891C0F1998E20B001(L_1, /*hidden argument*/List_1__ctor_m7A7FCFE3CE62DF7E41643CD891C0F1998E20B001_RuntimeMethod_var);
		__this->set_durables_5(L_1);
	}

IL_0013:
	{
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_2 = __this->get_durables_5();
		return L_2;
	}
}
// System.Void System.Transactions.Transaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction__ctor_m781DA3885D9BECA883C1798526A0AC0A2C0B5633 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		__this->set_dependents_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_1;
		L_1 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		__this->set_tag_13(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_2 = (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 *)il2cpp_codegen_object_new(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75_il2cpp_TypeInfo_var);
		TransactionInformation__ctor_m26EDAF5CF2DC713EBFF84334E3F421B42ED101C3(L_2, /*hidden argument*/NULL);
		__this->set_info_2(L_2);
		__this->set_level_1(0);
		return;
	}
}
// System.Void System.Transactions.Transaction::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_mC7A6D2B1DEDC13CBDB00EE32D6923327E8264AD1 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Transaction_System_Runtime_Serialization_ISerializable_GetObjectData_mC7A6D2B1DEDC13CBDB00EE32D6923327E8264AD1_RuntimeMethod_var)));
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * Transaction_get_Current_mF3CD41F4C638AFEE3F3068A421D43077EC12462F (const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE(/*hidden argument*/NULL);
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0;
		L_0 = Transaction_get_CurrentInternal_m9273924910DA43754BDF65AABEFF2F100067140E_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Transactions.Transaction System.Transactions.Transaction::get_CurrentInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * Transaction_get_CurrentInternal_m9273924910DA43754BDF65AABEFF2F100067140E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0 = ((Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_il2cpp_TypeInfo_var))->get_ambient_0();
		return L_0;
	}
}
// System.Transactions.IsolationLevel System.Transactions.Transaction::get_IsolationLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transaction_get_IsolationLevel_m279161169E85E209CA077E38A40095C35DDCFF7B (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE(/*hidden argument*/NULL);
		int32_t L_0 = __this->get_level_1();
		return L_0;
	}
}
// System.Transactions.TransactionInformation System.Transactions.Transaction::get_TransactionInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * Transaction_get_TransactionInformation_mB6B49BCD44F319177C5DF8C5C235E0B3ADDF43E6 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE(/*hidden argument*/NULL);
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_0 = __this->get_info_2();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Dispose_mA55ACDC7B72691D48876219099A016D9AD08A6A3 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	{
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_0;
		L_0 = Transaction_get_TransactionInformation_mB6B49BCD44F319177C5DF8C5C235E0B3ADDF43E6(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TransactionInformation_get_Status_mF29A6A17193E7A622E7A0CED9272ED6394B6517C_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transaction_Rollback_m506071EFBD6FB02C028BA114C1B80ED457C97AA4(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean System.Transactions.Transaction::EnlistPromotableSinglePhase(System.Transactions.IPromotableSinglePhaseNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_EnlistPromotableSinglePhase_m38248A4798F4ED03CDC6FCD86BE38F681AB084B9 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, RuntimeObject* ___promotableSinglePhaseNotification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromotableSinglePhaseNotification_t69682072BDC83F8A2099963CA95184C664D9F1E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE(/*hidden argument*/NULL);
		RuntimeObject* L_0 = __this->get_pspe_6();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_1;
		L_1 = Transaction_get_Durables_m6A7906B5716D895D5FFF6E063F38855256ED37AE(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_inline(L_1, /*hidden argument*/List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return (bool)0;
	}

IL_001d:
	{
		RuntimeObject* L_3 = ___promotableSinglePhaseNotification0;
		__this->set_pspe_6(L_3);
		RuntimeObject* L_4 = __this->get_pspe_6();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Transactions.IPromotableSinglePhaseNotification::Initialize() */, IPromotableSinglePhaseNotification_t69682072BDC83F8A2099963CA95184C664D9F1E9_il2cpp_TypeInfo_var, L_4);
		return (bool)1;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_Equals_mA480C4BD64C21CF7EB1FC64D8F2417BF3F7FCEDF (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1;
		L_1 = Transaction_Equals_m1F9E7E64B3E048B60B5A8ABD88D66C94830191F9(__this, ((Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 *)IsInstClass((RuntimeObject*)L_0, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Transactions.Transaction::Equals(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_Equals_m1F9E7E64B3E048B60B5A8ABD88D66C94830191F9 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___t0, const RuntimeMethod* method)
{
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0 = ___t0;
		if ((!(((RuntimeObject*)(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 *)L_0) == ((RuntimeObject*)(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_1 = ___t0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_2 = __this->get_level_1();
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_3 = ___t0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_level_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0028;
		}
	}
	{
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_5 = __this->get_info_2();
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_6 = ___t0;
		NullCheck(L_6);
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_7 = L_6->get_info_2();
		return (bool)((((RuntimeObject*)(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 *)L_5) == ((RuntimeObject*)(TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 *)L_7))? 1 : 0);
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean System.Transactions.Transaction::op_Equality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Equality_m682099FE7905941584E0E611E810662FD0206F74 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___x0, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___y1, const RuntimeMethod* method)
{
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0008:
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_2 = ___x0;
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_3 = ___y1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Transaction_Equals_m1F9E7E64B3E048B60B5A8ABD88D66C94830191F9(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Transactions.Transaction::op_Inequality(System.Transactions.Transaction,System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transaction_op_Inequality_m7B4C680EE4BA8AAD6F9AA0064C95D9BA8CF7EE70 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___x0, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___y1, const RuntimeMethod* method)
{
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0 = ___x0;
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_1 = ___y1;
		bool L_2;
		L_2 = Transaction_op_Equality_m682099FE7905941584E0E611E810662FD0206F74(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Transactions.Transaction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transaction_GetHashCode_mC049666E1074FD5F54BB035097EEA2276762FD0B (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_1();
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_3 = __this->get_dependents_3();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0^(int32_t)L_2))^(int32_t)L_4));
	}
}
// System.Void System.Transactions.Transaction::Rollback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m506071EFBD6FB02C028BA114C1B80ED457C97AA4 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	{
		Transaction_Rollback_m110A69817FF1F2B17D0B5C76B51FF56D8022BB3D(__this, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_m110A69817FF1F2B17D0B5C76B51FF56D8022BB3D (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE(/*hidden argument*/NULL);
		Exception_t * L_0 = ___e0;
		Transaction_Rollback_mF1798BA0B7518E5DDBF99796040E8E558C2F6CE0(__this, L_0, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::Rollback(System.Exception,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_Rollback_mF1798BA0B7518E5DDBF99796040E8E558C2F6CE0 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, Exception_t * ___ex0, RuntimeObject * ___abortingEnlisted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2E3F693A04E161333C84549B9B4A612237EACEBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAB2525EFFAA0A0B78B8220CAA70AA8A9D9C3C06F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3BE50F6522C6BE0260BD69ED0F93B84402A97F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnlistmentNotification_t6B61ECFE2855F2BF5AEA542666F7A0AD7BC66F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPromotableSinglePhaseNotification_t69682072BDC83F8A2099963CA95184C664D9F1E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2DF32E00ACC77C20E6475BE145D40290D77FB978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1DBBFD613792B387ABEFCB5AFC4F3087309C16CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * V_0 = NULL;
	List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * V_1 = NULL;
	Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0 = __this->get_aborted_10();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Transaction_FireCompleted_mBD7B551B22CAEFBF01B183290E31D0403D0E4C65(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_1 = __this->get_info_2();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TransactionInformation_get_Status_mF29A6A17193E7A622E7A0CED9272ED6394B6517C_inline(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 * L_3 = (TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2_il2cpp_TypeInfo_var)));
		TransactionException__ctor_m43307B424E13256D3E80426973D76E8B45318FFF(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE450D74F5D2BAAB6C582160F56F824E1F2E7676D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Transaction_Rollback_mF1798BA0B7518E5DDBF99796040E8E558C2F6CE0_RuntimeMethod_var)));
	}

IL_0028:
	{
		Exception_t * L_4 = ___ex0;
		__this->set_innerException_12(L_4);
		SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * L_5 = (SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 *)il2cpp_codegen_object_new(SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4_il2cpp_TypeInfo_var);
		SinglePhaseEnlistment__ctor_m225626CB276BC8FC07D925FD1D1B68213040ED73(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		List_1_t60F4658A278FA3537315B4C84EBF32319D99CBE6 * L_6;
		L_6 = Transaction_get_Volatiles_m1A672C1315737DA3EEEA767C2E43B006CF2D7EB9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E  L_7;
		L_7 = List_1_GetEnumerator_m2DF32E00ACC77C20E6475BE145D40290D77FB978(L_6, /*hidden argument*/List_1_GetEnumerator_m2DF32E00ACC77C20E6475BE145D40290D77FB978_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0043:
		{
			RuntimeObject* L_8;
			L_8 = Enumerator_get_Current_m3BE50F6522C6BE0260BD69ED0F93B84402A97F22_inline((Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E *)(&V_2), /*hidden argument*/Enumerator_get_Current_m3BE50F6522C6BE0260BD69ED0F93B84402A97F22_RuntimeMethod_var);
			V_3 = L_8;
			RuntimeObject* L_9 = V_3;
			RuntimeObject * L_10 = ___abortingEnlisted1;
			if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject *)L_10)))
			{
				goto IL_0056;
			}
		}

IL_004f:
		{
			RuntimeObject* L_11 = V_3;
			SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * L_12 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker1< Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C * >::Invoke(0 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_t6B61ECFE2855F2BF5AEA542666F7A0AD7BC66F8D_il2cpp_TypeInfo_var, L_11, L_12);
		}

IL_0056:
		{
			bool L_13;
			L_13 = Enumerator_MoveNext_mAB2525EFFAA0A0B78B8220CAA70AA8A9D9C3C06F((Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mAB2525EFFAA0A0B78B8220CAA70AA8A9D9C3C06F_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0043;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2E3F693A04E161333C84549B9B4A612237EACEBA((Enumerator_tF27CEB970584FBDC8939BA588D247CC818EA756E *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2E3F693A04E161333C84549B9B4A612237EACEBA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_14;
		L_14 = Transaction_get_Durables_m6A7906B5716D895D5FFF6E063F38855256ED37AE(__this, /*hidden argument*/NULL);
		V_1 = L_14;
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_inline(L_15, /*hidden argument*/List_1_get_Count_mFBDCE09199C046EF46863A499C1C91CDA85324FE_RuntimeMethod_var);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0096;
		}
	}
	{
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = List_1_get_Item_m1DBBFD613792B387ABEFCB5AFC4F3087309C16CE_inline(L_17, 0, /*hidden argument*/List_1_get_Item_m1DBBFD613792B387ABEFCB5AFC4F3087309C16CE_RuntimeMethod_var);
		RuntimeObject * L_19 = ___abortingEnlisted1;
		if ((((RuntimeObject*)(RuntimeObject*)L_18) == ((RuntimeObject*)(RuntimeObject *)L_19)))
		{
			goto IL_0096;
		}
	}
	{
		List_1_t0ADAE83F84D03E1D7E90EFA690DC5AABCFB6FBA6 * L_20 = V_1;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = List_1_get_Item_m1DBBFD613792B387ABEFCB5AFC4F3087309C16CE_inline(L_20, 0, /*hidden argument*/List_1_get_Item_m1DBBFD613792B387ABEFCB5AFC4F3087309C16CE_RuntimeMethod_var);
		SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< Enlistment_t9D2C0900172C3C9F6289FCEE3757CB57D3A87A3C * >::Invoke(0 /* System.Void System.Transactions.IEnlistmentNotification::Rollback(System.Transactions.Enlistment) */, IEnlistmentNotification_t6B61ECFE2855F2BF5AEA542666F7A0AD7BC66F8D_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_0096:
	{
		RuntimeObject* L_23 = __this->get_pspe_6();
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_24 = __this->get_pspe_6();
		RuntimeObject * L_25 = ___abortingEnlisted1;
		if ((((RuntimeObject*)(RuntimeObject*)L_24) == ((RuntimeObject*)(RuntimeObject *)L_25)))
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject* L_26 = __this->get_pspe_6();
		SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * L_27 = V_0;
		NullCheck(L_26);
		InterfaceActionInvoker1< SinglePhaseEnlistment_t42005FF6E5BB0AC3E977A07075928A56ACDC5FA4 * >::Invoke(1 /* System.Void System.Transactions.IPromotableSinglePhaseNotification::Rollback(System.Transactions.SinglePhaseEnlistment) */, IPromotableSinglePhaseNotification_t69682072BDC83F8A2099963CA95184C664D9F1E9_il2cpp_TypeInfo_var, L_26, L_27);
	}

IL_00b3:
	{
		Transaction_set_Aborted_mC6BECB0A5B705A3F70808A7BB522CA855DBC220B(__this, (bool)1, /*hidden argument*/NULL);
		Transaction_FireCompleted_mBD7B551B22CAEFBF01B183290E31D0403D0E4C65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.Transaction::set_Aborted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_set_Aborted_mC6BECB0A5B705A3F70808A7BB522CA855DBC220B (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_aborted_10(L_0);
		bool L_1 = __this->get_aborted_10();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * L_2 = __this->get_info_2();
		NullCheck(L_2);
		TransactionInformation_set_Status_mE970DB4C612F8EDFE91FE7C17E9F972BA3570DB9_inline(L_2, 2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Transactions.TransactionScope System.Transactions.Transaction::get_Scope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * Transaction_get_Scope_mC623DDF0801F4CA233293245179E2B2B2B2DC8E3 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	{
		TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * L_0 = __this->get_scope_11();
		return L_0;
	}
}
// System.Void System.Transactions.Transaction::FireCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_FireCompleted_mBD7B551B22CAEFBF01B183290E31D0403D0E4C65 (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * L_0 = __this->get_TransactionCompleted_14();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * L_1 = __this->get_TransactionCompleted_14();
		TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * L_2 = (TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 *)il2cpp_codegen_object_new(TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650_il2cpp_TypeInfo_var);
		TransactionEventArgs__ctor_m46D199373B2A0EDE4761EDDDFF56BB55BC05C999(L_2, __this, /*hidden argument*/NULL);
		NullCheck(L_1);
		TransactionCompletedEventHandler_Invoke_m88DF0C0799246E4FC40459FD1D81590830C58D6F(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Transactions.Transaction::EnsureIncompleteCurrentScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE (const RuntimeMethod* method)
{
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0;
		L_0 = Transaction_get_CurrentInternal_m9273924910DA43754BDF65AABEFF2F100067140E_inline(/*hidden argument*/NULL);
		bool L_1;
		L_1 = Transaction_op_Equality_m682099FE7905941584E0E611E810662FD0206F74(L_0, (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_2;
		L_2 = Transaction_get_CurrentInternal_m9273924910DA43754BDF65AABEFF2F100067140E_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * L_3;
		L_3 = Transaction_get_Scope_mC623DDF0801F4CA233293245179E2B2B2B2DC8E3_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_4;
		L_4 = Transaction_get_CurrentInternal_m9273924910DA43754BDF65AABEFF2F100067140E_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * L_5;
		L_5 = Transaction_get_Scope_mC623DDF0801F4CA233293245179E2B2B2B2DC8E3_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = TransactionScope_get_IsComplete_m0DFD5AE4868D4DC375E60A5EA2B80A7E3CA980F9_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB0FCBD1BB0D5DDFC7C1E4FBDBC8880AC0B13F325)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Transaction_EnsureIncompleteCurrentScope_m4E2E0E710BFB86629C61A487A9C515FBB07150CE_RuntimeMethod_var)));
	}

IL_0036:
	{
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
// System.Void System.Transactions.TransactionAbortedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_mA7E3D9CE2DD3E871996C8BD546B26B82D3CD2EFC (TransactionAbortedException_t8AA0F818F56036713B32C1FED813C32448912140 * __this, const RuntimeMethod* method)
{
	{
		TransactionException__ctor_mBDF838FC1FD2C25B9B9D6C46C0385BD484D5E834(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionAbortedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionAbortedException__ctor_mF3DFDB4EDA950538F2EA0D8E9E3DF4512C7221B1 (TransactionAbortedException_t8AA0F818F56036713B32C1FED813C32448912140 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		TransactionException__ctor_m706C9889BB4C40404DCB02C62B4BA84F5963BF33(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Transactions.TransactionCompletedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler__ctor_m52095326F7EDEEB11F9C0E4DD13FEF7F682D4048 (TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Transactions.TransactionCompletedEventHandler::Invoke(System.Object,System.Transactions.TransactionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_Invoke_m88DF0C0799246E4FC40459FD1D81590830C58D6F (TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * __this, RuntimeObject * ___sender0, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult System.Transactions.TransactionCompletedEventHandler::BeginInvoke(System.Object,System.Transactions.TransactionEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransactionCompletedEventHandler_BeginInvoke_m52B9887A2EDE6F882A609765B27DCA81E9E9A2D7 (TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * __this, RuntimeObject * ___sender0, TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * ___e1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void System.Transactions.TransactionCompletedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionCompletedEventHandler_EndInvoke_mC2348B76E08E1848B9B73DF066DFAF8B726BE686 (TransactionCompletedEventHandler_t6E5E9A8D4DDFF6E7C34C12935823119831B4DB4A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Transactions.TransactionEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_mCD40F79DAF4808D02EDBC2B28BCB62C709C41ECC (TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionEventArgs::.ctor(System.Transactions.Transaction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionEventArgs__ctor_m46D199373B2A0EDE4761EDDDFF56BB55BC05C999 (TransactionEventArgs_t042F33D8FABF2F092A80F3EFEC65862AB597C650 * __this, Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * ___transaction0, const RuntimeMethod* method)
{
	{
		TransactionEventArgs__ctor_mCD40F79DAF4808D02EDBC2B28BCB62C709C41ECC(__this, /*hidden argument*/NULL);
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0 = ___transaction0;
		__this->set_transaction_1(L_0);
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
// System.Void System.Transactions.TransactionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_mBDF838FC1FD2C25B9B9D6C46C0385BD484D5E834 (TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 * __this, const RuntimeMethod* method)
{
	{
		SystemException__ctor_m54043F92E08342467699C9618B84A119033D4B99(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m43307B424E13256D3E80426973D76E8B45318FFF (TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Transactions.TransactionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionException__ctor_m706C9889BB4C40404DCB02C62B4BA84F5963BF33 (TransactionException_tFFF01973B99001FD5D15D4A0F7B34CB677D582A2 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		SystemException__ctor_m20F619D15EAA349C6CE181A65A47C336200EBD19(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Transactions.TransactionInformation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionInformation__ctor_m26EDAF5CF2DC713EBFF84334E3F421B42ED101C3 (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9789EC5E59C155776C9BDFF4642FAB40304D870);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		__this->set_dtcId_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_status_3(0);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_1;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), /*hidden argument*/NULL);
		__this->set_creation_time_2(L_2);
		Guid_t  L_3;
		L_3 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_1), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteralF9789EC5E59C155776C9BDFF4642FAB40304D870, /*hidden argument*/NULL);
		__this->set_local_id_0(L_5);
		return;
	}
}
// System.Transactions.TransactionStatus System.Transactions.TransactionInformation::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_mF29A6A17193E7A622E7A0CED9272ED6394B6517C (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_status_3();
		return L_0;
	}
}
// System.Void System.Transactions.TransactionInformation::set_Status(System.Transactions.TransactionStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_mE970DB4C612F8EDFE91FE7C17E9F972BA3570DB9 (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_status_3(L_0);
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
// System.Void System.Transactions.TransactionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionManager__cctor_m65CCD15644AF689A73374B6B7212B68FF50F28EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TimeSpan__ctor_m809B4E761E68A974DCE454C30595ADE72DCE3A91((&L_0), 0, 1, 0, /*hidden argument*/NULL);
		((TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var))->set_defaultTimeout_0(L_0);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TimeSpan__ctor_m809B4E761E68A974DCE454C30595ADE72DCE3A91((&L_1), 0, ((int32_t)10), 0, /*hidden argument*/NULL);
		((TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var))->set_maxTimeout_1(L_1);
		return;
	}
}
// System.TimeSpan System.Transactions.TransactionManager::get_DefaultTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TransactionManager_get_DefaultTimeout_m78A9126DA290AB3B06B22A7A2400545985BB0F4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = ((TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var))->get_defaultTimeout_0();
		return L_0;
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
// System.Void System.Transactions.TransactionOptions::.ctor(System.Transactions.IsolationLevel,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionOptions__ctor_mAAA0154B3DFDB08E3CF934C8B3A418701412B9E2 (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * __this, int32_t ___level0, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___timeout1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		__this->set_level_0(L_0);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___timeout1;
		__this->set_timeout_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TransactionOptions__ctor_mAAA0154B3DFDB08E3CF934C8B3A418701412B9E2_AdjustorThunk (RuntimeObject * __this, int32_t ___level0, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___timeout1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * _thisAdjusted = reinterpret_cast<TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 *>(__this + _offset);
	TransactionOptions__ctor_mAAA0154B3DFDB08E3CF934C8B3A418701412B9E2(_thisAdjusted, ___level0, ___timeout1, method);
}
// System.Boolean System.Transactions.TransactionOptions::op_Equality(System.Transactions.TransactionOptions,System.Transactions.TransactionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_op_Equality_m75E2D5C2DD7E312101F4B7C21E0989A86EF79674 (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  ___x0, TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  L_0 = ___x0;
		int32_t L_1 = L_0.get_level_0();
		TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  L_2 = ___y1;
		int32_t L_3 = L_2.get_level_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  L_4 = ___x0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_5 = L_4.get_timeout_1();
		TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  L_6 = ___y1;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7 = L_6.get_timeout_1();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean System.Transactions.TransactionOptions::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionOptions_Equals_mFEB2BA0745641E759610E24E5AD97A7C48F4FE7D (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  L_1 = (*(TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 *)__this);
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = TransactionOptions_op_Equality_m75E2D5C2DD7E312101F4B7C21E0989A86EF79674(L_1, ((*(TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 *)((TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 *)UnBox(L_2, TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TransactionOptions_Equals_mFEB2BA0745641E759610E24E5AD97A7C48F4FE7D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * _thisAdjusted = reinterpret_cast<TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransactionOptions_Equals_mFEB2BA0745641E759610E24E5AD97A7C48F4FE7D(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 System.Transactions.TransactionOptions::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransactionOptions_GetHashCode_mA618C9A342D29B7B5EA1679E2E78BCDA9C67BA5A (TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_0();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * L_1 = __this->get_address_of_timeout_1();
		int32_t L_2;
		L_2 = TimeSpan_GetHashCode_m907A5F2E995A63D5DCBF39AB6D26D382CD83F873((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0^(int32_t)L_2));
	}
}
IL2CPP_EXTERN_C  int32_t TransactionOptions_GetHashCode_mA618C9A342D29B7B5EA1679E2E78BCDA9C67BA5A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 * _thisAdjusted = reinterpret_cast<TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TransactionOptions_GetHashCode_mA618C9A342D29B7B5EA1679E2E78BCDA9C67BA5A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Transactions.TransactionScope::get_IsComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_m0DFD5AE4868D4DC375E60A5EA2B80A7E3CA980F9 (TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_completed_7();
		return L_0;
	}
}
// System.Void System.Transactions.TransactionScope::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionScope__cctor_m08835BD6525583F3BBD79E21D363732F066644E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0;
		L_0 = TransactionManager_get_DefaultTimeout_m78A9126DA290AB3B06B22A7A2400545985BB0F4A_inline(/*hidden argument*/NULL);
		TransactionOptions_tFF94A1957798C561E4CD6634DD7AAF5EDBF256C0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TransactionOptions__ctor_mAAA0154B3DFDB08E3CF934C8B3A418701412B9E2((&L_1), 0, L_0, /*hidden argument*/NULL);
		((TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED_StaticFields*)il2cpp_codegen_static_fields_for(TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED_il2cpp_TypeInfo_var))->set_defaultOptions_0(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 (AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void System.Transactions.Transaction/AsyncCommit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCommit__ctor_m691E241D7A5C22C36AAA846E1E8207A8A7FFCE39 (AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Transactions.Transaction/AsyncCommit::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCommit_Invoke_mEBF75661F199769A89554AE9ADA16A3B00491B6A (AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.Transactions.Transaction/AsyncCommit::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncCommit_BeginInvoke_m2CAC019208EA14F645158A6952CB4E8912F9818D (AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void System.Transactions.Transaction/AsyncCommit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCommit_EndInvoke_m86EA520F68F51826C735D50DF4FD36898EC76CB6 (AsyncCommit_t767FAC09DEB20308A53FC5F8F8D5107C0D32C058 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * Transaction_get_CurrentInternal_m9273924910DA43754BDF65AABEFF2F100067140E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * L_0 = ((Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926_il2cpp_TypeInfo_var))->get_ambient_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransactionInformation_get_Status_mF29A6A17193E7A622E7A0CED9272ED6394B6517C_inline (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_status_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInformation_set_Status_mE970DB4C612F8EDFE91FE7C17E9F972BA3570DB9_inline (TransactionInformation_t3C05EB2965563EEFE407989566BE635D51003A75 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_status_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * Transaction_get_Scope_mC623DDF0801F4CA233293245179E2B2B2B2DC8E3_inline (Transaction_t5166A8DC611E1847894EDDC70C4CFEB675A28926 * __this, const RuntimeMethod* method)
{
	{
		TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * L_0 = __this->get_scope_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransactionScope_get_IsComplete_m0DFD5AE4868D4DC375E60A5EA2B80A7E3CA980F9_inline (TransactionScope_tA395CC80CA888F4C2179E42A72A079E9625FA8ED * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_completed_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TransactionManager_get_DefaultTimeout_m78A9126DA290AB3B06B22A7A2400545985BB0F4A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = ((TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_StaticFields*)il2cpp_codegen_static_fields_for(TransactionManager_t14338B0724A2AABE402B3F778B37F84B5AF9FE69_il2cpp_TypeInfo_var))->get_defaultTimeout_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
