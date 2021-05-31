#include "il2cpp-config.h"

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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// zlib.Adler32
struct Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6;
// zlib.Deflate
struct Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7;
// zlib.Deflate/Config[]
struct ConfigU5BU5D_tEF1D1552175A756AAFFE7507E3DC4AB828C90197;
// zlib.InfBlocks
struct InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD;
// zlib.InfCodes
struct InfCodes_t9E00C30617927414B4347A5AD556D26037178D01;
// zlib.Inflate
struct Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701;
// zlib.StaticTree
struct StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1;
// zlib.Tree
struct Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A;
// zlib.ZInputStream
struct ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048;
// zlib.ZOutputStream
struct ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6;
// zlib.ZStream
struct ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D;
// zlib.ZStreamException
struct ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746;

IL2CPP_EXTERN_C RuntimeClass* Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x6000609U2D1_22_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x6000609U2D2_23_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D1_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D2_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D3_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D4_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D5_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D6_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D7_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D8_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D1_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D2_12_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D3_13_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D4_14_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D5_15_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D6_16_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f9U2D1_21_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0935D8D996DAFD1BB7298CE5A779FD11F107BBE5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C229B451318F3DD06323B34D3F74DE8334BA254;
IL2CPP_EXTERN_C String_t* _stringLiteral13DE206ADF60DBF692C2DB9E4475CED6B63EEC76;
IL2CPP_EXTERN_C String_t* _stringLiteral1B39A6F24C0DA60092BF13DF941F77F196B8E795;
IL2CPP_EXTERN_C String_t* _stringLiteral208463D8C284463AD508F287CDF0E6C1EF93ED7B;
IL2CPP_EXTERN_C String_t* _stringLiteral345748201B6BB248050B7CA713D2CB75B3110C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral3D1BA01B10FC237479E254DCEFE16889FDAE4E92;
IL2CPP_EXTERN_C String_t* _stringLiteral40990C845D98A3C5CB2A888445D6E02F11C91927;
IL2CPP_EXTERN_C String_t* _stringLiteral4925A7198FDCA574E35F8D190FC252E87F4A8016;
IL2CPP_EXTERN_C String_t* _stringLiteral51796AC29F50F5E732052A10903C85F5A3FEA6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral524B6D63D378C8DEAE14934E6542CF8795733DB2;
IL2CPP_EXTERN_C String_t* _stringLiteral600CCD1B71569232D01D110BC63E906BEAB04D8C;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB320A5D4BB268305CA70B33E67C16F681A19E9;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1E5CE72AB850D0F70EE3B0571710CDF3AE7BBE;
IL2CPP_EXTERN_C String_t* _stringLiteralAF10EF20DD9060BBEEAD0AFBC55381A66AF442EF;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7970CE3E6550B41D53BFE064A57F20DD8853EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE666E473817541EABD300C26C471ECF0910A97F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF33C755F263276D468918A4CD3E97CEC4C5AD0AF;
IL2CPP_EXTERN_C const RuntimeMethod* ZInputStream_read_m7EAB57F4D0087E37C397AF1FF24A6358FF5CF492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZOutputStream_Write_m4D76A3503C70AA1602249BB09212072548796329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZOutputStream_finish_m78CE44648627F9D54DF488997D234BCAED8700B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABFMySql_Data3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfCodes__cctor_m400D974F615E1C772A0BC9481719DC86360B77D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfCodes_inflate_fast_mA5E3DF26A758FCFFBEC6465D7604EEEF8A980D5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfCodes_proc_mEFFAC8D6401DE7F0F721F2A8F28E77360E6936D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfTree__cctor_m0A20FF8A61159F0E4AA834EF70475799DC82F778_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfTree_huft_build_m4787F16B9CFC8967632F972CAB4246A638009FAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfTree_inflate_trees_bits_m2327F1CECFB6C35AC3650299FEDC045AC0BA2F24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfTree_inflate_trees_dynamic_m28426A9ED9C11818C8E7FB80A132FD0FA562644B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InfTree_inflate_trees_fixed_m929F075BEFA8514492F439597E1DEBCD6EE17D3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Inflate__cctor_mF5F71842930DF65EDC86DF534B40AB671AB39B96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Inflate__ctor_m4103F64FD576422D27D1711A73488C1E5446DAC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Inflate_inflateInit_m03924C67B781DE3DF704D17B54588896ADCE20D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Inflate_inflate_mD23EA23B623C900F6F91E17A2364320A79251038_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StaticTree__cctor_mAB83CEBFC4264FDE6544C01D48E86823FCFA9B73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportClass_ReadInput_mC605E95F875DFE3A86612ED10D2754317F253D43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tree__cctor_mC117A7F74B496EA8A8E376154A4856101CFD7343_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tree_build_tree_mF855207AD85A94AB4E1C4800F59C9B8842131DE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tree_d_code_mDC9B59D4860AF297BEBA6FF38914E5ED8D99E8D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tree_gen_bitlen_m8B2CBE6D24A63086263BF1DCCAB94E51FD370348_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tree_gen_codes_mF0B6F76BAE741F361D9A14213E3A0A861C18A026_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZInputStream_InitBlock_m81A4555F76BBC3F82BCEDEEFA6299FBEC4BE9482_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZInputStream__ctor_m5B6C55B629C2160B57C7BF524C3AB2FB0F3F517C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZInputStream_read_m7EAB57F4D0087E37C397AF1FF24A6358FF5CF492_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZOutputStream_Close_m90668AE77BDFA3B7F00452F4015B0A20559DC783_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZOutputStream_InitBlock_m2469960F35CB3C1CCFBD9CC85D72D4FF8C5304B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZOutputStream_Write_m4D76A3503C70AA1602249BB09212072548796329_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZOutputStream__ctor_m0345FA4A2AE4C66F4E69640CA49DD81F865B91F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZOutputStream_finish_m78CE44648627F9D54DF488997D234BCAED8700B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZStream__cctor_mC66CA98DC659916DF2375AA6C50EF1DF0F70EE34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZStream__ctor_mD6B20E08D2D5EC67D791FF4EA6548405FCF08E24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZStream_deflateInit_mF8CC9DA59DB28FCFA45C4D7C3D0BA00C1E72A069_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZStream_flush_pending_m5A910D5E756E2F803BEA35DB09FF6A20AB6B9DA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZStream_inflateInit_m0513E7FE0DC02604B6D82EBBD9FEF69F1EF3D100_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ZStream_inflateInit_m6DB571CEF46FAA0FD0BA0F98481175E0C4685D7B_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43;
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Console
struct  Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D  : public RuntimeObject
{
public:

public:
};

struct Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * ___cancel_event_5;
	// System.Console/InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdout_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stderr_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdin_2)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
	}
};


// System.IO.BinaryReader
struct  BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_decoder_2)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBytes_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_singleChar_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBuffer_5)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// zlib.Adler32
struct  Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6  : public RuntimeObject
{
public:

public:
};


// zlib.Deflate
struct  Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7  : public RuntimeObject
{
public:
	// zlib.ZStream zlib.Deflate::strm
	ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___strm_5;
	// System.Int32 zlib.Deflate::status
	int32_t ___status_6;
	// System.Byte[] zlib.Deflate::pending_buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___pending_buf_7;
	// System.Int32 zlib.Deflate::pending_buf_size
	int32_t ___pending_buf_size_8;
	// System.Int32 zlib.Deflate::pending_out
	int32_t ___pending_out_9;
	// System.Int32 zlib.Deflate::pending
	int32_t ___pending_10;
	// System.Int32 zlib.Deflate::noheader
	int32_t ___noheader_11;
	// System.Byte zlib.Deflate::data_type
	uint8_t ___data_type_12;
	// System.Byte zlib.Deflate::method
	uint8_t ___method_13;
	// System.Int32 zlib.Deflate::last_flush
	int32_t ___last_flush_14;
	// System.Int32 zlib.Deflate::w_size
	int32_t ___w_size_15;
	// System.Int32 zlib.Deflate::w_bits
	int32_t ___w_bits_16;
	// System.Int32 zlib.Deflate::w_mask
	int32_t ___w_mask_17;
	// System.Byte[] zlib.Deflate::window
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___window_18;
	// System.Int32 zlib.Deflate::window_size
	int32_t ___window_size_19;
	// System.Int16[] zlib.Deflate::prev
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___prev_20;
	// System.Int16[] zlib.Deflate::head
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___head_21;
	// System.Int32 zlib.Deflate::ins_h
	int32_t ___ins_h_22;
	// System.Int32 zlib.Deflate::hash_size
	int32_t ___hash_size_23;
	// System.Int32 zlib.Deflate::hash_bits
	int32_t ___hash_bits_24;
	// System.Int32 zlib.Deflate::hash_mask
	int32_t ___hash_mask_25;
	// System.Int32 zlib.Deflate::hash_shift
	int32_t ___hash_shift_26;
	// System.Int32 zlib.Deflate::block_start
	int32_t ___block_start_27;
	// System.Int32 zlib.Deflate::match_length
	int32_t ___match_length_28;
	// System.Int32 zlib.Deflate::prev_match
	int32_t ___prev_match_29;
	// System.Int32 zlib.Deflate::match_available
	int32_t ___match_available_30;
	// System.Int32 zlib.Deflate::strstart
	int32_t ___strstart_31;
	// System.Int32 zlib.Deflate::match_start
	int32_t ___match_start_32;
	// System.Int32 zlib.Deflate::lookahead
	int32_t ___lookahead_33;
	// System.Int32 zlib.Deflate::prev_length
	int32_t ___prev_length_34;
	// System.Int32 zlib.Deflate::max_chain_length
	int32_t ___max_chain_length_35;
	// System.Int32 zlib.Deflate::max_lazy_match
	int32_t ___max_lazy_match_36;
	// System.Int32 zlib.Deflate::level
	int32_t ___level_37;
	// System.Int32 zlib.Deflate::strategy
	int32_t ___strategy_38;
	// System.Int32 zlib.Deflate::good_match
	int32_t ___good_match_39;
	// System.Int32 zlib.Deflate::nice_match
	int32_t ___nice_match_40;
	// System.Int16[] zlib.Deflate::dyn_ltree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___dyn_ltree_41;
	// System.Int16[] zlib.Deflate::dyn_dtree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___dyn_dtree_42;
	// System.Int16[] zlib.Deflate::bl_tree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___bl_tree_43;
	// zlib.Tree zlib.Deflate::l_desc
	Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * ___l_desc_44;
	// zlib.Tree zlib.Deflate::d_desc
	Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * ___d_desc_45;
	// zlib.Tree zlib.Deflate::bl_desc
	Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * ___bl_desc_46;
	// System.Int16[] zlib.Deflate::bl_count
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___bl_count_47;
	// System.Int32[] zlib.Deflate::heap
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___heap_48;
	// System.Int32 zlib.Deflate::heap_len
	int32_t ___heap_len_49;
	// System.Int32 zlib.Deflate::heap_max
	int32_t ___heap_max_50;
	// System.Byte[] zlib.Deflate::depth
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___depth_51;
	// System.Int32 zlib.Deflate::l_buf
	int32_t ___l_buf_52;
	// System.Int32 zlib.Deflate::lit_bufsize
	int32_t ___lit_bufsize_53;
	// System.Int32 zlib.Deflate::last_lit
	int32_t ___last_lit_54;
	// System.Int32 zlib.Deflate::d_buf
	int32_t ___d_buf_55;
	// System.Int32 zlib.Deflate::opt_len
	int32_t ___opt_len_56;
	// System.Int32 zlib.Deflate::static_len
	int32_t ___static_len_57;
	// System.Int32 zlib.Deflate::matches
	int32_t ___matches_58;
	// System.Int32 zlib.Deflate::last_eob_len
	int32_t ___last_eob_len_59;
	// System.Int16 zlib.Deflate::bi_buf
	int16_t ___bi_buf_60;
	// System.Int32 zlib.Deflate::bi_valid
	int32_t ___bi_valid_61;

public:
	inline static int32_t get_offset_of_strm_5() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___strm_5)); }
	inline ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * get_strm_5() const { return ___strm_5; }
	inline ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D ** get_address_of_strm_5() { return &___strm_5; }
	inline void set_strm_5(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * value)
	{
		___strm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strm_5), (void*)value);
	}

	inline static int32_t get_offset_of_status_6() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___status_6)); }
	inline int32_t get_status_6() const { return ___status_6; }
	inline int32_t* get_address_of_status_6() { return &___status_6; }
	inline void set_status_6(int32_t value)
	{
		___status_6 = value;
	}

	inline static int32_t get_offset_of_pending_buf_7() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___pending_buf_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_pending_buf_7() const { return ___pending_buf_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_pending_buf_7() { return &___pending_buf_7; }
	inline void set_pending_buf_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___pending_buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_buf_size_8() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___pending_buf_size_8)); }
	inline int32_t get_pending_buf_size_8() const { return ___pending_buf_size_8; }
	inline int32_t* get_address_of_pending_buf_size_8() { return &___pending_buf_size_8; }
	inline void set_pending_buf_size_8(int32_t value)
	{
		___pending_buf_size_8 = value;
	}

	inline static int32_t get_offset_of_pending_out_9() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___pending_out_9)); }
	inline int32_t get_pending_out_9() const { return ___pending_out_9; }
	inline int32_t* get_address_of_pending_out_9() { return &___pending_out_9; }
	inline void set_pending_out_9(int32_t value)
	{
		___pending_out_9 = value;
	}

	inline static int32_t get_offset_of_pending_10() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___pending_10)); }
	inline int32_t get_pending_10() const { return ___pending_10; }
	inline int32_t* get_address_of_pending_10() { return &___pending_10; }
	inline void set_pending_10(int32_t value)
	{
		___pending_10 = value;
	}

	inline static int32_t get_offset_of_noheader_11() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___noheader_11)); }
	inline int32_t get_noheader_11() const { return ___noheader_11; }
	inline int32_t* get_address_of_noheader_11() { return &___noheader_11; }
	inline void set_noheader_11(int32_t value)
	{
		___noheader_11 = value;
	}

	inline static int32_t get_offset_of_data_type_12() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___data_type_12)); }
	inline uint8_t get_data_type_12() const { return ___data_type_12; }
	inline uint8_t* get_address_of_data_type_12() { return &___data_type_12; }
	inline void set_data_type_12(uint8_t value)
	{
		___data_type_12 = value;
	}

	inline static int32_t get_offset_of_method_13() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___method_13)); }
	inline uint8_t get_method_13() const { return ___method_13; }
	inline uint8_t* get_address_of_method_13() { return &___method_13; }
	inline void set_method_13(uint8_t value)
	{
		___method_13 = value;
	}

	inline static int32_t get_offset_of_last_flush_14() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___last_flush_14)); }
	inline int32_t get_last_flush_14() const { return ___last_flush_14; }
	inline int32_t* get_address_of_last_flush_14() { return &___last_flush_14; }
	inline void set_last_flush_14(int32_t value)
	{
		___last_flush_14 = value;
	}

	inline static int32_t get_offset_of_w_size_15() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___w_size_15)); }
	inline int32_t get_w_size_15() const { return ___w_size_15; }
	inline int32_t* get_address_of_w_size_15() { return &___w_size_15; }
	inline void set_w_size_15(int32_t value)
	{
		___w_size_15 = value;
	}

	inline static int32_t get_offset_of_w_bits_16() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___w_bits_16)); }
	inline int32_t get_w_bits_16() const { return ___w_bits_16; }
	inline int32_t* get_address_of_w_bits_16() { return &___w_bits_16; }
	inline void set_w_bits_16(int32_t value)
	{
		___w_bits_16 = value;
	}

	inline static int32_t get_offset_of_w_mask_17() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___w_mask_17)); }
	inline int32_t get_w_mask_17() const { return ___w_mask_17; }
	inline int32_t* get_address_of_w_mask_17() { return &___w_mask_17; }
	inline void set_w_mask_17(int32_t value)
	{
		___w_mask_17 = value;
	}

	inline static int32_t get_offset_of_window_18() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___window_18)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_window_18() const { return ___window_18; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_window_18() { return &___window_18; }
	inline void set_window_18(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___window_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_18), (void*)value);
	}

	inline static int32_t get_offset_of_window_size_19() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___window_size_19)); }
	inline int32_t get_window_size_19() const { return ___window_size_19; }
	inline int32_t* get_address_of_window_size_19() { return &___window_size_19; }
	inline void set_window_size_19(int32_t value)
	{
		___window_size_19 = value;
	}

	inline static int32_t get_offset_of_prev_20() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___prev_20)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_prev_20() const { return ___prev_20; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_prev_20() { return &___prev_20; }
	inline void set_prev_20(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___prev_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_20), (void*)value);
	}

	inline static int32_t get_offset_of_head_21() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___head_21)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_head_21() const { return ___head_21; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_head_21() { return &___head_21; }
	inline void set_head_21(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___head_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_21), (void*)value);
	}

	inline static int32_t get_offset_of_ins_h_22() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___ins_h_22)); }
	inline int32_t get_ins_h_22() const { return ___ins_h_22; }
	inline int32_t* get_address_of_ins_h_22() { return &___ins_h_22; }
	inline void set_ins_h_22(int32_t value)
	{
		___ins_h_22 = value;
	}

	inline static int32_t get_offset_of_hash_size_23() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___hash_size_23)); }
	inline int32_t get_hash_size_23() const { return ___hash_size_23; }
	inline int32_t* get_address_of_hash_size_23() { return &___hash_size_23; }
	inline void set_hash_size_23(int32_t value)
	{
		___hash_size_23 = value;
	}

	inline static int32_t get_offset_of_hash_bits_24() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___hash_bits_24)); }
	inline int32_t get_hash_bits_24() const { return ___hash_bits_24; }
	inline int32_t* get_address_of_hash_bits_24() { return &___hash_bits_24; }
	inline void set_hash_bits_24(int32_t value)
	{
		___hash_bits_24 = value;
	}

	inline static int32_t get_offset_of_hash_mask_25() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___hash_mask_25)); }
	inline int32_t get_hash_mask_25() const { return ___hash_mask_25; }
	inline int32_t* get_address_of_hash_mask_25() { return &___hash_mask_25; }
	inline void set_hash_mask_25(int32_t value)
	{
		___hash_mask_25 = value;
	}

	inline static int32_t get_offset_of_hash_shift_26() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___hash_shift_26)); }
	inline int32_t get_hash_shift_26() const { return ___hash_shift_26; }
	inline int32_t* get_address_of_hash_shift_26() { return &___hash_shift_26; }
	inline void set_hash_shift_26(int32_t value)
	{
		___hash_shift_26 = value;
	}

	inline static int32_t get_offset_of_block_start_27() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___block_start_27)); }
	inline int32_t get_block_start_27() const { return ___block_start_27; }
	inline int32_t* get_address_of_block_start_27() { return &___block_start_27; }
	inline void set_block_start_27(int32_t value)
	{
		___block_start_27 = value;
	}

	inline static int32_t get_offset_of_match_length_28() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___match_length_28)); }
	inline int32_t get_match_length_28() const { return ___match_length_28; }
	inline int32_t* get_address_of_match_length_28() { return &___match_length_28; }
	inline void set_match_length_28(int32_t value)
	{
		___match_length_28 = value;
	}

	inline static int32_t get_offset_of_prev_match_29() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___prev_match_29)); }
	inline int32_t get_prev_match_29() const { return ___prev_match_29; }
	inline int32_t* get_address_of_prev_match_29() { return &___prev_match_29; }
	inline void set_prev_match_29(int32_t value)
	{
		___prev_match_29 = value;
	}

	inline static int32_t get_offset_of_match_available_30() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___match_available_30)); }
	inline int32_t get_match_available_30() const { return ___match_available_30; }
	inline int32_t* get_address_of_match_available_30() { return &___match_available_30; }
	inline void set_match_available_30(int32_t value)
	{
		___match_available_30 = value;
	}

	inline static int32_t get_offset_of_strstart_31() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___strstart_31)); }
	inline int32_t get_strstart_31() const { return ___strstart_31; }
	inline int32_t* get_address_of_strstart_31() { return &___strstart_31; }
	inline void set_strstart_31(int32_t value)
	{
		___strstart_31 = value;
	}

	inline static int32_t get_offset_of_match_start_32() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___match_start_32)); }
	inline int32_t get_match_start_32() const { return ___match_start_32; }
	inline int32_t* get_address_of_match_start_32() { return &___match_start_32; }
	inline void set_match_start_32(int32_t value)
	{
		___match_start_32 = value;
	}

	inline static int32_t get_offset_of_lookahead_33() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___lookahead_33)); }
	inline int32_t get_lookahead_33() const { return ___lookahead_33; }
	inline int32_t* get_address_of_lookahead_33() { return &___lookahead_33; }
	inline void set_lookahead_33(int32_t value)
	{
		___lookahead_33 = value;
	}

	inline static int32_t get_offset_of_prev_length_34() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___prev_length_34)); }
	inline int32_t get_prev_length_34() const { return ___prev_length_34; }
	inline int32_t* get_address_of_prev_length_34() { return &___prev_length_34; }
	inline void set_prev_length_34(int32_t value)
	{
		___prev_length_34 = value;
	}

	inline static int32_t get_offset_of_max_chain_length_35() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___max_chain_length_35)); }
	inline int32_t get_max_chain_length_35() const { return ___max_chain_length_35; }
	inline int32_t* get_address_of_max_chain_length_35() { return &___max_chain_length_35; }
	inline void set_max_chain_length_35(int32_t value)
	{
		___max_chain_length_35 = value;
	}

	inline static int32_t get_offset_of_max_lazy_match_36() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___max_lazy_match_36)); }
	inline int32_t get_max_lazy_match_36() const { return ___max_lazy_match_36; }
	inline int32_t* get_address_of_max_lazy_match_36() { return &___max_lazy_match_36; }
	inline void set_max_lazy_match_36(int32_t value)
	{
		___max_lazy_match_36 = value;
	}

	inline static int32_t get_offset_of_level_37() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___level_37)); }
	inline int32_t get_level_37() const { return ___level_37; }
	inline int32_t* get_address_of_level_37() { return &___level_37; }
	inline void set_level_37(int32_t value)
	{
		___level_37 = value;
	}

	inline static int32_t get_offset_of_strategy_38() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___strategy_38)); }
	inline int32_t get_strategy_38() const { return ___strategy_38; }
	inline int32_t* get_address_of_strategy_38() { return &___strategy_38; }
	inline void set_strategy_38(int32_t value)
	{
		___strategy_38 = value;
	}

	inline static int32_t get_offset_of_good_match_39() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___good_match_39)); }
	inline int32_t get_good_match_39() const { return ___good_match_39; }
	inline int32_t* get_address_of_good_match_39() { return &___good_match_39; }
	inline void set_good_match_39(int32_t value)
	{
		___good_match_39 = value;
	}

	inline static int32_t get_offset_of_nice_match_40() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___nice_match_40)); }
	inline int32_t get_nice_match_40() const { return ___nice_match_40; }
	inline int32_t* get_address_of_nice_match_40() { return &___nice_match_40; }
	inline void set_nice_match_40(int32_t value)
	{
		___nice_match_40 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_41() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___dyn_ltree_41)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_dyn_ltree_41() const { return ___dyn_ltree_41; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_dyn_ltree_41() { return &___dyn_ltree_41; }
	inline void set_dyn_ltree_41(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___dyn_ltree_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_ltree_41), (void*)value);
	}

	inline static int32_t get_offset_of_dyn_dtree_42() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___dyn_dtree_42)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_dyn_dtree_42() const { return ___dyn_dtree_42; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_dyn_dtree_42() { return &___dyn_dtree_42; }
	inline void set_dyn_dtree_42(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___dyn_dtree_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_dtree_42), (void*)value);
	}

	inline static int32_t get_offset_of_bl_tree_43() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___bl_tree_43)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_bl_tree_43() const { return ___bl_tree_43; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_bl_tree_43() { return &___bl_tree_43; }
	inline void set_bl_tree_43(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___bl_tree_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_tree_43), (void*)value);
	}

	inline static int32_t get_offset_of_l_desc_44() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___l_desc_44)); }
	inline Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * get_l_desc_44() const { return ___l_desc_44; }
	inline Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A ** get_address_of_l_desc_44() { return &___l_desc_44; }
	inline void set_l_desc_44(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * value)
	{
		___l_desc_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_desc_44), (void*)value);
	}

	inline static int32_t get_offset_of_d_desc_45() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___d_desc_45)); }
	inline Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * get_d_desc_45() const { return ___d_desc_45; }
	inline Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A ** get_address_of_d_desc_45() { return &___d_desc_45; }
	inline void set_d_desc_45(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * value)
	{
		___d_desc_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_desc_45), (void*)value);
	}

	inline static int32_t get_offset_of_bl_desc_46() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___bl_desc_46)); }
	inline Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * get_bl_desc_46() const { return ___bl_desc_46; }
	inline Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A ** get_address_of_bl_desc_46() { return &___bl_desc_46; }
	inline void set_bl_desc_46(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * value)
	{
		___bl_desc_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_desc_46), (void*)value);
	}

	inline static int32_t get_offset_of_bl_count_47() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___bl_count_47)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_bl_count_47() const { return ___bl_count_47; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_bl_count_47() { return &___bl_count_47; }
	inline void set_bl_count_47(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___bl_count_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_count_47), (void*)value);
	}

	inline static int32_t get_offset_of_heap_48() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___heap_48)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_heap_48() const { return ___heap_48; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_heap_48() { return &___heap_48; }
	inline void set_heap_48(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___heap_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heap_48), (void*)value);
	}

	inline static int32_t get_offset_of_heap_len_49() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___heap_len_49)); }
	inline int32_t get_heap_len_49() const { return ___heap_len_49; }
	inline int32_t* get_address_of_heap_len_49() { return &___heap_len_49; }
	inline void set_heap_len_49(int32_t value)
	{
		___heap_len_49 = value;
	}

	inline static int32_t get_offset_of_heap_max_50() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___heap_max_50)); }
	inline int32_t get_heap_max_50() const { return ___heap_max_50; }
	inline int32_t* get_address_of_heap_max_50() { return &___heap_max_50; }
	inline void set_heap_max_50(int32_t value)
	{
		___heap_max_50 = value;
	}

	inline static int32_t get_offset_of_depth_51() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___depth_51)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_depth_51() const { return ___depth_51; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_depth_51() { return &___depth_51; }
	inline void set_depth_51(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___depth_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depth_51), (void*)value);
	}

	inline static int32_t get_offset_of_l_buf_52() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___l_buf_52)); }
	inline int32_t get_l_buf_52() const { return ___l_buf_52; }
	inline int32_t* get_address_of_l_buf_52() { return &___l_buf_52; }
	inline void set_l_buf_52(int32_t value)
	{
		___l_buf_52 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_53() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___lit_bufsize_53)); }
	inline int32_t get_lit_bufsize_53() const { return ___lit_bufsize_53; }
	inline int32_t* get_address_of_lit_bufsize_53() { return &___lit_bufsize_53; }
	inline void set_lit_bufsize_53(int32_t value)
	{
		___lit_bufsize_53 = value;
	}

	inline static int32_t get_offset_of_last_lit_54() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___last_lit_54)); }
	inline int32_t get_last_lit_54() const { return ___last_lit_54; }
	inline int32_t* get_address_of_last_lit_54() { return &___last_lit_54; }
	inline void set_last_lit_54(int32_t value)
	{
		___last_lit_54 = value;
	}

	inline static int32_t get_offset_of_d_buf_55() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___d_buf_55)); }
	inline int32_t get_d_buf_55() const { return ___d_buf_55; }
	inline int32_t* get_address_of_d_buf_55() { return &___d_buf_55; }
	inline void set_d_buf_55(int32_t value)
	{
		___d_buf_55 = value;
	}

	inline static int32_t get_offset_of_opt_len_56() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___opt_len_56)); }
	inline int32_t get_opt_len_56() const { return ___opt_len_56; }
	inline int32_t* get_address_of_opt_len_56() { return &___opt_len_56; }
	inline void set_opt_len_56(int32_t value)
	{
		___opt_len_56 = value;
	}

	inline static int32_t get_offset_of_static_len_57() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___static_len_57)); }
	inline int32_t get_static_len_57() const { return ___static_len_57; }
	inline int32_t* get_address_of_static_len_57() { return &___static_len_57; }
	inline void set_static_len_57(int32_t value)
	{
		___static_len_57 = value;
	}

	inline static int32_t get_offset_of_matches_58() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___matches_58)); }
	inline int32_t get_matches_58() const { return ___matches_58; }
	inline int32_t* get_address_of_matches_58() { return &___matches_58; }
	inline void set_matches_58(int32_t value)
	{
		___matches_58 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_59() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___last_eob_len_59)); }
	inline int32_t get_last_eob_len_59() const { return ___last_eob_len_59; }
	inline int32_t* get_address_of_last_eob_len_59() { return &___last_eob_len_59; }
	inline void set_last_eob_len_59(int32_t value)
	{
		___last_eob_len_59 = value;
	}

	inline static int32_t get_offset_of_bi_buf_60() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___bi_buf_60)); }
	inline int16_t get_bi_buf_60() const { return ___bi_buf_60; }
	inline int16_t* get_address_of_bi_buf_60() { return &___bi_buf_60; }
	inline void set_bi_buf_60(int16_t value)
	{
		___bi_buf_60 = value;
	}

	inline static int32_t get_offset_of_bi_valid_61() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7, ___bi_valid_61)); }
	inline int32_t get_bi_valid_61() const { return ___bi_valid_61; }
	inline int32_t* get_address_of_bi_valid_61() { return &___bi_valid_61; }
	inline void set_bi_valid_61(int32_t value)
	{
		___bi_valid_61 = value;
	}
};

struct Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_StaticFields
{
public:
	// zlib.Deflate/Config[] zlib.Deflate::config_table
	ConfigU5BU5D_tEF1D1552175A756AAFFE7507E3DC4AB828C90197* ___config_table_0;
	// System.String[] zlib.Deflate::z_errmsg
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___z_errmsg_1;
	// System.Int32 zlib.Deflate::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_2;
	// System.Int32 zlib.Deflate::L_CODES
	int32_t ___L_CODES_3;
	// System.Int32 zlib.Deflate::HEAP_SIZE
	int32_t ___HEAP_SIZE_4;

public:
	inline static int32_t get_offset_of_config_table_0() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_StaticFields, ___config_table_0)); }
	inline ConfigU5BU5D_tEF1D1552175A756AAFFE7507E3DC4AB828C90197* get_config_table_0() const { return ___config_table_0; }
	inline ConfigU5BU5D_tEF1D1552175A756AAFFE7507E3DC4AB828C90197** get_address_of_config_table_0() { return &___config_table_0; }
	inline void set_config_table_0(ConfigU5BU5D_tEF1D1552175A756AAFFE7507E3DC4AB828C90197* value)
	{
		___config_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_table_0), (void*)value);
	}

	inline static int32_t get_offset_of_z_errmsg_1() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_StaticFields, ___z_errmsg_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_z_errmsg_1() const { return ___z_errmsg_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_z_errmsg_1() { return &___z_errmsg_1; }
	inline void set_z_errmsg_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___z_errmsg_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___z_errmsg_1), (void*)value);
	}

	inline static int32_t get_offset_of_MIN_LOOKAHEAD_2() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_StaticFields, ___MIN_LOOKAHEAD_2)); }
	inline int32_t get_MIN_LOOKAHEAD_2() const { return ___MIN_LOOKAHEAD_2; }
	inline int32_t* get_address_of_MIN_LOOKAHEAD_2() { return &___MIN_LOOKAHEAD_2; }
	inline void set_MIN_LOOKAHEAD_2(int32_t value)
	{
		___MIN_LOOKAHEAD_2 = value;
	}

	inline static int32_t get_offset_of_L_CODES_3() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_StaticFields, ___L_CODES_3)); }
	inline int32_t get_L_CODES_3() const { return ___L_CODES_3; }
	inline int32_t* get_address_of_L_CODES_3() { return &___L_CODES_3; }
	inline void set_L_CODES_3(int32_t value)
	{
		___L_CODES_3 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_4() { return static_cast<int32_t>(offsetof(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_StaticFields, ___HEAP_SIZE_4)); }
	inline int32_t get_HEAP_SIZE_4() const { return ___HEAP_SIZE_4; }
	inline int32_t* get_address_of_HEAP_SIZE_4() { return &___HEAP_SIZE_4; }
	inline void set_HEAP_SIZE_4(int32_t value)
	{
		___HEAP_SIZE_4 = value;
	}
};


// zlib.InfBlocks
struct  InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD  : public RuntimeObject
{
public:
	// System.Int32 zlib.InfBlocks::mode
	int32_t ___mode_2;
	// System.Int32 zlib.InfBlocks::left
	int32_t ___left_3;
	// System.Int32 zlib.InfBlocks::table
	int32_t ___table_4;
	// System.Int32 zlib.InfBlocks::index
	int32_t ___index_5;
	// System.Int32[] zlib.InfBlocks::blens
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___blens_6;
	// System.Int32[] zlib.InfBlocks::bb
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___bb_7;
	// System.Int32[] zlib.InfBlocks::tb
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tb_8;
	// zlib.InfCodes zlib.InfBlocks::codes
	InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * ___codes_9;
	// System.Int32 zlib.InfBlocks::last
	int32_t ___last_10;
	// System.Int32 zlib.InfBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 zlib.InfBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] zlib.InfBlocks::hufts
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___hufts_13;
	// System.Byte[] zlib.InfBlocks::window
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___window_14;
	// System.Int32 zlib.InfBlocks::end
	int32_t ___end_15;
	// System.Int32 zlib.InfBlocks::read
	int32_t ___read_16;
	// System.Int32 zlib.InfBlocks::write
	int32_t ___write_17;
	// System.Object zlib.InfBlocks::checkfn
	RuntimeObject * ___checkfn_18;
	// System.Int64 zlib.InfBlocks::check
	int64_t ___check_19;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_left_3() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___left_3)); }
	inline int32_t get_left_3() const { return ___left_3; }
	inline int32_t* get_address_of_left_3() { return &___left_3; }
	inline void set_left_3(int32_t value)
	{
		___left_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___table_4)); }
	inline int32_t get_table_4() const { return ___table_4; }
	inline int32_t* get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(int32_t value)
	{
		___table_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_blens_6() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___blens_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_blens_6() const { return ___blens_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_blens_6() { return &___blens_6; }
	inline void set_blens_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___blens_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blens_6), (void*)value);
	}

	inline static int32_t get_offset_of_bb_7() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___bb_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_bb_7() const { return ___bb_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_bb_7() { return &___bb_7; }
	inline void set_bb_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___bb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bb_7), (void*)value);
	}

	inline static int32_t get_offset_of_tb_8() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___tb_8)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_tb_8() const { return ___tb_8; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_tb_8() { return &___tb_8; }
	inline void set_tb_8(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___tb_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tb_8), (void*)value);
	}

	inline static int32_t get_offset_of_codes_9() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___codes_9)); }
	inline InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * get_codes_9() const { return ___codes_9; }
	inline InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 ** get_address_of_codes_9() { return &___codes_9; }
	inline void set_codes_9(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * value)
	{
		___codes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codes_9), (void*)value);
	}

	inline static int32_t get_offset_of_last_10() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___last_10)); }
	inline int32_t get_last_10() const { return ___last_10; }
	inline int32_t* get_address_of_last_10() { return &___last_10; }
	inline void set_last_10(int32_t value)
	{
		___last_10 = value;
	}

	inline static int32_t get_offset_of_bitk_11() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___bitk_11)); }
	inline int32_t get_bitk_11() const { return ___bitk_11; }
	inline int32_t* get_address_of_bitk_11() { return &___bitk_11; }
	inline void set_bitk_11(int32_t value)
	{
		___bitk_11 = value;
	}

	inline static int32_t get_offset_of_bitb_12() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___bitb_12)); }
	inline int32_t get_bitb_12() const { return ___bitb_12; }
	inline int32_t* get_address_of_bitb_12() { return &___bitb_12; }
	inline void set_bitb_12(int32_t value)
	{
		___bitb_12 = value;
	}

	inline static int32_t get_offset_of_hufts_13() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___hufts_13)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_hufts_13() const { return ___hufts_13; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_hufts_13() { return &___hufts_13; }
	inline void set_hufts_13(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___hufts_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hufts_13), (void*)value);
	}

	inline static int32_t get_offset_of_window_14() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___window_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_window_14() const { return ___window_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_window_14() { return &___window_14; }
	inline void set_window_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___window_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_14), (void*)value);
	}

	inline static int32_t get_offset_of_end_15() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___end_15)); }
	inline int32_t get_end_15() const { return ___end_15; }
	inline int32_t* get_address_of_end_15() { return &___end_15; }
	inline void set_end_15(int32_t value)
	{
		___end_15 = value;
	}

	inline static int32_t get_offset_of_read_16() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___read_16)); }
	inline int32_t get_read_16() const { return ___read_16; }
	inline int32_t* get_address_of_read_16() { return &___read_16; }
	inline void set_read_16(int32_t value)
	{
		___read_16 = value;
	}

	inline static int32_t get_offset_of_write_17() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___write_17)); }
	inline int32_t get_write_17() const { return ___write_17; }
	inline int32_t* get_address_of_write_17() { return &___write_17; }
	inline void set_write_17(int32_t value)
	{
		___write_17 = value;
	}

	inline static int32_t get_offset_of_checkfn_18() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___checkfn_18)); }
	inline RuntimeObject * get_checkfn_18() const { return ___checkfn_18; }
	inline RuntimeObject ** get_address_of_checkfn_18() { return &___checkfn_18; }
	inline void set_checkfn_18(RuntimeObject * value)
	{
		___checkfn_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkfn_18), (void*)value);
	}

	inline static int32_t get_offset_of_check_19() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD, ___check_19)); }
	inline int64_t get_check_19() const { return ___check_19; }
	inline int64_t* get_address_of_check_19() { return &___check_19; }
	inline void set_check_19(int64_t value)
	{
		___check_19 = value;
	}
};

struct InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD_StaticFields
{
public:
	// System.Int32[] zlib.InfBlocks::inflate_mask
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___inflate_mask_0;
	// System.Int32[] zlib.InfBlocks::border
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___border_1;

public:
	inline static int32_t get_offset_of_inflate_mask_0() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD_StaticFields, ___inflate_mask_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_inflate_mask_0() const { return ___inflate_mask_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_inflate_mask_0() { return &___inflate_mask_0; }
	inline void set_inflate_mask_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___inflate_mask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inflate_mask_0), (void*)value);
	}

	inline static int32_t get_offset_of_border_1() { return static_cast<int32_t>(offsetof(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD_StaticFields, ___border_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_border_1() const { return ___border_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_border_1() { return &___border_1; }
	inline void set_border_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___border_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___border_1), (void*)value);
	}
};


// zlib.InfCodes
struct  InfCodes_t9E00C30617927414B4347A5AD556D26037178D01  : public RuntimeObject
{
public:
	// System.Int32 zlib.InfCodes::mode
	int32_t ___mode_1;
	// System.Int32 zlib.InfCodes::len
	int32_t ___len_2;
	// System.Int32[] zlib.InfCodes::tree
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tree_3;
	// System.Int32 zlib.InfCodes::tree_index
	int32_t ___tree_index_4;
	// System.Int32 zlib.InfCodes::need
	int32_t ___need_5;
	// System.Int32 zlib.InfCodes::lit
	int32_t ___lit_6;
	// System.Int32 zlib.InfCodes::get_Renamed
	int32_t ___get_Renamed_7;
	// System.Int32 zlib.InfCodes::dist
	int32_t ___dist_8;
	// System.Byte zlib.InfCodes::lbits
	uint8_t ___lbits_9;
	// System.Byte zlib.InfCodes::dbits
	uint8_t ___dbits_10;
	// System.Int32[] zlib.InfCodes::ltree
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___ltree_11;
	// System.Int32 zlib.InfCodes::ltree_index
	int32_t ___ltree_index_12;
	// System.Int32[] zlib.InfCodes::dtree
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___dtree_13;
	// System.Int32 zlib.InfCodes::dtree_index
	int32_t ___dtree_index_14;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_tree_3() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___tree_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_tree_3() const { return ___tree_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_tree_3() { return &___tree_3; }
	inline void set_tree_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tree_3), (void*)value);
	}

	inline static int32_t get_offset_of_tree_index_4() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___tree_index_4)); }
	inline int32_t get_tree_index_4() const { return ___tree_index_4; }
	inline int32_t* get_address_of_tree_index_4() { return &___tree_index_4; }
	inline void set_tree_index_4(int32_t value)
	{
		___tree_index_4 = value;
	}

	inline static int32_t get_offset_of_need_5() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___need_5)); }
	inline int32_t get_need_5() const { return ___need_5; }
	inline int32_t* get_address_of_need_5() { return &___need_5; }
	inline void set_need_5(int32_t value)
	{
		___need_5 = value;
	}

	inline static int32_t get_offset_of_lit_6() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___lit_6)); }
	inline int32_t get_lit_6() const { return ___lit_6; }
	inline int32_t* get_address_of_lit_6() { return &___lit_6; }
	inline void set_lit_6(int32_t value)
	{
		___lit_6 = value;
	}

	inline static int32_t get_offset_of_get_Renamed_7() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___get_Renamed_7)); }
	inline int32_t get_get_Renamed_7() const { return ___get_Renamed_7; }
	inline int32_t* get_address_of_get_Renamed_7() { return &___get_Renamed_7; }
	inline void set_get_Renamed_7(int32_t value)
	{
		___get_Renamed_7 = value;
	}

	inline static int32_t get_offset_of_dist_8() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___dist_8)); }
	inline int32_t get_dist_8() const { return ___dist_8; }
	inline int32_t* get_address_of_dist_8() { return &___dist_8; }
	inline void set_dist_8(int32_t value)
	{
		___dist_8 = value;
	}

	inline static int32_t get_offset_of_lbits_9() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___lbits_9)); }
	inline uint8_t get_lbits_9() const { return ___lbits_9; }
	inline uint8_t* get_address_of_lbits_9() { return &___lbits_9; }
	inline void set_lbits_9(uint8_t value)
	{
		___lbits_9 = value;
	}

	inline static int32_t get_offset_of_dbits_10() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___dbits_10)); }
	inline uint8_t get_dbits_10() const { return ___dbits_10; }
	inline uint8_t* get_address_of_dbits_10() { return &___dbits_10; }
	inline void set_dbits_10(uint8_t value)
	{
		___dbits_10 = value;
	}

	inline static int32_t get_offset_of_ltree_11() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___ltree_11)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_ltree_11() const { return ___ltree_11; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_ltree_11() { return &___ltree_11; }
	inline void set_ltree_11(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___ltree_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ltree_11), (void*)value);
	}

	inline static int32_t get_offset_of_ltree_index_12() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___ltree_index_12)); }
	inline int32_t get_ltree_index_12() const { return ___ltree_index_12; }
	inline int32_t* get_address_of_ltree_index_12() { return &___ltree_index_12; }
	inline void set_ltree_index_12(int32_t value)
	{
		___ltree_index_12 = value;
	}

	inline static int32_t get_offset_of_dtree_13() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___dtree_13)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_dtree_13() const { return ___dtree_13; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_dtree_13() { return &___dtree_13; }
	inline void set_dtree_13(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___dtree_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtree_13), (void*)value);
	}

	inline static int32_t get_offset_of_dtree_index_14() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01, ___dtree_index_14)); }
	inline int32_t get_dtree_index_14() const { return ___dtree_index_14; }
	inline int32_t* get_address_of_dtree_index_14() { return &___dtree_index_14; }
	inline void set_dtree_index_14(int32_t value)
	{
		___dtree_index_14 = value;
	}
};

struct InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields
{
public:
	// System.Int32[] zlib.InfCodes::inflate_mask
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___inflate_mask_0;

public:
	inline static int32_t get_offset_of_inflate_mask_0() { return static_cast<int32_t>(offsetof(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields, ___inflate_mask_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_inflate_mask_0() const { return ___inflate_mask_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_inflate_mask_0() { return &___inflate_mask_0; }
	inline void set_inflate_mask_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___inflate_mask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inflate_mask_0), (void*)value);
	}
};


// zlib.InfTree
struct  InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49  : public RuntimeObject
{
public:

public:
};

struct InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields
{
public:
	// System.Int32[] zlib.InfTree::fixed_tl
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___fixed_tl_0;
	// System.Int32[] zlib.InfTree::fixed_td
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___fixed_td_1;
	// System.Int32[] zlib.InfTree::cplens
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___cplens_2;
	// System.Int32[] zlib.InfTree::cplext
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___cplext_3;
	// System.Int32[] zlib.InfTree::cpdist
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___cpdist_4;
	// System.Int32[] zlib.InfTree::cpdext
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___cpdext_5;

public:
	inline static int32_t get_offset_of_fixed_tl_0() { return static_cast<int32_t>(offsetof(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields, ___fixed_tl_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_fixed_tl_0() const { return ___fixed_tl_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_fixed_tl_0() { return &___fixed_tl_0; }
	inline void set_fixed_tl_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___fixed_tl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_tl_0), (void*)value);
	}

	inline static int32_t get_offset_of_fixed_td_1() { return static_cast<int32_t>(offsetof(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields, ___fixed_td_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_fixed_td_1() const { return ___fixed_td_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_fixed_td_1() { return &___fixed_td_1; }
	inline void set_fixed_td_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___fixed_td_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_td_1), (void*)value);
	}

	inline static int32_t get_offset_of_cplens_2() { return static_cast<int32_t>(offsetof(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields, ___cplens_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_cplens_2() const { return ___cplens_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_cplens_2() { return &___cplens_2; }
	inline void set_cplens_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___cplens_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplens_2), (void*)value);
	}

	inline static int32_t get_offset_of_cplext_3() { return static_cast<int32_t>(offsetof(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields, ___cplext_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_cplext_3() const { return ___cplext_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_cplext_3() { return &___cplext_3; }
	inline void set_cplext_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___cplext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplext_3), (void*)value);
	}

	inline static int32_t get_offset_of_cpdist_4() { return static_cast<int32_t>(offsetof(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields, ___cpdist_4)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_cpdist_4() const { return ___cpdist_4; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_cpdist_4() { return &___cpdist_4; }
	inline void set_cpdist_4(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___cpdist_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdist_4), (void*)value);
	}

	inline static int32_t get_offset_of_cpdext_5() { return static_cast<int32_t>(offsetof(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields, ___cpdext_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_cpdext_5() const { return ___cpdext_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_cpdext_5() { return &___cpdext_5; }
	inline void set_cpdext_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___cpdext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdext_5), (void*)value);
	}
};


// zlib.Inflate
struct  Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701  : public RuntimeObject
{
public:
	// System.Int32 zlib.Inflate::mode
	int32_t ___mode_0;
	// System.Int32 zlib.Inflate::method
	int32_t ___method_1;
	// System.Int64[] zlib.Inflate::was
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___was_2;
	// System.Int64 zlib.Inflate::need
	int64_t ___need_3;
	// System.Int32 zlib.Inflate::marker
	int32_t ___marker_4;
	// System.Int32 zlib.Inflate::nowrap
	int32_t ___nowrap_5;
	// System.Int32 zlib.Inflate::wbits
	int32_t ___wbits_6;
	// zlib.InfBlocks zlib.Inflate::blocks
	InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * ___blocks_7;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___method_1)); }
	inline int32_t get_method_1() const { return ___method_1; }
	inline int32_t* get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(int32_t value)
	{
		___method_1 = value;
	}

	inline static int32_t get_offset_of_was_2() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___was_2)); }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* get_was_2() const { return ___was_2; }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F** get_address_of_was_2() { return &___was_2; }
	inline void set_was_2(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* value)
	{
		___was_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___was_2), (void*)value);
	}

	inline static int32_t get_offset_of_need_3() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___need_3)); }
	inline int64_t get_need_3() const { return ___need_3; }
	inline int64_t* get_address_of_need_3() { return &___need_3; }
	inline void set_need_3(int64_t value)
	{
		___need_3 = value;
	}

	inline static int32_t get_offset_of_marker_4() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___marker_4)); }
	inline int32_t get_marker_4() const { return ___marker_4; }
	inline int32_t* get_address_of_marker_4() { return &___marker_4; }
	inline void set_marker_4(int32_t value)
	{
		___marker_4 = value;
	}

	inline static int32_t get_offset_of_nowrap_5() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___nowrap_5)); }
	inline int32_t get_nowrap_5() const { return ___nowrap_5; }
	inline int32_t* get_address_of_nowrap_5() { return &___nowrap_5; }
	inline void set_nowrap_5(int32_t value)
	{
		___nowrap_5 = value;
	}

	inline static int32_t get_offset_of_wbits_6() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___wbits_6)); }
	inline int32_t get_wbits_6() const { return ___wbits_6; }
	inline int32_t* get_address_of_wbits_6() { return &___wbits_6; }
	inline void set_wbits_6(int32_t value)
	{
		___wbits_6 = value;
	}

	inline static int32_t get_offset_of_blocks_7() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701, ___blocks_7)); }
	inline InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * get_blocks_7() const { return ___blocks_7; }
	inline InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD ** get_address_of_blocks_7() { return &___blocks_7; }
	inline void set_blocks_7(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * value)
	{
		___blocks_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocks_7), (void*)value);
	}
};

struct Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701_StaticFields
{
public:
	// System.Byte[] zlib.Inflate::mark
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mark_8;

public:
	inline static int32_t get_offset_of_mark_8() { return static_cast<int32_t>(offsetof(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701_StaticFields, ___mark_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_mark_8() const { return ___mark_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_mark_8() { return &___mark_8; }
	inline void set_mark_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___mark_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mark_8), (void*)value);
	}
};


// zlib.StaticTree
struct  StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1  : public RuntimeObject
{
public:
	// System.Int16[] zlib.StaticTree::static_tree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___static_tree_6;
	// System.Int32[] zlib.StaticTree::extra_bits
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___extra_bits_7;
	// System.Int32 zlib.StaticTree::extra_base
	int32_t ___extra_base_8;
	// System.Int32 zlib.StaticTree::elems
	int32_t ___elems_9;
	// System.Int32 zlib.StaticTree::max_length
	int32_t ___max_length_10;

public:
	inline static int32_t get_offset_of_static_tree_6() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1, ___static_tree_6)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_static_tree_6() const { return ___static_tree_6; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_static_tree_6() { return &___static_tree_6; }
	inline void set_static_tree_6(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___static_tree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_tree_6), (void*)value);
	}

	inline static int32_t get_offset_of_extra_bits_7() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1, ___extra_bits_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_extra_bits_7() const { return ___extra_bits_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_extra_bits_7() { return &___extra_bits_7; }
	inline void set_extra_bits_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___extra_bits_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_bits_7), (void*)value);
	}

	inline static int32_t get_offset_of_extra_base_8() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1, ___extra_base_8)); }
	inline int32_t get_extra_base_8() const { return ___extra_base_8; }
	inline int32_t* get_address_of_extra_base_8() { return &___extra_base_8; }
	inline void set_extra_base_8(int32_t value)
	{
		___extra_base_8 = value;
	}

	inline static int32_t get_offset_of_elems_9() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1, ___elems_9)); }
	inline int32_t get_elems_9() const { return ___elems_9; }
	inline int32_t* get_address_of_elems_9() { return &___elems_9; }
	inline void set_elems_9(int32_t value)
	{
		___elems_9 = value;
	}

	inline static int32_t get_offset_of_max_length_10() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1, ___max_length_10)); }
	inline int32_t get_max_length_10() const { return ___max_length_10; }
	inline int32_t* get_address_of_max_length_10() { return &___max_length_10; }
	inline void set_max_length_10(int32_t value)
	{
		___max_length_10 = value;
	}
};

struct StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields
{
public:
	// System.Int32 zlib.StaticTree::L_CODES
	int32_t ___L_CODES_0;
	// System.Int16[] zlib.StaticTree::static_ltree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___static_ltree_1;
	// System.Int16[] zlib.StaticTree::static_dtree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___static_dtree_2;
	// zlib.StaticTree zlib.StaticTree::static_l_desc
	StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * ___static_l_desc_3;
	// zlib.StaticTree zlib.StaticTree::static_d_desc
	StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * ___static_d_desc_4;
	// zlib.StaticTree zlib.StaticTree::static_bl_desc
	StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * ___static_bl_desc_5;

public:
	inline static int32_t get_offset_of_L_CODES_0() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields, ___L_CODES_0)); }
	inline int32_t get_L_CODES_0() const { return ___L_CODES_0; }
	inline int32_t* get_address_of_L_CODES_0() { return &___L_CODES_0; }
	inline void set_L_CODES_0(int32_t value)
	{
		___L_CODES_0 = value;
	}

	inline static int32_t get_offset_of_static_ltree_1() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields, ___static_ltree_1)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_static_ltree_1() const { return ___static_ltree_1; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_static_ltree_1() { return &___static_ltree_1; }
	inline void set_static_ltree_1(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___static_ltree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_ltree_1), (void*)value);
	}

	inline static int32_t get_offset_of_static_dtree_2() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields, ___static_dtree_2)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_static_dtree_2() const { return ___static_dtree_2; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_static_dtree_2() { return &___static_dtree_2; }
	inline void set_static_dtree_2(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___static_dtree_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_dtree_2), (void*)value);
	}

	inline static int32_t get_offset_of_static_l_desc_3() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields, ___static_l_desc_3)); }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * get_static_l_desc_3() const { return ___static_l_desc_3; }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 ** get_address_of_static_l_desc_3() { return &___static_l_desc_3; }
	inline void set_static_l_desc_3(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * value)
	{
		___static_l_desc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_l_desc_3), (void*)value);
	}

	inline static int32_t get_offset_of_static_d_desc_4() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields, ___static_d_desc_4)); }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * get_static_d_desc_4() const { return ___static_d_desc_4; }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 ** get_address_of_static_d_desc_4() { return &___static_d_desc_4; }
	inline void set_static_d_desc_4(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * value)
	{
		___static_d_desc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_d_desc_4), (void*)value);
	}

	inline static int32_t get_offset_of_static_bl_desc_5() { return static_cast<int32_t>(offsetof(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields, ___static_bl_desc_5)); }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * get_static_bl_desc_5() const { return ___static_bl_desc_5; }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 ** get_address_of_static_bl_desc_5() { return &___static_bl_desc_5; }
	inline void set_static_bl_desc_5(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * value)
	{
		___static_bl_desc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_bl_desc_5), (void*)value);
	}
};


// zlib.SupportClass
struct  SupportClass_t43C40C2F0ED936CBDD3ED69FBE87FFF4642A2066  : public RuntimeObject
{
public:

public:
};


// zlib.Tree
struct  Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A  : public RuntimeObject
{
public:
	// System.Int16[] zlib.Tree::dyn_tree
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___dyn_tree_10;
	// System.Int32 zlib.Tree::max_code
	int32_t ___max_code_11;
	// zlib.StaticTree zlib.Tree::stat_desc
	StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * ___stat_desc_12;

public:
	inline static int32_t get_offset_of_dyn_tree_10() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A, ___dyn_tree_10)); }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* get_dyn_tree_10() const { return ___dyn_tree_10; }
	inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28** get_address_of_dyn_tree_10() { return &___dyn_tree_10; }
	inline void set_dyn_tree_10(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* value)
	{
		___dyn_tree_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_tree_10), (void*)value);
	}

	inline static int32_t get_offset_of_max_code_11() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A, ___max_code_11)); }
	inline int32_t get_max_code_11() const { return ___max_code_11; }
	inline int32_t* get_address_of_max_code_11() { return &___max_code_11; }
	inline void set_max_code_11(int32_t value)
	{
		___max_code_11 = value;
	}

	inline static int32_t get_offset_of_stat_desc_12() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A, ___stat_desc_12)); }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * get_stat_desc_12() const { return ___stat_desc_12; }
	inline StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 ** get_address_of_stat_desc_12() { return &___stat_desc_12; }
	inline void set_stat_desc_12(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * value)
	{
		___stat_desc_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stat_desc_12), (void*)value);
	}
};

struct Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields
{
public:
	// System.Int32 zlib.Tree::L_CODES
	int32_t ___L_CODES_0;
	// System.Int32 zlib.Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_1;
	// System.Int32[] zlib.Tree::extra_lbits
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___extra_lbits_2;
	// System.Int32[] zlib.Tree::extra_dbits
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___extra_dbits_3;
	// System.Int32[] zlib.Tree::extra_blbits
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___extra_blbits_4;
	// System.Byte[] zlib.Tree::bl_order
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bl_order_5;
	// System.Byte[] zlib.Tree::_dist_code
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____dist_code_6;
	// System.Byte[] zlib.Tree::_length_code
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____length_code_7;
	// System.Int32[] zlib.Tree::base_length
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___base_length_8;
	// System.Int32[] zlib.Tree::base_dist
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___base_dist_9;

public:
	inline static int32_t get_offset_of_L_CODES_0() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___L_CODES_0)); }
	inline int32_t get_L_CODES_0() const { return ___L_CODES_0; }
	inline int32_t* get_address_of_L_CODES_0() { return &___L_CODES_0; }
	inline void set_L_CODES_0(int32_t value)
	{
		___L_CODES_0 = value;
	}

	inline static int32_t get_offset_of_HEAP_SIZE_1() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___HEAP_SIZE_1)); }
	inline int32_t get_HEAP_SIZE_1() const { return ___HEAP_SIZE_1; }
	inline int32_t* get_address_of_HEAP_SIZE_1() { return &___HEAP_SIZE_1; }
	inline void set_HEAP_SIZE_1(int32_t value)
	{
		___HEAP_SIZE_1 = value;
	}

	inline static int32_t get_offset_of_extra_lbits_2() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___extra_lbits_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_extra_lbits_2() const { return ___extra_lbits_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_extra_lbits_2() { return &___extra_lbits_2; }
	inline void set_extra_lbits_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___extra_lbits_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_lbits_2), (void*)value);
	}

	inline static int32_t get_offset_of_extra_dbits_3() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___extra_dbits_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_extra_dbits_3() const { return ___extra_dbits_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_extra_dbits_3() { return &___extra_dbits_3; }
	inline void set_extra_dbits_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___extra_dbits_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_dbits_3), (void*)value);
	}

	inline static int32_t get_offset_of_extra_blbits_4() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___extra_blbits_4)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_extra_blbits_4() const { return ___extra_blbits_4; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_extra_blbits_4() { return &___extra_blbits_4; }
	inline void set_extra_blbits_4(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___extra_blbits_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_blbits_4), (void*)value);
	}

	inline static int32_t get_offset_of_bl_order_5() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___bl_order_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bl_order_5() const { return ___bl_order_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bl_order_5() { return &___bl_order_5; }
	inline void set_bl_order_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bl_order_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_order_5), (void*)value);
	}

	inline static int32_t get_offset_of__dist_code_6() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ____dist_code_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__dist_code_6() const { return ____dist_code_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__dist_code_6() { return &____dist_code_6; }
	inline void set__dist_code_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____dist_code_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dist_code_6), (void*)value);
	}

	inline static int32_t get_offset_of__length_code_7() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ____length_code_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__length_code_7() const { return ____length_code_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__length_code_7() { return &____length_code_7; }
	inline void set__length_code_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____length_code_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____length_code_7), (void*)value);
	}

	inline static int32_t get_offset_of_base_length_8() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___base_length_8)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_base_length_8() const { return ___base_length_8; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_base_length_8() { return &___base_length_8; }
	inline void set_base_length_8(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___base_length_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_length_8), (void*)value);
	}

	inline static int32_t get_offset_of_base_dist_9() { return static_cast<int32_t>(offsetof(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields, ___base_dist_9)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_base_dist_9() const { return ___base_dist_9; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_base_dist_9() { return &___base_dist_9; }
	inline void set_base_dist_9(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___base_dist_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_dist_9), (void*)value);
	}
};


// zlib.ZStream
struct  ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D  : public RuntimeObject
{
public:
	// System.Byte[] zlib.ZStream::next_in
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___next_in_1;
	// System.Int32 zlib.ZStream::next_in_index
	int32_t ___next_in_index_2;
	// System.Int32 zlib.ZStream::avail_in
	int32_t ___avail_in_3;
	// System.Int64 zlib.ZStream::total_in
	int64_t ___total_in_4;
	// System.Byte[] zlib.ZStream::next_out
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___next_out_5;
	// System.Int32 zlib.ZStream::next_out_index
	int32_t ___next_out_index_6;
	// System.Int32 zlib.ZStream::avail_out
	int32_t ___avail_out_7;
	// System.Int64 zlib.ZStream::total_out
	int64_t ___total_out_8;
	// System.String zlib.ZStream::msg
	String_t* ___msg_9;
	// zlib.Deflate zlib.ZStream::dstate
	Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * ___dstate_10;
	// zlib.Inflate zlib.ZStream::istate
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * ___istate_11;
	// System.Int32 zlib.ZStream::data_type
	int32_t ___data_type_12;
	// System.Int64 zlib.ZStream::adler
	int64_t ___adler_13;
	// zlib.Adler32 zlib.ZStream::_adler
	Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 * ____adler_14;

public:
	inline static int32_t get_offset_of_next_in_1() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___next_in_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_next_in_1() const { return ___next_in_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_next_in_1() { return &___next_in_1; }
	inline void set_next_in_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___next_in_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_in_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_in_index_2() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___next_in_index_2)); }
	inline int32_t get_next_in_index_2() const { return ___next_in_index_2; }
	inline int32_t* get_address_of_next_in_index_2() { return &___next_in_index_2; }
	inline void set_next_in_index_2(int32_t value)
	{
		___next_in_index_2 = value;
	}

	inline static int32_t get_offset_of_avail_in_3() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___avail_in_3)); }
	inline int32_t get_avail_in_3() const { return ___avail_in_3; }
	inline int32_t* get_address_of_avail_in_3() { return &___avail_in_3; }
	inline void set_avail_in_3(int32_t value)
	{
		___avail_in_3 = value;
	}

	inline static int32_t get_offset_of_total_in_4() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___total_in_4)); }
	inline int64_t get_total_in_4() const { return ___total_in_4; }
	inline int64_t* get_address_of_total_in_4() { return &___total_in_4; }
	inline void set_total_in_4(int64_t value)
	{
		___total_in_4 = value;
	}

	inline static int32_t get_offset_of_next_out_5() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___next_out_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_next_out_5() const { return ___next_out_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_next_out_5() { return &___next_out_5; }
	inline void set_next_out_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___next_out_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_out_5), (void*)value);
	}

	inline static int32_t get_offset_of_next_out_index_6() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___next_out_index_6)); }
	inline int32_t get_next_out_index_6() const { return ___next_out_index_6; }
	inline int32_t* get_address_of_next_out_index_6() { return &___next_out_index_6; }
	inline void set_next_out_index_6(int32_t value)
	{
		___next_out_index_6 = value;
	}

	inline static int32_t get_offset_of_avail_out_7() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___avail_out_7)); }
	inline int32_t get_avail_out_7() const { return ___avail_out_7; }
	inline int32_t* get_address_of_avail_out_7() { return &___avail_out_7; }
	inline void set_avail_out_7(int32_t value)
	{
		___avail_out_7 = value;
	}

	inline static int32_t get_offset_of_total_out_8() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___total_out_8)); }
	inline int64_t get_total_out_8() const { return ___total_out_8; }
	inline int64_t* get_address_of_total_out_8() { return &___total_out_8; }
	inline void set_total_out_8(int64_t value)
	{
		___total_out_8 = value;
	}

	inline static int32_t get_offset_of_msg_9() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___msg_9)); }
	inline String_t* get_msg_9() const { return ___msg_9; }
	inline String_t** get_address_of_msg_9() { return &___msg_9; }
	inline void set_msg_9(String_t* value)
	{
		___msg_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_9), (void*)value);
	}

	inline static int32_t get_offset_of_dstate_10() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___dstate_10)); }
	inline Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * get_dstate_10() const { return ___dstate_10; }
	inline Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 ** get_address_of_dstate_10() { return &___dstate_10; }
	inline void set_dstate_10(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * value)
	{
		___dstate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstate_10), (void*)value);
	}

	inline static int32_t get_offset_of_istate_11() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___istate_11)); }
	inline Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * get_istate_11() const { return ___istate_11; }
	inline Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 ** get_address_of_istate_11() { return &___istate_11; }
	inline void set_istate_11(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * value)
	{
		___istate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___istate_11), (void*)value);
	}

	inline static int32_t get_offset_of_data_type_12() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___data_type_12)); }
	inline int32_t get_data_type_12() const { return ___data_type_12; }
	inline int32_t* get_address_of_data_type_12() { return &___data_type_12; }
	inline void set_data_type_12(int32_t value)
	{
		___data_type_12 = value;
	}

	inline static int32_t get_offset_of_adler_13() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ___adler_13)); }
	inline int64_t get_adler_13() const { return ___adler_13; }
	inline int64_t* get_address_of_adler_13() { return &___adler_13; }
	inline void set_adler_13(int64_t value)
	{
		___adler_13 = value;
	}

	inline static int32_t get_offset_of__adler_14() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D, ____adler_14)); }
	inline Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 * get__adler_14() const { return ____adler_14; }
	inline Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 ** get_address_of__adler_14() { return &____adler_14; }
	inline void set__adler_14(Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 * value)
	{
		____adler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____adler_14), (void*)value);
	}
};

struct ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_StaticFields
{
public:
	// System.Int32 zlib.ZStream::DEF_WBITS
	int32_t ___DEF_WBITS_0;

public:
	inline static int32_t get_offset_of_DEF_WBITS_0() { return static_cast<int32_t>(offsetof(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_StaticFields, ___DEF_WBITS_0)); }
	inline int32_t get_DEF_WBITS_0() const { return ___DEF_WBITS_0; }
	inline int32_t* get_address_of_DEF_WBITS_0() { return &___DEF_WBITS_0; }
	inline void set_DEF_WBITS_0(int32_t value)
	{
		___DEF_WBITS_0 = value;
	}
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=1152
struct  __StaticArrayInitTypeSizeU3D1152_t1206BC18F3F62CE5262B58008F7368565B48C07B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1152_t1206BC18F3F62CE5262B58008F7368565B48C07B__padding[1152];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=116
struct  __StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24__padding[116];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=120
struct  __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934__padding[120];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=124
struct  __StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6__padding[124];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=16
struct  __StaticArrayInitTypeSizeU3D16_tBBB3B81BB9C9C7A2C82D6EDB0F8392899681C1C5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tBBB3B81BB9C9C7A2C82D6EDB0F8392899681C1C5__padding[16];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=19
struct  __StaticArrayInitTypeSizeU3D19_t62FBDA6ED3D22431981C995DE99D38AE837E7B2F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_t62FBDA6ED3D22431981C995DE99D38AE837E7B2F__padding[19];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_tA1A3637FD957069461B289D4C01BC69099E20A75 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA1A3637FD957069461B289D4C01BC69099E20A75__padding[20];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t253082896EDAE593A6B2DA1A8CCC1A13D570E473 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t253082896EDAE593A6B2DA1A8CCC1A13D570E473__padding[256];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=384
struct  __StaticArrayInitTypeSizeU3D384_tDBE68A16DF8B15D1D0D508597B49DBEC1D33CD94 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_tDBE68A16DF8B15D1D0D508597B49DBEC1D33CD94__padding[384];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t85B3FBFA3E7A47F656D541E7AF809B36459A89ED 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t85B3FBFA3E7A47F656D541E7AF809B36459A89ED__padding[48];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t5DAC3D2F7107166CA130C053D89B86E38E26A81C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t5DAC3D2F7107166CA130C053D89B86E38E26A81C__padding[512];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=6144
struct  __StaticArrayInitTypeSizeU3D6144_t0DF49C23AC32BD40835CBD5D9C2BB9BDB2307D3C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6144_t0DF49C23AC32BD40835CBD5D9C2BB9BDB2307D3C__padding[6144];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=68
struct  __StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6__padding[68];
	};

public:
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=76
struct  __StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB__padding[76];
	};

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// zlib.ZInputStream
struct  ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048  : public BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969
{
public:
	// System.Int64 zlib.ZInputStream::maxInput
	int64_t ___maxInput_10;
	// zlib.ZStream zlib.ZInputStream::z
	ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z_11;
	// System.Int32 zlib.ZInputStream::bufsize
	int32_t ___bufsize_12;
	// System.Int32 zlib.ZInputStream::flush
	int32_t ___flush_13;
	// System.Byte[] zlib.ZInputStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_14;
	// System.Byte[] zlib.ZInputStream::buf1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf1_15;
	// System.Boolean zlib.ZInputStream::compress
	bool ___compress_16;
	// System.IO.Stream zlib.ZInputStream::in_Renamed
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___in_Renamed_17;
	// System.Boolean zlib.ZInputStream::nomoreinput
	bool ___nomoreinput_18;

public:
	inline static int32_t get_offset_of_maxInput_10() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___maxInput_10)); }
	inline int64_t get_maxInput_10() const { return ___maxInput_10; }
	inline int64_t* get_address_of_maxInput_10() { return &___maxInput_10; }
	inline void set_maxInput_10(int64_t value)
	{
		___maxInput_10 = value;
	}

	inline static int32_t get_offset_of_z_11() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___z_11)); }
	inline ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * get_z_11() const { return ___z_11; }
	inline ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D ** get_address_of_z_11() { return &___z_11; }
	inline void set_z_11(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * value)
	{
		___z_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___z_11), (void*)value);
	}

	inline static int32_t get_offset_of_bufsize_12() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___bufsize_12)); }
	inline int32_t get_bufsize_12() const { return ___bufsize_12; }
	inline int32_t* get_address_of_bufsize_12() { return &___bufsize_12; }
	inline void set_bufsize_12(int32_t value)
	{
		___bufsize_12 = value;
	}

	inline static int32_t get_offset_of_flush_13() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___flush_13)); }
	inline int32_t get_flush_13() const { return ___flush_13; }
	inline int32_t* get_address_of_flush_13() { return &___flush_13; }
	inline void set_flush_13(int32_t value)
	{
		___flush_13 = value;
	}

	inline static int32_t get_offset_of_buf_14() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___buf_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_14() const { return ___buf_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_14() { return &___buf_14; }
	inline void set_buf_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_14), (void*)value);
	}

	inline static int32_t get_offset_of_buf1_15() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___buf1_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf1_15() const { return ___buf1_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf1_15() { return &___buf1_15; }
	inline void set_buf1_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf1_15), (void*)value);
	}

	inline static int32_t get_offset_of_compress_16() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___compress_16)); }
	inline bool get_compress_16() const { return ___compress_16; }
	inline bool* get_address_of_compress_16() { return &___compress_16; }
	inline void set_compress_16(bool value)
	{
		___compress_16 = value;
	}

	inline static int32_t get_offset_of_in_Renamed_17() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___in_Renamed_17)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_in_Renamed_17() const { return ___in_Renamed_17; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_in_Renamed_17() { return &___in_Renamed_17; }
	inline void set_in_Renamed_17(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___in_Renamed_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___in_Renamed_17), (void*)value);
	}

	inline static int32_t get_offset_of_nomoreinput_18() { return static_cast<int32_t>(offsetof(ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048, ___nomoreinput_18)); }
	inline bool get_nomoreinput_18() const { return ___nomoreinput_18; }
	inline bool* get_address_of_nomoreinput_18() { return &___nomoreinput_18; }
	inline void set_nomoreinput_18(bool value)
	{
		___nomoreinput_18 = value;
	}
};


// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}
struct  U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields
{
public:
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-1
	__StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24  ___U24U24method0x60006f3U2D1_0;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-2
	__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  ___U24U24method0x60006f3U2D2_1;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-3
	__StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB  ___U24U24method0x60006f3U2D3_2;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-4
	__StaticArrayInitTypeSizeU3D19_t62FBDA6ED3D22431981C995DE99D38AE837E7B2F  ___U24U24method0x60006f3U2D4_3;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-5
	__StaticArrayInitTypeSizeU3D512_t5DAC3D2F7107166CA130C053D89B86E38E26A81C  ___U24U24method0x60006f3U2D5_4;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-6
	__StaticArrayInitTypeSizeU3D256_t253082896EDAE593A6B2DA1A8CCC1A13D570E473  ___U24U24method0x60006f3U2D6_5;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-7
	__StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24  ___U24U24method0x60006f3U2D7_6;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f3-8
	__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  ___U24U24method0x60006f3U2D8_7;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f4-1
	__StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6  ___U24U24method0x60006f4U2D1_8;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f4-2
	__StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB  ___U24U24method0x60006f4U2D2_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x6000090-1
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U24U24method0x6000090U2D1_10;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=6144 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f6-1
	__StaticArrayInitTypeSizeU3D6144_t0DF49C23AC32BD40835CBD5D9C2BB9BDB2307D3C  ___U24U24method0x60006f6U2D1_11;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=384 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f6-2
	__StaticArrayInitTypeSizeU3D384_tDBE68A16DF8B15D1D0D508597B49DBEC1D33CD94  ___U24U24method0x60006f6U2D2_12;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f6-3
	__StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6  ___U24U24method0x60006f6U2D3_13;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f6-4
	__StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6  ___U24U24method0x60006f6U2D4_14;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f6-5
	__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  ___U24U24method0x60006f6U2D5_15;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f6-6
	__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  ___U24U24method0x60006f6U2D6_16;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f8-1
	__StaticArrayInitTypeSizeU3D16_tBBB3B81BB9C9C7A2C82D6EDB0F8392899681C1C5  ___U24U24method0x60006f8U2D1_17;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f8-2
	__StaticArrayInitTypeSizeU3D20_tA1A3637FD957069461B289D4C01BC69099E20A75  ___U24U24method0x60006f8U2D2_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x6000205-1
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U24U24method0x6000205U2D1_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x6000207-1
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U24U24method0x6000207U2D1_20;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x60006f9-1
	__StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6  ___U24U24method0x60006f9U2D1_21;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=1152 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x6000609-1
	__StaticArrayInitTypeSizeU3D1152_t1206BC18F3F62CE5262B58008F7368565B48C07B  ___U24U24method0x6000609U2D1_22;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x6000609-2
	__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  ___U24U24method0x6000609U2D2_23;
	// <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>{326E9AAB-9385-4E73-9606-C3572C385A34}::$$method0x6000624-1
	__StaticArrayInitTypeSizeU3D48_t85B3FBFA3E7A47F656D541E7AF809B36459A89ED  ___U24U24method0x6000624U2D1_24;

public:
	inline static int32_t get_offset_of_U24U24method0x60006f3U2D1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D1_0)); }
	inline __StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24  get_U24U24method0x60006f3U2D1_0() const { return ___U24U24method0x60006f3U2D1_0; }
	inline __StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24 * get_address_of_U24U24method0x60006f3U2D1_0() { return &___U24U24method0x60006f3U2D1_0; }
	inline void set_U24U24method0x60006f3U2D1_0(__StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24  value)
	{
		___U24U24method0x60006f3U2D1_0 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f3U2D2_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D2_1)); }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  get_U24U24method0x60006f3U2D2_1() const { return ___U24U24method0x60006f3U2D2_1; }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934 * get_address_of_U24U24method0x60006f3U2D2_1() { return &___U24U24method0x60006f3U2D2_1; }
	inline void set_U24U24method0x60006f3U2D2_1(__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  value)
	{
		___U24U24method0x60006f3U2D2_1 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f3U2D3_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D3_2)); }
	inline __StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB  get_U24U24method0x60006f3U2D3_2() const { return ___U24U24method0x60006f3U2D3_2; }
	inline __StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB * get_address_of_U24U24method0x60006f3U2D3_2() { return &___U24U24method0x60006f3U2D3_2; }
	inline void set_U24U24method0x60006f3U2D3_2(__StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB  value)
	{
		___U24U24method0x60006f3U2D3_2 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f3U2D4_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D4_3)); }
	inline __StaticArrayInitTypeSizeU3D19_t62FBDA6ED3D22431981C995DE99D38AE837E7B2F  get_U24U24method0x60006f3U2D4_3() const { return ___U24U24method0x60006f3U2D4_3; }
	inline __StaticArrayInitTypeSizeU3D19_t62FBDA6ED3D22431981C995DE99D38AE837E7B2F * get_address_of_U24U24method0x60006f3U2D4_3() { return &___U24U24method0x60006f3U2D4_3; }
	inline void set_U24U24method0x60006f3U2D4_3(__StaticArrayInitTypeSizeU3D19_t62FBDA6ED3D22431981C995DE99D38AE837E7B2F  value)
	{
		___U24U24method0x60006f3U2D4_3 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f3U2D5_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D5_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t5DAC3D2F7107166CA130C053D89B86E38E26A81C  get_U24U24method0x60006f3U2D5_4() const { return ___U24U24method0x60006f3U2D5_4; }
	inline __StaticArrayInitTypeSizeU3D512_t5DAC3D2F7107166CA130C053D89B86E38E26A81C * get_address_of_U24U24method0x60006f3U2D5_4() { return &___U24U24method0x60006f3U2D5_4; }
	inline void set_U24U24method0x60006f3U2D5_4(__StaticArrayInitTypeSizeU3D512_t5DAC3D2F7107166CA130C053D89B86E38E26A81C  value)
	{
		___U24U24method0x60006f3U2D5_4 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f3U2D6_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D6_5)); }
	inline __StaticArrayInitTypeSizeU3D256_t253082896EDAE593A6B2DA1A8CCC1A13D570E473  get_U24U24method0x60006f3U2D6_5() const { return ___U24U24method0x60006f3U2D6_5; }
	inline __StaticArrayInitTypeSizeU3D256_t253082896EDAE593A6B2DA1A8CCC1A13D570E473 * get_address_of_U24U24method0x60006f3U2D6_5() { return &___U24U24method0x60006f3U2D6_5; }
	inline void set_U24U24method0x60006f3U2D6_5(__StaticArrayInitTypeSizeU3D256_t253082896EDAE593A6B2DA1A8CCC1A13D570E473  value)
	{
		___U24U24method0x60006f3U2D6_5 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f3U2D7_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D7_6)); }
	inline __StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24  get_U24U24method0x60006f3U2D7_6() const { return ___U24U24method0x60006f3U2D7_6; }
	inline __StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24 * get_address_of_U24U24method0x60006f3U2D7_6() { return &___U24U24method0x60006f3U2D7_6; }
	inline void set_U24U24method0x60006f3U2D7_6(__StaticArrayInitTypeSizeU3D116_tF9EDA29EA128EBC60415C00B1D0CC3F20B3C6C24  value)
	{
		___U24U24method0x60006f3U2D7_6 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f3U2D8_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f3U2D8_7)); }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  get_U24U24method0x60006f3U2D8_7() const { return ___U24U24method0x60006f3U2D8_7; }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934 * get_address_of_U24U24method0x60006f3U2D8_7() { return &___U24U24method0x60006f3U2D8_7; }
	inline void set_U24U24method0x60006f3U2D8_7(__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  value)
	{
		___U24U24method0x60006f3U2D8_7 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f4U2D1_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f4U2D1_8)); }
	inline __StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6  get_U24U24method0x60006f4U2D1_8() const { return ___U24U24method0x60006f4U2D1_8; }
	inline __StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6 * get_address_of_U24U24method0x60006f4U2D1_8() { return &___U24U24method0x60006f4U2D1_8; }
	inline void set_U24U24method0x60006f4U2D1_8(__StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6  value)
	{
		___U24U24method0x60006f4U2D1_8 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f4U2D2_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f4U2D2_9)); }
	inline __StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB  get_U24U24method0x60006f4U2D2_9() const { return ___U24U24method0x60006f4U2D2_9; }
	inline __StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB * get_address_of_U24U24method0x60006f4U2D2_9() { return &___U24U24method0x60006f4U2D2_9; }
	inline void set_U24U24method0x60006f4U2D2_9(__StaticArrayInitTypeSizeU3D76_t188C8FFF7224986E63D71421EB80473555719CFB  value)
	{
		___U24U24method0x60006f4U2D2_9 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000090U2D1_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x6000090U2D1_10)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U24U24method0x6000090U2D1_10() const { return ___U24U24method0x6000090U2D1_10; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U24U24method0x6000090U2D1_10() { return &___U24U24method0x6000090U2D1_10; }
	inline void set_U24U24method0x6000090U2D1_10(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U24U24method0x6000090U2D1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24U24method0x6000090U2D1_10), (void*)value);
	}

	inline static int32_t get_offset_of_U24U24method0x60006f6U2D1_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f6U2D1_11)); }
	inline __StaticArrayInitTypeSizeU3D6144_t0DF49C23AC32BD40835CBD5D9C2BB9BDB2307D3C  get_U24U24method0x60006f6U2D1_11() const { return ___U24U24method0x60006f6U2D1_11; }
	inline __StaticArrayInitTypeSizeU3D6144_t0DF49C23AC32BD40835CBD5D9C2BB9BDB2307D3C * get_address_of_U24U24method0x60006f6U2D1_11() { return &___U24U24method0x60006f6U2D1_11; }
	inline void set_U24U24method0x60006f6U2D1_11(__StaticArrayInitTypeSizeU3D6144_t0DF49C23AC32BD40835CBD5D9C2BB9BDB2307D3C  value)
	{
		___U24U24method0x60006f6U2D1_11 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f6U2D2_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f6U2D2_12)); }
	inline __StaticArrayInitTypeSizeU3D384_tDBE68A16DF8B15D1D0D508597B49DBEC1D33CD94  get_U24U24method0x60006f6U2D2_12() const { return ___U24U24method0x60006f6U2D2_12; }
	inline __StaticArrayInitTypeSizeU3D384_tDBE68A16DF8B15D1D0D508597B49DBEC1D33CD94 * get_address_of_U24U24method0x60006f6U2D2_12() { return &___U24U24method0x60006f6U2D2_12; }
	inline void set_U24U24method0x60006f6U2D2_12(__StaticArrayInitTypeSizeU3D384_tDBE68A16DF8B15D1D0D508597B49DBEC1D33CD94  value)
	{
		___U24U24method0x60006f6U2D2_12 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f6U2D3_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f6U2D3_13)); }
	inline __StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6  get_U24U24method0x60006f6U2D3_13() const { return ___U24U24method0x60006f6U2D3_13; }
	inline __StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6 * get_address_of_U24U24method0x60006f6U2D3_13() { return &___U24U24method0x60006f6U2D3_13; }
	inline void set_U24U24method0x60006f6U2D3_13(__StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6  value)
	{
		___U24U24method0x60006f6U2D3_13 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f6U2D4_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f6U2D4_14)); }
	inline __StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6  get_U24U24method0x60006f6U2D4_14() const { return ___U24U24method0x60006f6U2D4_14; }
	inline __StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6 * get_address_of_U24U24method0x60006f6U2D4_14() { return &___U24U24method0x60006f6U2D4_14; }
	inline void set_U24U24method0x60006f6U2D4_14(__StaticArrayInitTypeSizeU3D124_t2E1F3E117052CC185896BCCFF33B788AEDBF40E6  value)
	{
		___U24U24method0x60006f6U2D4_14 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f6U2D5_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f6U2D5_15)); }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  get_U24U24method0x60006f6U2D5_15() const { return ___U24U24method0x60006f6U2D5_15; }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934 * get_address_of_U24U24method0x60006f6U2D5_15() { return &___U24U24method0x60006f6U2D5_15; }
	inline void set_U24U24method0x60006f6U2D5_15(__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  value)
	{
		___U24U24method0x60006f6U2D5_15 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f6U2D6_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f6U2D6_16)); }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  get_U24U24method0x60006f6U2D6_16() const { return ___U24U24method0x60006f6U2D6_16; }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934 * get_address_of_U24U24method0x60006f6U2D6_16() { return &___U24U24method0x60006f6U2D6_16; }
	inline void set_U24U24method0x60006f6U2D6_16(__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  value)
	{
		___U24U24method0x60006f6U2D6_16 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f8U2D1_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f8U2D1_17)); }
	inline __StaticArrayInitTypeSizeU3D16_tBBB3B81BB9C9C7A2C82D6EDB0F8392899681C1C5  get_U24U24method0x60006f8U2D1_17() const { return ___U24U24method0x60006f8U2D1_17; }
	inline __StaticArrayInitTypeSizeU3D16_tBBB3B81BB9C9C7A2C82D6EDB0F8392899681C1C5 * get_address_of_U24U24method0x60006f8U2D1_17() { return &___U24U24method0x60006f8U2D1_17; }
	inline void set_U24U24method0x60006f8U2D1_17(__StaticArrayInitTypeSizeU3D16_tBBB3B81BB9C9C7A2C82D6EDB0F8392899681C1C5  value)
	{
		___U24U24method0x60006f8U2D1_17 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x60006f8U2D2_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f8U2D2_18)); }
	inline __StaticArrayInitTypeSizeU3D20_tA1A3637FD957069461B289D4C01BC69099E20A75  get_U24U24method0x60006f8U2D2_18() const { return ___U24U24method0x60006f8U2D2_18; }
	inline __StaticArrayInitTypeSizeU3D20_tA1A3637FD957069461B289D4C01BC69099E20A75 * get_address_of_U24U24method0x60006f8U2D2_18() { return &___U24U24method0x60006f8U2D2_18; }
	inline void set_U24U24method0x60006f8U2D2_18(__StaticArrayInitTypeSizeU3D20_tA1A3637FD957069461B289D4C01BC69099E20A75  value)
	{
		___U24U24method0x60006f8U2D2_18 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000205U2D1_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x6000205U2D1_19)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U24U24method0x6000205U2D1_19() const { return ___U24U24method0x6000205U2D1_19; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U24U24method0x6000205U2D1_19() { return &___U24U24method0x6000205U2D1_19; }
	inline void set_U24U24method0x6000205U2D1_19(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U24U24method0x6000205U2D1_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24U24method0x6000205U2D1_19), (void*)value);
	}

	inline static int32_t get_offset_of_U24U24method0x6000207U2D1_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x6000207U2D1_20)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U24U24method0x6000207U2D1_20() const { return ___U24U24method0x6000207U2D1_20; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U24U24method0x6000207U2D1_20() { return &___U24U24method0x6000207U2D1_20; }
	inline void set_U24U24method0x6000207U2D1_20(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U24U24method0x6000207U2D1_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24U24method0x6000207U2D1_20), (void*)value);
	}

	inline static int32_t get_offset_of_U24U24method0x60006f9U2D1_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x60006f9U2D1_21)); }
	inline __StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6  get_U24U24method0x60006f9U2D1_21() const { return ___U24U24method0x60006f9U2D1_21; }
	inline __StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6 * get_address_of_U24U24method0x60006f9U2D1_21() { return &___U24U24method0x60006f9U2D1_21; }
	inline void set_U24U24method0x60006f9U2D1_21(__StaticArrayInitTypeSizeU3D68_t8FE53995654123EF2FC6EECB6A9DDCFEB280F7E6  value)
	{
		___U24U24method0x60006f9U2D1_21 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000609U2D1_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x6000609U2D1_22)); }
	inline __StaticArrayInitTypeSizeU3D1152_t1206BC18F3F62CE5262B58008F7368565B48C07B  get_U24U24method0x6000609U2D1_22() const { return ___U24U24method0x6000609U2D1_22; }
	inline __StaticArrayInitTypeSizeU3D1152_t1206BC18F3F62CE5262B58008F7368565B48C07B * get_address_of_U24U24method0x6000609U2D1_22() { return &___U24U24method0x6000609U2D1_22; }
	inline void set_U24U24method0x6000609U2D1_22(__StaticArrayInitTypeSizeU3D1152_t1206BC18F3F62CE5262B58008F7368565B48C07B  value)
	{
		___U24U24method0x6000609U2D1_22 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000609U2D2_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x6000609U2D2_23)); }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  get_U24U24method0x6000609U2D2_23() const { return ___U24U24method0x6000609U2D2_23; }
	inline __StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934 * get_address_of_U24U24method0x6000609U2D2_23() { return &___U24U24method0x6000609U2D2_23; }
	inline void set_U24U24method0x6000609U2D2_23(__StaticArrayInitTypeSizeU3D120_t1138AC7540AFEA3E5AD9FEBDD26AD10000A0B934  value)
	{
		___U24U24method0x6000609U2D2_23 = value;
	}

	inline static int32_t get_offset_of_U24U24method0x6000624U2D1_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F_StaticFields, ___U24U24method0x6000624U2D1_24)); }
	inline __StaticArrayInitTypeSizeU3D48_t85B3FBFA3E7A47F656D541E7AF809B36459A89ED  get_U24U24method0x6000624U2D1_24() const { return ___U24U24method0x6000624U2D1_24; }
	inline __StaticArrayInitTypeSizeU3D48_t85B3FBFA3E7A47F656D541E7AF809B36459A89ED * get_address_of_U24U24method0x6000624U2D1_24() { return &___U24U24method0x6000624U2D1_24; }
	inline void set_U24U24method0x6000624U2D1_24(__StaticArrayInitTypeSizeU3D48_t85B3FBFA3E7A47F656D541E7AF809B36459A89ED  value)
	{
		___U24U24method0x6000624U2D1_24 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// zlib.ZOutputStream
struct  ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// zlib.ZStream zlib.ZOutputStream::z
	ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z_5;
	// System.Int32 zlib.ZOutputStream::bufsize
	int32_t ___bufsize_6;
	// System.Int32 zlib.ZOutputStream::flush_Renamed_Field
	int32_t ___flush_Renamed_Field_7;
	// System.Byte[] zlib.ZOutputStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_8;
	// System.Byte[] zlib.ZOutputStream::buf1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf1_9;
	// System.Boolean zlib.ZOutputStream::compress
	bool ___compress_10;
	// System.IO.Stream zlib.ZOutputStream::out_Renamed
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___out_Renamed_11;

public:
	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6, ___z_5)); }
	inline ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * get_z_5() const { return ___z_5; }
	inline ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D ** get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * value)
	{
		___z_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___z_5), (void*)value);
	}

	inline static int32_t get_offset_of_bufsize_6() { return static_cast<int32_t>(offsetof(ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6, ___bufsize_6)); }
	inline int32_t get_bufsize_6() const { return ___bufsize_6; }
	inline int32_t* get_address_of_bufsize_6() { return &___bufsize_6; }
	inline void set_bufsize_6(int32_t value)
	{
		___bufsize_6 = value;
	}

	inline static int32_t get_offset_of_flush_Renamed_Field_7() { return static_cast<int32_t>(offsetof(ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6, ___flush_Renamed_Field_7)); }
	inline int32_t get_flush_Renamed_Field_7() const { return ___flush_Renamed_Field_7; }
	inline int32_t* get_address_of_flush_Renamed_Field_7() { return &___flush_Renamed_Field_7; }
	inline void set_flush_Renamed_Field_7(int32_t value)
	{
		___flush_Renamed_Field_7 = value;
	}

	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6, ___buf_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_8), (void*)value);
	}

	inline static int32_t get_offset_of_buf1_9() { return static_cast<int32_t>(offsetof(ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6, ___buf1_9)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf1_9() const { return ___buf1_9; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf1_9() { return &___buf1_9; }
	inline void set_buf1_9(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf1_9), (void*)value);
	}

	inline static int32_t get_offset_of_compress_10() { return static_cast<int32_t>(offsetof(ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6, ___compress_10)); }
	inline bool get_compress_10() const { return ___compress_10; }
	inline bool* get_address_of_compress_10() { return &___compress_10; }
	inline void set_compress_10(bool value)
	{
		___compress_10 = value;
	}

	inline static int32_t get_offset_of_out_Renamed_11() { return static_cast<int32_t>(offsetof(ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6, ___out_Renamed_11)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_out_Renamed_11() const { return ___out_Renamed_11; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_out_Renamed_11() { return &___out_Renamed_11; }
	inline void set_out_Renamed_11(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___out_Renamed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___out_Renamed_11), (void*)value);
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// zlib.ZStreamException
struct  ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* m_Items[1];

public:
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,zlib.InfBlocks,zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_inflate_fast_mA5E3DF26A758FCFFBEC6465D7604EEEF8A980D5B (InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___td4, int32_t ___td_index5, InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * ___s6, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z7, const RuntimeMethod* method);
// System.Int32 zlib.InfBlocks::inflate_flush(zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3 (InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, int32_t ___r1, const RuntimeMethod* method);
// System.Int32 zlib.SupportClass::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662 (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Int32 zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m4787F16B9CFC8967632F972CAB4246A638009FAF (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___d4, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___e5, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___t6, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m7, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___hp8, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___hn9, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___v10, const RuntimeMethod* method);
// System.Void zlib.InfBlocks::reset(zlib.ZStream,System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_reset_mA17A3ED451F418F8C634210B5B1918DD4AD92D4D (InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___c1, const RuntimeMethod* method);
// System.Void zlib.InfBlocks::free(zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks_free_m2907864394B67072FA2B0A2FFE3B6419744F0C20 (InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, const RuntimeMethod* method);
// System.Int32 zlib.Inflate::inflateEnd(zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateEnd_m223FA5C0DD44A1D1997E68BD06BBB90BE214E1F1 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, const RuntimeMethod* method);
// System.Void zlib.InfBlocks::.ctor(zlib.ZStream,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfBlocks__ctor_mB53DD0175916847DC0006F0FFE06DC2A039C020E (InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, RuntimeObject * ___checkfn1, int32_t ___w2, const RuntimeMethod* method);
// System.Int32 zlib.Inflate::inflateReset(zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateReset_mC6B2892D8B3C938DC932F34A34B6F9F64726308F (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, const RuntimeMethod* method);
// System.Int32 zlib.InfBlocks::proc(zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfBlocks_proc_m7E2DEB1DC68A808DB623B1554039895F1883C461 (InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, int32_t ___r1, const RuntimeMethod* method);
// System.Int64 zlib.SupportClass::Identity(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SupportClass_Identity_m6780E41465B34A9160DADDCB198C7CAD4FFE6971 (int64_t ___literal0, const RuntimeMethod* method);
// System.Void zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_m39C2CFC4E6DEB4854FF3CAE8E087C085344FD43A (StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___static_tree0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___extra_bits1, int32_t ___extra_base2, int32_t ___elems3, int32_t ___max_length4, const RuntimeMethod* method);
// System.Void zlib.Deflate::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate_pqdownheap_m1C1274FBF2CB9838FCE6D89EEE75239956EF1969 (Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___tree0, int32_t ___k1, const RuntimeMethod* method);
// System.Byte System.Math::Max(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Math_Max_m1BF8F05475C80682F5C2127D97C2DF9C66505CAE (uint8_t ___val10, uint8_t ___val21, const RuntimeMethod* method);
// System.Void zlib.Tree::gen_bitlen(zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m8B2CBE6D24A63086263BF1DCCAB94E51FD370348 (Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * __this, Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * ___s0, const RuntimeMethod* method);
// System.Void zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_mF0B6F76BAE741F361D9A14213E3A0A861C18A026 (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___tree0, int32_t ___max_code1, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___bl_count2, const RuntimeMethod* method);
// System.Int32 zlib.Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_m3A4A68BF77A97C21FB216803240CACB0C0885C5B (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method);
// System.Void zlib.ZStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__ctor_mD6B20E08D2D5EC67D791FF4EA6548405FCF08E24 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// System.Void zlib.ZInputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_InitBlock_m81A4555F76BBC3F82BCEDEEFA6299FBEC4BE9482 (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::inflateInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m6DB571CEF46FAA0FD0BA0F98481175E0C4685D7B (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method);
// System.Int32 zlib.ZInputStream::read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZInputStream_read_m7EAB57F4D0087E37C397AF1FF24A6358FF5CF492 (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Int32 zlib.SupportClass::ReadInput(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_ReadInput_mC605E95F875DFE3A86612ED10D2754317F253D43 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___sourceStream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___target1, int32_t ___start2, int32_t ___count3, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::deflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflate_m99E7EEF9E978D9D0442AA11AA6846876C0C0FB51 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::inflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflate_m8BA50DFA4DC08FEB3C15CC3F8F73F0B30110CDE0 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___f0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void zlib.ZStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStreamException__ctor_mAD874598D865356E974D74CF11432E091618C77E (ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void zlib.ZOutputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_InitBlock_m2469960F35CB3C1CCFBD9CC85D72D4FF8C5304B8 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::deflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m6E7B25036BED5B992CB6D377E4F62AF1E55B9F66 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Void zlib.ZOutputStream::WriteByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_WriteByte_mA36F1E4C5DCBA4C1B7160FF7FF9E61441B84A286 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, int32_t ___b0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateEnd_m0C3D166C019D694ECAD4CC38B694AF0076351790 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::inflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateEnd_m28885560EAC9F7EB84B92387A5BB1394A08EAC33 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method);
// System.Void zlib.ZStream::free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_free_m5CA8D6D422F2A913995E534CFE7CE666DD1F9B54 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::inflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m0513E7FE0DC02604B6D82EBBD9FEF69F1EF3D100 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___w0, const RuntimeMethod* method);
// System.Void zlib.Inflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflate__ctor_m4103F64FD576422D27D1711A73488C1E5446DAC7 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, const RuntimeMethod* method);
// System.Int32 zlib.Inflate::inflateInit(zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateInit_m03924C67B781DE3DF704D17B54588896ADCE20D5 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, int32_t ___w1, const RuntimeMethod* method);
// System.Int32 zlib.Inflate::inflate(zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflate_mD23EA23B623C900F6F91E17A2364320A79251038 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, int32_t ___f1, const RuntimeMethod* method);
// System.Int32 zlib.ZStream::deflateInit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_mF8CC9DA59DB28FCFA45C4D7C3D0BA00C1E72A069 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void zlib.Deflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deflate__ctor_m522A8D22A5F90BB0707A903564FF532F812A068E (Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * __this, const RuntimeMethod* method);
// System.Int32 zlib.Deflate::deflateInit(zlib.ZStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateInit_mA936725418FBACB0049F50085CFF4914EDDED658 (Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___strm0, int32_t ___level1, int32_t ___bits2, const RuntimeMethod* method);
// System.Int32 zlib.Deflate::deflate(zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflate_m318410DEADA03D4D874692180527C70B640810AA (Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___strm0, int32_t ___flush1, const RuntimeMethod* method);
// System.Int32 zlib.Deflate::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deflate_deflateEnd_m185BF61EB93FC5C83EFD4842CA0DC3276A273AF3 (Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * __this, const RuntimeMethod* method);
// System.IO.TextWriter System.Console::get_Out()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int64 zlib.Adler32::adler32(System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Adler32_adler32_m992A1809403AF1DC6FD27F00D60C3EE5284F1429 (Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 * __this, int64_t ___adler0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method);
// System.Void zlib.Adler32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32__ctor_mD72D42155641310AA7064BDC5ED69FA816A5F4F8 (Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 * __this, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_m89D35A170ACD53EB7720A7534AC2FBA64920B4FD (InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___td4, int32_t ___td_index5, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z6, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_mode_1(0);
		int32_t L_0 = ___bl0;
		__this->set_lbits_9((uint8_t)(((int32_t)((uint8_t)L_0))));
		int32_t L_1 = ___bd1;
		__this->set_dbits_10((uint8_t)(((int32_t)((uint8_t)L_1))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ___tl2;
		__this->set_ltree_11(L_2);
		int32_t L_3 = ___tl_index3;
		__this->set_ltree_index_12(L_3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ___td4;
		__this->set_dtree_13(L_4);
		int32_t L_5 = ___td_index5;
		__this->set_dtree_index_14(L_5);
		return;
	}
}
// System.Void zlib.InfCodes::.ctor(System.Int32,System.Int32,System.Int32[],System.Int32[],zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__ctor_mDACBB5A85B44A7EE8C4B6B4A3265EF3364C6DC8A (InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tl2, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___td3, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z4, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_mode_1(0);
		int32_t L_0 = ___bl0;
		__this->set_lbits_9((uint8_t)(((int32_t)((uint8_t)L_0))));
		int32_t L_1 = ___bd1;
		__this->set_dbits_10((uint8_t)(((int32_t)((uint8_t)L_1))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ___tl2;
		__this->set_ltree_11(L_2);
		__this->set_ltree_index_12(0);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = ___td3;
		__this->set_dtree_13(L_3);
		__this->set_dtree_index_14(0);
		return;
	}
}
// System.Int32 zlib.InfCodes::proc(zlib.InfBlocks,zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_proc_mEFFAC8D6401DE7F0F721F2A8F28E77360E6936D3 (InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * __this, InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * ___s0, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z1, int32_t ___r2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfCodes_proc_mEFFAC8D6401DE7F0F721F2A8F28E77360E6936D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * G_B14_0 = NULL;
	InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * G_B15_1 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = ___z1;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_next_in_index_2();
		V_5 = L_1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_2 = ___z1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_avail_in_3();
		V_6 = L_3;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bitb_12();
		V_3 = L_5;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitk_11();
		V_4 = L_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_8 = ___s0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_write_17();
		V_7 = L_9;
		int32_t L_10 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_11 = ___s0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_read_16();
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_13 = ___s0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_end_15();
		int32_t L_15 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		goto IL_004f;
	}

IL_0044:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_16 = ___s0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_read_16();
		int32_t L_18 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), (int32_t)1));
	}

IL_004f:
	{
		V_8 = G_B3_0;
	}

IL_0051:
	{
		int32_t L_19 = __this->get_mode_1();
		V_10 = L_19;
		int32_t L_20 = V_10;
		switch (L_20)
		{
			case 0:
			{
				goto IL_008d;
			}
			case 1:
			{
				goto IL_0199;
			}
			case 2:
			{
				goto IL_033d;
			}
			case 3:
			{
				goto IL_0412;
			}
			case 4:
			{
				goto IL_0584;
			}
			case 5:
			{
				goto IL_0635;
			}
			case 6:
			{
				goto IL_07ae;
			}
			case 7:
			{
				goto IL_08db;
			}
			case 8:
			{
				goto IL_098a;
			}
			case 9:
			{
				goto IL_09d4;
			}
		}
	}
	{
		goto IL_0a1f;
	}

IL_008d:
	{
		int32_t L_21 = V_8;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)258))))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)10))))
		{
			goto IL_016e;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_23 = ___s0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		L_23->set_bitb_12(L_24);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_25 = ___s0;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		L_25->set_bitk_11(L_26);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_27 = ___z1;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		L_27->set_avail_in_3(L_28);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_29 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_30 = L_29;
		NullCheck(L_30);
		int64_t L_31 = L_30->get_total_in_4();
		int32_t L_32 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_33 = ___z1;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_next_in_index_2();
		NullCheck(L_30);
		L_30->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_34))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_35 = ___z1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		L_35->set_next_in_index_2(L_36);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_37 = ___s0;
		int32_t L_38 = V_7;
		NullCheck(L_37);
		L_37->set_write_17(L_38);
		uint8_t L_39 = __this->get_lbits_9();
		uint8_t L_40 = __this->get_dbits_10();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_41 = __this->get_ltree_11();
		int32_t L_42 = __this->get_ltree_index_12();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_43 = __this->get_dtree_13();
		int32_t L_44 = __this->get_dtree_index_14();
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_45 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_46 = ___z1;
		int32_t L_47 = InfCodes_inflate_fast_mA5E3DF26A758FCFFBEC6465D7604EEEF8A980D5B(__this, L_39, L_40, L_41, L_42, L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		___r2 = L_47;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_48 = ___z1;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_next_in_index_2();
		V_5 = L_49;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_50 = ___z1;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_avail_in_3();
		V_6 = L_51;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_52 = ___s0;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_bitb_12();
		V_3 = L_53;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_54 = ___s0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_bitk_11();
		V_4 = L_55;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_56 = ___s0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_write_17();
		V_7 = L_57;
		int32_t L_58 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_59 = ___s0;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_read_16();
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_014a;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_61 = ___s0;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_end_15();
		int32_t L_63 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)L_63));
		goto IL_0155;
	}

IL_014a:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_64 = ___s0;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_read_16();
		int32_t L_66 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66)), (int32_t)1));
	}

IL_0155:
	{
		V_8 = G_B11_0;
		int32_t L_67 = ___r2;
		if (!L_67)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_68 = ___r2;
		G_B13_0 = __this;
		if ((((int32_t)L_68) == ((int32_t)1)))
		{
			G_B14_0 = __this;
			goto IL_0163;
		}
	}
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B13_0;
		goto IL_0164;
	}

IL_0163:
	{
		G_B15_0 = 7;
		G_B15_1 = G_B14_0;
	}

IL_0164:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_mode_1(G_B15_0);
		goto IL_0051;
	}

IL_016e:
	{
		uint8_t L_69 = __this->get_lbits_9();
		__this->set_need_5(L_69);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_70 = __this->get_ltree_11();
		__this->set_tree_3(L_70);
		int32_t L_71 = __this->get_ltree_index_12();
		__this->set_tree_index_4(L_71);
		__this->set_mode_1(1);
	}

IL_0199:
	{
		int32_t L_72 = __this->get_need_5();
		V_0 = L_72;
		goto IL_021b;
	}

IL_01a2:
	{
		int32_t L_73 = V_6;
		if (!L_73)
		{
			goto IL_01ab;
		}
	}
	{
		___r2 = 0;
		goto IL_01f2;
	}

IL_01ab:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_74 = ___s0;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		L_74->set_bitb_12(L_75);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_76 = ___s0;
		int32_t L_77 = V_4;
		NullCheck(L_76);
		L_76->set_bitk_11(L_77);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_78 = ___z1;
		int32_t L_79 = V_6;
		NullCheck(L_78);
		L_78->set_avail_in_3(L_79);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_80 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_81 = L_80;
		NullCheck(L_81);
		int64_t L_82 = L_81->get_total_in_4();
		int32_t L_83 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_84 = ___z1;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_next_in_index_2();
		NullCheck(L_81);
		L_81->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_82, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_85))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_86 = ___z1;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		L_86->set_next_in_index_2(L_87);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_88 = ___s0;
		int32_t L_89 = V_7;
		NullCheck(L_88);
		L_88->set_write_17(L_89);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_90 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_91 = ___z1;
		int32_t L_92 = ___r2;
		NullCheck(L_90);
		int32_t L_93 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_90, L_91, L_92, /*hidden argument*/NULL);
		return L_93;
	}

IL_01f2:
	{
		int32_t L_94 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)1));
		int32_t L_95 = V_3;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_96 = ___z1;
		NullCheck(L_96);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_97 = L_96->get_next_in_1();
		int32_t L_98 = V_5;
		int32_t L_99 = L_98;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		NullCheck(L_97);
		int32_t L_100 = L_99;
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102 = V_4;
		V_3 = ((int32_t)((int32_t)L_95|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_102&(int32_t)((int32_t)31)))))));
		int32_t L_103 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)8));
	}

IL_021b:
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_0;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t L_106 = __this->get_tree_index_4();
		int32_t L_107 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_108 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_109 = V_0;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		int32_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)((int32_t)((int32_t)L_107&(int32_t)L_111)))), (int32_t)3));
		int32_t L_112 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_113 = __this->get_tree_3();
		int32_t L_114 = V_1;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1));
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		int32_t L_117 = SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662(L_112, L_116, /*hidden argument*/NULL);
		V_3 = L_117;
		int32_t L_118 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_119 = __this->get_tree_3();
		int32_t L_120 = V_1;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_122));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_123 = __this->get_tree_3();
		int32_t L_124 = V_1;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_2 = L_126;
		int32_t L_127 = V_2;
		if (L_127)
		{
			goto IL_027b;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_128 = __this->get_tree_3();
		int32_t L_129 = V_1;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)2));
		int32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		__this->set_lit_6(L_131);
		__this->set_mode_1(6);
		goto IL_0051;
	}

IL_027b:
	{
		int32_t L_132 = V_2;
		if (!((int32_t)((int32_t)L_132&(int32_t)((int32_t)16))))
		{
			goto IL_02a7;
		}
	}
	{
		int32_t L_133 = V_2;
		__this->set_get_Renamed_7(((int32_t)((int32_t)L_133&(int32_t)((int32_t)15))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_134 = __this->get_tree_3();
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)2));
		int32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		__this->set_len_2(L_137);
		__this->set_mode_1(2);
		goto IL_0051;
	}

IL_02a7:
	{
		int32_t L_138 = V_2;
		if (((int32_t)((int32_t)L_138&(int32_t)((int32_t)64))))
		{
			goto IL_02cd;
		}
	}
	{
		int32_t L_139 = V_2;
		__this->set_need_5(L_139);
		int32_t L_140 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_141 = __this->get_tree_3();
		int32_t L_142 = V_1;
		NullCheck(L_141);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)2));
		int32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		__this->set_tree_index_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_140/(int32_t)3)), (int32_t)L_144)));
		goto IL_0051;
	}

IL_02cd:
	{
		int32_t L_145 = V_2;
		if (!((int32_t)((int32_t)L_145&(int32_t)((int32_t)32))))
		{
			goto IL_02df;
		}
	}
	{
		__this->set_mode_1(7);
		goto IL_0051;
	}

IL_02df:
	{
		__this->set_mode_1(((int32_t)9));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_146 = ___z1;
		NullCheck(L_146);
		L_146->set_msg_9(_stringLiteral0935D8D996DAFD1BB7298CE5A779FD11F107BBE5);
		___r2 = ((int32_t)-3);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_147 = ___s0;
		int32_t L_148 = V_3;
		NullCheck(L_147);
		L_147->set_bitb_12(L_148);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_149 = ___s0;
		int32_t L_150 = V_4;
		NullCheck(L_149);
		L_149->set_bitk_11(L_150);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_151 = ___z1;
		int32_t L_152 = V_6;
		NullCheck(L_151);
		L_151->set_avail_in_3(L_152);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_153 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_154 = L_153;
		NullCheck(L_154);
		int64_t L_155 = L_154->get_total_in_4();
		int32_t L_156 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_157 = ___z1;
		NullCheck(L_157);
		int32_t L_158 = L_157->get_next_in_index_2();
		NullCheck(L_154);
		L_154->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_156, (int32_t)L_158))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_159 = ___z1;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		L_159->set_next_in_index_2(L_160);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_161 = ___s0;
		int32_t L_162 = V_7;
		NullCheck(L_161);
		L_161->set_write_17(L_162);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_163 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_164 = ___z1;
		int32_t L_165 = ___r2;
		NullCheck(L_163);
		int32_t L_166 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_163, L_164, L_165, /*hidden argument*/NULL);
		return L_166;
	}

IL_033d:
	{
		int32_t L_167 = __this->get_get_Renamed_7();
		V_0 = L_167;
		goto IL_03bf;
	}

IL_0346:
	{
		int32_t L_168 = V_6;
		if (!L_168)
		{
			goto IL_034f;
		}
	}
	{
		___r2 = 0;
		goto IL_0396;
	}

IL_034f:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_169 = ___s0;
		int32_t L_170 = V_3;
		NullCheck(L_169);
		L_169->set_bitb_12(L_170);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_171 = ___s0;
		int32_t L_172 = V_4;
		NullCheck(L_171);
		L_171->set_bitk_11(L_172);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_173 = ___z1;
		int32_t L_174 = V_6;
		NullCheck(L_173);
		L_173->set_avail_in_3(L_174);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_175 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_176 = L_175;
		NullCheck(L_176);
		int64_t L_177 = L_176->get_total_in_4();
		int32_t L_178 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_179 = ___z1;
		NullCheck(L_179);
		int32_t L_180 = L_179->get_next_in_index_2();
		NullCheck(L_176);
		L_176->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_177, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_178, (int32_t)L_180))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_181 = ___z1;
		int32_t L_182 = V_5;
		NullCheck(L_181);
		L_181->set_next_in_index_2(L_182);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_183 = ___s0;
		int32_t L_184 = V_7;
		NullCheck(L_183);
		L_183->set_write_17(L_184);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_185 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_186 = ___z1;
		int32_t L_187 = ___r2;
		NullCheck(L_185);
		int32_t L_188 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_185, L_186, L_187, /*hidden argument*/NULL);
		return L_188;
	}

IL_0396:
	{
		int32_t L_189 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_189, (int32_t)1));
		int32_t L_190 = V_3;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_191 = ___z1;
		NullCheck(L_191);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_192 = L_191->get_next_in_1();
		int32_t L_193 = V_5;
		int32_t L_194 = L_193;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)1));
		NullCheck(L_192);
		int32_t L_195 = L_194;
		uint8_t L_196 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		int32_t L_197 = V_4;
		V_3 = ((int32_t)((int32_t)L_190|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_197&(int32_t)((int32_t)31)))))));
		int32_t L_198 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)8));
	}

IL_03bf:
	{
		int32_t L_199 = V_4;
		int32_t L_200 = V_0;
		if ((((int32_t)L_199) < ((int32_t)L_200)))
		{
			goto IL_0346;
		}
	}
	{
		int32_t L_201 = __this->get_len_2();
		int32_t L_202 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_203 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_204 = V_0;
		NullCheck(L_203);
		int32_t L_205 = L_204;
		int32_t L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		__this->set_len_2(((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)((int32_t)((int32_t)L_202&(int32_t)L_206)))));
		int32_t L_207 = V_3;
		int32_t L_208 = V_0;
		V_3 = ((int32_t)((int32_t)L_207>>(int32_t)((int32_t)((int32_t)L_208&(int32_t)((int32_t)31)))));
		int32_t L_209 = V_4;
		int32_t L_210 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_209, (int32_t)L_210));
		uint8_t L_211 = __this->get_dbits_10();
		__this->set_need_5(L_211);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_212 = __this->get_dtree_13();
		__this->set_tree_3(L_212);
		int32_t L_213 = __this->get_dtree_index_14();
		__this->set_tree_index_4(L_213);
		__this->set_mode_1(3);
	}

IL_0412:
	{
		int32_t L_214 = __this->get_need_5();
		V_0 = L_214;
		goto IL_0494;
	}

IL_041b:
	{
		int32_t L_215 = V_6;
		if (!L_215)
		{
			goto IL_0424;
		}
	}
	{
		___r2 = 0;
		goto IL_046b;
	}

IL_0424:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_216 = ___s0;
		int32_t L_217 = V_3;
		NullCheck(L_216);
		L_216->set_bitb_12(L_217);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_218 = ___s0;
		int32_t L_219 = V_4;
		NullCheck(L_218);
		L_218->set_bitk_11(L_219);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_220 = ___z1;
		int32_t L_221 = V_6;
		NullCheck(L_220);
		L_220->set_avail_in_3(L_221);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_222 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_223 = L_222;
		NullCheck(L_223);
		int64_t L_224 = L_223->get_total_in_4();
		int32_t L_225 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_226 = ___z1;
		NullCheck(L_226);
		int32_t L_227 = L_226->get_next_in_index_2();
		NullCheck(L_223);
		L_223->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_224, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_225, (int32_t)L_227))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_228 = ___z1;
		int32_t L_229 = V_5;
		NullCheck(L_228);
		L_228->set_next_in_index_2(L_229);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_230 = ___s0;
		int32_t L_231 = V_7;
		NullCheck(L_230);
		L_230->set_write_17(L_231);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_232 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_233 = ___z1;
		int32_t L_234 = ___r2;
		NullCheck(L_232);
		int32_t L_235 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_232, L_233, L_234, /*hidden argument*/NULL);
		return L_235;
	}

IL_046b:
	{
		int32_t L_236 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_236, (int32_t)1));
		int32_t L_237 = V_3;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_238 = ___z1;
		NullCheck(L_238);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_239 = L_238->get_next_in_1();
		int32_t L_240 = V_5;
		int32_t L_241 = L_240;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)1));
		NullCheck(L_239);
		int32_t L_242 = L_241;
		uint8_t L_243 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		int32_t L_244 = V_4;
		V_3 = ((int32_t)((int32_t)L_237|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_243&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_244&(int32_t)((int32_t)31)))))));
		int32_t L_245 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_245, (int32_t)8));
	}

IL_0494:
	{
		int32_t L_246 = V_4;
		int32_t L_247 = V_0;
		if ((((int32_t)L_246) < ((int32_t)L_247)))
		{
			goto IL_041b;
		}
	}
	{
		int32_t L_248 = __this->get_tree_index_4();
		int32_t L_249 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_250 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_251 = V_0;
		NullCheck(L_250);
		int32_t L_252 = L_251;
		int32_t L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_248, (int32_t)((int32_t)((int32_t)L_249&(int32_t)L_253)))), (int32_t)3));
		int32_t L_254 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_255 = __this->get_tree_3();
		int32_t L_256 = V_1;
		NullCheck(L_255);
		int32_t L_257 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)1));
		int32_t L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		V_3 = ((int32_t)((int32_t)L_254>>(int32_t)((int32_t)((int32_t)L_258&(int32_t)((int32_t)31)))));
		int32_t L_259 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_260 = __this->get_tree_3();
		int32_t L_261 = V_1;
		NullCheck(L_260);
		int32_t L_262 = ((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)1));
		int32_t L_263 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_259, (int32_t)L_263));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_264 = __this->get_tree_3();
		int32_t L_265 = V_1;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		int32_t L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		V_2 = L_267;
		int32_t L_268 = V_2;
		if (!((int32_t)((int32_t)L_268&(int32_t)((int32_t)16))))
		{
			goto IL_0500;
		}
	}
	{
		int32_t L_269 = V_2;
		__this->set_get_Renamed_7(((int32_t)((int32_t)L_269&(int32_t)((int32_t)15))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_270 = __this->get_tree_3();
		int32_t L_271 = V_1;
		NullCheck(L_270);
		int32_t L_272 = ((int32_t)il2cpp_codegen_add((int32_t)L_271, (int32_t)2));
		int32_t L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		__this->set_dist_8(L_273);
		__this->set_mode_1(4);
		goto IL_0051;
	}

IL_0500:
	{
		int32_t L_274 = V_2;
		if (((int32_t)((int32_t)L_274&(int32_t)((int32_t)64))))
		{
			goto IL_0526;
		}
	}
	{
		int32_t L_275 = V_2;
		__this->set_need_5(L_275);
		int32_t L_276 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_277 = __this->get_tree_3();
		int32_t L_278 = V_1;
		NullCheck(L_277);
		int32_t L_279 = ((int32_t)il2cpp_codegen_add((int32_t)L_278, (int32_t)2));
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		__this->set_tree_index_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_276/(int32_t)3)), (int32_t)L_280)));
		goto IL_0051;
	}

IL_0526:
	{
		__this->set_mode_1(((int32_t)9));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_281 = ___z1;
		NullCheck(L_281);
		L_281->set_msg_9(_stringLiteral4925A7198FDCA574E35F8D190FC252E87F4A8016);
		___r2 = ((int32_t)-3);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_282 = ___s0;
		int32_t L_283 = V_3;
		NullCheck(L_282);
		L_282->set_bitb_12(L_283);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_284 = ___s0;
		int32_t L_285 = V_4;
		NullCheck(L_284);
		L_284->set_bitk_11(L_285);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_286 = ___z1;
		int32_t L_287 = V_6;
		NullCheck(L_286);
		L_286->set_avail_in_3(L_287);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_288 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_289 = L_288;
		NullCheck(L_289);
		int64_t L_290 = L_289->get_total_in_4();
		int32_t L_291 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_292 = ___z1;
		NullCheck(L_292);
		int32_t L_293 = L_292->get_next_in_index_2();
		NullCheck(L_289);
		L_289->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_290, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_291, (int32_t)L_293))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_294 = ___z1;
		int32_t L_295 = V_5;
		NullCheck(L_294);
		L_294->set_next_in_index_2(L_295);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_296 = ___s0;
		int32_t L_297 = V_7;
		NullCheck(L_296);
		L_296->set_write_17(L_297);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_298 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_299 = ___z1;
		int32_t L_300 = ___r2;
		NullCheck(L_298);
		int32_t L_301 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_298, L_299, L_300, /*hidden argument*/NULL);
		return L_301;
	}

IL_0584:
	{
		int32_t L_302 = __this->get_get_Renamed_7();
		V_0 = L_302;
		goto IL_0606;
	}

IL_058d:
	{
		int32_t L_303 = V_6;
		if (!L_303)
		{
			goto IL_0596;
		}
	}
	{
		___r2 = 0;
		goto IL_05dd;
	}

IL_0596:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_304 = ___s0;
		int32_t L_305 = V_3;
		NullCheck(L_304);
		L_304->set_bitb_12(L_305);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_306 = ___s0;
		int32_t L_307 = V_4;
		NullCheck(L_306);
		L_306->set_bitk_11(L_307);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_308 = ___z1;
		int32_t L_309 = V_6;
		NullCheck(L_308);
		L_308->set_avail_in_3(L_309);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_310 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_311 = L_310;
		NullCheck(L_311);
		int64_t L_312 = L_311->get_total_in_4();
		int32_t L_313 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_314 = ___z1;
		NullCheck(L_314);
		int32_t L_315 = L_314->get_next_in_index_2();
		NullCheck(L_311);
		L_311->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_312, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_313, (int32_t)L_315))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_316 = ___z1;
		int32_t L_317 = V_5;
		NullCheck(L_316);
		L_316->set_next_in_index_2(L_317);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_318 = ___s0;
		int32_t L_319 = V_7;
		NullCheck(L_318);
		L_318->set_write_17(L_319);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_320 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_321 = ___z1;
		int32_t L_322 = ___r2;
		NullCheck(L_320);
		int32_t L_323 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_320, L_321, L_322, /*hidden argument*/NULL);
		return L_323;
	}

IL_05dd:
	{
		int32_t L_324 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_324, (int32_t)1));
		int32_t L_325 = V_3;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_326 = ___z1;
		NullCheck(L_326);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_327 = L_326->get_next_in_1();
		int32_t L_328 = V_5;
		int32_t L_329 = L_328;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, (int32_t)1));
		NullCheck(L_327);
		int32_t L_330 = L_329;
		uint8_t L_331 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		int32_t L_332 = V_4;
		V_3 = ((int32_t)((int32_t)L_325|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_331&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_332&(int32_t)((int32_t)31)))))));
		int32_t L_333 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_333, (int32_t)8));
	}

IL_0606:
	{
		int32_t L_334 = V_4;
		int32_t L_335 = V_0;
		if ((((int32_t)L_334) < ((int32_t)L_335)))
		{
			goto IL_058d;
		}
	}
	{
		int32_t L_336 = __this->get_dist_8();
		int32_t L_337 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_338 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_339 = V_0;
		NullCheck(L_338);
		int32_t L_340 = L_339;
		int32_t L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		__this->set_dist_8(((int32_t)il2cpp_codegen_add((int32_t)L_336, (int32_t)((int32_t)((int32_t)L_337&(int32_t)L_341)))));
		int32_t L_342 = V_3;
		int32_t L_343 = V_0;
		V_3 = ((int32_t)((int32_t)L_342>>(int32_t)((int32_t)((int32_t)L_343&(int32_t)((int32_t)31)))));
		int32_t L_344 = V_4;
		int32_t L_345 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_344, (int32_t)L_345));
		__this->set_mode_1(5);
	}

IL_0635:
	{
		int32_t L_346 = V_7;
		int32_t L_347 = __this->get_dist_8();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_346, (int32_t)L_347));
		goto IL_064d;
	}

IL_0642:
	{
		int32_t L_348 = V_9;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_349 = ___s0;
		NullCheck(L_349);
		int32_t L_350 = L_349->get_end_15();
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_348, (int32_t)L_350));
	}

IL_064d:
	{
		int32_t L_351 = V_9;
		if ((((int32_t)L_351) < ((int32_t)0)))
		{
			goto IL_0642;
		}
	}
	{
		goto IL_0797;
	}

IL_0657:
	{
		int32_t L_352 = V_8;
		if (L_352)
		{
			goto IL_075a;
		}
	}
	{
		int32_t L_353 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_354 = ___s0;
		NullCheck(L_354);
		int32_t L_355 = L_354->get_end_15();
		if ((!(((uint32_t)L_353) == ((uint32_t)L_355))))
		{
			goto IL_0695;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_356 = ___s0;
		NullCheck(L_356);
		int32_t L_357 = L_356->get_read_16();
		if (!L_357)
		{
			goto IL_0695;
		}
	}
	{
		V_7 = 0;
		int32_t L_358 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_359 = ___s0;
		NullCheck(L_359);
		int32_t L_360 = L_359->get_read_16();
		if ((((int32_t)L_358) < ((int32_t)L_360)))
		{
			goto IL_0688;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_361 = ___s0;
		NullCheck(L_361);
		int32_t L_362 = L_361->get_end_15();
		int32_t L_363 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_362, (int32_t)L_363));
		goto IL_0693;
	}

IL_0688:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_364 = ___s0;
		NullCheck(L_364);
		int32_t L_365 = L_364->get_read_16();
		int32_t L_366 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_365, (int32_t)L_366)), (int32_t)1));
	}

IL_0693:
	{
		V_8 = G_B67_0;
	}

IL_0695:
	{
		int32_t L_367 = V_8;
		if (L_367)
		{
			goto IL_075a;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_368 = ___s0;
		int32_t L_369 = V_7;
		NullCheck(L_368);
		L_368->set_write_17(L_369);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_370 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_371 = ___z1;
		int32_t L_372 = ___r2;
		NullCheck(L_370);
		int32_t L_373 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_370, L_371, L_372, /*hidden argument*/NULL);
		___r2 = L_373;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_374 = ___s0;
		NullCheck(L_374);
		int32_t L_375 = L_374->get_write_17();
		V_7 = L_375;
		int32_t L_376 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_377 = ___s0;
		NullCheck(L_377);
		int32_t L_378 = L_377->get_read_16();
		if ((((int32_t)L_376) < ((int32_t)L_378)))
		{
			goto IL_06cb;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_379 = ___s0;
		NullCheck(L_379);
		int32_t L_380 = L_379->get_end_15();
		int32_t L_381 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_380, (int32_t)L_381));
		goto IL_06d6;
	}

IL_06cb:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_382 = ___s0;
		NullCheck(L_382);
		int32_t L_383 = L_382->get_read_16();
		int32_t L_384 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_383, (int32_t)L_384)), (int32_t)1));
	}

IL_06d6:
	{
		V_8 = G_B72_0;
		int32_t L_385 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_386 = ___s0;
		NullCheck(L_386);
		int32_t L_387 = L_386->get_end_15();
		if ((!(((uint32_t)L_385) == ((uint32_t)L_387))))
		{
			goto IL_070f;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_388 = ___s0;
		NullCheck(L_388);
		int32_t L_389 = L_388->get_read_16();
		if (!L_389)
		{
			goto IL_070f;
		}
	}
	{
		V_7 = 0;
		int32_t L_390 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_391 = ___s0;
		NullCheck(L_391);
		int32_t L_392 = L_391->get_read_16();
		if ((((int32_t)L_390) < ((int32_t)L_392)))
		{
			goto IL_0702;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_393 = ___s0;
		NullCheck(L_393);
		int32_t L_394 = L_393->get_end_15();
		int32_t L_395 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_394, (int32_t)L_395));
		goto IL_070d;
	}

IL_0702:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_396 = ___s0;
		NullCheck(L_396);
		int32_t L_397 = L_396->get_read_16();
		int32_t L_398 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_397, (int32_t)L_398)), (int32_t)1));
	}

IL_070d:
	{
		V_8 = G_B77_0;
	}

IL_070f:
	{
		int32_t L_399 = V_8;
		if (L_399)
		{
			goto IL_075a;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_400 = ___s0;
		int32_t L_401 = V_3;
		NullCheck(L_400);
		L_400->set_bitb_12(L_401);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_402 = ___s0;
		int32_t L_403 = V_4;
		NullCheck(L_402);
		L_402->set_bitk_11(L_403);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_404 = ___z1;
		int32_t L_405 = V_6;
		NullCheck(L_404);
		L_404->set_avail_in_3(L_405);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_406 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_407 = L_406;
		NullCheck(L_407);
		int64_t L_408 = L_407->get_total_in_4();
		int32_t L_409 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_410 = ___z1;
		NullCheck(L_410);
		int32_t L_411 = L_410->get_next_in_index_2();
		NullCheck(L_407);
		L_407->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_408, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_409, (int32_t)L_411))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_412 = ___z1;
		int32_t L_413 = V_5;
		NullCheck(L_412);
		L_412->set_next_in_index_2(L_413);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_414 = ___s0;
		int32_t L_415 = V_7;
		NullCheck(L_414);
		L_414->set_write_17(L_415);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_416 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_417 = ___z1;
		int32_t L_418 = ___r2;
		NullCheck(L_416);
		int32_t L_419 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_416, L_417, L_418, /*hidden argument*/NULL);
		return L_419;
	}

IL_075a:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_420 = ___s0;
		NullCheck(L_420);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_421 = L_420->get_window_14();
		int32_t L_422 = V_7;
		int32_t L_423 = L_422;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_423, (int32_t)1));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_424 = ___s0;
		NullCheck(L_424);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_425 = L_424->get_window_14();
		int32_t L_426 = V_9;
		int32_t L_427 = L_426;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_427, (int32_t)1));
		NullCheck(L_425);
		int32_t L_428 = L_427;
		uint8_t L_429 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_428));
		NullCheck(L_421);
		(L_421)->SetAt(static_cast<il2cpp_array_size_t>(L_423), (uint8_t)L_429);
		int32_t L_430 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_430, (int32_t)1));
		int32_t L_431 = V_9;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_432 = ___s0;
		NullCheck(L_432);
		int32_t L_433 = L_432->get_end_15();
		if ((!(((uint32_t)L_431) == ((uint32_t)L_433))))
		{
			goto IL_0789;
		}
	}
	{
		V_9 = 0;
	}

IL_0789:
	{
		int32_t L_434 = __this->get_len_2();
		__this->set_len_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_434, (int32_t)1)));
	}

IL_0797:
	{
		int32_t L_435 = __this->get_len_2();
		if (L_435)
		{
			goto IL_0657;
		}
	}
	{
		__this->set_mode_1(0);
		goto IL_0051;
	}

IL_07ae:
	{
		int32_t L_436 = V_8;
		if (L_436)
		{
			goto IL_08b1;
		}
	}
	{
		int32_t L_437 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_438 = ___s0;
		NullCheck(L_438);
		int32_t L_439 = L_438->get_end_15();
		if ((!(((uint32_t)L_437) == ((uint32_t)L_439))))
		{
			goto IL_07ec;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_440 = ___s0;
		NullCheck(L_440);
		int32_t L_441 = L_440->get_read_16();
		if (!L_441)
		{
			goto IL_07ec;
		}
	}
	{
		V_7 = 0;
		int32_t L_442 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_443 = ___s0;
		NullCheck(L_443);
		int32_t L_444 = L_443->get_read_16();
		if ((((int32_t)L_442) < ((int32_t)L_444)))
		{
			goto IL_07df;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_445 = ___s0;
		NullCheck(L_445);
		int32_t L_446 = L_445->get_end_15();
		int32_t L_447 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_446, (int32_t)L_447));
		goto IL_07ea;
	}

IL_07df:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_448 = ___s0;
		NullCheck(L_448);
		int32_t L_449 = L_448->get_read_16();
		int32_t L_450 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_449, (int32_t)L_450)), (int32_t)1));
	}

IL_07ea:
	{
		V_8 = G_B91_0;
	}

IL_07ec:
	{
		int32_t L_451 = V_8;
		if (L_451)
		{
			goto IL_08b1;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_452 = ___s0;
		int32_t L_453 = V_7;
		NullCheck(L_452);
		L_452->set_write_17(L_453);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_454 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_455 = ___z1;
		int32_t L_456 = ___r2;
		NullCheck(L_454);
		int32_t L_457 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_454, L_455, L_456, /*hidden argument*/NULL);
		___r2 = L_457;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_458 = ___s0;
		NullCheck(L_458);
		int32_t L_459 = L_458->get_write_17();
		V_7 = L_459;
		int32_t L_460 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_461 = ___s0;
		NullCheck(L_461);
		int32_t L_462 = L_461->get_read_16();
		if ((((int32_t)L_460) < ((int32_t)L_462)))
		{
			goto IL_0822;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_463 = ___s0;
		NullCheck(L_463);
		int32_t L_464 = L_463->get_end_15();
		int32_t L_465 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_464, (int32_t)L_465));
		goto IL_082d;
	}

IL_0822:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_466 = ___s0;
		NullCheck(L_466);
		int32_t L_467 = L_466->get_read_16();
		int32_t L_468 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_467, (int32_t)L_468)), (int32_t)1));
	}

IL_082d:
	{
		V_8 = G_B96_0;
		int32_t L_469 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_470 = ___s0;
		NullCheck(L_470);
		int32_t L_471 = L_470->get_end_15();
		if ((!(((uint32_t)L_469) == ((uint32_t)L_471))))
		{
			goto IL_0866;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_472 = ___s0;
		NullCheck(L_472);
		int32_t L_473 = L_472->get_read_16();
		if (!L_473)
		{
			goto IL_0866;
		}
	}
	{
		V_7 = 0;
		int32_t L_474 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_475 = ___s0;
		NullCheck(L_475);
		int32_t L_476 = L_475->get_read_16();
		if ((((int32_t)L_474) < ((int32_t)L_476)))
		{
			goto IL_0859;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_477 = ___s0;
		NullCheck(L_477);
		int32_t L_478 = L_477->get_end_15();
		int32_t L_479 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_478, (int32_t)L_479));
		goto IL_0864;
	}

IL_0859:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_480 = ___s0;
		NullCheck(L_480);
		int32_t L_481 = L_480->get_read_16();
		int32_t L_482 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_481, (int32_t)L_482)), (int32_t)1));
	}

IL_0864:
	{
		V_8 = G_B101_0;
	}

IL_0866:
	{
		int32_t L_483 = V_8;
		if (L_483)
		{
			goto IL_08b1;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_484 = ___s0;
		int32_t L_485 = V_3;
		NullCheck(L_484);
		L_484->set_bitb_12(L_485);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_486 = ___s0;
		int32_t L_487 = V_4;
		NullCheck(L_486);
		L_486->set_bitk_11(L_487);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_488 = ___z1;
		int32_t L_489 = V_6;
		NullCheck(L_488);
		L_488->set_avail_in_3(L_489);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_490 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_491 = L_490;
		NullCheck(L_491);
		int64_t L_492 = L_491->get_total_in_4();
		int32_t L_493 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_494 = ___z1;
		NullCheck(L_494);
		int32_t L_495 = L_494->get_next_in_index_2();
		NullCheck(L_491);
		L_491->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_492, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_493, (int32_t)L_495))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_496 = ___z1;
		int32_t L_497 = V_5;
		NullCheck(L_496);
		L_496->set_next_in_index_2(L_497);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_498 = ___s0;
		int32_t L_499 = V_7;
		NullCheck(L_498);
		L_498->set_write_17(L_499);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_500 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_501 = ___z1;
		int32_t L_502 = ___r2;
		NullCheck(L_500);
		int32_t L_503 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_500, L_501, L_502, /*hidden argument*/NULL);
		return L_503;
	}

IL_08b1:
	{
		___r2 = 0;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_504 = ___s0;
		NullCheck(L_504);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_505 = L_504->get_window_14();
		int32_t L_506 = V_7;
		int32_t L_507 = L_506;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_507, (int32_t)1));
		int32_t L_508 = __this->get_lit_6();
		NullCheck(L_505);
		(L_505)->SetAt(static_cast<il2cpp_array_size_t>(L_507), (uint8_t)(((int32_t)((uint8_t)L_508))));
		int32_t L_509 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_509, (int32_t)1));
		__this->set_mode_1(0);
		goto IL_0051;
	}

IL_08db:
	{
		int32_t L_510 = V_4;
		if ((((int32_t)L_510) <= ((int32_t)7)))
		{
			goto IL_08f2;
		}
	}
	{
		int32_t L_511 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_511, (int32_t)8));
		int32_t L_512 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_512, (int32_t)1));
		int32_t L_513 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_513, (int32_t)1));
	}

IL_08f2:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_514 = ___s0;
		int32_t L_515 = V_7;
		NullCheck(L_514);
		L_514->set_write_17(L_515);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_516 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_517 = ___z1;
		int32_t L_518 = ___r2;
		NullCheck(L_516);
		int32_t L_519 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_516, L_517, L_518, /*hidden argument*/NULL);
		___r2 = L_519;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_520 = ___s0;
		NullCheck(L_520);
		int32_t L_521 = L_520->get_write_17();
		V_7 = L_521;
		int32_t L_522 = V_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_523 = ___s0;
		NullCheck(L_523);
		int32_t L_524 = L_523->get_read_16();
		if ((((int32_t)L_522) < ((int32_t)L_524)))
		{
			goto IL_0921;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_525 = ___s0;
		NullCheck(L_525);
		int32_t L_526 = L_525->get_end_15();
		int32_t L_527 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_526, (int32_t)L_527));
		goto IL_092c;
	}

IL_0921:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_528 = ___s0;
		NullCheck(L_528);
		int32_t L_529 = L_528->get_read_16();
		int32_t L_530 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_529, (int32_t)L_530)), (int32_t)1));
	}

IL_092c:
	{
		V_8 = G_B110_0;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_531 = ___s0;
		NullCheck(L_531);
		int32_t L_532 = L_531->get_read_16();
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_533 = ___s0;
		NullCheck(L_533);
		int32_t L_534 = L_533->get_write_17();
		if ((((int32_t)L_532) == ((int32_t)L_534)))
		{
			goto IL_0983;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_535 = ___s0;
		int32_t L_536 = V_3;
		NullCheck(L_535);
		L_535->set_bitb_12(L_536);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_537 = ___s0;
		int32_t L_538 = V_4;
		NullCheck(L_537);
		L_537->set_bitk_11(L_538);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_539 = ___z1;
		int32_t L_540 = V_6;
		NullCheck(L_539);
		L_539->set_avail_in_3(L_540);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_541 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_542 = L_541;
		NullCheck(L_542);
		int64_t L_543 = L_542->get_total_in_4();
		int32_t L_544 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_545 = ___z1;
		NullCheck(L_545);
		int32_t L_546 = L_545->get_next_in_index_2();
		NullCheck(L_542);
		L_542->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_543, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_544, (int32_t)L_546))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_547 = ___z1;
		int32_t L_548 = V_5;
		NullCheck(L_547);
		L_547->set_next_in_index_2(L_548);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_549 = ___s0;
		int32_t L_550 = V_7;
		NullCheck(L_549);
		L_549->set_write_17(L_550);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_551 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_552 = ___z1;
		int32_t L_553 = ___r2;
		NullCheck(L_551);
		int32_t L_554 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_551, L_552, L_553, /*hidden argument*/NULL);
		return L_554;
	}

IL_0983:
	{
		__this->set_mode_1(8);
	}

IL_098a:
	{
		___r2 = 1;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_555 = ___s0;
		int32_t L_556 = V_3;
		NullCheck(L_555);
		L_555->set_bitb_12(L_556);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_557 = ___s0;
		int32_t L_558 = V_4;
		NullCheck(L_557);
		L_557->set_bitk_11(L_558);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_559 = ___z1;
		int32_t L_560 = V_6;
		NullCheck(L_559);
		L_559->set_avail_in_3(L_560);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_561 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_562 = L_561;
		NullCheck(L_562);
		int64_t L_563 = L_562->get_total_in_4();
		int32_t L_564 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_565 = ___z1;
		NullCheck(L_565);
		int32_t L_566 = L_565->get_next_in_index_2();
		NullCheck(L_562);
		L_562->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_563, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_564, (int32_t)L_566))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_567 = ___z1;
		int32_t L_568 = V_5;
		NullCheck(L_567);
		L_567->set_next_in_index_2(L_568);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_569 = ___s0;
		int32_t L_570 = V_7;
		NullCheck(L_569);
		L_569->set_write_17(L_570);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_571 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_572 = ___z1;
		int32_t L_573 = ___r2;
		NullCheck(L_571);
		int32_t L_574 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_571, L_572, L_573, /*hidden argument*/NULL);
		return L_574;
	}

IL_09d4:
	{
		___r2 = ((int32_t)-3);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_575 = ___s0;
		int32_t L_576 = V_3;
		NullCheck(L_575);
		L_575->set_bitb_12(L_576);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_577 = ___s0;
		int32_t L_578 = V_4;
		NullCheck(L_577);
		L_577->set_bitk_11(L_578);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_579 = ___z1;
		int32_t L_580 = V_6;
		NullCheck(L_579);
		L_579->set_avail_in_3(L_580);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_581 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_582 = L_581;
		NullCheck(L_582);
		int64_t L_583 = L_582->get_total_in_4();
		int32_t L_584 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_585 = ___z1;
		NullCheck(L_585);
		int32_t L_586 = L_585->get_next_in_index_2();
		NullCheck(L_582);
		L_582->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_583, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_584, (int32_t)L_586))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_587 = ___z1;
		int32_t L_588 = V_5;
		NullCheck(L_587);
		L_587->set_next_in_index_2(L_588);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_589 = ___s0;
		int32_t L_590 = V_7;
		NullCheck(L_589);
		L_589->set_write_17(L_590);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_591 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_592 = ___z1;
		int32_t L_593 = ___r2;
		NullCheck(L_591);
		int32_t L_594 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_591, L_592, L_593, /*hidden argument*/NULL);
		return L_594;
	}

IL_0a1f:
	{
		___r2 = ((int32_t)-2);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_595 = ___s0;
		int32_t L_596 = V_3;
		NullCheck(L_595);
		L_595->set_bitb_12(L_596);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_597 = ___s0;
		int32_t L_598 = V_4;
		NullCheck(L_597);
		L_597->set_bitk_11(L_598);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_599 = ___z1;
		int32_t L_600 = V_6;
		NullCheck(L_599);
		L_599->set_avail_in_3(L_600);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_601 = ___z1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_602 = L_601;
		NullCheck(L_602);
		int64_t L_603 = L_602->get_total_in_4();
		int32_t L_604 = V_5;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_605 = ___z1;
		NullCheck(L_605);
		int32_t L_606 = L_605->get_next_in_index_2();
		NullCheck(L_602);
		L_602->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_603, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_604, (int32_t)L_606))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_607 = ___z1;
		int32_t L_608 = V_5;
		NullCheck(L_607);
		L_607->set_next_in_index_2(L_608);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_609 = ___s0;
		int32_t L_610 = V_7;
		NullCheck(L_609);
		L_609->set_write_17(L_610);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_611 = ___s0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_612 = ___z1;
		int32_t L_613 = ___r2;
		NullCheck(L_611);
		int32_t L_614 = InfBlocks_inflate_flush_mA32B35A4B0CF41ADC17075C5C66A44F17E25D1A3(L_611, L_612, L_613, /*hidden argument*/NULL);
		return L_614;
	}
}
// System.Void zlib.InfCodes::free(zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes_free_m19B81F1F7BE49EB8C734BD80D444F93F24D74ED7 (InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 zlib.InfCodes::inflate_fast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,zlib.InfBlocks,zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfCodes_inflate_fast_mA5E3DF26A758FCFFBEC6465D7604EEEF8A980D5B (InfCodes_t9E00C30617927414B4347A5AD556D26037178D01 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___td4, int32_t ___td_index5, InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * ___s6, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfCodes_inflate_fast_mA5E3DF26A758FCFFBEC6465D7604EEEF8A980D5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B59_0 = 0;
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = ___z7;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_next_in_index_2();
		V_6 = L_1;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_2 = ___z7;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_avail_in_3();
		V_7 = L_3;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_4 = ___s6;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bitb_12();
		V_4 = L_5;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_6 = ___s6;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitk_11();
		V_5 = L_7;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_8 = ___s6;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_write_17();
		V_8 = L_9;
		int32_t L_10 = V_8;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_11 = ___s6;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_read_16();
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_13 = ___s6;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_end_15();
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		goto IL_0050;
	}

IL_0044:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_16 = ___s6;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_read_16();
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), (int32_t)1));
	}

IL_0050:
	{
		V_9 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_19 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_20 = ___bl0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_24 = ___bd1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
		goto IL_0092;
	}

IL_0066:
	{
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_4;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_29 = ___z7;
		NullCheck(L_29);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = L_29->get_next_in_1();
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)((int32_t)L_28|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_34&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)31)))))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)8));
	}

IL_0092:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)((int32_t)L_38&(int32_t)L_39));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_40 = ___tl2;
		V_1 = L_40;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_42 = V_1;
		int32_t L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)), (int32_t)3));
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = L_46;
		V_3 = L_47;
		if (L_47)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_48 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_49 = V_1;
		int32_t L_50 = V_2;
		int32_t L_51 = V_0;
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51)), (int32_t)3)), (int32_t)1));
		int32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)((int32_t)L_48>>(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)31)))));
		int32_t L_54 = V_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_55 = V_1;
		int32_t L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_55);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57)), (int32_t)3)), (int32_t)1));
		int32_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_59));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_60 = ___s6;
		NullCheck(L_60);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_61 = L_60->get_window_14();
		int32_t L_62 = V_8;
		int32_t L_63 = L_62;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_64 = V_1;
		int32_t L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_64);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), (int32_t)3)), (int32_t)2));
		int32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (uint8_t)(((int32_t)((uint8_t)L_68))));
		int32_t L_69 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
		goto IL_05e0;
	}

IL_00f1:
	{
		int32_t L_70 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = V_1;
		int32_t L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_71);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73)), (int32_t)3)), (int32_t)1));
		int32_t L_75 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_4 = ((int32_t)((int32_t)L_70>>(int32_t)((int32_t)((int32_t)L_75&(int32_t)((int32_t)31)))));
		int32_t L_76 = V_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_77 = V_1;
		int32_t L_78 = V_2;
		int32_t L_79 = V_0;
		NullCheck(L_77);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)L_79)), (int32_t)3)), (int32_t)1));
		int32_t L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)L_81));
		int32_t L_82 = V_3;
		if (!((int32_t)((int32_t)L_82&(int32_t)((int32_t)16))))
		{
			goto IL_0463;
		}
	}
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)((int32_t)L_83&(int32_t)((int32_t)15)));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_84 = V_1;
		int32_t L_85 = V_2;
		int32_t L_86 = V_0;
		NullCheck(L_84);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_86)), (int32_t)3)), (int32_t)2));
		int32_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_90 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_91 = V_3;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		int32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)((int32_t)((int32_t)L_89&(int32_t)L_93))));
		int32_t L_94 = V_4;
		int32_t L_95 = V_3;
		V_4 = ((int32_t)((int32_t)L_94>>(int32_t)((int32_t)((int32_t)L_95&(int32_t)((int32_t)31)))));
		int32_t L_96 = V_5;
		int32_t L_97 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)L_97));
		goto IL_0171;
	}

IL_0145:
	{
		int32_t L_98 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1));
		int32_t L_99 = V_4;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_100 = ___z7;
		NullCheck(L_100);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_101 = L_100->get_next_in_1();
		int32_t L_102 = V_6;
		int32_t L_103 = L_102;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		NullCheck(L_101);
		int32_t L_104 = L_103;
		uint8_t L_105 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		int32_t L_106 = V_5;
		V_4 = ((int32_t)((int32_t)L_99|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_105&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_106&(int32_t)((int32_t)31)))))));
		int32_t L_107 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)8));
	}

IL_0171:
	{
		int32_t L_108 = V_5;
		if ((((int32_t)L_108) < ((int32_t)((int32_t)15))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_109 = V_4;
		int32_t L_110 = V_11;
		V_0 = ((int32_t)((int32_t)L_109&(int32_t)L_110));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_111 = ___td4;
		V_1 = L_111;
		int32_t L_112 = ___td_index5;
		V_2 = L_112;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_113 = V_1;
		int32_t L_114 = V_2;
		int32_t L_115 = V_0;
		NullCheck(L_113);
		int32_t L_116 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115)), (int32_t)3));
		int32_t L_117 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_3 = L_117;
	}

IL_018b:
	{
		int32_t L_118 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_119 = V_1;
		int32_t L_120 = V_2;
		int32_t L_121 = V_0;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_121)), (int32_t)3)), (int32_t)1));
		int32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_4 = ((int32_t)((int32_t)L_118>>(int32_t)((int32_t)((int32_t)L_123&(int32_t)((int32_t)31)))));
		int32_t L_124 = V_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_125 = V_1;
		int32_t L_126 = V_2;
		int32_t L_127 = V_0;
		NullCheck(L_125);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)L_127)), (int32_t)3)), (int32_t)1));
		int32_t L_129 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)L_129));
		int32_t L_130 = V_3;
		if (!((int32_t)((int32_t)L_130&(int32_t)((int32_t)16))))
		{
			goto IL_03ad;
		}
	}
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131&(int32_t)((int32_t)15)));
		goto IL_01e6;
	}

IL_01ba:
	{
		int32_t L_132 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_132, (int32_t)1));
		int32_t L_133 = V_4;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_134 = ___z7;
		NullCheck(L_134);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_135 = L_134->get_next_in_1();
		int32_t L_136 = V_6;
		int32_t L_137 = L_136;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
		NullCheck(L_135);
		int32_t L_138 = L_137;
		uint8_t L_139 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		int32_t L_140 = V_5;
		V_4 = ((int32_t)((int32_t)L_133|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_140&(int32_t)((int32_t)31)))))));
		int32_t L_141 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)8));
	}

IL_01e6:
	{
		int32_t L_142 = V_5;
		int32_t L_143 = V_3;
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_01ba;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_144 = V_1;
		int32_t L_145 = V_2;
		int32_t L_146 = V_0;
		NullCheck(L_144);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146)), (int32_t)3)), (int32_t)2));
		int32_t L_148 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		int32_t L_149 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_150 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_151 = V_3;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		int32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)((int32_t)((int32_t)L_149&(int32_t)L_153))));
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		V_4 = ((int32_t)((int32_t)L_154>>(int32_t)((int32_t)((int32_t)L_155&(int32_t)((int32_t)31)))));
		int32_t L_156 = V_5;
		int32_t L_157 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_156, (int32_t)L_157));
		int32_t L_158 = V_9;
		int32_t L_159 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_158, (int32_t)L_159));
		int32_t L_160 = V_8;
		int32_t L_161 = V_13;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_02b3;
		}
	}
	{
		int32_t L_162 = V_8;
		int32_t L_163 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_162, (int32_t)L_163));
		int32_t L_164 = V_8;
		int32_t L_165 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)L_165))) <= ((int32_t)0)))
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_166 = V_8;
		int32_t L_167 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_166, (int32_t)L_167)))))
		{
			goto IL_0284;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_168 = ___s6;
		NullCheck(L_168);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_169 = L_168->get_window_14();
		int32_t L_170 = V_8;
		int32_t L_171 = L_170;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)1));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_172 = ___s6;
		NullCheck(L_172);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_173 = L_172->get_window_14();
		int32_t L_174 = V_14;
		int32_t L_175 = L_174;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1));
		NullCheck(L_173);
		int32_t L_176 = L_175;
		uint8_t L_177 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(L_171), (uint8_t)L_177);
		int32_t L_178 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_178, (int32_t)1));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_179 = ___s6;
		NullCheck(L_179);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_180 = L_179->get_window_14();
		int32_t L_181 = V_8;
		int32_t L_182 = L_181;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)1));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_183 = ___s6;
		NullCheck(L_183);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_184 = L_183->get_window_14();
		int32_t L_185 = V_14;
		int32_t L_186 = L_185;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)1));
		NullCheck(L_184);
		int32_t L_187 = L_186;
		uint8_t L_188 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(L_182), (uint8_t)L_188);
		int32_t L_189 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_189, (int32_t)1));
		goto IL_0341;
	}

IL_0284:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_190 = ___s6;
		NullCheck(L_190);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_191 = L_190->get_window_14();
		int32_t L_192 = V_14;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_193 = ___s6;
		NullCheck(L_193);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_194 = L_193->get_window_14();
		int32_t L_195 = V_8;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_191, L_192, (RuntimeArray *)(RuntimeArray *)L_194, L_195, 2, /*hidden argument*/NULL);
		int32_t L_196 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)2));
		int32_t L_197 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_197, (int32_t)2));
		int32_t L_198 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)2));
		goto IL_0341;
	}

IL_02b3:
	{
		int32_t L_199 = V_8;
		int32_t L_200 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_199, (int32_t)L_200));
	}

IL_02ba:
	{
		int32_t L_201 = V_14;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_202 = ___s6;
		NullCheck(L_202);
		int32_t L_203 = L_202->get_end_15();
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)L_203));
		int32_t L_204 = V_14;
		if ((((int32_t)L_204) < ((int32_t)0)))
		{
			goto IL_02ba;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_205 = ___s6;
		NullCheck(L_205);
		int32_t L_206 = L_205->get_end_15();
		int32_t L_207 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_206, (int32_t)L_207));
		int32_t L_208 = V_12;
		int32_t L_209 = V_3;
		if ((((int32_t)L_208) <= ((int32_t)L_209)))
		{
			goto IL_0341;
		}
	}
	{
		int32_t L_210 = V_12;
		int32_t L_211 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_210, (int32_t)L_211));
		int32_t L_212 = V_8;
		int32_t L_213 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_212, (int32_t)L_213))) <= ((int32_t)0)))
		{
			goto IL_0318;
		}
	}
	{
		int32_t L_214 = V_3;
		int32_t L_215 = V_8;
		int32_t L_216 = V_14;
		if ((((int32_t)L_214) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_215, (int32_t)L_216)))))
		{
			goto IL_0318;
		}
	}

IL_02f1:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_217 = ___s6;
		NullCheck(L_217);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_218 = L_217->get_window_14();
		int32_t L_219 = V_8;
		int32_t L_220 = L_219;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_220, (int32_t)1));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_221 = ___s6;
		NullCheck(L_221);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_222 = L_221->get_window_14();
		int32_t L_223 = V_14;
		int32_t L_224 = L_223;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)1));
		NullCheck(L_222);
		int32_t L_225 = L_224;
		uint8_t L_226 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		NullCheck(L_218);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(L_220), (uint8_t)L_226);
		int32_t L_227 = V_3;
		int32_t L_228 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_227, (int32_t)1));
		V_3 = L_228;
		if (L_228)
		{
			goto IL_02f1;
		}
	}
	{
		goto IL_033e;
	}

IL_0318:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_229 = ___s6;
		NullCheck(L_229);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_230 = L_229->get_window_14();
		int32_t L_231 = V_14;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_232 = ___s6;
		NullCheck(L_232);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_233 = L_232->get_window_14();
		int32_t L_234 = V_8;
		int32_t L_235 = V_3;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_230, L_231, (RuntimeArray *)(RuntimeArray *)L_233, L_234, L_235, /*hidden argument*/NULL);
		int32_t L_236 = V_8;
		int32_t L_237 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_236, (int32_t)L_237));
		int32_t L_238 = V_14;
		int32_t L_239 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)L_239));
		V_3 = 0;
	}

IL_033e:
	{
		V_14 = 0;
	}

IL_0341:
	{
		int32_t L_240 = V_8;
		int32_t L_241 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_240, (int32_t)L_241))) <= ((int32_t)0)))
		{
			goto IL_037e;
		}
	}
	{
		int32_t L_242 = V_12;
		int32_t L_243 = V_8;
		int32_t L_244 = V_14;
		if ((((int32_t)L_242) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)L_244)))))
		{
			goto IL_037e;
		}
	}

IL_0352:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_245 = ___s6;
		NullCheck(L_245);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_246 = L_245->get_window_14();
		int32_t L_247 = V_8;
		int32_t L_248 = L_247;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_248, (int32_t)1));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_249 = ___s6;
		NullCheck(L_249);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_250 = L_249->get_window_14();
		int32_t L_251 = V_14;
		int32_t L_252 = L_251;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_252, (int32_t)1));
		NullCheck(L_250);
		int32_t L_253 = L_252;
		uint8_t L_254 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(L_248), (uint8_t)L_254);
		int32_t L_255 = V_12;
		int32_t L_256 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_255, (int32_t)1));
		V_12 = L_256;
		if (L_256)
		{
			goto IL_0352;
		}
	}
	{
		goto IL_05e0;
	}

IL_037e:
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_257 = ___s6;
		NullCheck(L_257);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_258 = L_257->get_window_14();
		int32_t L_259 = V_14;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_260 = ___s6;
		NullCheck(L_260);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_261 = L_260->get_window_14();
		int32_t L_262 = V_8;
		int32_t L_263 = V_12;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_258, L_259, (RuntimeArray *)(RuntimeArray *)L_261, L_262, L_263, /*hidden argument*/NULL);
		int32_t L_264 = V_8;
		int32_t L_265 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_264, (int32_t)L_265));
		int32_t L_266 = V_14;
		int32_t L_267 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)L_267));
		V_12 = 0;
		goto IL_05e0;
	}

IL_03ad:
	{
		int32_t L_268 = V_3;
		if (((int32_t)((int32_t)L_268&(int32_t)((int32_t)64))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_269 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_270 = V_1;
		int32_t L_271 = V_2;
		int32_t L_272 = V_0;
		NullCheck(L_270);
		int32_t L_273 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_271, (int32_t)L_272)), (int32_t)3)), (int32_t)2));
		int32_t L_274 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_269, (int32_t)L_274));
		int32_t L_275 = V_0;
		int32_t L_276 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_277 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_278 = V_3;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		int32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_275, (int32_t)((int32_t)((int32_t)L_276&(int32_t)L_280))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_281 = V_1;
		int32_t L_282 = V_2;
		int32_t L_283 = V_0;
		NullCheck(L_281);
		int32_t L_284 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_282, (int32_t)L_283)), (int32_t)3));
		int32_t L_285 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		V_3 = L_285;
		goto IL_018b;
	}

IL_03d9:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_286 = ___z7;
		NullCheck(L_286);
		L_286->set_msg_9(_stringLiteral4925A7198FDCA574E35F8D190FC252E87F4A8016);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_287 = ___z7;
		NullCheck(L_287);
		int32_t L_288 = L_287->get_avail_in_3();
		int32_t L_289 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_289));
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_290>>(int32_t)3))) < ((int32_t)L_291)))
		{
			goto IL_03fd;
		}
	}
	{
		int32_t L_292 = V_12;
		G_B41_0 = L_292;
		goto IL_0401;
	}

IL_03fd:
	{
		int32_t L_293 = V_5;
		G_B41_0 = ((int32_t)((int32_t)L_293>>(int32_t)3));
	}

IL_0401:
	{
		V_12 = G_B41_0;
		int32_t L_294 = V_7;
		int32_t L_295 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_294, (int32_t)L_295));
		int32_t L_296 = V_6;
		int32_t L_297 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_296, (int32_t)L_297));
		int32_t L_298 = V_5;
		int32_t L_299 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_298, (int32_t)((int32_t)((int32_t)L_299<<(int32_t)3))));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_300 = ___s6;
		int32_t L_301 = V_4;
		NullCheck(L_300);
		L_300->set_bitb_12(L_301);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_302 = ___s6;
		int32_t L_303 = V_5;
		NullCheck(L_302);
		L_302->set_bitk_11(L_303);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_304 = ___z7;
		int32_t L_305 = V_7;
		NullCheck(L_304);
		L_304->set_avail_in_3(L_305);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_306 = ___z7;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_307 = L_306;
		NullCheck(L_307);
		int64_t L_308 = L_307->get_total_in_4();
		int32_t L_309 = V_6;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_310 = ___z7;
		NullCheck(L_310);
		int32_t L_311 = L_310->get_next_in_index_2();
		NullCheck(L_307);
		L_307->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_308, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_309, (int32_t)L_311))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_312 = ___z7;
		int32_t L_313 = V_6;
		NullCheck(L_312);
		L_312->set_next_in_index_2(L_313);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_314 = ___s6;
		int32_t L_315 = V_8;
		NullCheck(L_314);
		L_314->set_write_17(L_315);
		return ((int32_t)-3);
	}

IL_0463:
	{
		int32_t L_316 = V_3;
		if (((int32_t)((int32_t)L_316&(int32_t)((int32_t)64))))
		{
			goto IL_04d3;
		}
	}
	{
		int32_t L_317 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_318 = V_1;
		int32_t L_319 = V_2;
		int32_t L_320 = V_0;
		NullCheck(L_318);
		int32_t L_321 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_319, (int32_t)L_320)), (int32_t)3)), (int32_t)2));
		int32_t L_322 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_317, (int32_t)L_322));
		int32_t L_323 = V_0;
		int32_t L_324 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_325 = ((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->get_inflate_mask_0();
		int32_t L_326 = V_3;
		NullCheck(L_325);
		int32_t L_327 = L_326;
		int32_t L_328 = (L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)((int32_t)((int32_t)L_324&(int32_t)L_328))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_329 = V_1;
		int32_t L_330 = V_2;
		int32_t L_331 = V_0;
		NullCheck(L_329);
		int32_t L_332 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_330, (int32_t)L_331)), (int32_t)3));
		int32_t L_333 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		int32_t L_334 = L_333;
		V_3 = L_334;
		if (L_334)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_335 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_336 = V_1;
		int32_t L_337 = V_2;
		int32_t L_338 = V_0;
		NullCheck(L_336);
		int32_t L_339 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_337, (int32_t)L_338)), (int32_t)3)), (int32_t)1));
		int32_t L_340 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		V_4 = ((int32_t)((int32_t)L_335>>(int32_t)((int32_t)((int32_t)L_340&(int32_t)((int32_t)31)))));
		int32_t L_341 = V_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_342 = V_1;
		int32_t L_343 = V_2;
		int32_t L_344 = V_0;
		NullCheck(L_342);
		int32_t L_345 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)L_344)), (int32_t)3)), (int32_t)1));
		int32_t L_346 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_341, (int32_t)L_346));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_347 = ___s6;
		NullCheck(L_347);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_348 = L_347->get_window_14();
		int32_t L_349 = V_8;
		int32_t L_350 = L_349;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_350, (int32_t)1));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_351 = V_1;
		int32_t L_352 = V_2;
		int32_t L_353 = V_0;
		NullCheck(L_351);
		int32_t L_354 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_352, (int32_t)L_353)), (int32_t)3)), (int32_t)2));
		int32_t L_355 = (L_351)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(L_350), (uint8_t)(((int32_t)((uint8_t)L_355))));
		int32_t L_356 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_356, (int32_t)1));
		goto IL_05e0;
	}

IL_04d3:
	{
		int32_t L_357 = V_3;
		if (!((int32_t)((int32_t)L_357&(int32_t)((int32_t)32))))
		{
			goto IL_0556;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_358 = ___z7;
		NullCheck(L_358);
		int32_t L_359 = L_358->get_avail_in_3();
		int32_t L_360 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_359, (int32_t)L_360));
		int32_t L_361 = V_5;
		int32_t L_362 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_361>>(int32_t)3))) < ((int32_t)L_362)))
		{
			goto IL_04f1;
		}
	}
	{
		int32_t L_363 = V_12;
		G_B49_0 = L_363;
		goto IL_04f5;
	}

IL_04f1:
	{
		int32_t L_364 = V_5;
		G_B49_0 = ((int32_t)((int32_t)L_364>>(int32_t)3));
	}

IL_04f5:
	{
		V_12 = G_B49_0;
		int32_t L_365 = V_7;
		int32_t L_366 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_365, (int32_t)L_366));
		int32_t L_367 = V_6;
		int32_t L_368 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_367, (int32_t)L_368));
		int32_t L_369 = V_5;
		int32_t L_370 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)((int32_t)((int32_t)L_370<<(int32_t)3))));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_371 = ___s6;
		int32_t L_372 = V_4;
		NullCheck(L_371);
		L_371->set_bitb_12(L_372);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_373 = ___s6;
		int32_t L_374 = V_5;
		NullCheck(L_373);
		L_373->set_bitk_11(L_374);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_375 = ___z7;
		int32_t L_376 = V_7;
		NullCheck(L_375);
		L_375->set_avail_in_3(L_376);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_377 = ___z7;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_378 = L_377;
		NullCheck(L_378);
		int64_t L_379 = L_378->get_total_in_4();
		int32_t L_380 = V_6;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_381 = ___z7;
		NullCheck(L_381);
		int32_t L_382 = L_381->get_next_in_index_2();
		NullCheck(L_378);
		L_378->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_379, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_380, (int32_t)L_382))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_383 = ___z7;
		int32_t L_384 = V_6;
		NullCheck(L_383);
		L_383->set_next_in_index_2(L_384);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_385 = ___s6;
		int32_t L_386 = V_8;
		NullCheck(L_385);
		L_385->set_write_17(L_386);
		return 1;
	}

IL_0556:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_387 = ___z7;
		NullCheck(L_387);
		L_387->set_msg_9(_stringLiteral0935D8D996DAFD1BB7298CE5A779FD11F107BBE5);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_388 = ___z7;
		NullCheck(L_388);
		int32_t L_389 = L_388->get_avail_in_3();
		int32_t L_390 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_389, (int32_t)L_390));
		int32_t L_391 = V_5;
		int32_t L_392 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_391>>(int32_t)3))) < ((int32_t)L_392)))
		{
			goto IL_057a;
		}
	}
	{
		int32_t L_393 = V_12;
		G_B53_0 = L_393;
		goto IL_057e;
	}

IL_057a:
	{
		int32_t L_394 = V_5;
		G_B53_0 = ((int32_t)((int32_t)L_394>>(int32_t)3));
	}

IL_057e:
	{
		V_12 = G_B53_0;
		int32_t L_395 = V_7;
		int32_t L_396 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_395, (int32_t)L_396));
		int32_t L_397 = V_6;
		int32_t L_398 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_397, (int32_t)L_398));
		int32_t L_399 = V_5;
		int32_t L_400 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_399, (int32_t)((int32_t)((int32_t)L_400<<(int32_t)3))));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_401 = ___s6;
		int32_t L_402 = V_4;
		NullCheck(L_401);
		L_401->set_bitb_12(L_402);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_403 = ___s6;
		int32_t L_404 = V_5;
		NullCheck(L_403);
		L_403->set_bitk_11(L_404);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_405 = ___z7;
		int32_t L_406 = V_7;
		NullCheck(L_405);
		L_405->set_avail_in_3(L_406);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_407 = ___z7;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_408 = L_407;
		NullCheck(L_408);
		int64_t L_409 = L_408->get_total_in_4();
		int32_t L_410 = V_6;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_411 = ___z7;
		NullCheck(L_411);
		int32_t L_412 = L_411->get_next_in_index_2();
		NullCheck(L_408);
		L_408->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_409, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_410, (int32_t)L_412))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_413 = ___z7;
		int32_t L_414 = V_6;
		NullCheck(L_413);
		L_413->set_next_in_index_2(L_414);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_415 = ___s6;
		int32_t L_416 = V_8;
		NullCheck(L_415);
		L_415->set_write_17(L_416);
		return ((int32_t)-3);
	}

IL_05e0:
	{
		int32_t L_417 = V_9;
		if ((((int32_t)L_417) < ((int32_t)((int32_t)258))))
		{
			goto IL_05f2;
		}
	}
	{
		int32_t L_418 = V_7;
		if ((((int32_t)L_418) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0092;
		}
	}

IL_05f2:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_419 = ___z7;
		NullCheck(L_419);
		int32_t L_420 = L_419->get_avail_in_3();
		int32_t L_421 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_420, (int32_t)L_421));
		int32_t L_422 = V_5;
		int32_t L_423 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_422>>(int32_t)3))) < ((int32_t)L_423)))
		{
			goto IL_060a;
		}
	}
	{
		int32_t L_424 = V_12;
		G_B59_0 = L_424;
		goto IL_060e;
	}

IL_060a:
	{
		int32_t L_425 = V_5;
		G_B59_0 = ((int32_t)((int32_t)L_425>>(int32_t)3));
	}

IL_060e:
	{
		V_12 = G_B59_0;
		int32_t L_426 = V_7;
		int32_t L_427 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_426, (int32_t)L_427));
		int32_t L_428 = V_6;
		int32_t L_429 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_428, (int32_t)L_429));
		int32_t L_430 = V_5;
		int32_t L_431 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_430, (int32_t)((int32_t)((int32_t)L_431<<(int32_t)3))));
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_432 = ___s6;
		int32_t L_433 = V_4;
		NullCheck(L_432);
		L_432->set_bitb_12(L_433);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_434 = ___s6;
		int32_t L_435 = V_5;
		NullCheck(L_434);
		L_434->set_bitk_11(L_435);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_436 = ___z7;
		int32_t L_437 = V_7;
		NullCheck(L_436);
		L_436->set_avail_in_3(L_437);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_438 = ___z7;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_439 = L_438;
		NullCheck(L_439);
		int64_t L_440 = L_439->get_total_in_4();
		int32_t L_441 = V_6;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_442 = ___z7;
		NullCheck(L_442);
		int32_t L_443 = L_442->get_next_in_index_2();
		NullCheck(L_439);
		L_439->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_440, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_441, (int32_t)L_443))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_444 = ___z7;
		int32_t L_445 = V_6;
		NullCheck(L_444);
		L_444->set_next_in_index_2(L_445);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_446 = ___s6;
		int32_t L_447 = V_8;
		NullCheck(L_446);
		L_446->set_write_17(L_447);
		return 0;
	}
}
// System.Void zlib.InfCodes::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfCodes__cctor_m400D974F615E1C772A0BC9481719DC86360B77D3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfCodes__cctor_m400D974F615E1C772A0BC9481719DC86360B77D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f9U2D1_21_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_StaticFields*)il2cpp_codegen_static_fields_for(InfCodes_t9E00C30617927414B4347A5AD556D26037178D01_il2cpp_TypeInfo_var))->set_inflate_mask_0(L_1);
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
// System.Int32 zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m4787F16B9CFC8967632F972CAB4246A638009FAF (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___d4, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___e5, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___t6, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m7, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___hp8, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___hn9, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___v10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_huft_build_m4787F16B9CFC8967632F972CAB4246A638009FAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_12 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_13 = NULL;
	int32_t V_14 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B52_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B52_1 = NULL;
	int32_t G_B51_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B51_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B53_1 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B53_2 = NULL;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		V_12 = L_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		V_13 = L_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_15 = L_3;
		V_10 = 0;
		int32_t L_4 = ___n2;
		V_5 = L_4;
	}

IL_0028:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = ___b0;
		int32_t L_7 = ___bindex1;
		int32_t L_8 = V_10;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		int32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		int32_t* L_11 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
		int32_t L_12 = (*(int32_t*)L_11);
		*(int32_t*)L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		int32_t L_13 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_5;
		if (L_15)
		{
			goto IL_0028;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = 0;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ___n2;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0063;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = ___t6;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = ___m7;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		return 0;
	}

IL_0063:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = ___m7;
		NullCheck(L_22);
		int32_t L_23 = 0;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		V_6 = 1;
		goto IL_007a;
	}

IL_006e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = V_1;
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if (L_28)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_30 = V_6;
		if ((((int32_t)L_30) <= ((int32_t)((int32_t)15))))
		{
			goto IL_006e;
		}
	}

IL_0080:
	{
		int32_t L_31 = V_6;
		V_7 = L_31;
		int32_t L_32 = V_8;
		int32_t L_33 = V_6;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_34 = V_6;
		V_8 = L_34;
	}

IL_008e:
	{
		V_5 = ((int32_t)15);
		goto IL_00a0;
	}

IL_0094:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_35 = V_1;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		int32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if (L_38)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_00a0:
	{
		int32_t L_40 = V_5;
		if (L_40)
		{
			goto IL_0094;
		}
	}

IL_00a4:
	{
		int32_t L_41 = V_5;
		V_3 = L_41;
		int32_t L_42 = V_8;
		int32_t L_43 = V_5;
		if ((((int32_t)L_42) <= ((int32_t)L_43)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_44 = V_5;
		V_8 = L_44;
	}

IL_00b1:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_45 = ___m7;
		int32_t L_46 = V_8;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_46);
		int32_t L_47 = V_6;
		V_17 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_47&(int32_t)((int32_t)31)))));
		goto IL_00de;
	}

IL_00c2:
	{
		int32_t L_48 = V_17;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_49 = V_1;
		int32_t L_50 = V_6;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_52));
		V_17 = L_53;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00d2:
	{
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		int32_t L_55 = V_17;
		V_17 = ((int32_t)((int32_t)L_55<<(int32_t)1));
	}

IL_00de:
	{
		int32_t L_56 = V_6;
		int32_t L_57 = V_5;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_58 = V_17;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = V_1;
		int32_t L_60 = V_5;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		int32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)L_62));
		V_17 = L_63;
		if ((((int32_t)L_63) >= ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00f4:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_64 = V_1;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t* L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)));
		int32_t L_67 = (*(int32_t*)L_66);
		int32_t L_68 = V_17;
		*(int32_t*)L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)L_68));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_69 = V_15;
		int32_t L_70 = 0;
		V_6 = L_70;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_70);
		V_10 = 1;
		V_16 = 2;
		goto IL_0135;
	}

IL_011a:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = V_15;
		int32_t L_72 = V_16;
		int32_t L_73 = V_6;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_74 = V_1;
		int32_t L_75 = V_10;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_77));
		V_6 = L_78;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int32_t)L_78);
		int32_t L_79 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		int32_t L_80 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_0135:
	{
		int32_t L_81 = V_5;
		int32_t L_82 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
		V_5 = L_82;
		if (L_82)
		{
			goto IL_011a;
		}
	}
	{
		V_5 = 0;
		V_10 = 0;
	}

IL_0144:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_83 = ___b0;
		int32_t L_84 = ___bindex1;
		int32_t L_85 = V_10;
		NullCheck(L_83);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)L_85));
		int32_t L_87 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		int32_t L_88 = L_87;
		V_6 = L_88;
		if (!L_88)
		{
			goto IL_016f;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_89 = ___v10;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_90 = V_15;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t* L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)));
		int32_t L_93 = (*(int32_t*)L_92);
		int32_t L_94 = L_93;
		V_19 = L_94;
		*(int32_t*)L_92 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		int32_t L_95 = V_19;
		int32_t L_96 = V_5;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (int32_t)L_96);
	}

IL_016f:
	{
		int32_t L_97 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		int32_t L_98 = V_5;
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		V_5 = L_99;
		int32_t L_100 = ___n2;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_0144;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_101 = V_15;
		int32_t L_102 = V_3;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		int32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		___n2 = L_104;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_105 = V_15;
		int32_t L_106 = 0;
		V_5 = L_106;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_106);
		V_10 = 0;
		V_4 = (-1);
		int32_t L_107 = V_8;
		V_14 = ((-L_107));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_108 = V_13;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		V_11 = 0;
		V_18 = 0;
		goto IL_03cd;
	}

IL_01a8:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_109 = V_1;
		int32_t L_110 = V_7;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_0 = L_112;
		goto IL_03bd;
	}

IL_01b2:
	{
		int32_t L_113 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
		int32_t L_114 = V_14;
		int32_t L_115 = V_8;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115));
		int32_t L_116 = V_3;
		int32_t L_117 = V_14;
		V_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)L_117));
		int32_t L_118 = V_18;
		int32_t L_119 = V_8;
		if ((((int32_t)L_118) > ((int32_t)L_119)))
		{
			goto IL_01cf;
		}
	}
	{
		int32_t L_120 = V_18;
		G_B35_0 = L_120;
		goto IL_01d1;
	}

IL_01cf:
	{
		int32_t L_121 = V_8;
		G_B35_0 = L_121;
	}

IL_01d1:
	{
		V_18 = G_B35_0;
		int32_t L_122 = V_7;
		int32_t L_123 = V_14;
		int32_t L_124 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_122, (int32_t)L_123));
		V_6 = L_124;
		int32_t L_125 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_124&(int32_t)((int32_t)31)))));
		V_2 = L_125;
		int32_t L_126 = V_0;
		if ((((int32_t)L_125) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1)))))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_127 = V_2;
		int32_t L_128 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1))));
		int32_t L_129 = V_7;
		V_16 = L_129;
		int32_t L_130 = V_6;
		int32_t L_131 = V_18;
		if ((((int32_t)L_130) >= ((int32_t)L_131)))
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0210;
	}

IL_01f9:
	{
		int32_t L_132 = V_2;
		int32_t L_133 = ((int32_t)((int32_t)L_132<<(int32_t)1));
		V_2 = L_133;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_134 = V_1;
		int32_t L_135 = V_16;
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
		V_16 = L_136;
		NullCheck(L_134);
		int32_t L_137 = L_136;
		int32_t L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		if ((((int32_t)L_133) <= ((int32_t)L_138)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_139 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_140 = V_1;
		int32_t L_141 = V_16;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)L_143));
	}

IL_0210:
	{
		int32_t L_144 = V_6;
		int32_t L_145 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
		V_6 = L_145;
		int32_t L_146 = V_18;
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_01f9;
		}
	}

IL_021b:
	{
		int32_t L_147 = V_6;
		V_18 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_147&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_148 = ___hn9;
		NullCheck(L_148);
		int32_t L_149 = 0;
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = V_18;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)L_151))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_0235;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0235:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_152 = V_13;
		int32_t L_153 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_154 = ___hn9;
		NullCheck(L_154);
		int32_t L_155 = 0;
		int32_t L_156 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		int32_t L_157 = L_156;
		V_11 = L_157;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(L_153), (int32_t)L_157);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_158 = ___hn9;
		NullCheck(L_158);
		int32_t* L_159 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_160 = (*(int32_t*)L_159);
		int32_t L_161 = V_18;
		*(int32_t*)L_159 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)L_161));
		int32_t L_162 = V_4;
		if (!L_162)
		{
			goto IL_02a8;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_163 = V_15;
		int32_t L_164 = V_4;
		int32_t L_165 = V_5;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (int32_t)L_165);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_166 = V_12;
		int32_t L_167 = V_6;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(((int32_t)((uint8_t)L_167))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_168 = V_12;
		int32_t L_169 = V_8;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)(((int32_t)((uint8_t)L_169))));
		int32_t L_170 = V_5;
		int32_t L_171 = V_14;
		int32_t L_172 = V_8;
		int32_t L_173 = SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662(L_170, ((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_172)), /*hidden argument*/NULL);
		V_6 = L_173;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_174 = V_12;
		int32_t L_175 = V_11;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_176 = V_13;
		int32_t L_177 = V_4;
		NullCheck(L_176);
		int32_t L_178 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_177, (int32_t)1));
		int32_t L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = V_6;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_175, (int32_t)L_179)), (int32_t)L_180)));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_181 = V_12;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_182 = ___hp8;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_183 = V_13;
		int32_t L_184 = V_4;
		NullCheck(L_183);
		int32_t L_185 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_184, (int32_t)1));
		int32_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = V_6;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_181, 0, (RuntimeArray *)(RuntimeArray *)L_182, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)L_187)), (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_02ae;
	}

IL_02a8:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_188 = ___t6;
		int32_t L_189 = V_11;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_189);
	}

IL_02ae:
	{
		int32_t L_190 = V_7;
		int32_t L_191 = V_14;
		int32_t L_192 = V_8;
		if ((((int32_t)L_190) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)L_192)))))
		{
			goto IL_01b2;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_193 = V_12;
		int32_t L_194 = V_7;
		int32_t L_195 = V_14;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_194, (int32_t)L_195))))));
		int32_t L_196 = V_10;
		int32_t L_197 = ___n2;
		if ((((int32_t)L_196) < ((int32_t)L_197)))
		{
			goto IL_02d4;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_198 = V_12;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_032a;
	}

IL_02d4:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_199 = ___v10;
		int32_t L_200 = V_10;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		int32_t L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ___s3;
		if ((((int32_t)L_202) >= ((int32_t)L_203)))
		{
			goto IL_0302;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_204 = V_12;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_205 = ___v10;
		int32_t L_206 = V_10;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		int32_t L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		G_B51_0 = 0;
		G_B51_1 = L_204;
		if ((((int32_t)L_208) < ((int32_t)((int32_t)256))))
		{
			G_B52_0 = 0;
			G_B52_1 = L_204;
			goto IL_02ef;
		}
	}
	{
		G_B53_0 = ((int32_t)96);
		G_B53_1 = G_B51_0;
		G_B53_2 = G_B51_1;
		goto IL_02f0;
	}

IL_02ef:
	{
		G_B53_0 = 0;
		G_B53_1 = G_B52_0;
		G_B53_2 = G_B52_1;
	}

IL_02f0:
	{
		NullCheck(G_B53_2);
		(G_B53_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B53_1), (int32_t)(((int32_t)((uint8_t)G_B53_0))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_209 = V_12;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_210 = ___v10;
		int32_t L_211 = V_10;
		int32_t L_212 = L_211;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)1));
		NullCheck(L_210);
		int32_t L_213 = L_212;
		int32_t L_214 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_214);
		goto IL_032a;
	}

IL_0302:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_215 = V_12;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_216 = ___e5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_217 = ___v10;
		int32_t L_218 = V_10;
		NullCheck(L_217);
		int32_t L_219 = L_218;
		int32_t L_220 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		int32_t L_221 = ___s3;
		NullCheck(L_216);
		int32_t L_222 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_220, (int32_t)L_221));
		int32_t L_223 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		NullCheck(L_215);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_223, (int32_t)((int32_t)16))), (int32_t)((int32_t)64)))))));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_224 = V_12;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_225 = ___d4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_226 = ___v10;
		int32_t L_227 = V_10;
		int32_t L_228 = L_227;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)1));
		NullCheck(L_226);
		int32_t L_229 = L_228;
		int32_t L_230 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ___s3;
		NullCheck(L_225);
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231));
		int32_t L_233 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_233);
	}

IL_032a:
	{
		int32_t L_234 = V_7;
		int32_t L_235 = V_14;
		V_2 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_234, (int32_t)L_235))&(int32_t)((int32_t)31)))));
		int32_t L_236 = V_5;
		int32_t L_237 = V_14;
		int32_t L_238 = SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662(L_236, L_237, /*hidden argument*/NULL);
		V_6 = L_238;
		goto IL_035a;
	}

IL_0342:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_239 = V_12;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_240 = ___hp8;
		int32_t L_241 = V_11;
		int32_t L_242 = V_6;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_239, 0, (RuntimeArray *)(RuntimeArray *)L_240, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)L_242)), (int32_t)3)), 3, /*hidden argument*/NULL);
		int32_t L_243 = V_6;
		int32_t L_244 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_243, (int32_t)L_244));
	}

IL_035a:
	{
		int32_t L_245 = V_6;
		int32_t L_246 = V_18;
		if ((((int32_t)L_245) < ((int32_t)L_246)))
		{
			goto IL_0342;
		}
	}
	{
		int32_t L_247 = V_7;
		V_6 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_247, (int32_t)1))&(int32_t)((int32_t)31)))));
		goto IL_037e;
	}

IL_036d:
	{
		int32_t L_248 = V_5;
		int32_t L_249 = V_6;
		V_5 = ((int32_t)((int32_t)L_248^(int32_t)L_249));
		int32_t L_250 = V_6;
		int32_t L_251 = SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662(L_250, 1, /*hidden argument*/NULL);
		V_6 = L_251;
	}

IL_037e:
	{
		int32_t L_252 = V_5;
		int32_t L_253 = V_6;
		if (((int32_t)((int32_t)L_252&(int32_t)L_253)))
		{
			goto IL_036d;
		}
	}
	{
		int32_t L_254 = V_5;
		int32_t L_255 = V_6;
		V_5 = ((int32_t)((int32_t)L_254^(int32_t)L_255));
		int32_t L_256 = V_14;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_256&(int32_t)((int32_t)31))))), (int32_t)1));
		goto IL_03b1;
	}

IL_0399:
	{
		int32_t L_257 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_257, (int32_t)1));
		int32_t L_258 = V_14;
		int32_t L_259 = V_8;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_258, (int32_t)L_259));
		int32_t L_260 = V_14;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_260&(int32_t)((int32_t)31))))), (int32_t)1));
	}

IL_03b1:
	{
		int32_t L_261 = V_5;
		int32_t L_262 = V_9;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_263 = V_15;
		int32_t L_264 = V_4;
		NullCheck(L_263);
		int32_t L_265 = L_264;
		int32_t L_266 = (L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		if ((!(((uint32_t)((int32_t)((int32_t)L_261&(int32_t)L_262))) == ((uint32_t)L_266))))
		{
			goto IL_0399;
		}
	}

IL_03bd:
	{
		int32_t L_267 = V_0;
		int32_t L_268 = L_267;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_268, (int32_t)1));
		if (L_268)
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_269 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_269, (int32_t)1));
	}

IL_03cd:
	{
		int32_t L_270 = V_7;
		int32_t L_271 = V_3;
		if ((((int32_t)L_270) <= ((int32_t)L_271)))
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_272 = V_17;
		if (!L_272)
		{
			goto IL_03dd;
		}
	}
	{
		int32_t L_273 = V_3;
		if ((!(((uint32_t)L_273) == ((uint32_t)1))))
		{
			goto IL_03df;
		}
	}

IL_03dd:
	{
		return 0;
	}

IL_03df:
	{
		return ((int32_t)-5);
	}
}
// System.Int32 zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m2327F1CECFB6C35AC3650299FEDC045AC0BA2F24 (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___c0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___bb1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tb2, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___hp3, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_inflate_trees_bits_m2327F1CECFB6C35AC3650299FEDC045AC0BA2F24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_2 = NULL;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		V_2 = L_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ___c0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = ___tb2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ___bb1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = ___hp3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var);
		int32_t L_8 = InfTree_huft_build_m4787F16B9CFC8967632F972CAB4246A638009FAF(L_2, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)NULL, (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)NULL, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0035;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_10 = ___z4;
		NullCheck(L_10);
		L_10->set_msg_9(_stringLiteralDA7970CE3E6550B41D53BFE064A57F20DD8853EC);
		goto IL_004e;
	}

IL_0035:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-5))))
		{
			goto IL_003f;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = ___bb1;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_004e;
		}
	}

IL_003f:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_15 = ___z4;
		NullCheck(L_15);
		L_15->set_msg_9(_stringLiteral3D1BA01B10FC237479E254DCEFE16889FDAE4E92);
		V_0 = ((int32_t)-3);
	}

IL_004e:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Int32 zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m28426A9ED9C11818C8E7FB80A132FD0FA562644B (int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___c2, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___bl3, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___bd4, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___tl5, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___td6, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___hp7, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_inflate_trees_dynamic_m28426A9ED9C11818C8E7FB80A132FD0FA562644B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_2 = NULL;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288));
		V_2 = L_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ___c2;
		int32_t L_3 = ___nl0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->get_cplens_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = ((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->get_cplext_3();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = ___tl5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = ___bl3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = ___hp7;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = V_2;
		int32_t L_11 = InfTree_huft_build_m4787F16B9CFC8967632F972CAB4246A638009FAF(L_2, 0, L_3, ((int32_t)257), L_4, L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = ___bl3;
		NullCheck(L_13);
		int32_t L_14 = 0;
		int32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (L_15)
		{
			goto IL_0062;
		}
	}

IL_0039:
	{
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_004c;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_17 = ___z8;
		NullCheck(L_17);
		L_17->set_msg_9(_stringLiteral40990C845D98A3C5CB2A888445D6E02F11C91927);
		goto IL_0060;
	}

IL_004c:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-4))))
		{
			goto IL_0060;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_19 = ___z8;
		NullCheck(L_19);
		L_19->set_msg_9(_stringLiteral524B6D63D378C8DEAE14934E6542CF8795733DB2);
		V_0 = ((int32_t)-3);
	}

IL_0060:
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0062:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = ___c2;
		int32_t L_22 = ___nl0;
		int32_t L_23 = ___nd1;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = ((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->get_cpdist_4();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_25 = ((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->get_cpdext_5();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_26 = ___td6;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_27 = ___bd4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = ___hp7;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_29 = V_1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = V_2;
		int32_t L_31 = InfTree_huft_build_m4787F16B9CFC8967632F972CAB4246A638009FAF(L_21, L_22, L_23, 0, L_24, L_25, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_008f;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_33 = ___bd4;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		if (L_35)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_36 = ___nl0;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)257))))
		{
			goto IL_00ce;
		}
	}

IL_008f:
	{
		int32_t L_37 = V_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00a2;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_38 = ___z8;
		NullCheck(L_38);
		L_38->set_msg_9(_stringLiteral345748201B6BB248050B7CA713D2CB75B3110C3E);
		goto IL_00cc;
	}

IL_00a2:
	{
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00b8;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_40 = ___z8;
		NullCheck(L_40);
		L_40->set_msg_9(_stringLiteralF33C755F263276D468918A4CD3E97CEC4C5AD0AF);
		V_0 = ((int32_t)-3);
		goto IL_00cc;
	}

IL_00b8:
	{
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-4))))
		{
			goto IL_00cc;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_42 = ___z8;
		NullCheck(L_42);
		L_42->set_msg_9(_stringLiteral0C229B451318F3DD06323B34D3F74DE8334BA254);
		V_0 = ((int32_t)-3);
	}

IL_00cc:
	{
		int32_t L_43 = V_0;
		return L_43;
	}

IL_00ce:
	{
		return 0;
	}
}
// System.Int32 zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_m929F075BEFA8514492F439597E1DEBCD6EE17D3E (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___bl0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___bd1, Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ___tl2, Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ___td3, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree_inflate_trees_fixed_m929F075BEFA8514492F439597E1DEBCD6EE17D3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___bl0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = ___bd1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* L_2 = ___tl2;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = ((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->get_fixed_tl_0();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_3);
		Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* L_4 = ___td3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = ((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->get_fixed_td_1();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_5);
		return 0;
	}
}
// System.Void zlib.InfTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__cctor_m0A20FF8A61159F0E4AA834EF70475799DC82F778 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InfTree__cctor_m0A20FF8A61159F0E4AA834EF70475799DC82F778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D1_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->set_fixed_tl_0(L_1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D2_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->set_fixed_td_1(L_4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = L_6;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D3_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->set_cplens_2(L_7);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = L_9;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D4_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->set_cplext_3(L_10);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = L_12;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D5_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->set_cpdist_4(L_13);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = L_15;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f6U2D6_16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_tBE593D3267411BE71B68652EFB35E13897A8CF49_il2cpp_TypeInfo_var))->set_cpdext_5(L_16);
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
// System.Int32 zlib.Inflate::inflateReset(zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateReset_mC6B2892D8B3C938DC932F34A34B6F9F64726308F (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * G_B5_0 = NULL;
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * G_B6_1 = NULL;
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = ___z0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_1 = ___z0;
		NullCheck(L_1);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_2 = L_1->get_istate_11();
		if (L_2)
		{
			goto IL_000e;
		}
	}

IL_000b:
	{
		return ((int32_t)-2);
	}

IL_000e:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_3 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_4 = ___z0;
		int64_t L_5 = (((int64_t)((int64_t)0)));
		V_0 = L_5;
		NullCheck(L_4);
		L_4->set_total_out_8(L_5);
		int64_t L_6 = V_0;
		NullCheck(L_3);
		L_3->set_total_in_4(L_6);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_7 = ___z0;
		NullCheck(L_7);
		L_7->set_msg_9((String_t*)NULL);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_8 = ___z0;
		NullCheck(L_8);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_9 = L_8->get_istate_11();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_10 = ___z0;
		NullCheck(L_10);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_11 = L_10->get_istate_11();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_nowrap_5();
		G_B4_0 = L_9;
		if (L_12)
		{
			G_B5_0 = L_9;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B6_0 = 7;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_mode_0(G_B6_0);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_13 = ___z0;
		NullCheck(L_13);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_14 = L_13->get_istate_11();
		NullCheck(L_14);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_15 = L_14->get_blocks_7();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_16 = ___z0;
		NullCheck(L_15);
		InfBlocks_reset_mA17A3ED451F418F8C634210B5B1918DD4AD92D4D(L_15, L_16, (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)NULL, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 zlib.Inflate::inflateEnd(zlib.ZStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateEnd_m223FA5C0DD44A1D1997E68BD06BBB90BE214E1F1 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, const RuntimeMethod* method)
{
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_0 = __this->get_blocks_7();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_1 = __this->get_blocks_7();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_2 = ___z0;
		NullCheck(L_1);
		InfBlocks_free_m2907864394B67072FA2B0A2FFE3B6419744F0C20(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		__this->set_blocks_7((InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD *)NULL);
		return 0;
	}
}
// System.Int32 zlib.Inflate::inflateInit(zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflateInit_m03924C67B781DE3DF704D17B54588896ADCE20D5 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, int32_t ___w1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflate_inflateInit_m03924C67B781DE3DF704D17B54588896ADCE20D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * G_B7_0 = NULL;
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * G_B7_1 = NULL;
	ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * G_B6_0 = NULL;
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * G_B6_1 = NULL;
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * G_B8_0 = NULL;
	ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * G_B8_1 = NULL;
	Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * G_B8_2 = NULL;
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = ___z0;
		NullCheck(L_0);
		L_0->set_msg_9((String_t*)NULL);
		__this->set_blocks_7((InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD *)NULL);
		__this->set_nowrap_5(0);
		int32_t L_1 = ___w1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___w1;
		___w1 = ((-L_2));
		__this->set_nowrap_5(1);
	}

IL_0024:
	{
		int32_t L_3 = ___w1;
		if ((((int32_t)L_3) < ((int32_t)8)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = ___w1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0038;
		}
	}

IL_002d:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_5 = ___z0;
		Inflate_inflateEnd_m223FA5C0DD44A1D1997E68BD06BBB90BE214E1F1(__this, L_5, /*hidden argument*/NULL);
		return ((int32_t)-2);
	}

IL_0038:
	{
		int32_t L_6 = ___w1;
		__this->set_wbits_6(L_6);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_7 = ___z0;
		NullCheck(L_7);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_8 = L_7->get_istate_11();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_9 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_10 = ___z0;
		NullCheck(L_10);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_11 = L_10->get_istate_11();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_nowrap_5();
		G_B6_0 = L_9;
		G_B6_1 = L_8;
		if (L_12)
		{
			G_B7_0 = L_9;
			G_B7_1 = L_8;
			goto IL_0056;
		}
	}
	{
		G_B8_0 = __this;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = ((Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 *)(NULL));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0057:
	{
		int32_t L_13 = ___w1;
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_14 = (InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD *)il2cpp_codegen_object_new(InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD_il2cpp_TypeInfo_var);
		InfBlocks__ctor_mB53DD0175916847DC0006F0FFE06DC2A039C020E(L_14, G_B8_1, G_B8_0, ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		NullCheck(G_B8_2);
		G_B8_2->set_blocks_7(L_14);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_15 = ___z0;
		Inflate_inflateReset_mC6B2892D8B3C938DC932F34A34B6F9F64726308F(__this, L_15, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 zlib.Inflate::inflate(zlib.ZStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Inflate_inflate_mD23EA23B623C900F6F91E17A2364320A79251038 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * ___z0, int32_t ___f1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflate_inflate_mD23EA23B623C900F6F91E17A2364320A79251038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = ___z0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_1 = ___z0;
		NullCheck(L_1);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_2 = L_1->get_istate_11();
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_3 = ___z0;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3->get_next_in_1();
		if (L_4)
		{
			goto IL_0016;
		}
	}

IL_0013:
	{
		return ((int32_t)-2);
	}

IL_0016:
	{
		int32_t L_5 = ___f1;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_001f;
	}

IL_001d:
	{
		G_B7_0 = ((int32_t)-5);
	}

IL_001f:
	{
		___f1 = G_B7_0;
		V_0 = ((int32_t)-5);
	}

IL_0024:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_6 = ___z0;
		NullCheck(L_6);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_7 = L_6->get_istate_11();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_mode_0();
		V_2 = L_8;
		int32_t L_9 = V_2;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0073;
			}
			case 1:
			{
				goto IL_0144;
			}
			case 2:
			{
				goto IL_01ee;
			}
			case 3:
			{
				goto IL_0258;
			}
			case 4:
			{
				goto IL_02ca;
			}
			case 5:
			{
				goto IL_033b;
			}
			case 6:
			{
				goto IL_03b7;
			}
			case 7:
			{
				goto IL_03de;
			}
			case 8:
			{
				goto IL_0468;
			}
			case 9:
			{
				goto IL_04d3;
			}
			case 10:
			{
				goto IL_0546;
			}
			case 11:
			{
				goto IL_05b8;
			}
			case 12:
			{
				goto IL_0667;
			}
			case 13:
			{
				goto IL_0669;
			}
		}
	}
	{
		goto IL_066c;
	}

IL_0073:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_10 = ___z0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_avail_in_3();
		if (L_11)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_007d:
	{
		int32_t L_13 = ___f1;
		V_0 = L_13;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_14 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_avail_in_3();
		NullCheck(L_15);
		L_15->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_17 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_18 = L_17;
		NullCheck(L_18);
		int64_t L_19 = L_18->get_total_in_4();
		NullCheck(L_18);
		L_18->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_19, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_20 = ___z0;
		NullCheck(L_20);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_21 = L_20->get_istate_11();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_22 = ___z0;
		NullCheck(L_22);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = L_22->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_24 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_next_in_index_2();
		int32_t L_27 = L_26;
		V_3 = L_27;
		NullCheck(L_25);
		L_25->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = V_3;
		NullCheck(L_23);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		uint8_t L_31 = L_30;
		V_4 = L_31;
		NullCheck(L_21);
		L_21->set_method_1(L_31);
		int32_t L_32 = V_4;
		if ((((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)15)))) == ((int32_t)8)))
		{
			goto IL_00f3;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_33 = ___z0;
		NullCheck(L_33);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_34 = L_33->get_istate_11();
		NullCheck(L_34);
		L_34->set_mode_0(((int32_t)13));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_35 = ___z0;
		NullCheck(L_35);
		L_35->set_msg_9(_stringLiteral8CB320A5D4BB268305CA70B33E67C16F681A19E9);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_36 = ___z0;
		NullCheck(L_36);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_37 = L_36->get_istate_11();
		NullCheck(L_37);
		L_37->set_marker_4(5);
		goto IL_0024;
	}

IL_00f3:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_38 = ___z0;
		NullCheck(L_38);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_39 = L_38->get_istate_11();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_method_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_41 = ___z0;
		NullCheck(L_41);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_42 = L_41->get_istate_11();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_wbits_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_40>>(int32_t)4)), (int32_t)8))) <= ((int32_t)L_43)))
		{
			goto IL_0138;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_44 = ___z0;
		NullCheck(L_44);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_45 = L_44->get_istate_11();
		NullCheck(L_45);
		L_45->set_mode_0(((int32_t)13));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_46 = ___z0;
		NullCheck(L_46);
		L_46->set_msg_9(_stringLiteral208463D8C284463AD508F287CDF0E6C1EF93ED7B);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_47 = ___z0;
		NullCheck(L_47);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_48 = L_47->get_istate_11();
		NullCheck(L_48);
		L_48->set_marker_4(5);
		goto IL_0024;
	}

IL_0138:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_49 = ___z0;
		NullCheck(L_49);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_50 = L_49->get_istate_11();
		NullCheck(L_50);
		L_50->set_mode_0(1);
	}

IL_0144:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_51 = ___z0;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_avail_in_3();
		if (L_52)
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_53 = V_0;
		return L_53;
	}

IL_014e:
	{
		int32_t L_54 = ___f1;
		V_0 = L_54;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_55 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_56 = L_55;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_avail_in_3();
		NullCheck(L_56);
		L_56->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_58 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_59 = L_58;
		NullCheck(L_59);
		int64_t L_60 = L_59->get_total_in_4();
		NullCheck(L_59);
		L_59->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_60, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_61 = ___z0;
		NullCheck(L_61);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = L_61->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_63 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_64 = L_63;
		NullCheck(L_64);
		int32_t L_65 = L_64->get_next_in_index_2();
		int32_t L_66 = L_65;
		V_5 = L_66;
		NullCheck(L_64);
		L_64->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1)));
		int32_t L_67 = V_5;
		NullCheck(L_62);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)((int32_t)L_69&(int32_t)((int32_t)255)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_70 = ___z0;
		NullCheck(L_70);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_71 = L_70->get_istate_11();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_method_1();
		int32_t L_73 = V_1;
		if (!((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_72<<(int32_t)8)), (int32_t)L_73))%(int32_t)((int32_t)31))))
		{
			goto IL_01cb;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_74 = ___z0;
		NullCheck(L_74);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_75 = L_74->get_istate_11();
		NullCheck(L_75);
		L_75->set_mode_0(((int32_t)13));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_76 = ___z0;
		NullCheck(L_76);
		L_76->set_msg_9(_stringLiteralE666E473817541EABD300C26C471ECF0910A97F5);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_77 = ___z0;
		NullCheck(L_77);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_78 = L_77->get_istate_11();
		NullCheck(L_78);
		L_78->set_marker_4(5);
		goto IL_0024;
	}

IL_01cb:
	{
		int32_t L_79 = V_1;
		if (((int32_t)((int32_t)L_79&(int32_t)((int32_t)32))))
		{
			goto IL_01e2;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_80 = ___z0;
		NullCheck(L_80);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_81 = L_80->get_istate_11();
		NullCheck(L_81);
		L_81->set_mode_0(7);
		goto IL_0024;
	}

IL_01e2:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_82 = ___z0;
		NullCheck(L_82);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_83 = L_82->get_istate_11();
		NullCheck(L_83);
		L_83->set_mode_0(2);
	}

IL_01ee:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_84 = ___z0;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_avail_in_3();
		if (L_85)
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_86 = V_0;
		return L_86;
	}

IL_01f8:
	{
		int32_t L_87 = ___f1;
		V_0 = L_87;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_88 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_89 = L_88;
		NullCheck(L_89);
		int32_t L_90 = L_89->get_avail_in_3();
		NullCheck(L_89);
		L_89->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_91 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_92 = L_91;
		NullCheck(L_92);
		int64_t L_93 = L_92->get_total_in_4();
		NullCheck(L_92);
		L_92->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_93, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_94 = ___z0;
		NullCheck(L_94);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_95 = L_94->get_istate_11();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_96 = ___z0;
		NullCheck(L_96);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_97 = L_96->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_98 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_99 = L_98;
		NullCheck(L_99);
		int32_t L_100 = L_99->get_next_in_index_2();
		int32_t L_101 = L_100;
		V_6 = L_101;
		NullCheck(L_99);
		L_99->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
		int32_t L_102 = V_6;
		NullCheck(L_97);
		int32_t L_103 = L_102;
		uint8_t L_104 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_95);
		L_95->set_need_3((((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_104&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))&(int32_t)((int32_t)-16777216)))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_105 = ___z0;
		NullCheck(L_105);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_106 = L_105->get_istate_11();
		NullCheck(L_106);
		L_106->set_mode_0(3);
	}

IL_0258:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_107 = ___z0;
		NullCheck(L_107);
		int32_t L_108 = L_107->get_avail_in_3();
		if (L_108)
		{
			goto IL_0262;
		}
	}
	{
		int32_t L_109 = V_0;
		return L_109;
	}

IL_0262:
	{
		int32_t L_110 = ___f1;
		V_0 = L_110;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_111 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_112 = L_111;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_avail_in_3();
		NullCheck(L_112);
		L_112->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_114 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_115 = L_114;
		NullCheck(L_115);
		int64_t L_116 = L_115->get_total_in_4();
		NullCheck(L_115);
		L_115->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_116, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_117 = ___z0;
		NullCheck(L_117);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_118 = L_117->get_istate_11();
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_119 = L_118;
		NullCheck(L_119);
		int64_t L_120 = L_119->get_need_3();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_121 = ___z0;
		NullCheck(L_121);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_122 = L_121->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_123 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_124 = L_123;
		NullCheck(L_124);
		int32_t L_125 = L_124->get_next_in_index_2();
		int32_t L_126 = L_125;
		V_7 = L_126;
		NullCheck(L_124);
		L_124->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1)));
		int32_t L_127 = V_7;
		NullCheck(L_122);
		int32_t L_128 = L_127;
		uint8_t L_129 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_119);
		L_119->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_120, (int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_129&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)16))))))&(int64_t)(((int64_t)((int64_t)((int32_t)16711680)))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_130 = ___z0;
		NullCheck(L_130);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_131 = L_130->get_istate_11();
		NullCheck(L_131);
		L_131->set_mode_0(4);
	}

IL_02ca:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_132 = ___z0;
		NullCheck(L_132);
		int32_t L_133 = L_132->get_avail_in_3();
		if (L_133)
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_134 = V_0;
		return L_134;
	}

IL_02d4:
	{
		int32_t L_135 = ___f1;
		V_0 = L_135;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_136 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_137 = L_136;
		NullCheck(L_137);
		int32_t L_138 = L_137->get_avail_in_3();
		NullCheck(L_137);
		L_137->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_138, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_139 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_140 = L_139;
		NullCheck(L_140);
		int64_t L_141 = L_140->get_total_in_4();
		NullCheck(L_140);
		L_140->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_141, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_142 = ___z0;
		NullCheck(L_142);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_143 = L_142->get_istate_11();
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_144 = L_143;
		NullCheck(L_144);
		int64_t L_145 = L_144->get_need_3();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_146 = ___z0;
		NullCheck(L_146);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_147 = L_146->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_148 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_149 = L_148;
		NullCheck(L_149);
		int32_t L_150 = L_149->get_next_in_index_2();
		int32_t L_151 = L_150;
		V_8 = L_151;
		NullCheck(L_149);
		L_149->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1)));
		int32_t L_152 = V_8;
		NullCheck(L_147);
		int32_t L_153 = L_152;
		uint8_t L_154 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_144);
		L_144->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_154&(int32_t)((int32_t)255)))<<(int32_t)8)))))&(int64_t)(((int64_t)((int64_t)((int32_t)65280)))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_155 = ___z0;
		NullCheck(L_155);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_156 = L_155->get_istate_11();
		NullCheck(L_156);
		L_156->set_mode_0(5);
	}

IL_033b:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_157 = ___z0;
		NullCheck(L_157);
		int32_t L_158 = L_157->get_avail_in_3();
		if (L_158)
		{
			goto IL_0345;
		}
	}
	{
		int32_t L_159 = V_0;
		return L_159;
	}

IL_0345:
	{
		int32_t L_160 = ___f1;
		V_0 = L_160;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_161 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_162 = L_161;
		NullCheck(L_162);
		int32_t L_163 = L_162->get_avail_in_3();
		NullCheck(L_162);
		L_162->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_163, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_164 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_165 = L_164;
		NullCheck(L_165);
		int64_t L_166 = L_165->get_total_in_4();
		NullCheck(L_165);
		L_165->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_166, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_167 = ___z0;
		NullCheck(L_167);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_168 = L_167->get_istate_11();
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_169 = L_168;
		NullCheck(L_169);
		int64_t L_170 = L_169->get_need_3();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_171 = ___z0;
		NullCheck(L_171);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_172 = L_171->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_173 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_174 = L_173;
		NullCheck(L_174);
		int32_t L_175 = L_174->get_next_in_index_2();
		int32_t L_176 = L_175;
		V_9 = L_176;
		NullCheck(L_174);
		L_174->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1)));
		int32_t L_177 = V_9;
		NullCheck(L_172);
		int32_t L_178 = L_177;
		uint8_t L_179 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_169);
		L_169->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_170, (int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_179)))&(int64_t)(((int64_t)((int64_t)((int32_t)255)))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_180 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_181 = ___z0;
		NullCheck(L_181);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_182 = L_181->get_istate_11();
		NullCheck(L_182);
		int64_t L_183 = L_182->get_need_3();
		NullCheck(L_180);
		L_180->set_adler_13(L_183);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_184 = ___z0;
		NullCheck(L_184);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_185 = L_184->get_istate_11();
		NullCheck(L_185);
		L_185->set_mode_0(6);
		return 2;
	}

IL_03b7:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_186 = ___z0;
		NullCheck(L_186);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_187 = L_186->get_istate_11();
		NullCheck(L_187);
		L_187->set_mode_0(((int32_t)13));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_188 = ___z0;
		NullCheck(L_188);
		L_188->set_msg_9(_stringLiteral1B39A6F24C0DA60092BF13DF941F77F196B8E795);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_189 = ___z0;
		NullCheck(L_189);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_190 = L_189->get_istate_11();
		NullCheck(L_190);
		L_190->set_marker_4(0);
		return ((int32_t)-2);
	}

IL_03de:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_191 = ___z0;
		NullCheck(L_191);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_192 = L_191->get_istate_11();
		NullCheck(L_192);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_193 = L_192->get_blocks_7();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_194 = ___z0;
		int32_t L_195 = V_0;
		NullCheck(L_193);
		int32_t L_196 = InfBlocks_proc_m7E2DEB1DC68A808DB623B1554039895F1883C461(L_193, L_194, L_195, /*hidden argument*/NULL);
		V_0 = L_196;
		int32_t L_197 = V_0;
		if ((!(((uint32_t)L_197) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0414;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_198 = ___z0;
		NullCheck(L_198);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_199 = L_198->get_istate_11();
		NullCheck(L_199);
		L_199->set_mode_0(((int32_t)13));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_200 = ___z0;
		NullCheck(L_200);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_201 = L_200->get_istate_11();
		NullCheck(L_201);
		L_201->set_marker_4(0);
		goto IL_0024;
	}

IL_0414:
	{
		int32_t L_202 = V_0;
		if (L_202)
		{
			goto IL_0419;
		}
	}
	{
		int32_t L_203 = ___f1;
		V_0 = L_203;
	}

IL_0419:
	{
		int32_t L_204 = V_0;
		if ((((int32_t)L_204) == ((int32_t)1)))
		{
			goto IL_041f;
		}
	}
	{
		int32_t L_205 = V_0;
		return L_205;
	}

IL_041f:
	{
		int32_t L_206 = ___f1;
		V_0 = L_206;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_207 = ___z0;
		NullCheck(L_207);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_208 = L_207->get_istate_11();
		NullCheck(L_208);
		InfBlocks_t6E0211215F3200F73BC9CCE51064755407E0FFCD * L_209 = L_208->get_blocks_7();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_210 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_211 = ___z0;
		NullCheck(L_211);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_212 = L_211->get_istate_11();
		NullCheck(L_212);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_213 = L_212->get_was_2();
		NullCheck(L_209);
		InfBlocks_reset_mA17A3ED451F418F8C634210B5B1918DD4AD92D4D(L_209, L_210, L_213, /*hidden argument*/NULL);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_214 = ___z0;
		NullCheck(L_214);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_215 = L_214->get_istate_11();
		NullCheck(L_215);
		int32_t L_216 = L_215->get_nowrap_5();
		if (!L_216)
		{
			goto IL_045c;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_217 = ___z0;
		NullCheck(L_217);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_218 = L_217->get_istate_11();
		NullCheck(L_218);
		L_218->set_mode_0(((int32_t)12));
		goto IL_0024;
	}

IL_045c:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_219 = ___z0;
		NullCheck(L_219);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_220 = L_219->get_istate_11();
		NullCheck(L_220);
		L_220->set_mode_0(8);
	}

IL_0468:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_221 = ___z0;
		NullCheck(L_221);
		int32_t L_222 = L_221->get_avail_in_3();
		if (L_222)
		{
			goto IL_0472;
		}
	}
	{
		int32_t L_223 = V_0;
		return L_223;
	}

IL_0472:
	{
		int32_t L_224 = ___f1;
		V_0 = L_224;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_225 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_226 = L_225;
		NullCheck(L_226);
		int32_t L_227 = L_226->get_avail_in_3();
		NullCheck(L_226);
		L_226->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_227, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_228 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_229 = L_228;
		NullCheck(L_229);
		int64_t L_230 = L_229->get_total_in_4();
		NullCheck(L_229);
		L_229->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_230, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_231 = ___z0;
		NullCheck(L_231);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_232 = L_231->get_istate_11();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_233 = ___z0;
		NullCheck(L_233);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_234 = L_233->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_235 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_236 = L_235;
		NullCheck(L_236);
		int32_t L_237 = L_236->get_next_in_index_2();
		int32_t L_238 = L_237;
		V_10 = L_238;
		NullCheck(L_236);
		L_236->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)1)));
		int32_t L_239 = V_10;
		NullCheck(L_234);
		int32_t L_240 = L_239;
		uint8_t L_241 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		NullCheck(L_232);
		L_232->set_need_3((((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_241&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))&(int32_t)((int32_t)-16777216)))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_242 = ___z0;
		NullCheck(L_242);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_243 = L_242->get_istate_11();
		NullCheck(L_243);
		L_243->set_mode_0(((int32_t)9));
	}

IL_04d3:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_244 = ___z0;
		NullCheck(L_244);
		int32_t L_245 = L_244->get_avail_in_3();
		if (L_245)
		{
			goto IL_04dd;
		}
	}
	{
		int32_t L_246 = V_0;
		return L_246;
	}

IL_04dd:
	{
		int32_t L_247 = ___f1;
		V_0 = L_247;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_248 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_249 = L_248;
		NullCheck(L_249);
		int32_t L_250 = L_249->get_avail_in_3();
		NullCheck(L_249);
		L_249->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_250, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_251 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_252 = L_251;
		NullCheck(L_252);
		int64_t L_253 = L_252->get_total_in_4();
		NullCheck(L_252);
		L_252->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_253, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_254 = ___z0;
		NullCheck(L_254);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_255 = L_254->get_istate_11();
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_256 = L_255;
		NullCheck(L_256);
		int64_t L_257 = L_256->get_need_3();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_258 = ___z0;
		NullCheck(L_258);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_259 = L_258->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_260 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_261 = L_260;
		NullCheck(L_261);
		int32_t L_262 = L_261->get_next_in_index_2();
		int32_t L_263 = L_262;
		V_11 = L_263;
		NullCheck(L_261);
		L_261->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)1)));
		int32_t L_264 = V_11;
		NullCheck(L_259);
		int32_t L_265 = L_264;
		uint8_t L_266 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		NullCheck(L_256);
		L_256->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_257, (int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_266&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)16))))))&(int64_t)(((int64_t)((int64_t)((int32_t)16711680)))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_267 = ___z0;
		NullCheck(L_267);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_268 = L_267->get_istate_11();
		NullCheck(L_268);
		L_268->set_mode_0(((int32_t)10));
	}

IL_0546:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_269 = ___z0;
		NullCheck(L_269);
		int32_t L_270 = L_269->get_avail_in_3();
		if (L_270)
		{
			goto IL_0550;
		}
	}
	{
		int32_t L_271 = V_0;
		return L_271;
	}

IL_0550:
	{
		int32_t L_272 = ___f1;
		V_0 = L_272;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_273 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_274 = L_273;
		NullCheck(L_274);
		int32_t L_275 = L_274->get_avail_in_3();
		NullCheck(L_274);
		L_274->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_275, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_276 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_277 = L_276;
		NullCheck(L_277);
		int64_t L_278 = L_277->get_total_in_4();
		NullCheck(L_277);
		L_277->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_279 = ___z0;
		NullCheck(L_279);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_280 = L_279->get_istate_11();
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_281 = L_280;
		NullCheck(L_281);
		int64_t L_282 = L_281->get_need_3();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_283 = ___z0;
		NullCheck(L_283);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_284 = L_283->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_285 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_286 = L_285;
		NullCheck(L_286);
		int32_t L_287 = L_286->get_next_in_index_2();
		int32_t L_288 = L_287;
		V_12 = L_288;
		NullCheck(L_286);
		L_286->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_288, (int32_t)1)));
		int32_t L_289 = V_12;
		NullCheck(L_284);
		int32_t L_290 = L_289;
		uint8_t L_291 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		NullCheck(L_281);
		L_281->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_282, (int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291&(int32_t)((int32_t)255)))<<(int32_t)8)))))&(int64_t)(((int64_t)((int64_t)((int32_t)65280)))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_292 = ___z0;
		NullCheck(L_292);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_293 = L_292->get_istate_11();
		NullCheck(L_293);
		L_293->set_mode_0(((int32_t)11));
	}

IL_05b8:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_294 = ___z0;
		NullCheck(L_294);
		int32_t L_295 = L_294->get_avail_in_3();
		if (L_295)
		{
			goto IL_05c2;
		}
	}
	{
		int32_t L_296 = V_0;
		return L_296;
	}

IL_05c2:
	{
		int32_t L_297 = ___f1;
		V_0 = L_297;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_298 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_299 = L_298;
		NullCheck(L_299);
		int32_t L_300 = L_299->get_avail_in_3();
		NullCheck(L_299);
		L_299->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_300, (int32_t)1)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_301 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_302 = L_301;
		NullCheck(L_302);
		int64_t L_303 = L_302->get_total_in_4();
		NullCheck(L_302);
		L_302->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_303, (int64_t)(((int64_t)((int64_t)1))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_304 = ___z0;
		NullCheck(L_304);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_305 = L_304->get_istate_11();
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_306 = L_305;
		NullCheck(L_306);
		int64_t L_307 = L_306->get_need_3();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_308 = ___z0;
		NullCheck(L_308);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_309 = L_308->get_next_in_1();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_310 = ___z0;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_311 = L_310;
		NullCheck(L_311);
		int32_t L_312 = L_311->get_next_in_index_2();
		int32_t L_313 = L_312;
		V_13 = L_313;
		NullCheck(L_311);
		L_311->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_313, (int32_t)1)));
		int32_t L_314 = V_13;
		NullCheck(L_309);
		int32_t L_315 = L_314;
		uint8_t L_316 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		NullCheck(L_306);
		L_306->set_need_3(((int64_t)il2cpp_codegen_add((int64_t)L_307, (int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_316)))&(int64_t)(((int64_t)((int64_t)((int32_t)255)))))))));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_317 = ___z0;
		NullCheck(L_317);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_318 = L_317->get_istate_11();
		NullCheck(L_318);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_319 = L_318->get_was_2();
		NullCheck(L_319);
		int32_t L_320 = 0;
		int64_t L_321 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_322 = ___z0;
		NullCheck(L_322);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_323 = L_322->get_istate_11();
		NullCheck(L_323);
		int64_t L_324 = L_323->get_need_3();
		if ((((int32_t)(((int32_t)((int32_t)L_321)))) == ((int32_t)(((int32_t)((int32_t)L_324))))))
		{
			goto IL_065a;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_325 = ___z0;
		NullCheck(L_325);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_326 = L_325->get_istate_11();
		NullCheck(L_326);
		L_326->set_mode_0(((int32_t)13));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_327 = ___z0;
		NullCheck(L_327);
		L_327->set_msg_9(_stringLiteral13DE206ADF60DBF692C2DB9E4475CED6B63EEC76);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_328 = ___z0;
		NullCheck(L_328);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_329 = L_328->get_istate_11();
		NullCheck(L_329);
		L_329->set_marker_4(5);
		goto IL_0024;
	}

IL_065a:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_330 = ___z0;
		NullCheck(L_330);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_331 = L_330->get_istate_11();
		NullCheck(L_331);
		L_331->set_mode_0(((int32_t)12));
	}

IL_0667:
	{
		return 1;
	}

IL_0669:
	{
		return ((int32_t)-3);
	}

IL_066c:
	{
		return ((int32_t)-2);
	}
}
// System.Void zlib.Inflate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflate__ctor_m4103F64FD576422D27D1711A73488C1E5446DAC7 (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflate__ctor_m4103F64FD576422D27D1711A73488C1E5446DAC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_was_2(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void zlib.Inflate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflate__cctor_mF5F71842930DF65EDC86DF534B40AB671AB39B96 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflate__cctor_mF5F71842930DF65EDC86DF534B40AB671AB39B96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		int64_t L_2 = SupportClass_Identity_m6780E41465B34A9160DADDCB198C7CAD4FFE6971((((int64_t)((int64_t)((int32_t)255)))), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)L_2))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		int64_t L_4 = SupportClass_Identity_m6780E41465B34A9160DADDCB198C7CAD4FFE6971((((int64_t)((int64_t)((int32_t)255)))), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)L_4))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		((Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701_StaticFields*)il2cpp_codegen_static_fields_for(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701_il2cpp_TypeInfo_var))->set_mark_8(L_5);
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
// System.Void zlib.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_m39C2CFC4E6DEB4854FF3CAE8E087C085344FD43A (StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___static_tree0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___extra_bits1, int32_t ___extra_base2, int32_t ___elems3, int32_t ___max_length4, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_0 = ___static_tree0;
		__this->set_static_tree_6(L_0);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = ___extra_bits1;
		__this->set_extra_bits_7(L_1);
		int32_t L_2 = ___extra_base2;
		__this->set_extra_base_8(L_2);
		int32_t L_3 = ___elems3;
		__this->set_elems_9(L_3);
		int32_t L_4 = ___max_length4;
		__this->set_max_length_10(L_4);
		return;
	}
}
// System.Void zlib.StaticTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__cctor_mAB83CEBFC4264FDE6544C01D48E86823FCFA9B73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StaticTree__cctor_mAB83CEBFC4264FDE6544C01D48E86823FCFA9B73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->set_L_CODES_0(((int32_t)286));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_0 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)SZArrayNew(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)576));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x6000609U2D1_22_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->set_static_ltree_1(L_1);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_3 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)SZArrayNew(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)60));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x6000609U2D2_23_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->set_static_dtree_2(L_4);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_6 = ((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->get_static_ltree_1();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get_extra_lbits_2();
		int32_t L_8 = ((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->get_L_CODES_0();
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_9 = (StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 *)il2cpp_codegen_object_new(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var);
		StaticTree__ctor_m39C2CFC4E6DEB4854FF3CAE8E087C085344FD43A(L_9, L_6, L_7, ((int32_t)257), L_8, ((int32_t)15), /*hidden argument*/NULL);
		((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->set_static_l_desc_3(L_9);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_10 = ((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->get_static_dtree_2();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_11 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get_extra_dbits_3();
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_12 = (StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 *)il2cpp_codegen_object_new(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var);
		StaticTree__ctor_m39C2CFC4E6DEB4854FF3CAE8E087C085344FD43A(L_12, L_10, L_11, 0, ((int32_t)30), ((int32_t)15), /*hidden argument*/NULL);
		((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->set_static_d_desc_4(L_12);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get_extra_blbits_4();
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_14 = (StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 *)il2cpp_codegen_object_new(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var);
		StaticTree__ctor_m39C2CFC4E6DEB4854FF3CAE8E087C085344FD43A(L_14, (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)NULL, L_13, 0, ((int32_t)19), 7, /*hidden argument*/NULL);
		((StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1_il2cpp_TypeInfo_var))->set_static_bl_desc_5(L_14);
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
// System.Int64 zlib.SupportClass::Identity(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SupportClass_Identity_m6780E41465B34A9160DADDCB198C7CAD4FFE6971 (int64_t ___literal0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___literal0;
		return L_0;
	}
}
// System.Int32 zlib.SupportClass::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662 (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___number0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___number0;
		int32_t L_2 = ___bits1;
		return ((int32_t)((int32_t)L_1>>(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)31)))));
	}

IL_000b:
	{
		int32_t L_3 = ___number0;
		int32_t L_4 = ___bits1;
		int32_t L_5 = ___bits1;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)2<<(int32_t)((int32_t)((int32_t)((~L_5))&(int32_t)((int32_t)31)))))));
	}
}
// System.Int64 zlib.SupportClass::URShift(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SupportClass_URShift_m4F785AA3295148B3A6F13E47B6D3F2798870D92C (int64_t ___number0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___number0;
		if ((((int64_t)L_0) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = ___number0;
		int32_t L_2 = ___bits1;
		return ((int64_t)((int64_t)L_1>>(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)63)))));
	}

IL_000c:
	{
		int64_t L_3 = ___number0;
		int32_t L_4 = ___bits1;
		int32_t L_5 = ___bits1;
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)63))))), (int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)2)))<<(int32_t)((int32_t)((int32_t)((~L_5))&(int32_t)((int32_t)63)))))));
	}
}
// System.Int32 zlib.SupportClass::ReadInput(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_ReadInput_mC605E95F875DFE3A86612ED10D2754317F253D43 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___sourceStream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___target1, int32_t ___start2, int32_t ___count3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_ReadInput_mC605E95F875DFE3A86612ED10D2754317F253D43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___target1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))))
		{
			goto IL_0007;
		}
	}
	{
		return 0;
	}

IL_0007:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___target1;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))));
		V_0 = L_2;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___sourceStream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		int32_t L_5 = ___start2;
		int32_t L_6 = ___count3;
		NullCheck(L_3);
		int32_t L_7 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, L_5, L_6);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}

IL_001f:
	{
		int32_t L_9 = ___start2;
		V_2 = L_9;
		goto IL_002d;
	}

IL_0023:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___target1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)L_15);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = ___start2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
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
// System.Int32 zlib.Tree::d_code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_d_code_mDC9B59D4860AF297BEBA6FF38914E5ED8D99E8D7 (int32_t ___dist0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_d_code_mDC9B59D4860AF297BEBA6FF38914E5ED8D99E8D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___dist0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)256))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get__dist_code_6();
		int32_t L_2 = ___dist0;
		int32_t L_3 = SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662(L_2, 7, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_3));
		uint8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get__dist_code_6();
		int32_t L_7 = ___dist0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}
}
// System.Void zlib.Tree::gen_bitlen(zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m8B2CBE6D24A63086263BF1DCCAB94E51FD370348 (Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * __this, Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_gen_bitlen_m8B2CBE6D24A63086263BF1DCCAB94E51FD370348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_0 = NULL;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_1 = NULL;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int16_t V_10 = 0;
	int32_t V_11 = 0;
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_0 = __this->get_dyn_tree_10();
		V_0 = L_0;
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_1 = __this->get_stat_desc_12();
		NullCheck(L_1);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_2 = L_1->get_static_tree_6();
		V_1 = L_2;
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_3 = __this->get_stat_desc_12();
		NullCheck(L_3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = L_3->get_extra_bits_7();
		V_2 = L_4;
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_5 = __this->get_stat_desc_12();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_extra_base_8();
		V_3 = L_6;
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_7 = __this->get_stat_desc_12();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_max_length_10();
		V_4 = L_8;
		V_11 = 0;
		V_8 = 0;
		goto IL_0050;
	}

IL_0040:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_9 = ___s0;
		NullCheck(L_9);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_10 = L_9->get_bl_count_47();
		int32_t L_11 = V_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)0);
		int32_t L_12 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_13 = V_8;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0040;
		}
	}
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_14 = V_0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_15 = ___s0;
		NullCheck(L_15);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = L_15->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_17 = ___s0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_heap_max_50();
		NullCheck(L_16);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)2)), (int32_t)1))), (int16_t)0);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_21 = ___s0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_heap_max_50();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		goto IL_0127;
	}

IL_0079:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_23 = ___s0;
		NullCheck(L_23);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = L_23->get_heap_48();
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_28 = V_0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_29 = V_0;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2)), (int32_t)1));
		int16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_32, (int32_t)2)), (int32_t)1));
		int16_t L_34 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		int32_t L_35 = V_8;
		int32_t L_36 = V_4;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_37 = V_4;
		V_8 = L_37;
		int32_t L_38 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00a6:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_39 = V_0;
		int32_t L_40 = V_6;
		int32_t L_41 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2)), (int32_t)1))), (int16_t)(((int16_t)((int16_t)L_41))));
		int32_t L_42 = V_6;
		int32_t L_43 = __this->get_max_code_11();
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_0121;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_44 = ___s0;
		NullCheck(L_44);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_45 = L_44->get_bl_count_47();
		int32_t L_46 = V_8;
		NullCheck(L_45);
		int16_t* L_47 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)));
		int16_t L_48 = (*(int16_t*)L_47);
		*(int16_t*)L_47 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)))));
		V_9 = 0;
		int32_t L_49 = V_6;
		int32_t L_50 = V_3;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00e6;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_51 = V_2;
		int32_t L_52 = V_6;
		int32_t L_53 = V_3;
		NullCheck(L_51);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_53));
		int32_t L_55 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_9 = L_55;
	}

IL_00e6:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_56 = V_0;
		int32_t L_57 = V_6;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_57, (int32_t)2));
		int16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_10 = L_59;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_60 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_61 = L_60;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_opt_len_56();
		int16_t L_63 = V_10;
		int32_t L_64 = V_8;
		int32_t L_65 = V_9;
		NullCheck(L_61);
		L_61->set_opt_len_56(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65)))))));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_66 = V_1;
		if (!L_66)
		{
			goto IL_0121;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_67 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_68 = L_67;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_static_len_57();
		int16_t L_70 = V_10;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_71 = V_1;
		int32_t L_72 = V_6;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_72, (int32_t)2)), (int32_t)1));
		int16_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = V_9;
		NullCheck(L_68);
		L_68->set_static_len_57(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_70, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75)))))));
	}

IL_0121:
	{
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0127:
	{
		int32_t L_77 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var);
		int32_t L_78 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get_HEAP_SIZE_1();
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_79 = V_11;
		if (L_79)
		{
			goto IL_0138;
		}
	}
	{
		return;
	}

IL_0138:
	{
		int32_t L_80 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1));
		goto IL_0146;
	}

IL_0140:
	{
		int32_t L_81 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
	}

IL_0146:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_82 = ___s0;
		NullCheck(L_82);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_83 = L_82->get_bl_count_47();
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		int16_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if (!L_86)
		{
			goto IL_0140;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_87 = ___s0;
		NullCheck(L_87);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_88 = L_87->get_bl_count_47();
		int32_t L_89 = V_8;
		NullCheck(L_88);
		int16_t* L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)));
		int16_t L_91 = (*(int16_t*)L_90);
		*(int16_t*)L_90 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)1)))));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_92 = ___s0;
		NullCheck(L_92);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_93 = L_92->get_bl_count_47();
		int32_t L_94 = V_8;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_95 = ___s0;
		NullCheck(L_95);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_96 = L_95->get_bl_count_47();
		int32_t L_97 = V_8;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		int16_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1))), (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)2))))));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_100 = ___s0;
		NullCheck(L_100);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_101 = L_100->get_bl_count_47();
		int32_t L_102 = V_4;
		NullCheck(L_101);
		int16_t* L_103 = ((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)));
		int16_t L_104 = (*(int16_t*)L_103);
		*(int16_t*)L_103 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1)))));
		int32_t L_105 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)2));
		int32_t L_106 = V_11;
		if ((((int32_t)L_106) > ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_107 = V_4;
		V_8 = L_107;
		goto IL_0223;
	}

IL_01b1:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_108 = ___s0;
		NullCheck(L_108);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_109 = L_108->get_bl_count_47();
		int32_t L_110 = V_8;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int16_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_6 = L_112;
		goto IL_0219;
	}

IL_01be:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_113 = ___s0;
		NullCheck(L_113);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_114 = L_113->get_heap_48();
		int32_t L_115 = V_5;
		int32_t L_116 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_115, (int32_t)1));
		V_5 = L_116;
		NullCheck(L_114);
		int32_t L_117 = L_116;
		int32_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_7 = L_118;
		int32_t L_119 = V_7;
		int32_t L_120 = __this->get_max_code_11();
		if ((((int32_t)L_119) > ((int32_t)L_120)))
		{
			goto IL_0219;
		}
	}
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_121 = V_0;
		int32_t L_122 = V_7;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_122, (int32_t)2)), (int32_t)1));
		int16_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_8;
		if ((((int32_t)L_124) == ((int32_t)L_125)))
		{
			goto IL_0213;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_126 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_127 = ___s0;
		NullCheck(L_127);
		int32_t L_128 = L_127->get_opt_len_56();
		int32_t L_129 = V_8;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_130 = V_0;
		int32_t L_131 = V_7;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_131, (int32_t)2)), (int32_t)1));
		int16_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_134 = V_0;
		int32_t L_135 = V_7;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_135, (int32_t)2));
		int16_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		NullCheck(L_126);
		L_126->set_opt_len_56((((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_128))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)L_129))), (int64_t)(((int64_t)((int64_t)L_133))))), (int64_t)(((int64_t)((int64_t)L_137)))))))))));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_138 = V_0;
		int32_t L_139 = V_7;
		int32_t L_140 = V_8;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_139, (int32_t)2)), (int32_t)1))), (int16_t)(((int16_t)((int16_t)L_140))));
	}

IL_0213:
	{
		int32_t L_141 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)1));
	}

IL_0219:
	{
		int32_t L_142 = V_6;
		if (L_142)
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_143 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_143, (int32_t)1));
	}

IL_0223:
	{
		int32_t L_144 = V_8;
		if (L_144)
		{
			goto IL_01b1;
		}
	}
	{
		return;
	}
}
// System.Void zlib.Tree::build_tree(zlib.Deflate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_mF855207AD85A94AB4E1C4800F59C9B8842131DE6 (Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * __this, Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_build_tree_mF855207AD85A94AB4E1C4800F59C9B8842131DE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_0 = NULL;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int16_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t G_B9_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* G_B10_2 = NULL;
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_0 = __this->get_dyn_tree_10();
		V_0 = L_0;
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_1 = __this->get_stat_desc_12();
		NullCheck(L_1);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_2 = L_1->get_static_tree_6();
		V_1 = L_2;
		StaticTree_t7CA16B12A0E2D4F500F5D1D5E7DC6A7CCEA5CCB1 * L_3 = __this->get_stat_desc_12();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_elems_9();
		V_2 = L_4;
		V_5 = (-1);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_5 = ___s0;
		NullCheck(L_5);
		L_5->set_heap_len_49(0);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_6 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get_HEAP_SIZE_1();
		NullCheck(L_6);
		L_6->set_heap_max_50(L_7);
		V_3 = 0;
		goto IL_0074;
	}

IL_0038:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_12 = ___s0;
		NullCheck(L_12);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = L_12->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_14 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_heap_len_49();
		int32_t L_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		V_7 = L_17;
		NullCheck(L_15);
		L_15->set_heap_len_49(L_17);
		int32_t L_18 = V_7;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		V_5 = L_20;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_21 = ___s0;
		NullCheck(L_21);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = L_21->get_depth_51();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)0);
		goto IL_0070;
	}

IL_0068:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_24 = V_0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)2)), (int32_t)1))), (int16_t)0);
	}

IL_0070:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00e1;
	}

IL_007a:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_29 = ___s0;
		NullCheck(L_29);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_30 = L_29->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_31 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_32 = L_31;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_heap_len_49();
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		V_8 = L_34;
		NullCheck(L_32);
		L_32->set_heap_len_49(L_34);
		int32_t L_35 = V_8;
		int32_t L_36 = V_5;
		G_B8_0 = L_35;
		G_B8_1 = L_30;
		if ((((int32_t)L_36) < ((int32_t)2)))
		{
			G_B9_0 = L_35;
			G_B9_1 = L_30;
			goto IL_009b;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00a2;
	}

IL_009b:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		V_5 = L_38;
		G_B10_0 = L_38;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00a2:
	{
		int32_t L_39 = G_B10_0;
		V_9 = L_39;
		NullCheck(G_B10_2);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (int32_t)L_39);
		int32_t L_40 = V_9;
		V_6 = L_40;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_41 = V_0;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2))), (int16_t)1);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_43 = ___s0;
		NullCheck(L_43);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = L_43->get_depth_51();
		int32_t L_45 = V_6;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint8_t)0);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_46 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_47 = L_46;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_opt_len_56();
		NullCheck(L_47);
		L_47->set_opt_len_56(((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00e1;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_50 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_static_len_57();
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_53 = V_1;
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)2)), (int32_t)1));
		int16_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		L_51->set_static_len_57(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_56)));
	}

IL_00e1:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_57 = ___s0;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_heap_len_49();
		if ((((int32_t)L_58) < ((int32_t)2)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_59 = V_5;
		__this->set_max_code_11(L_59);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_60 = ___s0;
		NullCheck(L_60);
		int32_t L_61 = L_60->get_heap_len_49();
		V_3 = ((int32_t)((int32_t)L_61/(int32_t)2));
		goto IL_0109;
	}

IL_00fd:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_62 = ___s0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_63 = V_0;
		int32_t L_64 = V_3;
		NullCheck(L_62);
		Deflate_pqdownheap_m1C1274FBF2CB9838FCE6D89EEE75239956EF1969(L_62, L_63, L_64, /*hidden argument*/NULL);
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
	}

IL_0109:
	{
		int32_t L_66 = V_3;
		if ((((int32_t)L_66) >= ((int32_t)1)))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_67 = V_2;
		V_6 = L_67;
	}

IL_0110:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_68 = ___s0;
		NullCheck(L_68);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_69 = L_68->get_heap_48();
		NullCheck(L_69);
		int32_t L_70 = 1;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_3 = L_71;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_72 = ___s0;
		NullCheck(L_72);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_73 = L_72->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_74 = ___s0;
		NullCheck(L_74);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_75 = L_74->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_76 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_77 = L_76;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_heap_len_49();
		int32_t L_79 = L_78;
		V_10 = L_79;
		NullCheck(L_77);
		L_77->set_heap_len_49(((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)));
		int32_t L_80 = V_10;
		NullCheck(L_75);
		int32_t L_81 = L_80;
		int32_t L_82 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_82);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_83 = ___s0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_84 = V_0;
		NullCheck(L_83);
		Deflate_pqdownheap_m1C1274FBF2CB9838FCE6D89EEE75239956EF1969(L_83, L_84, 1, /*hidden argument*/NULL);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_85 = ___s0;
		NullCheck(L_85);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_86 = L_85->get_heap_48();
		NullCheck(L_86);
		int32_t L_87 = 1;
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_4 = L_88;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_89 = ___s0;
		NullCheck(L_89);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_90 = L_89->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_91 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_92 = L_91;
		NullCheck(L_92);
		int32_t L_93 = L_92->get_heap_max_50();
		int32_t L_94 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		V_11 = L_94;
		NullCheck(L_92);
		L_92->set_heap_max_50(L_94);
		int32_t L_95 = V_11;
		int32_t L_96 = V_3;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (int32_t)L_96);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_97 = ___s0;
		NullCheck(L_97);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_98 = L_97->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_99 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_100 = L_99;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_heap_max_50();
		int32_t L_102 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1));
		V_12 = L_102;
		NullCheck(L_100);
		L_100->set_heap_max_50(L_102);
		int32_t L_103 = V_12;
		int32_t L_104 = V_4;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)L_104);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_105 = V_0;
		int32_t L_106 = V_6;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_107 = V_0;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_108, (int32_t)2));
		int16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_111 = V_0;
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_112, (int32_t)2));
		int16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_106, (int32_t)2))), (int16_t)(((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_114))))));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_115 = ___s0;
		NullCheck(L_115);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_116 = L_115->get_depth_51();
		int32_t L_117 = V_6;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_118 = ___s0;
		NullCheck(L_118);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_119 = L_118->get_depth_51();
		int32_t L_120 = V_3;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_123 = ___s0;
		NullCheck(L_123);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_124 = L_123->get_depth_51();
		int32_t L_125 = V_4;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint8_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		uint8_t L_128 = Math_Max_m1BF8F05475C80682F5C2127D97C2DF9C66505CAE(L_122, L_127, /*hidden argument*/NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1))))));
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_129 = V_0;
		int32_t L_130 = V_3;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_131 = V_0;
		int32_t L_132 = V_4;
		int32_t L_133 = V_6;
		int16_t L_134 = (((int16_t)((int16_t)L_133)));
		V_13 = L_134;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_132, (int32_t)2)), (int32_t)1))), (int16_t)L_134);
		int16_t L_135 = V_13;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_130, (int32_t)2)), (int32_t)1))), (int16_t)L_135);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_136 = ___s0;
		NullCheck(L_136);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_137 = L_136->get_heap_48();
		int32_t L_138 = V_6;
		int32_t L_139 = L_138;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_139);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_140 = ___s0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_141 = V_0;
		NullCheck(L_140);
		Deflate_pqdownheap_m1C1274FBF2CB9838FCE6D89EEE75239956EF1969(L_140, L_141, 1, /*hidden argument*/NULL);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_142 = ___s0;
		NullCheck(L_142);
		int32_t L_143 = L_142->get_heap_len_49();
		if ((((int32_t)L_143) >= ((int32_t)2)))
		{
			goto IL_0110;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_144 = ___s0;
		NullCheck(L_144);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_145 = L_144->get_heap_48();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_146 = ___s0;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_147 = L_146;
		NullCheck(L_147);
		int32_t L_148 = L_147->get_heap_max_50();
		int32_t L_149 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
		V_14 = L_149;
		NullCheck(L_147);
		L_147->set_heap_max_50(L_149);
		int32_t L_150 = V_14;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_151 = ___s0;
		NullCheck(L_151);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_152 = L_151->get_heap_48();
		NullCheck(L_152);
		int32_t L_153 = 1;
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (int32_t)L_154);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_155 = ___s0;
		Tree_gen_bitlen_m8B2CBE6D24A63086263BF1DCCAB94E51FD370348(__this, L_155, /*hidden argument*/NULL);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_156 = V_0;
		int32_t L_157 = V_5;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_158 = ___s0;
		NullCheck(L_158);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_159 = L_158->get_bl_count_47();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var);
		Tree_gen_codes_mF0B6F76BAE741F361D9A14213E3A0A861C18A026(L_156, L_157, L_159, /*hidden argument*/NULL);
		return;
	}
}
// System.Void zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_mF0B6F76BAE741F361D9A14213E3A0A861C18A026 (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___tree0, int32_t ___max_code1, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___bl_count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree_gen_codes_mF0B6F76BAE741F361D9A14213E3A0A861C18A026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_0 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)SZArrayNew(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = (int16_t)0;
		V_2 = 1;
		goto IL_0021;
	}

IL_000e:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_1 = V_0;
		int32_t L_2 = V_2;
		int16_t L_3 = V_1;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_4 = ___bl_count2;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int16_t L_8 = (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_7))<<(int32_t)1)))));
		V_1 = L_8;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int16_t)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)15))))
		{
			goto IL_000e;
		}
	}
	{
		V_3 = 0;
		goto IL_0063;
	}

IL_002a:
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_11 = ___tree0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2)), (int32_t)1));
		int16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_16 = ___tree0;
		int32_t L_17 = V_3;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_18 = V_0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int16_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int16_t L_21 = (*(int16_t*)L_20);
		int16_t L_22 = L_21;
		V_5 = L_22;
		*(int16_t*)L_20 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)))));
		int16_t L_23 = V_5;
		int32_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var);
		int32_t L_25 = Tree_bi_reverse_m3A4A68BF77A97C21FB216803240CACB0C0885C5B(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2))), (int16_t)(((int16_t)((int16_t)L_25))));
	}

IL_005f:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = ___max_code1;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Int32 zlib.Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_m3A4A68BF77A97C21FB216803240CACB0C0885C5B (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___code0;
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1&(int32_t)1))));
		int32_t L_2 = ___code0;
		int32_t L_3 = SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662(L_2, 1, /*hidden argument*/NULL);
		___code0 = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		int32_t L_5 = ___len1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		___len1 = L_6;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = SupportClass_URShift_m60FCED008C87151324E375BD7C7978CB24665662(L_7, 1, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void zlib.Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_m8F096EC5F24251DC6C07503BD8D2C15482DE34A5 (Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void zlib.Tree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__cctor_mC117A7F74B496EA8A8E376154A4856101CFD7343 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tree__cctor_mC117A7F74B496EA8A8E376154A4856101CFD7343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_L_CODES_0(((int32_t)286));
		int32_t L_0 = ((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->get_L_CODES_0();
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_HEAP_SIZE_1(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)), (int32_t)1)));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = L_1;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_extra_lbits_2(L_2);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = L_4;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D2_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_extra_dbits_3(L_5);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = L_7;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D3_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_extra_blbits_4(L_8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = L_10;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D4_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_11, L_12, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_bl_order_5(L_11);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = L_13;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D5_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set__dist_code_6(L_14);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = L_16;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D6_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_17, L_18, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set__length_code_7(L_17);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_19 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = L_19;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D7_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_base_length_8(L_20);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = L_22;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B326E9AABU2D9385U2D4E73U2D9606U2DC3572C385A34U7D_t4FDA1059F4D84989141718D88ABAB891AE5C2C8F____U24U24method0x60006f3U2D8_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_23, L_24, /*hidden argument*/NULL);
		((Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_StaticFields*)il2cpp_codegen_static_fields_for(Tree_tE22E98FFBCA2D9C38072339F539D744B2688E21A_il2cpp_TypeInfo_var))->set_base_dist_9(L_23);
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
// System.Void zlib.ZInputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_InitBlock_m81A4555F76BBC3F82BCEDEEFA6299FBEC4BE9482 (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZInputStream_InitBlock_m81A4555F76BBC3F82BCEDEEFA6299FBEC4BE9482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_flush_13(0);
		int32_t L_0 = __this->get_bufsize_12();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buf_14(L_1);
		return;
	}
}
// System.Int64 zlib.ZInputStream::get_TotalIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZInputStream_get_TotalIn_m583F9DD2EDBDBA01665EB18731EA182CD8BF2924 (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, const RuntimeMethod* method)
{
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = __this->get_z_11();
		NullCheck(L_0);
		int64_t L_1 = L_0->get_total_in_4();
		return L_1;
	}
}
// System.Void zlib.ZInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream__ctor_m5B6C55B629C2160B57C7BF524C3AB2FB0F3F517C (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___in_Renamed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZInputStream__ctor_m5B6C55B629C2160B57C7BF524C3AB2FB0F3F517C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D *)il2cpp_codegen_object_new(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_il2cpp_TypeInfo_var);
		ZStream__ctor_mD6B20E08D2D5EC67D791FF4EA6548405FCF08E24(L_0, /*hidden argument*/NULL);
		__this->set_z_11(L_0);
		__this->set_bufsize_12(((int32_t)512));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_buf1_15(L_1);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___in_Renamed0;
		BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(__this, L_2, /*hidden argument*/NULL);
		ZInputStream_InitBlock_m81A4555F76BBC3F82BCEDEEFA6299FBEC4BE9482(__this, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___in_Renamed0;
		__this->set_in_Renamed_17(L_3);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_4 = __this->get_z_11();
		NullCheck(L_4);
		ZStream_inflateInit_m6DB571CEF46FAA0FD0BA0F98481175E0C4685D7B(L_4, /*hidden argument*/NULL);
		__this->set_compress_16((bool)0);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_5 = __this->get_z_11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get_buf_14();
		NullCheck(L_5);
		L_5->set_next_in_1(L_6);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_7 = __this->get_z_11();
		NullCheck(L_7);
		L_7->set_next_in_index_2(0);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_8 = __this->get_z_11();
		NullCheck(L_8);
		L_8->set_avail_in_3(0);
		return;
	}
}
// System.Int32 zlib.ZInputStream::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZInputStream_Read_m33B778A5C8940C22B06A63D0F72293FD77CC4A2D (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_buf1_15();
		int32_t L_1 = ZInputStream_read_m7EAB57F4D0087E37C397AF1FF24A6358FF5CF492(__this, L_0, 0, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}

IL_0013:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buf1_15();
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return ((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)));
	}
}
// System.Int32 zlib.ZInputStream::read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZInputStream_read_m7EAB57F4D0087E37C397AF1FF24A6358FF5CF492 (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZInputStream_read_m7EAB57F4D0087E37C397AF1FF24A6358FF5CF492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* G_B24_0 = NULL;
	{
		int32_t L_0 = ___len2;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_1 = __this->get_z_11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___b0;
		NullCheck(L_1);
		L_1->set_next_out_5(L_2);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_3 = __this->get_z_11();
		int32_t L_4 = ___off1;
		NullCheck(L_3);
		L_3->set_next_out_index_6(L_4);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_5 = __this->get_z_11();
		int32_t L_6 = ___len2;
		NullCheck(L_5);
		L_5->set_avail_out_7(L_6);
	}

IL_0029:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_7 = __this->get_z_11();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_avail_in_3();
		if (L_8)
		{
			goto IL_00e5;
		}
	}
	{
		bool L_9 = __this->get_nomoreinput_18();
		if (L_9)
		{
			goto IL_00e5;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_10 = __this->get_z_11();
		NullCheck(L_10);
		L_10->set_next_in_index_2(0);
		int32_t L_11 = __this->get_bufsize_12();
		V_1 = L_11;
		int64_t L_12 = __this->get_maxInput_10();
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0098;
		}
	}
	{
		int64_t L_13 = VirtFuncInvoker0< int64_t >::Invoke(27 /* System.Int64 zlib.ZInputStream::get_TotalIn() */, __this);
		int64_t L_14 = __this->get_maxInput_10();
		if ((((int64_t)L_13) >= ((int64_t)L_14)))
		{
			goto IL_008c;
		}
	}
	{
		int64_t L_15 = __this->get_maxInput_10();
		int64_t L_16 = VirtFuncInvoker0< int64_t >::Invoke(27 /* System.Int64 zlib.ZInputStream::get_TotalIn() */, __this);
		int32_t L_17 = __this->get_bufsize_12();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int64_t L_18 = Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3(((int64_t)il2cpp_codegen_subtract((int64_t)L_15, (int64_t)L_16)), (((int64_t)((int64_t)L_17))), /*hidden argument*/NULL);
		V_1 = (((int32_t)((int32_t)L_18)));
		goto IL_0098;
	}

IL_008c:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_19 = __this->get_z_11();
		NullCheck(L_19);
		L_19->set_avail_in_3((-1));
	}

IL_0098:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_20 = __this->get_z_11();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_avail_in_3();
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_00c4;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_22 = __this->get_z_11();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_23 = __this->get_in_Renamed_17();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = __this->get_buf_14();
		int32_t L_25 = V_1;
		int32_t L_26 = SupportClass_ReadInput_mC605E95F875DFE3A86612ED10D2754317F253D43(L_23, L_24, 0, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_avail_in_3(L_26);
	}

IL_00c4:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_27 = __this->get_z_11();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_avail_in_3();
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e5;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_29 = __this->get_z_11();
		NullCheck(L_29);
		L_29->set_avail_in_3(0);
		__this->set_nomoreinput_18((bool)1);
	}

IL_00e5:
	{
		bool L_30 = __this->get_compress_16();
		if (!L_30)
		{
			goto IL_0101;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_31 = __this->get_z_11();
		int32_t L_32 = __this->get_flush_13();
		NullCheck(L_31);
		int32_t L_33 = ZStream_deflate_m99E7EEF9E978D9D0442AA11AA6846876C0C0FB51(L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0113;
	}

IL_0101:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_34 = __this->get_z_11();
		int32_t L_35 = __this->get_flush_13();
		NullCheck(L_34);
		int32_t L_36 = ZStream_inflate_m8BA50DFA4DC08FEB3C15CC3F8F73F0B30110CDE0(L_34, L_35, /*hidden argument*/NULL);
		V_0 = L_36;
	}

IL_0113:
	{
		bool L_37 = __this->get_nomoreinput_18();
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0122;
		}
	}
	{
		return (-1);
	}

IL_0122:
	{
		int32_t L_39 = V_0;
		if (!L_39)
		{
			goto IL_0158;
		}
	}
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)1)))
		{
			goto IL_0158;
		}
	}
	{
		bool L_41 = __this->get_compress_16();
		if (L_41)
		{
			goto IL_0138;
		}
	}
	{
		G_B24_0 = _stringLiteralAF10EF20DD9060BBEEAD0AFBC55381A66AF442EF;
		goto IL_013d;
	}

IL_0138:
	{
		G_B24_0 = _stringLiteral600CCD1B71569232D01D110BC63E906BEAB04D8C;
	}

IL_013d:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_42 = __this->get_z_11();
		NullCheck(L_42);
		String_t* L_43 = L_42->get_msg_9();
		String_t* L_44 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(G_B24_0, _stringLiteral51796AC29F50F5E732052A10903C85F5A3FEA6EE, L_43, /*hidden argument*/NULL);
		ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 * L_45 = (ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 *)il2cpp_codegen_object_new(ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746_il2cpp_TypeInfo_var);
		ZStreamException__ctor_mAD874598D865356E974D74CF11432E091618C77E(L_45, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ZInputStream_read_m7EAB57F4D0087E37C397AF1FF24A6358FF5CF492_RuntimeMethod_var);
	}

IL_0158:
	{
		bool L_46 = __this->get_nomoreinput_18();
		if (!L_46)
		{
			goto IL_0170;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_47 = __this->get_z_11();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_avail_out_7();
		int32_t L_49 = ___len2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0170;
		}
	}
	{
		return (-1);
	}

IL_0170:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_50 = __this->get_z_11();
		NullCheck(L_50);
		int32_t L_51 = L_50->get_avail_out_7();
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_52 = V_0;
		if (!L_52)
		{
			goto IL_0029;
		}
	}

IL_0184:
	{
		int32_t L_53 = ___len2;
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_54 = __this->get_z_11();
		NullCheck(L_54);
		int32_t L_55 = L_54->get_avail_out_7();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_55));
	}
}
// System.Void zlib.ZInputStream::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZInputStream_Close_m9F04D31BC309E056E23F70495FADD673EBF3A2F0 (ZInputStream_t332E0BF7A54D595611392A139CFEF69ABA124048 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_in_Renamed_17();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Close() */, L_0);
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
// System.Void zlib.ZOutputStream::InitBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_InitBlock_m2469960F35CB3C1CCFBD9CC85D72D4FF8C5304B8 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZOutputStream_InitBlock_m2469960F35CB3C1CCFBD9CC85D72D4FF8C5304B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_flush_Renamed_Field_7(0);
		int32_t L_0 = __this->get_bufsize_6();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buf_8(L_1);
		return;
	}
}
// System.Void zlib.ZOutputStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream__ctor_m0345FA4A2AE4C66F4E69640CA49DD81F865B91F0 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___out_Renamed0, int32_t ___level1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZOutputStream__ctor_m0345FA4A2AE4C66F4E69640CA49DD81F865B91F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D *)il2cpp_codegen_object_new(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_il2cpp_TypeInfo_var);
		ZStream__ctor_mD6B20E08D2D5EC67D791FF4EA6548405FCF08E24(L_0, /*hidden argument*/NULL);
		__this->set_z_5(L_0);
		__this->set_bufsize_6(((int32_t)512));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_buf1_9(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_il2cpp_TypeInfo_var);
		Stream__ctor_m58342D6FD95230C6BA1058E5698AB4BAF0A4DBF5(__this, /*hidden argument*/NULL);
		ZOutputStream_InitBlock_m2469960F35CB3C1CCFBD9CC85D72D4FF8C5304B8(__this, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___out_Renamed0;
		__this->set_out_Renamed_11(L_2);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_3 = __this->get_z_5();
		int32_t L_4 = ___level1;
		NullCheck(L_3);
		ZStream_deflateInit_m6E7B25036BED5B992CB6D377E4F62AF1E55B9F66(L_3, L_4, /*hidden argument*/NULL);
		__this->set_compress_10((bool)1);
		return;
	}
}
// System.Void zlib.ZOutputStream::WriteByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_WriteByte_mA36F1E4C5DCBA4C1B7160FF7FF9E61441B84A286 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, int32_t ___b0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_buf1_9();
		int32_t L_1 = ___b0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)L_1))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buf1_9();
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(31 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, 1);
		return;
	}
}
// System.Void zlib.ZOutputStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_WriteByte_m5AB03BBFB22C78C237DF05112E252CE8DD16D218 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___b0;
		ZOutputStream_WriteByte_mA36F1E4C5DCBA4C1B7160FF7FF9E61441B84A286(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void zlib.ZOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Write_m4D76A3503C70AA1602249BB09212072548796329 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___b10, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZOutputStream_Write_m4D76A3503C70AA1602249BB09212072548796329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	String_t* G_B10_0 = NULL;
	{
		int32_t L_0 = ___len2;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___b10;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))));
		V_1 = L_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___b10;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___b10;
		NullCheck(L_5);
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_3, (RuntimeArray *)(RuntimeArray *)L_4, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), /*hidden argument*/NULL);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_6 = __this->get_z_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		NullCheck(L_6);
		L_6->set_next_in_1(L_7);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_8 = __this->get_z_5();
		int32_t L_9 = ___off1;
		NullCheck(L_8);
		L_8->set_next_in_index_2(L_9);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_10 = __this->get_z_5();
		int32_t L_11 = ___len2;
		NullCheck(L_10);
		L_10->set_avail_in_3(L_11);
	}

IL_003b:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_12 = __this->get_z_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get_buf_8();
		NullCheck(L_12);
		L_12->set_next_out_5(L_13);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_14 = __this->get_z_5();
		NullCheck(L_14);
		L_14->set_next_out_index_6(0);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_15 = __this->get_z_5();
		int32_t L_16 = __this->get_bufsize_6();
		NullCheck(L_15);
		L_15->set_avail_out_7(L_16);
		bool L_17 = __this->get_compress_10();
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_18 = __this->get_z_5();
		int32_t L_19 = __this->get_flush_Renamed_Field_7();
		NullCheck(L_18);
		int32_t L_20 = ZStream_deflate_m99E7EEF9E978D9D0442AA11AA6846876C0C0FB51(L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0097;
	}

IL_0085:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_21 = __this->get_z_5();
		int32_t L_22 = __this->get_flush_Renamed_Field_7();
		NullCheck(L_21);
		int32_t L_23 = ZStream_inflate_m8BA50DFA4DC08FEB3C15CC3F8F73F0B30110CDE0(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_0097:
	{
		int32_t L_24 = V_0;
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		bool L_25 = __this->get_compress_10();
		if (L_25)
		{
			goto IL_00a9;
		}
	}
	{
		G_B10_0 = _stringLiteralAF10EF20DD9060BBEEAD0AFBC55381A66AF442EF;
		goto IL_00ae;
	}

IL_00a9:
	{
		G_B10_0 = _stringLiteral600CCD1B71569232D01D110BC63E906BEAB04D8C;
	}

IL_00ae:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_26 = __this->get_z_5();
		NullCheck(L_26);
		String_t* L_27 = L_26->get_msg_9();
		String_t* L_28 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(G_B10_0, _stringLiteral51796AC29F50F5E732052A10903C85F5A3FEA6EE, L_27, /*hidden argument*/NULL);
		ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 * L_29 = (ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 *)il2cpp_codegen_object_new(ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746_il2cpp_TypeInfo_var);
		ZStreamException__ctor_mAD874598D865356E974D74CF11432E091618C77E(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ZOutputStream_Write_m4D76A3503C70AA1602249BB09212072548796329_RuntimeMethod_var);
	}

IL_00c9:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_30 = __this->get_out_Renamed_11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = __this->get_buf_8();
		int32_t L_32 = __this->get_bufsize_6();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_33 = __this->get_z_5();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_avail_out_7();
		NullCheck(L_30);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(31 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_30, L_31, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_34)));
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_35 = __this->get_z_5();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_avail_in_3();
		if ((((int32_t)L_36) > ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_37 = __this->get_z_5();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_avail_out_7();
		if (!L_38)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void zlib.ZOutputStream::finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_finish_m78CE44648627F9D54DF488997D234BCAED8700B5 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZOutputStream_finish_m78CE44648627F9D54DF488997D234BCAED8700B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B8_0 = NULL;

IL_0000:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_0 = __this->get_z_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_buf_8();
		NullCheck(L_0);
		L_0->set_next_out_5(L_1);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_2 = __this->get_z_5();
		NullCheck(L_2);
		L_2->set_next_out_index_6(0);
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_3 = __this->get_z_5();
		int32_t L_4 = __this->get_bufsize_6();
		NullCheck(L_3);
		L_3->set_avail_out_7(L_4);
		bool L_5 = __this->get_compress_10();
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_6 = __this->get_z_5();
		NullCheck(L_6);
		int32_t L_7 = ZStream_deflate_m99E7EEF9E978D9D0442AA11AA6846876C0C0FB51(L_6, 4, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0052;
	}

IL_0045:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_8 = __this->get_z_5();
		NullCheck(L_8);
		int32_t L_9 = ZStream_inflate_m8BA50DFA4DC08FEB3C15CC3F8F73F0B30110CDE0(L_8, 4, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0052:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		bool L_12 = __this->get_compress_10();
		if (L_12)
		{
			goto IL_0068;
		}
	}
	{
		G_B8_0 = _stringLiteralAF10EF20DD9060BBEEAD0AFBC55381A66AF442EF;
		goto IL_006d;
	}

IL_0068:
	{
		G_B8_0 = _stringLiteral600CCD1B71569232D01D110BC63E906BEAB04D8C;
	}

IL_006d:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_13 = __this->get_z_5();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_msg_9();
		String_t* L_15 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(G_B8_0, _stringLiteral51796AC29F50F5E732052A10903C85F5A3FEA6EE, L_14, /*hidden argument*/NULL);
		ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 * L_16 = (ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 *)il2cpp_codegen_object_new(ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746_il2cpp_TypeInfo_var);
		ZStreamException__ctor_mAD874598D865356E974D74CF11432E091618C77E(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ZOutputStream_finish_m78CE44648627F9D54DF488997D234BCAED8700B5_RuntimeMethod_var);
	}

IL_0088:
	{
		int32_t L_17 = __this->get_bufsize_6();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_18 = __this->get_z_5();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_avail_out_7();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_19))) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_20 = __this->get_out_Renamed_11();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = __this->get_buf_8();
		int32_t L_22 = __this->get_bufsize_6();
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_23 = __this->get_z_5();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_avail_out_7();
		NullCheck(L_20);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(31 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_24)));
	}

IL_00c1:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_25 = __this->get_z_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_avail_in_3();
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_0000;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_27 = __this->get_z_5();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_avail_out_7();
		if (!L_28)
		{
			goto IL_0000;
		}
	}

IL_00e2:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(19 /* System.Void System.IO.Stream::Flush() */, __this);
		goto IL_00ed;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ea;
		throw e;
	}

CATCH_00ea:
	{ // begin catch(System.Object)
		goto IL_00ed;
	} // end catch (depth: 1)

IL_00ed:
	{
		return;
	}
}
// System.Void zlib.ZOutputStream::end()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_end_mBED4DE7C9DBBBFA121534DE8FF32E545024518E8 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_compress_10();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_1 = __this->get_z_5();
		NullCheck(L_1);
		ZStream_deflateEnd_m0C3D166C019D694ECAD4CC38B694AF0076351790(L_1, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0016:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_2 = __this->get_z_5();
		NullCheck(L_2);
		ZStream_inflateEnd_m28885560EAC9F7EB84B92387A5BB1394A08EAC33(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * L_3 = __this->get_z_5();
		NullCheck(L_3);
		ZStream_free_m5CA8D6D422F2A913995E534CFE7CE666DD1F9B54(L_3, /*hidden argument*/NULL);
		__this->set_z_5((ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D *)NULL);
		return;
	}
}
// System.Void zlib.ZOutputStream::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Close_m90668AE77BDFA3B7F00452F4015B0A20559DC783 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZOutputStream_Close_m90668AE77BDFA3B7F00452F4015B0A20559DC783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			VirtActionInvoker0::Invoke(33 /* System.Void zlib.ZOutputStream::finish() */, __this);
			goto IL_000b;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0008;
			throw e;
		}

CATCH_0008:
		{ // begin catch(System.Object)
			goto IL_000b;
		} // end catch (depth: 2)

IL_000b:
		{
			IL2CPP_LEAVE(0x26, FINALLY_000d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(34 /* System.Void zlib.ZOutputStream::end() */, __this);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_out_Renamed_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Close() */, L_0);
		__this->set_out_Renamed_11((Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26, IL_0026)
	}

IL_0026:
	{
		return;
	}
}
// System.Void zlib.ZOutputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_Flush_m48DDF22A4DD91E01A3C7A8B58BA5526A6F224EE5 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_out_Renamed_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(19 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int32 zlib.ZOutputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZOutputStream_Read_m4004F799B0253A92ED7212737211F5AF076D92FA (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void zlib.ZOutputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_SetLength_mE855FCC07DD64BD0A4752DE318A3D3D25EB84539 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int64 zlib.ZOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_Seek_m3B38210A6AB02C0C12D07F8D4DDD8F3A61ED0DAB (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		return (((int64_t)((int64_t)0)));
	}
}
// System.Boolean zlib.ZOutputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOutputStream_get_CanRead_m96AB1DF60FB937102E89C1D928184A763C39B7E5 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean zlib.ZOutputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOutputStream_get_CanSeek_mC65D871E1A34E504BCAF7C53181AD1C55961D346 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean zlib.ZOutputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZOutputStream_get_CanWrite_m07BC021D2FA94AF4BC8B1FD6F8AAF7E06051E20D (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int64 zlib.ZOutputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_get_Length_mD05D6FF1F6D16D9CAF8583001AB7C848D855DA31 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	{
		return (((int64_t)((int64_t)0)));
	}
}
// System.Int64 zlib.ZOutputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZOutputStream_get_Position_mEE1FCD8CF08512DE394945C457B488D3DDEB3164 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, const RuntimeMethod* method)
{
	{
		return (((int64_t)((int64_t)0)));
	}
}
// System.Void zlib.ZOutputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZOutputStream_set_Position_mECC1670E722A7277AF03502AD1F6B1B7900DB199 (ZOutputStream_t3B1D7FF7F8FC7EA92ACFB0A0A9C5F51AD3E050C6 * __this, int64_t ___value0, const RuntimeMethod* method)
{
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
// System.Int32 zlib.ZStream::inflateInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m6DB571CEF46FAA0FD0BA0F98481175E0C4685D7B (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZStream_inflateInit_m6DB571CEF46FAA0FD0BA0F98481175E0C4685D7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_StaticFields*)il2cpp_codegen_static_fields_for(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_il2cpp_TypeInfo_var))->get_DEF_WBITS_0();
		int32_t L_1 = ZStream_inflateInit_m0513E7FE0DC02604B6D82EBBD9FEF69F1EF3D100(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 zlib.ZStream::inflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateInit_m0513E7FE0DC02604B6D82EBBD9FEF69F1EF3D100 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZStream_inflateInit_m0513E7FE0DC02604B6D82EBBD9FEF69F1EF3D100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_0 = (Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 *)il2cpp_codegen_object_new(Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701_il2cpp_TypeInfo_var);
		Inflate__ctor_m4103F64FD576422D27D1711A73488C1E5446DAC7(L_0, /*hidden argument*/NULL);
		__this->set_istate_11(L_0);
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_1 = __this->get_istate_11();
		int32_t L_2 = ___w0;
		NullCheck(L_1);
		int32_t L_3 = Inflate_inflateInit_m03924C67B781DE3DF704D17B54588896ADCE20D5(L_1, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 zlib.ZStream::inflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflate_m8BA50DFA4DC08FEB3C15CC3F8F73F0B30110CDE0 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___f0, const RuntimeMethod* method)
{
	{
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_0 = __this->get_istate_11();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_1 = __this->get_istate_11();
		int32_t L_2 = ___f0;
		NullCheck(L_1);
		int32_t L_3 = Inflate_inflate_mD23EA23B623C900F6F91E17A2364320A79251038(L_1, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 zlib.ZStream::inflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_inflateEnd_m28885560EAC9F7EB84B92387A5BB1394A08EAC33 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_0 = __this->get_istate_11();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 * L_1 = __this->get_istate_11();
		NullCheck(L_1);
		int32_t L_2 = Inflate_inflateEnd_m223FA5C0DD44A1D1997E68BD06BBB90BE214E1F1(L_1, __this, /*hidden argument*/NULL);
		V_0 = L_2;
		__this->set_istate_11((Inflate_tC95364EBE727534E2C48641E9B2E2A02722EB701 *)NULL);
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 zlib.ZStream::deflateInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_m6E7B25036BED5B992CB6D377E4F62AF1E55B9F66 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = ZStream_deflateInit_mF8CC9DA59DB28FCFA45C4D7C3D0BA00C1E72A069(__this, L_0, ((int32_t)15), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 zlib.ZStream::deflateInit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateInit_mF8CC9DA59DB28FCFA45C4D7C3D0BA00C1E72A069 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___level0, int32_t ___bits1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZStream_deflateInit_mF8CC9DA59DB28FCFA45C4D7C3D0BA00C1E72A069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_0 = (Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 *)il2cpp_codegen_object_new(Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7_il2cpp_TypeInfo_var);
		Deflate__ctor_m522A8D22A5F90BB0707A903564FF532F812A068E(L_0, /*hidden argument*/NULL);
		__this->set_dstate_10(L_0);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_1 = __this->get_dstate_10();
		int32_t L_2 = ___level0;
		int32_t L_3 = ___bits1;
		NullCheck(L_1);
		int32_t L_4 = Deflate_deflateInit_mA936725418FBACB0049F50085CFF4914EDDED658(L_1, __this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 zlib.ZStream::deflate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflate_m99E7EEF9E978D9D0442AA11AA6846876C0C0FB51 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_0 = __this->get_dstate_10();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_1 = __this->get_dstate_10();
		int32_t L_2 = ___flush0;
		NullCheck(L_1);
		int32_t L_3 = Deflate_deflate_m318410DEADA03D4D874692180527C70B640810AA(L_1, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 zlib.ZStream::deflateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_deflateEnd_m0C3D166C019D694ECAD4CC38B694AF0076351790 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_0 = __this->get_dstate_10();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_000b:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_1 = __this->get_dstate_10();
		NullCheck(L_1);
		int32_t L_2 = Deflate_deflateEnd_m185BF61EB93FC5C83EFD4842CA0DC3276A273AF3(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		__this->set_dstate_10((Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 *)NULL);
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void zlib.ZStream::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_flush_pending_m5A910D5E756E2F803BEA35DB09FF6A20AB6B9DA9 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZStream_flush_pending_m5A910D5E756E2F803BEA35DB09FF6A20AB6B9DA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_0 = __this->get_dstate_10();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_pending_10();
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_avail_out_7();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = __this->get_avail_out_7();
		V_0 = L_4;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_6 = __this->get_dstate_10();
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6->get_pending_buf_7();
		NullCheck(L_7);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_8 = __this->get_dstate_10();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_pending_out_9();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))) <= ((int32_t)L_9)))
		{
			goto IL_007b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = __this->get_next_out_5();
		NullCheck(L_10);
		int32_t L_11 = __this->get_next_out_index_6();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))) <= ((int32_t)L_11)))
		{
			goto IL_007b;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_12 = __this->get_dstate_10();
		NullCheck(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = L_12->get_pending_buf_7();
		NullCheck(L_13);
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_14 = __this->get_dstate_10();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_pending_out_9();
		int32_t L_16 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_007b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = __this->get_next_out_5();
		NullCheck(L_17);
		int32_t L_18 = __this->get_next_out_index_6();
		int32_t L_19 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)))))
		{
			goto IL_0121;
		}
	}

IL_007b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_20 = Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_1 = L_21;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = V_1;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_23 = __this->get_dstate_10();
		NullCheck(L_23);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = L_23->get_pending_buf_7();
		NullCheck(L_24);
		int32_t L_25 = (((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))));
		RuntimeObject * L_26 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = V_1;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_29 = __this->get_dstate_10();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_pending_out_9();
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_32);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = __this->get_next_out_5();
		NullCheck(L_35);
		int32_t L_36 = (((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))));
		RuntimeObject * L_37 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = V_1;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_39 = V_1;
		int32_t L_40 = __this->get_next_out_index_6();
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_42);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = V_1;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = V_1;
		int32_t L_45 = V_0;
		int32_t L_46 = L_45;
		RuntimeObject * L_47 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_47);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = V_1;
		String_t* L_49 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_48, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_20, L_49);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_50 = Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline(/*hidden argument*/NULL);
		int32_t L_51 = __this->get_avail_out_7();
		int32_t L_52 = L_51;
		RuntimeObject * L_53 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral8D1E5CE72AB850D0F70EE3B0571710CDF3AE7BBE, L_53, /*hidden argument*/NULL);
		NullCheck(L_50);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_50, L_54);
	}

IL_0121:
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_55 = __this->get_dstate_10();
		NullCheck(L_55);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_56 = L_55->get_pending_buf_7();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_57 = __this->get_dstate_10();
		NullCheck(L_57);
		int32_t L_58 = L_57->get_pending_out_9();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_59 = __this->get_next_out_5();
		int32_t L_60 = __this->get_next_out_index_6();
		int32_t L_61 = V_0;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_56, L_58, (RuntimeArray *)(RuntimeArray *)L_59, L_60, L_61, /*hidden argument*/NULL);
		int32_t L_62 = __this->get_next_out_index_6();
		int32_t L_63 = V_0;
		__this->set_next_out_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63)));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_64 = __this->get_dstate_10();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_65 = L_64;
		NullCheck(L_65);
		int32_t L_66 = L_65->get_pending_out_9();
		int32_t L_67 = V_0;
		NullCheck(L_65);
		L_65->set_pending_out_9(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)L_67)));
		int64_t L_68 = __this->get_total_out_8();
		int32_t L_69 = V_0;
		__this->set_total_out_8(((int64_t)il2cpp_codegen_add((int64_t)L_68, (int64_t)(((int64_t)((int64_t)L_69))))));
		int32_t L_70 = __this->get_avail_out_7();
		int32_t L_71 = V_0;
		__this->set_avail_out_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)L_71)));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_72 = __this->get_dstate_10();
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_73 = L_72;
		NullCheck(L_73);
		int32_t L_74 = L_73->get_pending_10();
		int32_t L_75 = V_0;
		NullCheck(L_73);
		L_73->set_pending_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_75)));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_76 = __this->get_dstate_10();
		NullCheck(L_76);
		int32_t L_77 = L_76->get_pending_10();
		if (L_77)
		{
			goto IL_01b3;
		}
	}
	{
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_78 = __this->get_dstate_10();
		NullCheck(L_78);
		L_78->set_pending_out_9(0);
	}

IL_01b3:
	{
		return;
	}
}
// System.Int32 zlib.ZStream::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZStream_read_buf_m8025252B288F97712DE42B7B08EA127FAB24F426 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_avail_in_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___size2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_3 = ___size2;
		V_0 = L_3;
	}

IL_000d:
	{
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = __this->get_avail_in_3();
		int32_t L_6 = V_0;
		__this->set_avail_in_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		Deflate_t2113310C657B3F1FD7F5064E0F3A82711B13F7D7 * L_7 = __this->get_dstate_10();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_noheader_11();
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 * L_9 = __this->get__adler_14();
		int64_t L_10 = __this->get_adler_13();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = __this->get_next_in_1();
		int32_t L_12 = __this->get_next_in_index_2();
		int32_t L_13 = V_0;
		NullCheck(L_9);
		int64_t L_14 = Adler32_adler32_m992A1809403AF1DC6FD27F00D60C3EE5284F1429(L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->set_adler_13(L_14);
	}

IL_0051:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = __this->get_next_in_1();
		int32_t L_16 = __this->get_next_in_index_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___buf0;
		int32_t L_18 = ___start1;
		int32_t L_19 = V_0;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_15, L_16, (RuntimeArray *)(RuntimeArray *)L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_next_in_index_2();
		int32_t L_21 = V_0;
		__this->set_next_in_index_2(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)));
		int64_t L_22 = __this->get_total_in_4();
		int32_t L_23 = V_0;
		__this->set_total_in_4(((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)(((int64_t)((int64_t)L_23))))));
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Void zlib.ZStream::free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream_free_m5CA8D6D422F2A913995E534CFE7CE666DD1F9B54 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method)
{
	{
		__this->set_next_in_1((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		__this->set_next_out_5((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		__this->set_msg_9((String_t*)NULL);
		__this->set__adler_14((Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 *)NULL);
		return;
	}
}
// System.Void zlib.ZStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__ctor_mD6B20E08D2D5EC67D791FF4EA6548405FCF08E24 (ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZStream__ctor_mD6B20E08D2D5EC67D791FF4EA6548405FCF08E24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 * L_0 = (Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6 *)il2cpp_codegen_object_new(Adler32_tB9AD7F00CD95618FCD321A9E3EC82F036DA0CDC6_il2cpp_TypeInfo_var);
		Adler32__ctor_mD72D42155641310AA7064BDC5ED69FA816A5F4F8(L_0, /*hidden argument*/NULL);
		__this->set__adler_14(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void zlib.ZStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStream__cctor_mC66CA98DC659916DF2375AA6C50EF1DF0F70EE34 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ZStream__cctor_mC66CA98DC659916DF2375AA6C50EF1DF0F70EE34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_StaticFields*)il2cpp_codegen_static_fields_for(ZStream_t33FFE717F7BFF1CFBD64A25F1A9EFC31F147280D_il2cpp_TypeInfo_var))->set_DEF_WBITS_0(((int32_t)15));
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
// System.Void zlib.ZStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZStreamException__ctor_mAD874598D865356E974D74CF11432E091618C77E (ZStreamException_t11699955C1AFFEFC24BA35B67BEE47F076200746 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABFMySql_Data3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var))->get_stdout_0();
		return L_0;
	}
}
