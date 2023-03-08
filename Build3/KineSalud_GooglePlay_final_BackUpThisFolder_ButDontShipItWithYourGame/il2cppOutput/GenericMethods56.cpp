#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Entities.BlobAssetPtr>
struct UnsafeList_1_t5422E48C657109BA40866D6144D34066FFCACBB3;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Unity.Entities.Archetype
struct Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582;
// Unity.Entities.BlobAssetBatch
struct BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46;
// Unity.Entities.BufferHeaderNode
struct BufferHeaderNode_t5B82FC9F92F05CD08F8E68E889EDD8CA3F7CE58A;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// Unity.Entities.ChainCleanup
struct ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122;
// Unity.Entities.Chunk
struct Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F;
// Unity.Entities.ComponentDependencyManager
struct ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47;
// Unity.Entities.CreateCommand
struct CreateCommand_t1BE9EDD827DBFE09AEBA77279812A127281B793B;
// Unity.Entities.ECBChunk
struct ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F;
// Unity.Entities.EntityBufferCommand
struct EntityBufferCommand_t3BF4346ABAD0A13FAB7CB86834657220DEC2A694;
// Unity.Entities.EntityCommand
struct EntityCommand_tCC8169A1562D889EF6040A025A7C80E14E4BEDB4;
// Unity.Entities.EntityCommandBufferChain
struct EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB;
// Unity.Entities.EntityComponentGCNode
struct EntityComponentGCNode_t2D1D66D5AAC85ED491A1AD2427C9F004A9D48639;
// Unity.Entities.EntityComponentStore
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
// Unity.Entities.EntityDataAccess
struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36;
// Unity.Entities.EntityInChunk
struct EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB;
// Unity.Entities.EntityName
struct EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87;
// Unity.Entities.EntityNode
struct EntityNode_tC20FE5828EB0F9D86961E1AB6B4FE1159265322D;
// Unity.Entities.EntityQuery
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90;
// Unity.Entities.EntityQueryData
struct EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26;
// Unity.Entities.EntityQueryImpl
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.IntPtr
struct IntPtr_t;
// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08;
// Unity.Collections.NativeQueueBlockHeader
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004;
// Unity.Scenes.ResolvedSectionPath
struct ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D;
// System.String
struct String_t;
// Unity.Entities.SystemState
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B;
// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Entities.WorldAllocator
struct WorldAllocator_t86FB5E0B0505249BDACAE980021C8EBADEE8A62B;
// Unity.Entities.WorldUnmanagedImpl
struct WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830;
// Unity.Entities.ComponentDependencyManager/DependencyHandle
struct DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15;
// Unity.Entities.TypeManager/EntityOffsetInfo
struct EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1;
// Unity.Entities.TypeManager/TypeInfo
struct TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654;

IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
struct Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582;
struct BufferHeaderNode_t5B82FC9F92F05CD08F8E68E889EDD8CA3F7CE58A;
struct ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122;
struct Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F;
struct ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47;
struct CreateCommand_t1BE9EDD827DBFE09AEBA77279812A127281B793B;
struct DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15;
struct ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F;
struct EntityBufferCommand_t3BF4346ABAD0A13FAB7CB86834657220DEC2A694;
struct EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB;
struct EntityCommand_tCC8169A1562D889EF6040A025A7C80E14E4BEDB4;
struct EntityComponentGCNode_t2D1D66D5AAC85ED491A1AD2427C9F004A9D48639;
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36;
struct EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB;
struct EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87;
struct EntityNode_tC20FE5828EB0F9D86961E1AB6B4FE1159265322D;
struct EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1;
struct EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26;
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574;
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08;
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004;
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D;
struct TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654;
struct UnsafeList_1_t098D123ECC7F884EDDA7751485B9FBE450B8C9D7;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9;
struct WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	// System.UInt32[] Unity.Burst.Intrinsics.X86/Sse4_2::crctab
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

// Unity.Collections.NativeArray`1<Unity.Entities.BlobAssetChange>
struct NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.BlobAssetReferenceChange>
struct NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.ComponentTypeHash>
struct NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.EntityGuid>
struct NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.EntityReferenceChange>
struct NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Collections.FixedString64Bytes>
struct NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.Hash128>
struct NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.LinkedEntityGroupChange>
struct NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.PackedComponent>
struct NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Entities.PackedComponentDataChange>
struct NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Scenes.RuntimeGlobalObjectId>
struct NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Burst.SharedStatic`1<System.IntPtr>
struct SharedStatic_1_t0A9894CA2483CA9491C550F8D66FBA5213718E9F 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
};

// Unity.Burst.SharedStatic`1<System.UInt64>
struct SharedStatic_1_tB042D7198B3BD170F6B8D07127F90A916DCE64B5 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
};

// Unity.Burst.SharedStatic`1<Unity.Entities.EntityComponentStore/ChunkStore>
struct SharedStatic_1_t06174270CC879833E66A2A61C363018B785C3CC7 
{
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;
};

// Unity.Entities.BlobAssetBatch
struct BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 Unity.Entities.BlobAssetBatch::TotalDataSize
					int32_t ___TotalDataSize_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___TotalDataSize_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___BlobAssetHeaderCount_1_OffsetPadding[4];
					// System.Int32 Unity.Entities.BlobAssetBatch::BlobAssetHeaderCount
					int32_t ___BlobAssetHeaderCount_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___BlobAssetHeaderCount_1_OffsetPadding_forAlignmentOnly[4];
					int32_t ___BlobAssetHeaderCount_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___RefCount_2_OffsetPadding[8];
					// System.Int32 Unity.Entities.BlobAssetBatch::RefCount
					int32_t ___RefCount_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___RefCount_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___RefCount_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Padding_3_OffsetPadding[12];
					// System.Int32 Unity.Entities.BlobAssetBatch::Padding
					int32_t ___Padding_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Padding_3_OffsetPadding_forAlignmentOnly[12];
					int32_t ___Padding_3_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46__padding[16];
	};
};

// Unity.Entities.BlobAssetHeader
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Void* Unity.Entities.BlobAssetHeader::ValidationPtr
					void* ___ValidationPtr_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					void* ___ValidationPtr_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Length_1_OffsetPadding[8];
					// System.Int32 Unity.Entities.BlobAssetHeader::Length
					int32_t ___Length_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Length_1_OffsetPadding_forAlignmentOnly[8];
					int32_t ___Length_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Allocator_2_OffsetPadding[12];
					// Unity.Collections.Allocator Unity.Entities.BlobAssetHeader::Allocator
					int32_t ___Allocator_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Allocator_2_OffsetPadding_forAlignmentOnly[12];
					int32_t ___Allocator_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Hash_3_OffsetPadding[16];
					// System.UInt64 Unity.Entities.BlobAssetHeader::Hash
					uint64_t ___Hash_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Hash_3_OffsetPadding_forAlignmentOnly[16];
					uint64_t ___Hash_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Padding_4_OffsetPadding[24];
					// System.UInt64 Unity.Entities.BlobAssetHeader::Padding
					uint64_t ___Padding_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Padding_4_OffsetPadding_forAlignmentOnly[24];
					uint64_t ___Padding_4_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639__padding[32];
	};
};

// Unity.Entities.BlobAssetOwner
struct BlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Entities.BlobAssetBatch* Unity.Entities.BlobAssetOwner::BlobAssetBatchPtr
					BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46* ___BlobAssetBatchPtr_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46* ___BlobAssetBatchPtr_0_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD__padding[8];
	};
};

// Unity.Entities.BlobAssetReferenceData
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte* Unity.Entities.BlobAssetReferenceData::m_Ptr
					uint8_t* ___m_Ptr_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int64 Unity.Entities.BlobAssetReferenceData::m_Align8Union
					int64_t ___m_Align8Union_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_1_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Entities.ChainCleanup
struct ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122 
{
	union
	{
		struct
		{
			// Unity.Entities.EntityNode* Unity.Entities.ChainCleanup::EntityArraysCleanupList
			EntityNode_tC20FE5828EB0F9D86961E1AB6B4FE1159265322D* ___EntityArraysCleanupList_0;
			// Unity.Entities.BufferHeaderNode* Unity.Entities.ChainCleanup::BufferCleanupList
			BufferHeaderNode_t5B82FC9F92F05CD08F8E68E889EDD8CA3F7CE58A* ___BufferCleanupList_1;
			// Unity.Entities.EntityComponentGCNode* Unity.Entities.ChainCleanup::CleanupList
			EntityComponentGCNode_t2D1D66D5AAC85ED491A1AD2427C9F004A9D48639* ___CleanupList_2;
		};
		uint8_t ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122__padding[32];
	};
};
// Native definition for P/Invoke marshalling of Unity.Entities.ChainCleanup
struct ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122_marshaled_pinvoke
{
	union
	{
		struct
		{
			EntityNode_tC20FE5828EB0F9D86961E1AB6B4FE1159265322D* ___EntityArraysCleanupList_0;
			BufferHeaderNode_t5B82FC9F92F05CD08F8E68E889EDD8CA3F7CE58A* ___BufferCleanupList_1;
			EntityComponentGCNode_t2D1D66D5AAC85ED491A1AD2427C9F004A9D48639* ___CleanupList_2;
		};
		uint8_t ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122__padding[32];
	};
};
// Native definition for COM marshalling of Unity.Entities.ChainCleanup
struct ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122_marshaled_com
{
	union
	{
		struct
		{
			EntityNode_tC20FE5828EB0F9D86961E1AB6B4FE1159265322D* ___EntityArraysCleanupList_0;
			BufferHeaderNode_t5B82FC9F92F05CD08F8E68E889EDD8CA3F7CE58A* ___BufferCleanupList_1;
			EntityComponentGCNode_t2D1D66D5AAC85ED491A1AD2427C9F004A9D48639* ___CleanupList_2;
		};
		uint8_t ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122__padding[32];
	};
};

// Unity.Entities.ComponentType
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	// System.Int32 Unity.Entities.ComponentType::TypeIndex
	int32_t ___TypeIndex_0;
	// Unity.Entities.ComponentType/AccessMode Unity.Entities.ComponentType::AccessModeType
	int32_t ___AccessModeType_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.Entities.DynamicBlobAssetBatch
struct DynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027 
{
	// Unity.Collections.Allocator Unity.Entities.DynamicBlobAssetBatch::m_Allocator
	int32_t ___m_Allocator_0;
	// System.Int32 Unity.Entities.DynamicBlobAssetBatch::m_FramesToRetainBlobAssets
	int32_t ___m_FramesToRetainBlobAssets_1;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Entities.BlobAssetPtr>* Unity.Entities.DynamicBlobAssetBatch::m_BlobAssets
	UnsafeList_1_t5422E48C657109BA40866D6144D34066FFCACBB3* ___m_BlobAssets_2;
};
// Native definition for P/Invoke marshalling of Unity.Entities.DynamicBlobAssetBatch
struct DynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027_marshaled_pinvoke
{
	int32_t ___m_Allocator_0;
	int32_t ___m_FramesToRetainBlobAssets_1;
	UnsafeList_1_t5422E48C657109BA40866D6144D34066FFCACBB3* ___m_BlobAssets_2;
};
// Native definition for COM marshalling of Unity.Entities.DynamicBlobAssetBatch
struct DynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027_marshaled_com
{
	int32_t ___m_Allocator_0;
	int32_t ___m_FramesToRetainBlobAssets_1;
	UnsafeList_1_t5422E48C657109BA40866D6144D34066FFCACBB3* ___m_BlobAssets_2;
};

// Unity.Entities.ECBChainHeapElement
struct ECBChainHeapElement_tE83963A87C0B8B2EEDE315AF9DFF749A38C666DD 
{
	// System.Int32 Unity.Entities.ECBChainHeapElement::SortKey
	int32_t ___SortKey_0;
	// System.Int32 Unity.Entities.ECBChainHeapElement::ChainIndex
	int32_t ___ChainIndex_1;
};

// Unity.Entities.ECBChunk
struct ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F 
{
	// System.Int32 Unity.Entities.ECBChunk::Used
	int32_t ___Used_0;
	// System.Int32 Unity.Entities.ECBChunk::Size
	int32_t ___Size_1;
	// Unity.Entities.ECBChunk* Unity.Entities.ECBChunk::Next
	ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___Next_2;
	// Unity.Entities.ECBChunk* Unity.Entities.ECBChunk::Prev
	ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___Prev_3;
};
// Native definition for P/Invoke marshalling of Unity.Entities.ECBChunk
struct ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F_marshaled_pinvoke
{
	int32_t ___Used_0;
	int32_t ___Size_1;
	ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___Next_2;
	ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___Prev_3;
};
// Native definition for COM marshalling of Unity.Entities.ECBChunk
struct ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F_marshaled_com
{
	int32_t ___Used_0;
	int32_t ___Size_1;
	ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___Next_2;
	ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___Prev_3;
};

// Unity.Entities.Entity
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	// System.Int32 Unity.Entities.Entity::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Entities.Entity::Version
	int32_t ___Version_1;
};

// Unity.Entities.EntityArchetype
struct EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 
{
	// Unity.Entities.Archetype* Unity.Entities.EntityArchetype::Archetype
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___Archetype_0;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityArchetype
struct EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_marshaled_pinvoke
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___Archetype_0;
};
// Native definition for COM marshalling of Unity.Entities.EntityArchetype
struct EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_marshaled_com
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___Archetype_0;
};

// Unity.Entities.EntityCommandBufferChain
struct EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB 
{
	union
	{
		struct
		{
			// Unity.Entities.ECBChunk* Unity.Entities.EntityCommandBufferChain::m_Tail
			ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___m_Tail_0;
			// Unity.Entities.ECBChunk* Unity.Entities.EntityCommandBufferChain::m_Head
			ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___m_Head_1;
			// Unity.Entities.ChainCleanup* Unity.Entities.EntityCommandBufferChain::m_Cleanup
			ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122* ___m_Cleanup_2;
			// Unity.Entities.CreateCommand* Unity.Entities.EntityCommandBufferChain::m_PrevCreateCommand
			CreateCommand_t1BE9EDD827DBFE09AEBA77279812A127281B793B* ___m_PrevCreateCommand_3;
			// Unity.Entities.EntityCommand* Unity.Entities.EntityCommandBufferChain::m_PrevEntityCommand
			EntityCommand_tCC8169A1562D889EF6040A025A7C80E14E4BEDB4* ___m_PrevEntityCommand_4;
			// Unity.Entities.EntityCommandBufferChain* Unity.Entities.EntityCommandBufferChain::m_NextChain
			EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* ___m_NextChain_5;
			// System.Int32 Unity.Entities.EntityCommandBufferChain::m_LastSortKey
			int32_t ___m_LastSortKey_6;
			// System.Boolean Unity.Entities.EntityCommandBufferChain::m_CanBurstPlayback
			bool ___m_CanBurstPlayback_7;
		};
		uint8_t EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB__padding[64];
	};
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityCommandBufferChain
struct EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB_marshaled_pinvoke
{
	union
	{
		struct
		{
			ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___m_Tail_0;
			ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___m_Head_1;
			ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122* ___m_Cleanup_2;
			CreateCommand_t1BE9EDD827DBFE09AEBA77279812A127281B793B* ___m_PrevCreateCommand_3;
			EntityCommand_tCC8169A1562D889EF6040A025A7C80E14E4BEDB4* ___m_PrevEntityCommand_4;
			EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* ___m_NextChain_5;
			int32_t ___m_LastSortKey_6;
			int32_t ___m_CanBurstPlayback_7;
		};
		uint8_t EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB__padding[64];
	};
};
// Native definition for COM marshalling of Unity.Entities.EntityCommandBufferChain
struct EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB_marshaled_com
{
	union
	{
		struct
		{
			ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___m_Tail_0;
			ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___m_Head_1;
			ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122* ___m_Cleanup_2;
			CreateCommand_t1BE9EDD827DBFE09AEBA77279812A127281B793B* ___m_PrevCreateCommand_3;
			EntityCommand_tCC8169A1562D889EF6040A025A7C80E14E4BEDB4* ___m_PrevEntityCommand_4;
			EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* ___m_NextChain_5;
			int32_t ___m_LastSortKey_6;
			int32_t ___m_CanBurstPlayback_7;
		};
		uint8_t EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB__padding[64];
	};
};

// Unity.Entities.EntityInChunk
struct EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB 
{
	// Unity.Entities.Chunk* Unity.Entities.EntityInChunk::Chunk
	Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F* ___Chunk_0;
	// System.Int32 Unity.Entities.EntityInChunk::IndexInChunk
	int32_t ___IndexInChunk_1;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityInChunk
struct EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB_marshaled_pinvoke
{
	Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F* ___Chunk_0;
	int32_t ___IndexInChunk_1;
};
// Native definition for COM marshalling of Unity.Entities.EntityInChunk
struct EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB_marshaled_com
{
	Chunk_tFD3964D469E39DC44B4AE6B4F1458DCE0835265F* ___Chunk_0;
	int32_t ___IndexInChunk_1;
};

// Unity.Entities.EntityName
struct EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87 
{
	// System.Int32 Unity.Entities.EntityName::Index
	int32_t ___Index_0;
};

// Unity.Entities.EntityQuery
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 
{
	// Unity.Entities.EntityQueryImpl* Unity.Entities.EntityQuery::__impl
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl_0;
	// System.UInt64 Unity.Entities.EntityQuery::__seqno
	uint64_t _____seqno_1;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityQuery
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_pinvoke
{
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl_0;
	uint64_t _____seqno_1;
};
// Native definition for COM marshalling of Unity.Entities.EntityQuery
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_com
{
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl_0;
	uint64_t _____seqno_1;
};

// Unity.Collections.FixedBytes16
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.Collections.NativeQueueBlockHeader
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004 
{
	// Unity.Collections.NativeQueueBlockHeader* Unity.Collections.NativeQueueBlockHeader::m_NextBlock
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___m_NextBlock_0;
	// System.Int32 Unity.Collections.NativeQueueBlockHeader::m_NumItems
	int32_t ___m_NumItems_1;
};
// Native definition for P/Invoke marshalling of Unity.Collections.NativeQueueBlockHeader
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_marshaled_pinvoke
{
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___m_NextBlock_0;
	int32_t ___m_NumItems_1;
};
// Native definition for COM marshalling of Unity.Collections.NativeQueueBlockHeader
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_marshaled_com
{
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___m_NextBlock_0;
	int32_t ___m_NumItems_1;
};

// Unity.IO.LowLevel.Unsafe.ReadCommand
struct ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F 
{
	// System.Void* Unity.IO.LowLevel.Unsafe.ReadCommand::Buffer
	void* ___Buffer_0;
	// System.Int64 Unity.IO.LowLevel.Unsafe.ReadCommand::Offset
	int64_t ___Offset_1;
	// System.Int64 Unity.IO.LowLevel.Unsafe.ReadCommand::Size
	int64_t ___Size_2;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Unity.Entities.SystemHandleUntyped
struct SystemHandleUntyped_tBAD0B60C6C5C844C4F755E8D4C06369262C99697 
{
	// System.UInt16 Unity.Entities.SystemHandleUntyped::m_Handle
	uint16_t ___m_Handle_0;
	// System.UInt16 Unity.Entities.SystemHandleUntyped::m_Version
	uint16_t ___m_Version_1;
	// System.UInt32 Unity.Entities.SystemHandleUntyped::m_WorldSeqNo
	uint32_t ___m_WorldSeqNo_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32
struct UnsafeAtomicCounter32_tB925055F9F609BFEE32CC1CB3AA04D0B75690B62 
{
	// System.Int32* Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32::Counter
	int32_t* ___Counter_0;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::Block
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Block_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::OffsetInFirstBlock
	int32_t ___OffsetInFirstBlock_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::ElementCount
	int32_t ___ElementCount_2;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::LastOffset
	int32_t ___LastOffset_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::NumberOfBlocks
	int32_t ___NumberOfBlocks_4;
};
// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_marshaled_pinvoke
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Block_0;
	int32_t ___OffsetInFirstBlock_1;
	int32_t ___ElementCount_2;
	int32_t ___LastOffset_3;
	int32_t ___NumberOfBlocks_4;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_marshaled_com
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Block_0;
	int32_t ___OffsetInFirstBlock_1;
	int32_t ___ElementCount_2;
	int32_t ___LastOffset_3;
	int32_t ___NumberOfBlocks_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.Mathematics.uint4
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;
};

struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_StaticFields
{
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___zero_4;
};

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Entities.ECBSharedPlaybackState/BufferWithFixUp
struct BufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6 
{
	// Unity.Entities.EntityBufferCommand* Unity.Entities.ECBSharedPlaybackState/BufferWithFixUp::cmd
	EntityBufferCommand_t3BF4346ABAD0A13FAB7CB86834657220DEC2A694* ___cmd_0;
};
// Native definition for P/Invoke marshalling of Unity.Entities.ECBSharedPlaybackState/BufferWithFixUp
struct BufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6_marshaled_pinvoke
{
	EntityBufferCommand_t3BF4346ABAD0A13FAB7CB86834657220DEC2A694* ___cmd_0;
};
// Native definition for COM marshalling of Unity.Entities.ECBSharedPlaybackState/BufferWithFixUp
struct BufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6_marshaled_com
{
	EntityBufferCommand_t3BF4346ABAD0A13FAB7CB86834657220DEC2A694* ___cmd_0;
};

// Unity.Entities.EntityComponentStore/ChunkListChanges
struct ChunkListChanges_tC57E06E14D1D6D3D87675D05619E0539A86564D8 
{
	// Unity.Entities.Archetype* Unity.Entities.EntityComponentStore/ChunkListChanges::ArchetypeTrackingHead
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___ArchetypeTrackingHead_0;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityComponentStore/ChunkListChanges
struct ChunkListChanges_tC57E06E14D1D6D3D87675D05619E0539A86564D8_marshaled_pinvoke
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___ArchetypeTrackingHead_0;
};
// Native definition for COM marshalling of Unity.Entities.EntityComponentStore/ChunkListChanges
struct ChunkListChanges_tC57E06E14D1D6D3D87675D05619E0539A86564D8_marshaled_com
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___ArchetypeTrackingHead_0;
};

// Unity.Collections.RewindableAllocator/MemoryBlock
struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	// System.Byte* Unity.Collections.RewindableAllocator/MemoryBlock::m_pointer
	uint8_t* ___m_pointer_1;
	// System.Int64 Unity.Collections.RewindableAllocator/MemoryBlock::m_bytes
	int64_t ___m_bytes_2;
	// System.Int64 Unity.Collections.RewindableAllocator/MemoryBlock::m_current
	int64_t ___m_current_3;
	// System.Int64 Unity.Collections.RewindableAllocator/MemoryBlock::m_allocations
	int64_t ___m_allocations_4;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Ptr
	uint8_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Size
	int32_t ___Size_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Offset
	int32_t ___Offset_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData/<firstFreeTLS>e__FixedBuffer
struct U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6 
{
	union
	{
		struct
		{
			// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData/<firstFreeTLS>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6__padding[8192];
	};
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};

// Unity.Entities.EntityQueryFilter/ChangedFilter/<IndexInEntityQuery>e__FixedBuffer
struct U3CIndexInEntityQueryU3Ee__FixedBuffer_t16145BD96786E58BD62F3D7542DA41E279C0E65A 
{
	union
	{
		struct
		{
			// System.Int32 Unity.Entities.EntityQueryFilter/ChangedFilter/<IndexInEntityQuery>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CIndexInEntityQueryU3Ee__FixedBuffer_t16145BD96786E58BD62F3D7542DA41E279C0E65A__padding[8];
	};
};

// Unity.Entities.EntityQueryFilter/SharedComponentData/<IndexInEntityQuery>e__FixedBuffer
struct U3CIndexInEntityQueryU3Ee__FixedBuffer_tF74E8C082C63D1F5EC4A529909287F360012EDD9 
{
	union
	{
		struct
		{
			// System.Int32 Unity.Entities.EntityQueryFilter/SharedComponentData/<IndexInEntityQuery>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CIndexInEntityQueryU3Ee__FixedBuffer_tF74E8C082C63D1F5EC4A529909287F360012EDD9__padding[8];
	};
};

// Unity.Entities.EntityQueryFilter/SharedComponentData/<SharedComponentIndex>e__FixedBuffer
struct U3CSharedComponentIndexU3Ee__FixedBuffer_t6678D7BCFF071F01975BEAE7FF8C6FA532C1FDA0 
{
	union
	{
		struct
		{
			// System.Int32 Unity.Entities.EntityQueryFilter/SharedComponentData/<SharedComponentIndex>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CSharedComponentIndexU3Ee__FixedBuffer_t6678D7BCFF071F01975BEAE7FF8C6FA532C1FDA0__padding[8];
	};
};

// Unity.Collections.Memory/Unmanaged/Array
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};

// Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<SystemPointer>e__FixedBuffer
struct U3CSystemPointerU3Ee__FixedBuffer_tDE100C408081635F996EB4FD44FE50631E1C6655 
{
	union
	{
		struct
		{
			// System.UInt64 Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<SystemPointer>e__FixedBuffer::FixedElementField
			uint64_t ___FixedElementField_0;
		};
		uint8_t U3CSystemPointerU3Ee__FixedBuffer_tDE100C408081635F996EB4FD44FE50631E1C6655__padding[512];
	};
};

// Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<TypeHash>e__FixedBuffer
struct U3CTypeHashU3Ee__FixedBuffer_tFC7E207A0C02CC8C3BDE8AB86460FD7CD7C7C6B6 
{
	union
	{
		struct
		{
			// System.Int64 Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<TypeHash>e__FixedBuffer::FixedElementField
			int64_t ___FixedElementField_0;
		};
		uint8_t U3CTypeHashU3Ee__FixedBuffer_tFC7E207A0C02CC8C3BDE8AB86460FD7CD7C7C6B6__padding[512];
	};
};

// Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<Version>e__FixedBuffer
struct U3CVersionU3Ee__FixedBuffer_tC6868E0A9CCAFCBB64E75DD215D2797B4C4EC116 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<Version>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CVersionU3Ee__FixedBuffer_tC6868E0A9CCAFCBB64E75DD215D2797B4C4EC116__padding[128];
	};
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};

// Unity.Collections.AllocatorHelper`1<Unity.Entities.WorldAllocator>
struct AllocatorHelper_1_tF5199BDF73082E3D4CF3F2ACFD1A9F3B92C104A9 
{
	// T* Unity.Collections.AllocatorHelper`1::m_allocator
	WorldAllocator_t86FB5E0B0505249BDACAE980021C8EBADEE8A62B* ___m_allocator_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorHelper`1::m_backingAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_backingAllocator_1;
};

// Unity.Entities.BlobAssetReference`1<Unity.Scenes.SceneMetaData>
struct BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 
{
	// Unity.Entities.BlobAssetReferenceData Unity.Entities.BlobAssetReference`1::m_data
	BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data_0;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Entities.EntityQuery>
struct UnsafeList_1_t9AEE563C26A06C76FDB588E50E58211C1F01D8F6 
{
	// T* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Ptr
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	// T* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Ptr
	int32_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.IntPtr>
struct UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 
{
	// T* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Ptr
	intptr_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Scenes.ResolvedSectionPath>
struct UnsafeList_1_tDA08D23291A006354D190890E73B9970FEFADE6E 
{
	// T* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Ptr
	ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.UInt32>
struct UnsafeList_1_tA2B6A040C4F2656D88ABB4345257ADE8F2F30F35 
{
	// T* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Ptr
	uint32_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1<Unity.Entities.Archetype>
struct UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 
{
	// T** Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::Ptr
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582** ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1<Unity.Entities.EntityQueryData>
struct UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6 
{
	// T** Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::Ptr
	EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26** ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::m_length
	int32_t ___m_length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::m_capacity
	int32_t ___m_capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::length
	int32_t ___length_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1::capacity
	int32_t ___capacity_5;
};

// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2 
{
	// Unity.Entities.EntityCommandBufferChain Unity.Entities.EntityCommandBufferData::m_MainThreadChain
	EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB ___m_MainThreadChain_0;
	// Unity.Entities.EntityCommandBufferChain* Unity.Entities.EntityCommandBufferData::m_ThreadedChains
	EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* ___m_ThreadedChains_1;
	// System.Int32 Unity.Entities.EntityCommandBufferData::m_RecordedChainCount
	int32_t ___m_RecordedChainCount_2;
	// System.Int32 Unity.Entities.EntityCommandBufferData::m_MinimumChunkSize
	int32_t ___m_MinimumChunkSize_3;
	// Unity.Collections.Allocator Unity.Entities.EntityCommandBufferData::m_Allocator
	int32_t ___m_Allocator_4;
	// Unity.Entities.PlaybackPolicy Unity.Entities.EntityCommandBufferData::m_PlaybackPolicy
	int32_t ___m_PlaybackPolicy_5;
	// System.Boolean Unity.Entities.EntityCommandBufferData::m_ShouldPlayback
	bool ___m_ShouldPlayback_6;
	// System.Boolean Unity.Entities.EntityCommandBufferData::m_DidPlayback
	bool ___m_DidPlayback_7;
	// Unity.Entities.Entity Unity.Entities.EntityCommandBufferData::m_Entity
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___m_Entity_8;
	// System.Int32 Unity.Entities.EntityCommandBufferData::m_BufferWithFixupsCount
	int32_t ___m_BufferWithFixupsCount_9;
	// Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32 Unity.Entities.EntityCommandBufferData::m_BufferWithFixups
	UnsafeAtomicCounter32_tB925055F9F609BFEE32CC1CB3AA04D0B75690B62 ___m_BufferWithFixups_10;
	// System.Int32 Unity.Entities.EntityCommandBufferData::m_CommandBufferID
	int32_t ___m_CommandBufferID_12;
};

struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2_StaticFields
{
	// System.Int32 Unity.Entities.EntityCommandBufferData::ALIGN_64_BIT
	int32_t ___ALIGN_64_BIT_11;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2_marshaled_pinvoke
{
	EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB_marshaled_pinvoke ___m_MainThreadChain_0;
	EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* ___m_ThreadedChains_1;
	int32_t ___m_RecordedChainCount_2;
	int32_t ___m_MinimumChunkSize_3;
	int32_t ___m_Allocator_4;
	int32_t ___m_PlaybackPolicy_5;
	int32_t ___m_ShouldPlayback_6;
	int32_t ___m_DidPlayback_7;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___m_Entity_8;
	int32_t ___m_BufferWithFixupsCount_9;
	UnsafeAtomicCounter32_tB925055F9F609BFEE32CC1CB3AA04D0B75690B62 ___m_BufferWithFixups_10;
	int32_t ___m_CommandBufferID_12;
};
// Native definition for COM marshalling of Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2_marshaled_com
{
	EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB_marshaled_com ___m_MainThreadChain_0;
	EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* ___m_ThreadedChains_1;
	int32_t ___m_RecordedChainCount_2;
	int32_t ___m_MinimumChunkSize_3;
	int32_t ___m_Allocator_4;
	int32_t ___m_PlaybackPolicy_5;
	int32_t ___m_ShouldPlayback_6;
	int32_t ___m_DidPlayback_7;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___m_Entity_8;
	int32_t ___m_BufferWithFixupsCount_9;
	UnsafeAtomicCounter32_tB925055F9F609BFEE32CC1CB3AA04D0B75690B62 ___m_BufferWithFixups_10;
	int32_t ___m_CommandBufferID_12;
};

// Unity.Collections.FixedBytes510
struct FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0000
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0016
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0032
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0048
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0064
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0080
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0096
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_7_OffsetPadding[112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0112
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_7_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_8_OffsetPadding[128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0128
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_8_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_9_OffsetPadding[144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0144
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_9_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_10_OffsetPadding[160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0160
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_10_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_11_OffsetPadding[176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0176
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_11_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_12_OffsetPadding[192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0192
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_12_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_13_OffsetPadding[208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0208
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_13_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_14_OffsetPadding[224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0224
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_14_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_15_OffsetPadding[240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0240
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_15_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_16_OffsetPadding[256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0256
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_16_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_17_OffsetPadding[272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0272
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_17_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_18_OffsetPadding[288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0288
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_18_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_19_OffsetPadding[304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0304
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_19_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_20_OffsetPadding[320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0320
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_20_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_20_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_21_OffsetPadding[336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0336
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_21_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_21_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_22_OffsetPadding[352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0352
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_22_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_22_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_23_OffsetPadding[368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0368
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_23_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_23_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_24_OffsetPadding[384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0384
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_24_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_24_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_25_OffsetPadding[400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0400
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_25_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_25_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_26_OffsetPadding[416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0416
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_26_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_26_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_27_OffsetPadding[432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0432
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_27_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_27_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_28_OffsetPadding[448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0448
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_28_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_28_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_29_OffsetPadding[464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0464
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_29_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_29_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_30_OffsetPadding[480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes510::offset0480
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_30_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_30_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0496_31_OffsetPadding[496];
					// System.Byte Unity.Collections.FixedBytes510::byte0496
					uint8_t ___byte0496_31;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0496_31_OffsetPadding_forAlignmentOnly[496];
					uint8_t ___byte0496_31_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0497_32_OffsetPadding[497];
					// System.Byte Unity.Collections.FixedBytes510::byte0497
					uint8_t ___byte0497_32;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0497_32_OffsetPadding_forAlignmentOnly[497];
					uint8_t ___byte0497_32_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0498_33_OffsetPadding[498];
					// System.Byte Unity.Collections.FixedBytes510::byte0498
					uint8_t ___byte0498_33;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0498_33_OffsetPadding_forAlignmentOnly[498];
					uint8_t ___byte0498_33_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0499_34_OffsetPadding[499];
					// System.Byte Unity.Collections.FixedBytes510::byte0499
					uint8_t ___byte0499_34;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0499_34_OffsetPadding_forAlignmentOnly[499];
					uint8_t ___byte0499_34_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0500_35_OffsetPadding[500];
					// System.Byte Unity.Collections.FixedBytes510::byte0500
					uint8_t ___byte0500_35;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0500_35_OffsetPadding_forAlignmentOnly[500];
					uint8_t ___byte0500_35_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0501_36_OffsetPadding[501];
					// System.Byte Unity.Collections.FixedBytes510::byte0501
					uint8_t ___byte0501_36;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0501_36_OffsetPadding_forAlignmentOnly[501];
					uint8_t ___byte0501_36_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0502_37_OffsetPadding[502];
					// System.Byte Unity.Collections.FixedBytes510::byte0502
					uint8_t ___byte0502_37;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0502_37_OffsetPadding_forAlignmentOnly[502];
					uint8_t ___byte0502_37_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0503_38_OffsetPadding[503];
					// System.Byte Unity.Collections.FixedBytes510::byte0503
					uint8_t ___byte0503_38;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0503_38_OffsetPadding_forAlignmentOnly[503];
					uint8_t ___byte0503_38_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0504_39_OffsetPadding[504];
					// System.Byte Unity.Collections.FixedBytes510::byte0504
					uint8_t ___byte0504_39;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0504_39_OffsetPadding_forAlignmentOnly[504];
					uint8_t ___byte0504_39_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0505_40_OffsetPadding[505];
					// System.Byte Unity.Collections.FixedBytes510::byte0505
					uint8_t ___byte0505_40;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0505_40_OffsetPadding_forAlignmentOnly[505];
					uint8_t ___byte0505_40_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0506_41_OffsetPadding[506];
					// System.Byte Unity.Collections.FixedBytes510::byte0506
					uint8_t ___byte0506_41;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0506_41_OffsetPadding_forAlignmentOnly[506];
					uint8_t ___byte0506_41_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0507_42_OffsetPadding[507];
					// System.Byte Unity.Collections.FixedBytes510::byte0507
					uint8_t ___byte0507_42;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0507_42_OffsetPadding_forAlignmentOnly[507];
					uint8_t ___byte0507_42_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0508_43_OffsetPadding[508];
					// System.Byte Unity.Collections.FixedBytes510::byte0508
					uint8_t ___byte0508_43;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0508_43_OffsetPadding_forAlignmentOnly[508];
					uint8_t ___byte0508_43_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0509_44_OffsetPadding[509];
					// System.Byte Unity.Collections.FixedBytes510::byte0509
					uint8_t ___byte0509_44;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0509_44_OffsetPadding_forAlignmentOnly[509];
					uint8_t ___byte0509_44_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973__padding[510];
	};
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Unity.Entities.Hash128
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	// Unity.Mathematics.uint4 Unity.Entities.Hash128::Value
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value_0;
};

struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	// System.Char[] Unity.Entities.Hash128::k_HexToLiteral
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral_1;
	// System.SByte[] Unity.Entities.Hash128::k_LiteralToHex
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex_2;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// Unity.Collections.NativeQueueBlockPoolData
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87 
{
	// System.IntPtr Unity.Collections.NativeQueueBlockPoolData::m_FirstBlock
	intptr_t ___m_FirstBlock_0;
	// System.Int32 Unity.Collections.NativeQueueBlockPoolData::m_NumBlocks
	int32_t ___m_NumBlocks_1;
	// System.Int32 Unity.Collections.NativeQueueBlockPoolData::m_MaxBlocks
	int32_t ___m_MaxBlocks_2;
	// System.Int32 Unity.Collections.NativeQueueBlockPoolData::m_AllocLock
	int32_t ___m_AllocLock_4;
};

// Unity.Collections.NativeQueueData
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52 
{
	// System.IntPtr Unity.Collections.NativeQueueData::m_FirstBlock
	intptr_t ___m_FirstBlock_0;
	// System.IntPtr Unity.Collections.NativeQueueData::m_LastBlock
	intptr_t ___m_LastBlock_1;
	// System.Int32 Unity.Collections.NativeQueueData::m_MaxItems
	int32_t ___m_MaxItems_2;
	// System.Int32 Unity.Collections.NativeQueueData::m_CurrentRead
	int32_t ___m_CurrentRead_3;
	// System.Byte* Unity.Collections.NativeQueueData::m_CurrentWriteBlockTLS
	uint8_t* ___m_CurrentWriteBlockTLS_4;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Unity.IO.LowLevel.Unsafe.ReadHandle
struct ReadHandle_t71C4E3C6D2A80E1A200DA2C22346363F9A5EBEBB 
{
	// System.IntPtr Unity.IO.LowLevel.Unsafe.ReadHandle::ptr
	intptr_t ___ptr_0;
	// System.Int32 Unity.IO.LowLevel.Unsafe.ReadHandle::version
	int32_t ___version_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer
struct UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500 
{
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer::Ptr
	uint8_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer::Length
	int32_t ___Length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer::Capacity
	int32_t ___Capacity_2;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer::Alignment
	int32_t ___Alignment_4;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeBitArray
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	// System.UInt64* Unity.Collections.LowLevel.Unsafe.UnsafeBitArray::Ptr
	uint64_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeBitArray::Length
	int32_t ___Length_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeBitArray::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::values
			uint8_t* ___values_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_1_OffsetPadding[8];
			// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::keys
			uint8_t* ___keys_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_1_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_2_OffsetPadding[16];
			// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::next
			uint8_t* ___next_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_2_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_3_OffsetPadding[24];
			// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::buckets
			uint8_t* ___buckets_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_3_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_4_OffsetPadding[32];
			// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::keyCapacity
			int32_t ___keyCapacity_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_4_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_5_OffsetPadding[36];
			// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::bucketCapacityMask
			int32_t ___bucketCapacityMask_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_5_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_6_OffsetPadding[40];
			// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::allocatedIndexLength
			int32_t ___allocatedIndexLength_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_6_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___firstFreeTLS_7_OffsetPadding[64];
			// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData/<firstFreeTLS>e__FixedBuffer Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData::firstFreeTLS
			U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6 ___firstFreeTLS_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___firstFreeTLS_7_OffsetPadding_forAlignmentOnly[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_t89BDB8E05268C7E900D1BC8797817FE72A7F5EA6 ___firstFreeTLS_7_forAlignmentOnly;
		};
	};
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Next
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Data
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};
// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_marshaled_pinvoke
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_marshaled_com
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6 
{
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_1;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock** Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Blocks
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C** ___Blocks_2;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::BlockCount
	int32_t ___BlockCount_3;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Free
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Free_4;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Ranges
	UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___Ranges_5;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::RangeCount
	int32_t ___RangeCount_6;
};
// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_marshaled_pinvoke
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_1;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C** ___Blocks_2;
	int32_t ___BlockCount_3;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Free_4;
	UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___Ranges_5;
	int32_t ___RangeCount_6;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_marshaled_com
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_1;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C** ___Blocks_2;
	int32_t ___BlockCount_3;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Free_4;
	UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___Ranges_5;
	int32_t ___RangeCount_6;
};

// Unity.Collections.LowLevel.Unsafe.UntypedUnsafeParallelHashMap
struct UntypedUnsafeParallelHashMap_t926EFEEE26C4DE4FE2FA5A27FEA1D83CDD4B1B17 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData* Unity.Collections.LowLevel.Unsafe.UntypedUnsafeParallelHashMap::m_Buffer
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UntypedUnsafeParallelHashMap::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// Unity.Entities.EntityQueryFilter/ChangedFilter
struct ChangedFilter_t55DB3F02469E53626DA400F9A19ABE3183B485EE 
{
	// System.Int32 Unity.Entities.EntityQueryFilter/ChangedFilter::Count
	int32_t ___Count_1;
	// Unity.Entities.EntityQueryFilter/ChangedFilter/<IndexInEntityQuery>e__FixedBuffer Unity.Entities.EntityQueryFilter/ChangedFilter::IndexInEntityQuery
	U3CIndexInEntityQueryU3Ee__FixedBuffer_t16145BD96786E58BD62F3D7542DA41E279C0E65A ___IndexInEntityQuery_2;
};

// Unity.Entities.EntityQueryFilter/SharedComponentData
struct SharedComponentData_tCB3DB8493786CFDD25A66AE32E2C053EECE862C8 
{
	// System.Int32 Unity.Entities.EntityQueryFilter/SharedComponentData::Count
	int32_t ___Count_1;
	// Unity.Entities.EntityQueryFilter/SharedComponentData/<IndexInEntityQuery>e__FixedBuffer Unity.Entities.EntityQueryFilter/SharedComponentData::IndexInEntityQuery
	U3CIndexInEntityQueryU3Ee__FixedBuffer_tF74E8C082C63D1F5EC4A529909287F360012EDD9 ___IndexInEntityQuery_2;
	// Unity.Entities.EntityQueryFilter/SharedComponentData/<SharedComponentIndex>e__FixedBuffer Unity.Entities.EntityQueryFilter/SharedComponentData::SharedComponentIndex
	U3CSharedComponentIndexU3Ee__FixedBuffer_t6678D7BCFF071F01975BEAE7FF8C6FA532C1FDA0 ___SharedComponentIndex_3;
};

// Unity.Entities.Scratchpad/Shard
struct Shard_t8EF5BDC09768D5B1976356C2754921DE03A244E9 
{
	union
	{
		struct
		{
			// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Entities.Scratchpad/Shard::m_handle
			AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_handle_0;
			// System.Int32 Unity.Entities.Scratchpad/Shard::m_next
			int32_t ___m_next_1;
		};
		uint8_t Shard_t8EF5BDC09768D5B1976356C2754921DE03A244E9__padding[32768];
	};
};

// Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1
struct StateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D 
{
	// System.UInt64 Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1::FreeBits
	uint64_t ___FreeBits_0;
	// Unity.Entities.SystemState* Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1::States
	SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___States_1;
	// Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<Version>e__FixedBuffer Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1::Version
	U3CVersionU3Ee__FixedBuffer_tC6868E0A9CCAFCBB64E75DD215D2797B4C4EC116 ___Version_2;
	// Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<TypeHash>e__FixedBuffer Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1::TypeHash
	U3CTypeHashU3Ee__FixedBuffer_tFC7E207A0C02CC8C3BDE8AB86460FD7CD7C7C6B6 ___TypeHash_3;
	// Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1/<SystemPointer>e__FixedBuffer Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1::SystemPointer
	U3CSystemPointerU3Ee__FixedBuffer_tDE100C408081635F996EB4FD44FE50631E1C6655 ___SystemPointer_4;
};
// Native definition for P/Invoke marshalling of Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1
struct StateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D_marshaled_pinvoke
{
	uint64_t ___FreeBits_0;
	SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___States_1;
	U3CVersionU3Ee__FixedBuffer_tC6868E0A9CCAFCBB64E75DD215D2797B4C4EC116 ___Version_2;
	U3CTypeHashU3Ee__FixedBuffer_tFC7E207A0C02CC8C3BDE8AB86460FD7CD7C7C6B6 ___TypeHash_3;
	U3CSystemPointerU3Ee__FixedBuffer_tDE100C408081635F996EB4FD44FE50631E1C6655 ___SystemPointer_4;
};
// Native definition for COM marshalling of Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1
struct StateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D_marshaled_com
{
	uint64_t ___FreeBits_0;
	SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___States_1;
	U3CVersionU3Ee__FixedBuffer_tC6868E0A9CCAFCBB64E75DD215D2797B4C4EC116 ___Version_2;
	U3CTypeHashU3Ee__FixedBuffer_tFC7E207A0C02CC8C3BDE8AB86460FD7CD7C7C6B6 ___TypeHash_3;
	U3CSystemPointerU3Ee__FixedBuffer_tDE100C408081635F996EB4FD44FE50631E1C6655 ___SystemPointer_4;
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::Bits
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
};

// Unity.Entities.ArchetypeListMap
struct ArchetypeListMap_t9B5C7F814630CC95D11AE3A6D713646CDE4A33AD 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.UInt32> Unity.Entities.ArchetypeListMap::hashes
	UnsafeList_1_tA2B6A040C4F2656D88ABB4345257ADE8F2F30F35 ___hashes_2;
	// Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1<Unity.Entities.Archetype> Unity.Entities.ArchetypeListMap::archetypes
	UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 ___archetypes_3;
	// System.Int32 Unity.Entities.ArchetypeListMap::emptyNodes
	int32_t ___emptyNodes_4;
	// System.Int32 Unity.Entities.ArchetypeListMap::skipNodes
	int32_t ___skipNodes_5;
};
// Native definition for P/Invoke marshalling of Unity.Entities.ArchetypeListMap
struct ArchetypeListMap_t9B5C7F814630CC95D11AE3A6D713646CDE4A33AD_marshaled_pinvoke
{
	UnsafeList_1_tA2B6A040C4F2656D88ABB4345257ADE8F2F30F35 ___hashes_2;
	UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 ___archetypes_3;
	int32_t ___emptyNodes_4;
	int32_t ___skipNodes_5;
};
// Native definition for COM marshalling of Unity.Entities.ArchetypeListMap
struct ArchetypeListMap_t9B5C7F814630CC95D11AE3A6D713646CDE4A33AD_marshaled_com
{
	UnsafeList_1_tA2B6A040C4F2656D88ABB4345257ADE8F2F30F35 ___hashes_2;
	UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 ___archetypes_3;
	int32_t ___emptyNodes_4;
	int32_t ___skipNodes_5;
};

// Unity.Entities.BufferAllocatorHeap
struct BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.IntPtr> Unity.Entities.BufferAllocatorHeap::Buffers
	UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 ___Buffers_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeBitArray Unity.Entities.BufferAllocatorHeap::FreeList
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___FreeList_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Entities.BufferAllocatorHeap::Handle
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Handle_2;
	// System.Int32 Unity.Entities.BufferAllocatorHeap::BufferSizeInBytes
	int32_t ___BufferSizeInBytes_3;
};
// Native definition for P/Invoke marshalling of Unity.Entities.BufferAllocatorHeap
struct BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE_marshaled_pinvoke
{
	UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 ___Buffers_0;
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___FreeList_1;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Handle_2;
	int32_t ___BufferSizeInBytes_3;
};
// Native definition for COM marshalling of Unity.Entities.BufferAllocatorHeap
struct BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE_marshaled_com
{
	UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 ___Buffers_0;
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___FreeList_1;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Handle_2;
	int32_t ___BufferSizeInBytes_3;
};

// Unity.Entities.EntityManager
struct EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 
{
	// Unity.Entities.EntityDataAccess* Unity.Entities.EntityManager::m_EntityDataAccess
	EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ___m_EntityDataAccess_2;
};

struct EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_StaticFields
{
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityManager::k_ProfileMoveSharedComponents
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileMoveSharedComponents_0;
	// Unity.Profiling.ProfilerMarker Unity.Entities.EntityManager::k_ProfileMoveManagedComponents
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileMoveManagedComponents_1;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityManager
struct EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_marshaled_pinvoke
{
	EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ___m_EntityDataAccess_2;
};
// Native definition for COM marshalling of Unity.Entities.EntityManager
struct EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_marshaled_com
{
	EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ___m_EntityDataAccess_2;
};

// Unity.Entities.EntityQueryFilter
struct EntityQueryFilter_t4A9651CB7DA59AFE8AAF946C19EC6B0D1ACA2F8B 
{
	// System.UInt32 Unity.Entities.EntityQueryFilter::RequiredChangeVersion
	uint32_t ___RequiredChangeVersion_0;
	// Unity.Entities.EntityQueryFilter/SharedComponentData Unity.Entities.EntityQueryFilter::Shared
	SharedComponentData_tCB3DB8493786CFDD25A66AE32E2C053EECE862C8 ___Shared_1;
	// Unity.Entities.EntityQueryFilter/ChangedFilter Unity.Entities.EntityQueryFilter::Changed
	ChangedFilter_t55DB3F02469E53626DA400F9A19ABE3183B485EE ___Changed_2;
	// System.UInt32 Unity.Entities.EntityQueryFilter::_UseOrderFiltering
	uint32_t ____UseOrderFiltering_3;
};

// Unity.Collections.FixedString512Bytes
struct FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Collections.FixedString512Bytes::utf8LengthInBytes
			uint16_t ___utf8LengthInBytes_1;
			// Unity.Collections.FixedBytes510 Unity.Collections.FixedString512Bytes::bytes
			FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 ___bytes_2;
		};
		uint8_t FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E__padding[512];
	};
};

// Unity.Entities.ManagedDeferredCommands
struct ManagedDeferredCommands_t3585F563AFB19DC3B6EB9250562B62FC78A0E9A1 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer Unity.Entities.ManagedDeferredCommands::CommandBuffer
	UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500 ___CommandBuffer_0;
};

// Unity.Entities.ComponentDependencyManager/DependencyHandle
struct DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15 
{
	// Unity.Jobs.JobHandle Unity.Entities.ComponentDependencyManager/DependencyHandle::WriteFence
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___WriteFence_0;
	// System.Int32 Unity.Entities.ComponentDependencyManager/DependencyHandle::NumReadFences
	int32_t ___NumReadFences_1;
	// System.Int32 Unity.Entities.ComponentDependencyManager/DependencyHandle::TypeIndex
	int32_t ___TypeIndex_2;
};

// Unity.Entities.Serialization.DotsSerialization/NodeHeader
struct NodeHeader_tC393A021B9635C19BEC9CEEA905E76D4B90FDC4F 
{
	// System.UInt64 Unity.Entities.Serialization.DotsSerialization/NodeHeader::NodeTypeHash
	uint64_t ___NodeTypeHash_0;
	// Unity.Entities.Hash128 Unity.Entities.Serialization.DotsSerialization/NodeHeader::Id
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Id_1;
	// System.Int32 Unity.Entities.Serialization.DotsSerialization/NodeHeader::Size
	int32_t ___Size_2;
	// System.Int32 Unity.Entities.Serialization.DotsSerialization/NodeHeader::NextSiblingOffset
	int32_t ___NextSiblingOffset_3;
	// System.Int32 Unity.Entities.Serialization.DotsSerialization/NodeHeader::ChildrenCount
	int32_t ___ChildrenCount_4;
	// System.Int64 Unity.Entities.Serialization.DotsSerialization/NodeHeader::MetadataStartingOffset
	int64_t ___MetadataStartingOffset_5;
	// System.Int32 Unity.Entities.Serialization.DotsSerialization/NodeHeader::MetadataSize
	int32_t ___MetadataSize_6;
	// System.Int64 Unity.Entities.Serialization.DotsSerialization/NodeHeader::DataStartingOffset
	int64_t ___DataStartingOffset_7;
	// System.Int64 Unity.Entities.Serialization.DotsSerialization/NodeHeader::DataSize
	int64_t ___DataSize_8;
};

// Unity.Scenes.SceneHeaderUtility/HeaderLoadResult
struct HeaderLoadResult_t86A12E9A873A437C5217B245451D083016BE7FED 
{
	// Unity.Scenes.SceneHeaderUtility/HeaderLoadStatus Unity.Scenes.SceneHeaderUtility/HeaderLoadResult::Status
	int32_t ___Status_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Scenes.ResolvedSectionPath> Unity.Scenes.SceneHeaderUtility/HeaderLoadResult::SectionPaths
	UnsafeList_1_tDA08D23291A006354D190890E73B9970FEFADE6E ___SectionPaths_1;
	// Unity.Entities.BlobAssetReference`1<Unity.Scenes.SceneMetaData> Unity.Scenes.SceneHeaderUtility/HeaderLoadResult::SceneMetaData
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 ___SceneMetaData_2;
	// Unity.Entities.BlobAssetOwner Unity.Scenes.SceneHeaderUtility/HeaderLoadResult::HeaderBlobOwner
	BlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD ___HeaderBlobOwner_3;
};
// Native definition for P/Invoke marshalling of Unity.Scenes.SceneHeaderUtility/HeaderLoadResult
struct HeaderLoadResult_t86A12E9A873A437C5217B245451D083016BE7FED_marshaled_pinvoke
{
	int32_t ___Status_0;
	UnsafeList_1_tDA08D23291A006354D190890E73B9970FEFADE6E ___SectionPaths_1;
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 ___SceneMetaData_2;
	BlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD ___HeaderBlobOwner_3;
};
// Native definition for COM marshalling of Unity.Scenes.SceneHeaderUtility/HeaderLoadResult
struct HeaderLoadResult_t86A12E9A873A437C5217B245451D083016BE7FED_marshaled_com
{
	int32_t ___Status_0;
	UnsafeList_1_tDA08D23291A006354D190890E73B9970FEFADE6E ___SectionPaths_1;
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 ___SceneMetaData_2;
	BlobAssetOwner_t48F662D0AF49A5BBFD013EF59C8BD9C335A854AD ___HeaderBlobOwner_3;
};

// Unity.Entities.BufferAllocator
struct BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4 
{
	// Unity.Entities.BufferAllocatorHeap Unity.Entities.BufferAllocator::Allocator
	BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE ___Allocator_0;
};
// Native definition for P/Invoke marshalling of Unity.Entities.BufferAllocator
struct BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4_marshaled_pinvoke
{
	BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE_marshaled_pinvoke ___Allocator_0;
};
// Native definition for COM marshalling of Unity.Entities.BufferAllocator
struct BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4_marshaled_com
{
	BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE_marshaled_com ___Allocator_0;
};

// Unity.Entities.EntityQueryImpl
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574 
{
	// Unity.Entities.EntityDataAccess* Unity.Entities.EntityQueryImpl::_Access
	EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ____Access_1;
	// Unity.Entities.EntityQueryData* Unity.Entities.EntityQueryImpl::_QueryData
	EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26* ____QueryData_2;
	// Unity.Entities.EntityQueryFilter Unity.Entities.EntityQueryImpl::_Filter
	EntityQueryFilter_t4A9651CB7DA59AFE8AAF946C19EC6B0D1ACA2F8B ____Filter_3;
	// System.UInt64 Unity.Entities.EntityQueryImpl::_SeqNo
	uint64_t ____SeqNo_4;
	// System.Runtime.InteropServices.GCHandle Unity.Entities.EntityQueryImpl::_CachedState
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____CachedState_5;
};

struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574_StaticFields
{
	// Unity.Burst.SharedStatic`1<System.IntPtr> Unity.Entities.EntityQueryImpl::_bfp_ResetFilter
	SharedStatic_1_t0A9894CA2483CA9491C550F8D66FBA5213718E9F ____bfp_ResetFilter_6;
	// Unity.Burst.SharedStatic`1<System.IntPtr> Unity.Entities.EntityQueryImpl::_bfp_FreeCachedState
	SharedStatic_1_t0A9894CA2483CA9491C550F8D66FBA5213718E9F ____bfp_FreeCachedState_7;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityQueryImpl
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574_marshaled_pinvoke
{
	EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ____Access_1;
	EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26* ____QueryData_2;
	EntityQueryFilter_t4A9651CB7DA59AFE8AAF946C19EC6B0D1ACA2F8B ____Filter_3;
	uint64_t ____SeqNo_4;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____CachedState_5;
};
// Native definition for COM marshalling of Unity.Entities.EntityQueryImpl
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574_marshaled_com
{
	EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ____Access_1;
	EntityQueryData_t20DB32E7BB3F8732C371E45E8A8CEBCE62B61C26* ____QueryData_2;
	EntityQueryFilter_t4A9651CB7DA59AFE8AAF946C19EC6B0D1ACA2F8B ____Filter_3;
	uint64_t ____SeqNo_4;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____CachedState_5;
};

// Unity.Entities.WorldUnmanaged
struct WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F 
{
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Entities.WorldUnmanaged::m_AllocatorHandle
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorHandle_0;
	// Unity.Entities.WorldUnmanagedImpl* Unity.Entities.WorldUnmanaged::m_Impl
	WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830* ___m_Impl_1;
	// Unity.Entities.EntityManager Unity.Entities.WorldUnmanaged::m_EntityManager
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___m_EntityManager_2;
	// Unity.Collections.AllocatorHelper`1<Unity.Entities.WorldAllocator> Unity.Entities.WorldUnmanaged::m_WorldAllocatorHelper
	AllocatorHelper_1_tF5199BDF73082E3D4CF3F2ACFD1A9F3B92C104A9 ___m_WorldAllocatorHelper_4;
};

struct WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_StaticFields
{
	// Unity.Burst.SharedStatic`1<System.UInt64> Unity.Entities.WorldUnmanaged::ms_NextSequenceNumber
	SharedStatic_1_tB042D7198B3BD170F6B8D07127F90A916DCE64B5 ___ms_NextSequenceNumber_3;
};
// Native definition for P/Invoke marshalling of Unity.Entities.WorldUnmanaged
struct WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_pinvoke
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorHandle_0;
	WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830* ___m_Impl_1;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_marshaled_pinvoke ___m_EntityManager_2;
	AllocatorHelper_1_tF5199BDF73082E3D4CF3F2ACFD1A9F3B92C104A9 ___m_WorldAllocatorHelper_4;
};
// Native definition for COM marshalling of Unity.Entities.WorldUnmanaged
struct WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_com
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorHandle_0;
	WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830* ___m_Impl_1;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_marshaled_com ___m_EntityManager_2;
	AllocatorHelper_1_tF5199BDF73082E3D4CF3F2ACFD1A9F3B92C104A9 ___m_WorldAllocatorHelper_4;
};

// Unity.Scenes.SceneHeaderUtility/HeaderData
struct HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3 
{
	// System.Byte* Unity.Scenes.SceneHeaderUtility/HeaderData::Data
	uint8_t* ___Data_0;
	// Unity.IO.LowLevel.Unsafe.ReadHandle Unity.Scenes.SceneHeaderUtility/HeaderData::ReadHandle
	ReadHandle_t71C4E3C6D2A80E1A200DA2C22346363F9A5EBEBB ___ReadHandle_1;
	// Unity.Collections.FixedString512Bytes Unity.Scenes.SceneHeaderUtility/HeaderData::SceneLoadDir
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___SceneLoadDir_2;
	// Unity.Jobs.JobHandle Unity.Scenes.SceneHeaderUtility/HeaderData::JobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___JobHandle_3;
	// Unity.IO.LowLevel.Unsafe.ReadCommand Unity.Scenes.SceneHeaderUtility/HeaderData::ReadCommand
	ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F ___ReadCommand_4;
	// Unity.Scenes.SceneHeaderUtility/HeaderLoadResult Unity.Scenes.SceneHeaderUtility/HeaderData::HeaderLoadResult
	HeaderLoadResult_t86A12E9A873A437C5217B245451D083016BE7FED ___HeaderLoadResult_5;
};
// Native definition for P/Invoke marshalling of Unity.Scenes.SceneHeaderUtility/HeaderData
struct HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3_marshaled_pinvoke
{
	uint8_t* ___Data_0;
	ReadHandle_t71C4E3C6D2A80E1A200DA2C22346363F9A5EBEBB ___ReadHandle_1;
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___SceneLoadDir_2;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___JobHandle_3;
	ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F ___ReadCommand_4;
	HeaderLoadResult_t86A12E9A873A437C5217B245451D083016BE7FED_marshaled_pinvoke ___HeaderLoadResult_5;
};
// Native definition for COM marshalling of Unity.Scenes.SceneHeaderUtility/HeaderData
struct HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3_marshaled_com
{
	uint8_t* ___Data_0;
	ReadHandle_t71C4E3C6D2A80E1A200DA2C22346363F9A5EBEBB ___ReadHandle_1;
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___SceneLoadDir_2;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___JobHandle_3;
	ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F ___ReadCommand_4;
	HeaderLoadResult_t86A12E9A873A437C5217B245451D083016BE7FED_marshaled_com ___HeaderLoadResult_5;
};

// Unity.Entities.BlockAllocator
struct BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE 
{
	// Unity.Entities.BufferAllocator Unity.Entities.BlockAllocator::m_bufferAllocator
	BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4 ___m_bufferAllocator_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32> Unity.Entities.BlockAllocator::m_allocations
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_allocations_1;
	// System.Int32 Unity.Entities.BlockAllocator::m_currentBlockIndex
	int32_t ___m_currentBlockIndex_2;
	// System.UInt64 Unity.Entities.BlockAllocator::m_nextPtr
	uint64_t ___m_nextPtr_3;
};
// Native definition for P/Invoke marshalling of Unity.Entities.BlockAllocator
struct BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE_marshaled_pinvoke
{
	BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4_marshaled_pinvoke ___m_bufferAllocator_0;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_allocations_1;
	int32_t ___m_currentBlockIndex_2;
	uint64_t ___m_nextPtr_3;
};
// Native definition for COM marshalling of Unity.Entities.BlockAllocator
struct BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE_marshaled_com
{
	BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4_marshaled_com ___m_bufferAllocator_0;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_allocations_1;
	int32_t ___m_currentBlockIndex_2;
	uint64_t ___m_nextPtr_3;
};

// Unity.Entities.ComponentDependencyManager
struct ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47 
{
	// Unity.Jobs.JobHandle* Unity.Entities.ComponentDependencyManager::m_JobDependencyCombineBuffer
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___m_JobDependencyCombineBuffer_2;
	// System.Int32 Unity.Entities.ComponentDependencyManager::m_JobDependencyCombineBufferCount
	int32_t ___m_JobDependencyCombineBufferCount_3;
	// System.UInt16* Unity.Entities.ComponentDependencyManager::m_TypeArrayIndices
	uint16_t* ___m_TypeArrayIndices_4;
	// Unity.Entities.ComponentDependencyManager/DependencyHandle* Unity.Entities.ComponentDependencyManager::m_DependencyHandles
	DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15* ___m_DependencyHandles_5;
	// System.UInt16 Unity.Entities.ComponentDependencyManager::m_DependencyHandlesCount
	uint16_t ___m_DependencyHandlesCount_6;
	// Unity.Jobs.JobHandle* Unity.Entities.ComponentDependencyManager::m_ReadJobFences
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___m_ReadJobFences_7;
	// Unity.Jobs.JobHandle Unity.Entities.ComponentDependencyManager::m_ExclusiveTransactionDependency
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_ExclusiveTransactionDependency_10;
	// System.Boolean Unity.Entities.ComponentDependencyManager::_IsInTransaction
	bool ____IsInTransaction_11;
	// Unity.Profiling.ProfilerMarker Unity.Entities.ComponentDependencyManager::m_Marker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_Marker_12;
	// Unity.Entities.WorldUnmanaged Unity.Entities.ComponentDependencyManager::m_World
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F ___m_World_13;
	// System.Int32 Unity.Entities.ComponentDependencyManager::IsInForEachDisallowStructuralChange
	int32_t ___IsInForEachDisallowStructuralChange_14;
};
// Native definition for P/Invoke marshalling of Unity.Entities.ComponentDependencyManager
struct ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47_marshaled_pinvoke
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___m_JobDependencyCombineBuffer_2;
	int32_t ___m_JobDependencyCombineBufferCount_3;
	uint16_t* ___m_TypeArrayIndices_4;
	DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15* ___m_DependencyHandles_5;
	uint16_t ___m_DependencyHandlesCount_6;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___m_ReadJobFences_7;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_ExclusiveTransactionDependency_10;
	int32_t ____IsInTransaction_11;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_Marker_12;
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_pinvoke ___m_World_13;
	int32_t ___IsInForEachDisallowStructuralChange_14;
};
// Native definition for COM marshalling of Unity.Entities.ComponentDependencyManager
struct ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47_marshaled_com
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___m_JobDependencyCombineBuffer_2;
	int32_t ___m_JobDependencyCombineBufferCount_3;
	uint16_t* ___m_TypeArrayIndices_4;
	DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15* ___m_DependencyHandles_5;
	uint16_t ___m_DependencyHandlesCount_6;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___m_ReadJobFences_7;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_ExclusiveTransactionDependency_10;
	int32_t ____IsInTransaction_11;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_Marker_12;
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_com ___m_World_13;
	int32_t ___IsInForEachDisallowStructuralChange_14;
};

// Unity.Entities.SystemState
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D 
{
	// System.Void* Unity.Entities.SystemState::m_SystemPtr
	void* ___m_SystemPtr_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Entities.EntityQuery> Unity.Entities.SystemState::m_EntityQueries
	UnsafeList_1_t9AEE563C26A06C76FDB588E50E58211C1F01D8F6 ___m_EntityQueries_1;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Entities.EntityQuery> Unity.Entities.SystemState::m_RequiredEntityQueries
	UnsafeList_1_t9AEE563C26A06C76FDB588E50E58211C1F01D8F6 ___m_RequiredEntityQueries_2;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32> Unity.Entities.SystemState::m_JobDependencyForReadingSystems
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_JobDependencyForReadingSystems_3;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32> Unity.Entities.SystemState::m_JobDependencyForWritingSystems
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_JobDependencyForWritingSystems_4;
	// System.UInt32 Unity.Entities.SystemState::m_LastSystemVersion
	uint32_t ___m_LastSystemVersion_5;
	// Unity.Entities.EntityManager Unity.Entities.SystemState::m_EntityManager
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91 ___m_EntityManager_6;
	// Unity.Entities.EntityComponentStore* Unity.Entities.SystemState::m_EntityComponentStore
	EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_7;
	// Unity.Entities.ComponentDependencyManager* Unity.Entities.SystemState::m_DependencyManager
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47* ___m_DependencyManager_8;
	// Unity.Entities.WorldUnmanaged Unity.Entities.SystemState::m_WorldUnmanaged
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F ___m_WorldUnmanaged_9;
	// Unity.Entities.SystemHandleUntyped Unity.Entities.SystemState::m_Handle
	SystemHandleUntyped_tBAD0B60C6C5C844C4F755E8D4C06369262C99697 ___m_Handle_10;
	// System.UInt32 Unity.Entities.SystemState::m_Flags
	uint32_t ___m_Flags_15;
	// Unity.Jobs.JobHandle Unity.Entities.SystemState::m_JobHandle
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_JobHandle_16;
	// System.Int32 Unity.Entities.SystemState::m_SystemID
	int32_t ___m_SystemID_17;
	// System.Int32 Unity.Entities.SystemState::<UnmanagedMetaIndex>k__BackingField
	int32_t ___U3CUnmanagedMetaIndexU3Ek__BackingField_18;
	// System.Runtime.InteropServices.GCHandle Unity.Entities.SystemState::m_World
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_World_19;
	// System.Runtime.InteropServices.GCHandle Unity.Entities.SystemState::m_ManagedSystem
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_ManagedSystem_20;
};

struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D_StaticFields
{
	// System.Int32 Unity.Entities.SystemState::ms_SystemIDAllocator
	int32_t ___ms_SystemIDAllocator_21;
};
// Native definition for P/Invoke marshalling of Unity.Entities.SystemState
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D_marshaled_pinvoke
{
	void* ___m_SystemPtr_0;
	UnsafeList_1_t9AEE563C26A06C76FDB588E50E58211C1F01D8F6 ___m_EntityQueries_1;
	UnsafeList_1_t9AEE563C26A06C76FDB588E50E58211C1F01D8F6 ___m_RequiredEntityQueries_2;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_JobDependencyForReadingSystems_3;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_JobDependencyForWritingSystems_4;
	uint32_t ___m_LastSystemVersion_5;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_marshaled_pinvoke ___m_EntityManager_6;
	EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_7;
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47* ___m_DependencyManager_8;
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_pinvoke ___m_WorldUnmanaged_9;
	SystemHandleUntyped_tBAD0B60C6C5C844C4F755E8D4C06369262C99697 ___m_Handle_10;
	uint32_t ___m_Flags_15;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_JobHandle_16;
	int32_t ___m_SystemID_17;
	int32_t ___U3CUnmanagedMetaIndexU3Ek__BackingField_18;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_World_19;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_ManagedSystem_20;
};
// Native definition for COM marshalling of Unity.Entities.SystemState
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D_marshaled_com
{
	void* ___m_SystemPtr_0;
	UnsafeList_1_t9AEE563C26A06C76FDB588E50E58211C1F01D8F6 ___m_EntityQueries_1;
	UnsafeList_1_t9AEE563C26A06C76FDB588E50E58211C1F01D8F6 ___m_RequiredEntityQueries_2;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_JobDependencyForReadingSystems_3;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_JobDependencyForWritingSystems_4;
	uint32_t ___m_LastSystemVersion_5;
	EntityManager_t245CC8C15DD62AF5BA0B385CF94EA7CD0B3F4C91_marshaled_com ___m_EntityManager_6;
	EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_7;
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47* ___m_DependencyManager_8;
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_com ___m_WorldUnmanaged_9;
	SystemHandleUntyped_tBAD0B60C6C5C844C4F755E8D4C06369262C99697 ___m_Handle_10;
	uint32_t ___m_Flags_15;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_JobHandle_16;
	int32_t ___m_SystemID_17;
	int32_t ___U3CUnmanagedMetaIndexU3Ek__BackingField_18;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_World_19;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_ManagedSystem_20;
};

// Unity.Entities.EntityComponentStore
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F 
{
	// System.Int32* Unity.Entities.EntityComponentStore::m_VersionByEntity
	int32_t* ___m_VersionByEntity_0;
	// Unity.Entities.Archetype** Unity.Entities.EntityComponentStore::m_ArchetypeByEntity
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582** ___m_ArchetypeByEntity_1;
	// Unity.Entities.EntityInChunk* Unity.Entities.EntityComponentStore::m_EntityInChunkByEntity
	EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___m_EntityInChunkByEntity_2;
	// System.Int32* Unity.Entities.EntityComponentStore::m_ComponentTypeOrderVersion
	int32_t* ___m_ComponentTypeOrderVersion_3;
	// Unity.Entities.BlockAllocator Unity.Entities.EntityComponentStore::m_ArchetypeChunkAllocator
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE ___m_ArchetypeChunkAllocator_4;
	// Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1<Unity.Entities.Archetype> Unity.Entities.EntityComponentStore::m_Archetypes
	UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 ___m_Archetypes_5;
	// Unity.Entities.ArchetypeListMap Unity.Entities.EntityComponentStore::m_TypeLookup
	ArchetypeListMap_t9B5C7F814630CC95D11AE3A6D713646CDE4A33AD ___m_TypeLookup_6;
	// System.Int32 Unity.Entities.EntityComponentStore::m_ManagedComponentIndex
	int32_t ___m_ManagedComponentIndex_7;
	// System.Int32 Unity.Entities.EntityComponentStore::m_ManagedComponentIndexCapacity
	int32_t ___m_ManagedComponentIndexCapacity_8;
	// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer Unity.Entities.EntityComponentStore::m_ManagedComponentFreeIndex
	UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500 ___m_ManagedComponentFreeIndex_9;
	// Unity.Entities.ManagedDeferredCommands Unity.Entities.EntityComponentStore::ManagedChangesTracker
	ManagedDeferredCommands_t3585F563AFB19DC3B6EB9250562B62FC78A0E9A1 ___ManagedChangesTracker_10;
	// Unity.Entities.EntityComponentStore/ChunkListChanges Unity.Entities.EntityComponentStore::m_ChunkListChangesTracker
	ChunkListChanges_tC57E06E14D1D6D3D87675D05619E0539A86564D8 ___m_ChunkListChangesTracker_11;
	// System.UInt64 Unity.Entities.EntityComponentStore::m_NextChunkSequenceNumber
	uint64_t ___m_NextChunkSequenceNumber_12;
	// System.Int32 Unity.Entities.EntityComponentStore::m_NextFreeEntityIndex
	int32_t ___m_NextFreeEntityIndex_13;
	// System.Int32 Unity.Entities.EntityComponentStore::m_EntityCreateDestroyVersion
	int32_t ___m_EntityCreateDestroyVersion_14;
	// System.UInt32 Unity.Entities.EntityComponentStore::m_GlobalSystemVersion
	uint32_t ___m_GlobalSystemVersion_15;
	// System.Int32 Unity.Entities.EntityComponentStore::m_EntitiesCapacity
	int32_t ___m_EntitiesCapacity_16;
	// System.Int32 Unity.Entities.EntityComponentStore::m_IntentionallyInconsistent
	int32_t ___m_IntentionallyInconsistent_17;
	// System.UInt32 Unity.Entities.EntityComponentStore::m_ArchetypeTrackingVersion
	uint32_t ___m_ArchetypeTrackingVersion_18;
	// System.Int32 Unity.Entities.EntityComponentStore::m_LinkedGroupType
	int32_t ___m_LinkedGroupType_19;
	// System.Int32 Unity.Entities.EntityComponentStore::m_ChunkHeaderType
	int32_t ___m_ChunkHeaderType_20;
	// System.Int32 Unity.Entities.EntityComponentStore::m_PrefabType
	int32_t ___m_PrefabType_21;
	// System.Int32 Unity.Entities.EntityComponentStore::m_CleanupEntityType
	int32_t ___m_CleanupEntityType_22;
	// System.Int32 Unity.Entities.EntityComponentStore::m_DisabledType
	int32_t ___m_DisabledType_23;
	// System.Int32 Unity.Entities.EntityComponentStore::m_EntityType
	int32_t ___m_EntityType_24;
	// Unity.Entities.ComponentType Unity.Entities.EntityComponentStore::m_ChunkHeaderComponentType
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___m_ChunkHeaderComponentType_25;
	// Unity.Entities.ComponentType Unity.Entities.EntityComponentStore::m_EntityComponentType
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___m_EntityComponentType_26;
	// Unity.Entities.TypeManager/TypeInfo* Unity.Entities.EntityComponentStore::m_TypeInfos
	TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654* ___m_TypeInfos_27;
	// Unity.Entities.TypeManager/EntityOffsetInfo* Unity.Entities.EntityComponentStore::m_EntityOffsetInfos
	EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1* ___m_EntityOffsetInfos_28;
	// System.Byte Unity.Entities.EntityComponentStore::memoryInitPattern
	uint8_t ___memoryInitPattern_29;
	// System.Byte Unity.Entities.EntityComponentStore::useMemoryInitPattern
	uint8_t ___useMemoryInitPattern_30;
	// Unity.Entities.EntityName* Unity.Entities.EntityComponentStore::m_NameByEntity
	EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87* ___m_NameByEntity_36;
	// System.UInt64 Unity.Entities.EntityComponentStore::m_NameChangeBitsSequenceNum
	uint64_t ___m_NameChangeBitsSequenceNum_38;
	// Unity.Collections.LowLevel.Unsafe.UnsafeBitArray Unity.Entities.EntityComponentStore::m_NameChangeBitsByEntity
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___m_NameChangeBitsByEntity_39;
};

struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F_StaticFields
{
	// Unity.Burst.SharedStatic`1<System.UInt64> Unity.Entities.EntityComponentStore::s_TotalChunkAddressSpaceInBytes
	SharedStatic_1_tB042D7198B3BD170F6B8D07127F90A916DCE64B5 ___s_TotalChunkAddressSpaceInBytes_34;
	// System.UInt64 Unity.Entities.EntityComponentStore::DefaultChunkAddressSpaceInBytes
	uint64_t ___DefaultChunkAddressSpaceInBytes_35;
	// Unity.Burst.SharedStatic`1<Unity.Entities.EntityComponentStore/ChunkStore> Unity.Entities.EntityComponentStore::s_chunkStore
	SharedStatic_1_t06174270CC879833E66A2A61C363018B785C3CC7 ___s_chunkStore_42;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityComponentStore
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F_marshaled_pinvoke
{
	int32_t* ___m_VersionByEntity_0;
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582** ___m_ArchetypeByEntity_1;
	EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___m_EntityInChunkByEntity_2;
	int32_t* ___m_ComponentTypeOrderVersion_3;
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE_marshaled_pinvoke ___m_ArchetypeChunkAllocator_4;
	UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 ___m_Archetypes_5;
	ArchetypeListMap_t9B5C7F814630CC95D11AE3A6D713646CDE4A33AD_marshaled_pinvoke ___m_TypeLookup_6;
	int32_t ___m_ManagedComponentIndex_7;
	int32_t ___m_ManagedComponentIndexCapacity_8;
	UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500 ___m_ManagedComponentFreeIndex_9;
	ManagedDeferredCommands_t3585F563AFB19DC3B6EB9250562B62FC78A0E9A1 ___ManagedChangesTracker_10;
	ChunkListChanges_tC57E06E14D1D6D3D87675D05619E0539A86564D8_marshaled_pinvoke ___m_ChunkListChangesTracker_11;
	uint64_t ___m_NextChunkSequenceNumber_12;
	int32_t ___m_NextFreeEntityIndex_13;
	int32_t ___m_EntityCreateDestroyVersion_14;
	uint32_t ___m_GlobalSystemVersion_15;
	int32_t ___m_EntitiesCapacity_16;
	int32_t ___m_IntentionallyInconsistent_17;
	uint32_t ___m_ArchetypeTrackingVersion_18;
	int32_t ___m_LinkedGroupType_19;
	int32_t ___m_ChunkHeaderType_20;
	int32_t ___m_PrefabType_21;
	int32_t ___m_CleanupEntityType_22;
	int32_t ___m_DisabledType_23;
	int32_t ___m_EntityType_24;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___m_ChunkHeaderComponentType_25;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___m_EntityComponentType_26;
	TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654* ___m_TypeInfos_27;
	EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1* ___m_EntityOffsetInfos_28;
	uint8_t ___memoryInitPattern_29;
	uint8_t ___useMemoryInitPattern_30;
	EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87* ___m_NameByEntity_36;
	uint64_t ___m_NameChangeBitsSequenceNum_38;
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___m_NameChangeBitsByEntity_39;
};
// Native definition for COM marshalling of Unity.Entities.EntityComponentStore
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F_marshaled_com
{
	int32_t* ___m_VersionByEntity_0;
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582** ___m_ArchetypeByEntity_1;
	EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___m_EntityInChunkByEntity_2;
	int32_t* ___m_ComponentTypeOrderVersion_3;
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE_marshaled_com ___m_ArchetypeChunkAllocator_4;
	UnsafePtrList_1_t3BA56CBE50A217517D1FA78C345C0AF8242F8088 ___m_Archetypes_5;
	ArchetypeListMap_t9B5C7F814630CC95D11AE3A6D713646CDE4A33AD_marshaled_com ___m_TypeLookup_6;
	int32_t ___m_ManagedComponentIndex_7;
	int32_t ___m_ManagedComponentIndexCapacity_8;
	UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500 ___m_ManagedComponentFreeIndex_9;
	ManagedDeferredCommands_t3585F563AFB19DC3B6EB9250562B62FC78A0E9A1 ___ManagedChangesTracker_10;
	ChunkListChanges_tC57E06E14D1D6D3D87675D05619E0539A86564D8_marshaled_com ___m_ChunkListChangesTracker_11;
	uint64_t ___m_NextChunkSequenceNumber_12;
	int32_t ___m_NextFreeEntityIndex_13;
	int32_t ___m_EntityCreateDestroyVersion_14;
	uint32_t ___m_GlobalSystemVersion_15;
	int32_t ___m_EntitiesCapacity_16;
	int32_t ___m_IntentionallyInconsistent_17;
	uint32_t ___m_ArchetypeTrackingVersion_18;
	int32_t ___m_LinkedGroupType_19;
	int32_t ___m_ChunkHeaderType_20;
	int32_t ___m_PrefabType_21;
	int32_t ___m_CleanupEntityType_22;
	int32_t ___m_DisabledType_23;
	int32_t ___m_EntityType_24;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___m_ChunkHeaderComponentType_25;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___m_EntityComponentType_26;
	TypeInfo_tD43B08A8D19156EEC98399693A96161F02139654* ___m_TypeInfos_27;
	EntityOffsetInfo_tAA68D1FC74ADF57FB76987377354ED848C7CC9D1* ___m_EntityOffsetInfos_28;
	uint8_t ___memoryInitPattern_29;
	uint8_t ___useMemoryInitPattern_30;
	EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87* ___m_NameByEntity_36;
	uint64_t ___m_NameChangeBitsSequenceNum_38;
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___m_NameChangeBitsByEntity_39;
};

// Unity.Entities.EntityQueryManager
struct EntityQueryManager_tCD6CFC49CDD19B4E639F214958CC0B81011ACD0A 
{
	// Unity.Entities.ComponentDependencyManager* Unity.Entities.EntityQueryManager::m_DependencyManager
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47* ___m_DependencyManager_0;
	// Unity.Entities.BlockAllocator Unity.Entities.EntityQueryManager::m_GroupDataChunkAllocator
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE ___m_GroupDataChunkAllocator_1;
	// Unity.Collections.LowLevel.Unsafe.UnsafePtrList`1<Unity.Entities.EntityQueryData> Unity.Entities.EntityQueryManager::m_EntityGroupDatas
	UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6 ___m_EntityGroupDatas_2;
	// Unity.Collections.LowLevel.Unsafe.UntypedUnsafeParallelHashMap Unity.Entities.EntityQueryManager::m_EntityGroupDataCacheUntyped
	UntypedUnsafeParallelHashMap_t926EFEEE26C4DE4FE2FA5A27FEA1D83CDD4B1B17 ___m_EntityGroupDataCacheUntyped_3;
	// System.Int32 Unity.Entities.EntityQueryManager::m_EntityQueryMasksAllocated
	int32_t ___m_EntityQueryMasksAllocated_4;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityQueryManager
struct EntityQueryManager_tCD6CFC49CDD19B4E639F214958CC0B81011ACD0A_marshaled_pinvoke
{
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47* ___m_DependencyManager_0;
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE_marshaled_pinvoke ___m_GroupDataChunkAllocator_1;
	UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6 ___m_EntityGroupDatas_2;
	UntypedUnsafeParallelHashMap_t926EFEEE26C4DE4FE2FA5A27FEA1D83CDD4B1B17 ___m_EntityGroupDataCacheUntyped_3;
	int32_t ___m_EntityQueryMasksAllocated_4;
};
// Native definition for COM marshalling of Unity.Entities.EntityQueryManager
struct EntityQueryManager_tCD6CFC49CDD19B4E639F214958CC0B81011ACD0A_marshaled_com
{
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47* ___m_DependencyManager_0;
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE_marshaled_com ___m_GroupDataChunkAllocator_1;
	UnsafePtrList_1_t9303472093C8513F7E98E3EFE8C3560679C4CAA6 ___m_EntityGroupDatas_2;
	UntypedUnsafeParallelHashMap_t926EFEEE26C4DE4FE2FA5A27FEA1D83CDD4B1B17 ___m_EntityGroupDataCacheUntyped_3;
	int32_t ___m_EntityQueryMasksAllocated_4;
};

// Unity.Entities.EntityDataAccess
struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36 
{
	// Unity.Entities.EntityComponentStore Unity.Entities.EntityDataAccess::m_EntityComponentStore
	EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F ___m_EntityComponentStore_4;
	// Unity.Entities.EntityQueryManager Unity.Entities.EntityDataAccess::m_EntityQueryManager
	EntityQueryManager_tCD6CFC49CDD19B4E639F214958CC0B81011ACD0A ___m_EntityQueryManager_5;
	// Unity.Entities.ComponentDependencyManager Unity.Entities.EntityDataAccess::m_DependencyManager
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47 ___m_DependencyManager_6;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32> Unity.Entities.EntityDataAccess::m_ManagedReferenceIndexList
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_ManagedReferenceIndexList_7;
	// Unity.Entities.EntityQuery Unity.Entities.EntityDataAccess::m_UniversalQuery
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_UniversalQuery_8;
	// Unity.Entities.EntityQuery Unity.Entities.EntityDataAccess::m_UniversalQueryWithChunks
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_UniversalQueryWithChunks_9;
	// Unity.Entities.EntityQuery Unity.Entities.EntityDataAccess::m_EntityGuidQuery
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_EntityGuidQuery_10;
	// Unity.Entities.WorldUnmanaged Unity.Entities.EntityDataAccess::m_WorldUnmanaged
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F ___m_WorldUnmanaged_11;
	// System.Int32 Unity.Entities.EntityDataAccess::m_ManagedAccessHandle
	int32_t ___m_ManagedAccessHandle_13;
	// Unity.Entities.EntityArchetype Unity.Entities.EntityDataAccess::m_EntityOnlyArchetype
	EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 ___m_EntityOnlyArchetype_14;
	// Unity.Collections.LowLevel.Unsafe.UntypedUnsafeParallelHashMap Unity.Entities.EntityDataAccess::m_AliveEntityQueries
	UntypedUnsafeParallelHashMap_t926EFEEE26C4DE4FE2FA5A27FEA1D83CDD4B1B17 ___m_AliveEntityQueries_15;
};

struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36_StaticFields
{
	// System.Int32 Unity.Entities.EntityDataAccess::FASTER_TO_BATCH_THRESHOLD
	int32_t ___FASTER_TO_BATCH_THRESHOLD_0;
	// System.Int32 Unity.Entities.EntityDataAccess::MANAGED_REFERENCES_DEFAULT
	int32_t ___MANAGED_REFERENCES_DEFAULT_1;
	// Unity.Burst.SharedStatic`1<System.IntPtr> Unity.Entities.EntityDataAccess::s_ManagedPlaybackTrampoline
	SharedStatic_1_t0A9894CA2483CA9491C550F8D66FBA5213718E9F ___s_ManagedPlaybackTrampoline_2;
	// System.Object Unity.Entities.EntityDataAccess::s_DelegateGCPrevention
	RuntimeObject* ___s_DelegateGCPrevention_3;
};
// Native definition for P/Invoke marshalling of Unity.Entities.EntityDataAccess
struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36_marshaled_pinvoke
{
	EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F_marshaled_pinvoke ___m_EntityComponentStore_4;
	EntityQueryManager_tCD6CFC49CDD19B4E639F214958CC0B81011ACD0A_marshaled_pinvoke ___m_EntityQueryManager_5;
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47_marshaled_pinvoke ___m_DependencyManager_6;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_ManagedReferenceIndexList_7;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_pinvoke ___m_UniversalQuery_8;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_pinvoke ___m_UniversalQueryWithChunks_9;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_pinvoke ___m_EntityGuidQuery_10;
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_pinvoke ___m_WorldUnmanaged_11;
	int32_t ___m_ManagedAccessHandle_13;
	EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_marshaled_pinvoke ___m_EntityOnlyArchetype_14;
	UntypedUnsafeParallelHashMap_t926EFEEE26C4DE4FE2FA5A27FEA1D83CDD4B1B17 ___m_AliveEntityQueries_15;
};
// Native definition for COM marshalling of Unity.Entities.EntityDataAccess
struct EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36_marshaled_com
{
	EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F_marshaled_com ___m_EntityComponentStore_4;
	EntityQueryManager_tCD6CFC49CDD19B4E639F214958CC0B81011ACD0A_marshaled_com ___m_EntityQueryManager_5;
	ComponentDependencyManager_t88715270EBD172A299D4F6DB471143B7E0BCDB47_marshaled_com ___m_DependencyManager_6;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_ManagedReferenceIndexList_7;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_com ___m_UniversalQuery_8;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_com ___m_UniversalQueryWithChunks_9;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_marshaled_com ___m_EntityGuidQuery_10;
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F_marshaled_com ___m_WorldUnmanaged_11;
	int32_t ___m_ManagedAccessHandle_13;
	EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_marshaled_com ___m_EntityOnlyArchetype_14;
	UntypedUnsafeParallelHashMap_t926EFEEE26C4DE4FE2FA5A27FEA1D83CDD4B1B17 ___m_AliveEntityQueries_15;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int16>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m00A899500B562FFBA22CD59CA738AC7E27BAB718_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int16_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int32>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int64>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m82DAFCB1342E8454C2CDCF0B1BC30A4A20840189_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int64_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.SByte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8C8B999F2377524593B4B7077CFE51009B47804C_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int8_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Single>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1EF49C179F611D5558A8E183537F8E73C2407BBD_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, float* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt16>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m12986FAA80D6D25C942C8B04527FBB94FE313DE5_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint16_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt32>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA0D8522981899039AAAC10C3C8F5F04E14A6259_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint32_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt64>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m43AFB2B58C887B6457D7F2631BFE12040891AC4F_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint64_t* ___value0, const RuntimeMethod* method) ;
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.BlobAssetChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_mBDB47AA06A9782EA6802D1648B2A072911F444BB_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.BlobAssetReferenceChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_mC69174C427D263D52C4C2159CC21A53C66B9FE8A_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Byte>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEEC371684A9D1E5CA9378DCC66ED91F1B0812703_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.ComponentTypeHash>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m98654F8902F913204B50F9D8032E1FDA035B8E75_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.EntityGuid>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m862E700E15F899FD3FA3E8E42BCC23E555204760_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.EntityReferenceChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m0831F58919B662A438AFD2263A259D032E09FF82_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Collections.FixedString64Bytes>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m77C58203BFDE8787ED63BB08B26E066C875F3E78_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.Hash128>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDF83C0662AEF267DF8B6FE0B5C5DC240673627A4_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.LinkedEntityGroupChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_mB312DB1798BDD7B342C1EC8CC11508C9AAEB0D48_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.PackedComponent>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m0962EB46FF7BFC07E48246B14D53A6711688513A_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.PackedComponentDataChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_mF381FD2D2D5E74C6D4275CC196D47581B062FE61_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Scenes.RuntimeGlobalObjectId>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisRuntimeGlobalObjectId_tAB67DFCE38AE9017FD23D259E02590DE98E0CD10_m48988C1A34A184EF704E9694DFFD157022A1257A_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt64>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mECEA80520AED5B65E9891C1004038AA3F2BADFD1_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.Entities.Entity>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m838E46D2990321A99CBB5E5E8B1407544DEA9F1E_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<System.Int32>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE210D09F3FA26810F7ADF4DC82BD5935BC665CF_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) ;

// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int16>(T&)
inline void Reader_ReadNext_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m00A899500B562FFBA22CD59CA738AC7E27BAB718 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int16_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int16_t*, const RuntimeMethod*))Reader_ReadNext_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m00A899500B562FFBA22CD59CA738AC7E27BAB718_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int32>(T&)
inline void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int64>(T&)
inline void Reader_ReadNext_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m82DAFCB1342E8454C2CDCF0B1BC30A4A20840189 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int64_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int64_t*, const RuntimeMethod*))Reader_ReadNext_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m82DAFCB1342E8454C2CDCF0B1BC30A4A20840189_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.SByte>(T&)
inline void Reader_ReadNext_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8C8B999F2377524593B4B7077CFE51009B47804C (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int8_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int8_t*, const RuntimeMethod*))Reader_ReadNext_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8C8B999F2377524593B4B7077CFE51009B47804C_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Single>(T&)
inline void Reader_ReadNext_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1EF49C179F611D5558A8E183537F8E73C2407BBD (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, float* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, float*, const RuntimeMethod*))Reader_ReadNext_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1EF49C179F611D5558A8E183537F8E73C2407BBD_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt16>(T&)
inline void Reader_ReadNext_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m12986FAA80D6D25C942C8B04527FBB94FE313DE5 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint16_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, uint16_t*, const RuntimeMethod*))Reader_ReadNext_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m12986FAA80D6D25C942C8B04527FBB94FE313DE5_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt32>(T&)
inline void Reader_ReadNext_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA0D8522981899039AAAC10C3C8F5F04E14A6259 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, uint32_t*, const RuntimeMethod*))Reader_ReadNext_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA0D8522981899039AAAC10C3C8F5F04E14A6259_gshared)(__this, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt64>(T&)
inline void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m43AFB2B58C887B6457D7F2631BFE12040891AC4F (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, uint64_t*, const RuntimeMethod*))Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m43AFB2B58C887B6457D7F2631BFE12040891AC4F_gshared)(__this, ___value0, method);
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int32>()
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared)(__this, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___structSize0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.BlobAssetChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_mBDB47AA06A9782EA6802D1648B2A072911F444BB (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_mBDB47AA06A9782EA6802D1648B2A072911F444BB_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.BlobAssetReferenceChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_mC69174C427D263D52C4C2159CC21A53C66B9FE8A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_mC69174C427D263D52C4C2159CC21A53C66B9FE8A_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Byte>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEEC371684A9D1E5CA9378DCC66ED91F1B0812703 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEEC371684A9D1E5CA9378DCC66ED91F1B0812703_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.ComponentTypeHash>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m98654F8902F913204B50F9D8032E1FDA035B8E75 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m98654F8902F913204B50F9D8032E1FDA035B8E75_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.EntityGuid>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m862E700E15F899FD3FA3E8E42BCC23E555204760 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m862E700E15F899FD3FA3E8E42BCC23E555204760_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.EntityReferenceChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m0831F58919B662A438AFD2263A259D032E09FF82 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m0831F58919B662A438AFD2263A259D032E09FF82_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Collections.FixedString64Bytes>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m77C58203BFDE8787ED63BB08B26E066C875F3E78 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m77C58203BFDE8787ED63BB08B26E066C875F3E78_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.Hash128>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDF83C0662AEF267DF8B6FE0B5C5DC240673627A4 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDF83C0662AEF267DF8B6FE0B5C5DC240673627A4_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.LinkedEntityGroupChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_mB312DB1798BDD7B342C1EC8CC11508C9AAEB0D48 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_mB312DB1798BDD7B342C1EC8CC11508C9AAEB0D48_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.PackedComponent>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m0962EB46FF7BFC07E48246B14D53A6711688513A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m0962EB46FF7BFC07E48246B14D53A6711688513A_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.PackedComponentDataChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_mF381FD2D2D5E74C6D4275CC196D47581B062FE61 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_mF381FD2D2D5E74C6D4275CC196D47581B062FE61_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Scenes.RuntimeGlobalObjectId>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisRuntimeGlobalObjectId_tAB67DFCE38AE9017FD23D259E02590DE98E0CD10_m48988C1A34A184EF704E9694DFFD157022A1257A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisRuntimeGlobalObjectId_tAB67DFCE38AE9017FD23D259E02590DE98E0CD10_m48988C1A34A184EF704E9694DFFD157022A1257A_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt64>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mECEA80520AED5B65E9891C1004038AA3F2BADFD1 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mECEA80520AED5B65E9891C1004038AA3F2BADFD1_gshared)(__this, ___value0, ___allocator1, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.Entities.Entity>(System.Int32&)
inline void* Reader_ReadNextArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m838E46D2990321A99CBB5E5E8B1407544DEA9F1E (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m838E46D2990321A99CBB5E5E8B1407544DEA9F1E_gshared)(__this, ___length0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<System.Int32>(System.Int32&)
inline void* Reader_ReadNextArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE210D09F3FA26810F7ADF4DC82BD5935BC665CF (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE210D09F3FA26810F7ADF4DC82BD5935BC665CF_gshared)(__this, ___length0, method);
}
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::SetBit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, bool ___val2, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::GetBit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStriOutput(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA (int32_t ___len0, int32_t ___imm81, int32_t ___intRes22, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int16>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m00A899500B562FFBA22CD59CA738AC7E27BAB718_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int16_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		int16_t* L_3 = ___value0;
		((  void (*) (void*, int16_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m00A899500B562FFBA22CD59CA738AC7E27BAB718_AdjustorThunk (RuntimeObject* __this, int16_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m00A899500B562FFBA22CD59CA738AC7E27BAB718(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int32>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		int32_t* L_3 = ___value0;
		((  void (*) (void*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_AdjustorThunk (RuntimeObject* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int64>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m82DAFCB1342E8454C2CDCF0B1BC30A4A20840189_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int64_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		int64_t* L_3 = ___value0;
		((  void (*) (void*, int64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m82DAFCB1342E8454C2CDCF0B1BC30A4A20840189_AdjustorThunk (RuntimeObject* __this, int64_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m82DAFCB1342E8454C2CDCF0B1BC30A4A20840189(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.SByte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8C8B999F2377524593B4B7077CFE51009B47804C_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int8_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		int8_t* L_3 = ___value0;
		((  void (*) (void*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8C8B999F2377524593B4B7077CFE51009B47804C_AdjustorThunk (RuntimeObject* __this, int8_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8C8B999F2377524593B4B7077CFE51009B47804C(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Single>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1EF49C179F611D5558A8E183537F8E73C2407BBD_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, float* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		float* L_3 = ___value0;
		((  void (*) (void*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1EF49C179F611D5558A8E183537F8E73C2407BBD_AdjustorThunk (RuntimeObject* __this, float* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1EF49C179F611D5558A8E183537F8E73C2407BBD(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt16>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m12986FAA80D6D25C942C8B04527FBB94FE313DE5_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint16_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		uint16_t* L_3 = ___value0;
		((  void (*) (void*, uint16_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m12986FAA80D6D25C942C8B04527FBB94FE313DE5_AdjustorThunk (RuntimeObject* __this, uint16_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m12986FAA80D6D25C942C8B04527FBB94FE313DE5(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt32>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA0D8522981899039AAAC10C3C8F5F04E14A6259_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint32_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		uint32_t* L_3 = ___value0;
		((  void (*) (void*, uint32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA0D8522981899039AAAC10C3C8F5F04E14A6259_AdjustorThunk (RuntimeObject* __this, uint32_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA0D8522981899039AAAC10C3C8F5F04E14A6259(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt64>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m43AFB2B58C887B6457D7F2631BFE12040891AC4F_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, uint64_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		uint64_t* L_3 = ___value0;
		((  void (*) (void*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m43AFB2B58C887B6457D7F2631BFE12040891AC4F_AdjustorThunk (RuntimeObject* __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m43AFB2B58C887B6457D7F2631BFE12040891AC4F(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.BlobAssetChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_mBDB47AA06A9782EA6802D1648B2A072911F444BB_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 L_4;
		L_4 = ((  NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248* L_10 = ___value0;
		NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248 L_11 = (*(NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_mBDB47AA06A9782EA6802D1648B2A072911F444BB_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t970BC7C3355016F36C9C4BD5A2B2481335287248* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_mBDB47AA06A9782EA6802D1648B2A072911F444BB(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.BlobAssetReferenceChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_mC69174C427D263D52C4C2159CC21A53C66B9FE8A_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 L_4;
		L_4 = ((  NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7* L_10 = ___value0;
		NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7 L_11 = (*(NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_mC69174C427D263D52C4C2159CC21A53C66B9FE8A_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0B4FCE577CD264C6BBD6B6DA6AD3EE310ED468C7* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_mC69174C427D263D52C4C2159CC21A53C66B9FE8A(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Byte>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEEC371684A9D1E5CA9378DCC66ED91F1B0812703_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4;
		L_4 = ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_10 = ___value0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_11 = (*(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEEC371684A9D1E5CA9378DCC66ED91F1B0812703_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEEC371684A9D1E5CA9378DCC66ED91F1B0812703(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.ComponentTypeHash>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m98654F8902F913204B50F9D8032E1FDA035B8E75_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 L_4;
		L_4 = ((  NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99* L_10 = ___value0;
		NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99 L_11 = (*(NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m98654F8902F913204B50F9D8032E1FDA035B8E75_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t31CD9A149F8F3956127329CD9F526C41662FED99* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m98654F8902F913204B50F9D8032E1FDA035B8E75(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.EntityGuid>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m862E700E15F899FD3FA3E8E42BCC23E555204760_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E L_4;
		L_4 = ((  NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* L_10 = ___value0;
		NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E L_11 = (*(NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m862E700E15F899FD3FA3E8E42BCC23E555204760_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tB4B7683DD2A8F815875BE195332D74EEF88AE45E* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m862E700E15F899FD3FA3E8E42BCC23E555204760(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.EntityReferenceChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m0831F58919B662A438AFD2263A259D032E09FF82_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 L_4;
		L_4 = ((  NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589* L_10 = ___value0;
		NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589 L_11 = (*(NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m0831F58919B662A438AFD2263A259D032E09FF82_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDA6E64B6255005588082F795EA58887274E85589* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m0831F58919B662A438AFD2263A259D032E09FF82(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Collections.FixedString64Bytes>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m77C58203BFDE8787ED63BB08B26E066C875F3E78_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF L_4;
		L_4 = ((  NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF* L_10 = ___value0;
		NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF L_11 = (*(NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m77C58203BFDE8787ED63BB08B26E066C875F3E78_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t2B1D581BDC038FEEA1A14F7522BFA97033CE7FCF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m77C58203BFDE8787ED63BB08B26E066C875F3E78(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.Hash128>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDF83C0662AEF267DF8B6FE0B5C5DC240673627A4_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D L_4;
		L_4 = ((  NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D* L_10 = ___value0;
		NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D L_11 = (*(NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDF83C0662AEF267DF8B6FE0B5C5DC240673627A4_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t2A0257A9C26D1BA03925423B9A39B0A58DDBD41D* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDF83C0662AEF267DF8B6FE0B5C5DC240673627A4(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.LinkedEntityGroupChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_mB312DB1798BDD7B342C1EC8CC11508C9AAEB0D48_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF L_4;
		L_4 = ((  NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF* L_10 = ___value0;
		NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF L_11 = (*(NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_mB312DB1798BDD7B342C1EC8CC11508C9AAEB0D48_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t16671384C507BA1F61B246C18903AB8D0678FDAF* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_mB312DB1798BDD7B342C1EC8CC11508C9AAEB0D48(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.PackedComponent>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m0962EB46FF7BFC07E48246B14D53A6711688513A_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 L_4;
		L_4 = ((  NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962* L_10 = ___value0;
		NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962 L_11 = (*(NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m0962EB46FF7BFC07E48246B14D53A6711688513A_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t313A01FE1FDD964DB43AF99C33F89E31AE800962* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m0962EB46FF7BFC07E48246B14D53A6711688513A(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Entities.PackedComponentDataChange>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_mF381FD2D2D5E74C6D4275CC196D47581B062FE61_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 L_4;
		L_4 = ((  NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8* L_10 = ___value0;
		NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8 L_11 = (*(NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_mF381FD2D2D5E74C6D4275CC196D47581B062FE61_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tC9FCE12B62C915D67011CCEEA3468EA35E219FC8* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_mF381FD2D2D5E74C6D4275CC196D47581B062FE61(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.Scenes.RuntimeGlobalObjectId>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisRuntimeGlobalObjectId_tAB67DFCE38AE9017FD23D259E02590DE98E0CD10_m48988C1A34A184EF704E9694DFFD157022A1257A_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F L_4;
		L_4 = ((  NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F* L_10 = ___value0;
		NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F L_11 = (*(NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisRuntimeGlobalObjectId_tAB67DFCE38AE9017FD23D259E02590DE98E0CD10_m48988C1A34A184EF704E9694DFFD157022A1257A_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t822DD9BEA9FF943932580D5FDAB78DDC54679D0F* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisRuntimeGlobalObjectId_tAB67DFCE38AE9017FD23D259E02590DE98E0CD10_m48988C1A34A184EF704E9694DFFD157022A1257A(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.UInt64>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mECEA80520AED5B65E9891C1004038AA3F2BADFD1_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_4;
		L_4 = ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* L_10 = ___value0;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_11 = (*(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mECEA80520AED5B65E9891C1004038AA3F2BADFD1_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mECEA80520AED5B65E9891C1004038AA3F2BADFD1(_thisAdjusted, ___value0, ___allocator1, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.Entities.Entity>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m838E46D2990321A99CBB5E5E8B1407544DEA9F1E_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// length = ReadNext<int>();
		int32_t* L_0 = ___length0;
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_1;
		// return (length == 0) ? null : ReadNext(length * UnsafeUtility.SizeOf<T>());
		int32_t* L_2 = ___length0;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		int32_t* L_4 = ___length0;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		return L_7;
	}

IL_001b:
	{
		return (void*)(((uintptr_t)0));
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m838E46D2990321A99CBB5E5E8B1407544DEA9F1E_AdjustorThunk (RuntimeObject* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m838E46D2990321A99CBB5E5E8B1407544DEA9F1E(_thisAdjusted, ___length0, method);
	return _returnValue;
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<System.Int32>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE210D09F3FA26810F7ADF4DC82BD5935BC665CF_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// length = ReadNext<int>();
		int32_t* L_0 = ___length0;
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_1;
		// return (length == 0) ? null : ReadNext(length * UnsafeUtility.SizeOf<T>());
		int32_t* L_2 = ___length0;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		int32_t* L_4 = ___length0;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		return L_7;
	}

IL_001b:
	{
		return (void*)(((uintptr_t)0));
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE210D09F3FA26810F7ADF4DC82BD5935BC665CF_AdjustorThunk (RuntimeObject* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE210D09F3FA26810F7ADF4DC82BD5935BC665CF(_thisAdjusted, ___length0, method);
	return _returnValue;
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA3913A6A10462E39061EBDB95BF3B664623C030E_gshared (double* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE3F55F8233727775C16F691D5AB120BD7E6F1953_gshared (double* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m467415A9F1AD3A64A8E685E8AF608A460E752BBA_gshared (int32_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE8593FE14D03A71468CC7DBEF449620E6BD53EBB_gshared (int32_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mDA310E132D9F76BB67DD3EF73EF1AF60CB831275_gshared (int64_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0BD452252E4CCD9E3F490DA4944DFEC91D6FD041_gshared (int64_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m78F2A21D95E34E7653E2166BC56FFDE28977717E_gshared (float* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2F0410CEEC28CD0FA1E4717F8F617145EF343225_gshared (float* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mED7B455859E0B6A968E0CC11352CEDA2F9FF7AF9_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_14;
		L_14 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_15 = V_7;
		uint8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_25;
		L_25 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_26 = V_8;
		uint8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_29;
		L_29 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_30 = V_8;
		uint8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_39;
		L_39 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_40 = V_7;
		uint8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_120;
		L_120 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint8_t);
		uint8_t L_124 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint8_t));
		uint8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0B2141BAA8FA70D9F8F940BC8E3701335918F237_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_14;
		L_14 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_15 = V_7;
		int16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_25;
		L_25 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_26 = V_8;
		int16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_29;
		L_29 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_30 = V_8;
		int16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_39;
		L_39 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_40 = V_7;
		int16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_50 = V_7;
		int16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_120;
		L_120 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int16_t);
		int16_t L_124 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int16_t));
		int16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m3C7AAF8D149906D058F08CC9BC94BC46DF0E4A73_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	int8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_14;
		L_14 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_15 = V_7;
		int8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_25;
		L_25 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_26 = V_8;
		int8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_29;
		L_29 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_30 = V_8;
		int8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_39;
		L_39 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_40 = V_7;
		int8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_50 = V_7;
		int8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_120;
		L_120 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int8_t);
		int8_t L_124 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int8_t));
		int8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m3DE4C87558A5087A7287ACA9FC5A5676ABF227BB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_14;
		L_14 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_15 = V_7;
		uint16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_25;
		L_25 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_26 = V_8;
		uint16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_29;
		L_29 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_30 = V_8;
		uint16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_39;
		L_39 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_40 = V_7;
		uint16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_120;
		L_120 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint16_t);
		uint16_t L_124 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint16_t));
		uint16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Byte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8F784EBC99E44A4CB234B042D11273133F56C621_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint8_t));
		uint8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Int16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0603C533D65481FEF379252669767C3289D5A7EA_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.SByte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m236204F29C4D3DAFD93507706540C7B2558CD052_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.UInt16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m4218E88AB255F75450B182867E72822A2EF60F03_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint16_t));
		uint16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Byte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CDD1CD3B9451DA3DE97EA61CEDEB20BB21190ED_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint8_t);
		uint8_t L_7 = ___allOnesT2;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Int16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8EFF45CCDF2A8B4E1F78F225B73394CEBD271FDA_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int16_t);
		int16_t L_7 = ___allOnesT2;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.SByte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAC1838ABFF55604547E6FE3F025DF8DA27C8337E_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int8_t);
		int8_t L_7 = ___allOnesT2;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.UInt16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m74D7BADFC9AC315204A8681CF38A833CAFB7CE2C_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint16_t);
		uint16_t L_7 = ___allOnesT2;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m039A69EA4859CB0EBE2EBA40126B5BEF219FD9DC_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0133AF29D5E7D3C58EB195B1161B73C6F3617DF1_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mC1A93C32B08449A60829F81B2C42E5211F93AD4F_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE1BD478C45560FCC9E87F745C1434B05113CF74_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC36131F85481A081D18A377F537F915A0351DFC5_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B48C68973258560A5B4B8ECD5F448804DB55087_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8073C56F8E9648AE4B873885848DA63475668922_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2C72AE4B21DBD9C6D132BE0E9B2544A7F11C2EE1_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD286020D6A1DF2C1A1B77FAC01C41966ABB53115_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCA3423A82AC8EC926D61A4D4FECA3370F9BC5F37_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m7B8F56707A05A5B005310B9F878EB52DD4EEA01E_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB2C2BF1384BA693577C2B49728E8DDEC52CE82BA_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_m3CA291D204228F490F255CC7E2A82756F6D82BBA(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4043B5E50C414CBA341092474375F65D5A89DD9A_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m460FF6A693B80266699102D29DE80EB497ABEBE3_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mDA92B4B735639B56CA7733CF9F723A92B7CC287E_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m46550865A8A1BBBC3E7A33E5B2718A023C090CAD_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Allocate<System.Int32>(System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Allocate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m31176E153361EB194B00F76BDF4D8A481A042374_gshared (int64_t ___count0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	{
		// return Resize<T>(null, 0, count, allocator);
		int64_t L_0 = ___count0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___allocator1;
		int32_t* L_2;
		L_2 = ((  int32_t* (*) (int32_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((int32_t*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Allocate<Unity.Collections.RewindableAllocator/MemoryBlock>(System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Allocate_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m5794F0F7E037DD373A3FB4556A959499F0512904_gshared (int64_t ___count0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	{
		// return Resize<T>(null, 0, count, allocator);
		int64_t L_0 = ___count0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___allocator1;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_2;
		L_2 = ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.BlobAssetBatch>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46* Array_Resize_TisBlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46_m8F25B6EA0798793798A2622415905024F32A93D3_gshared (BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.BlobAssetHeader>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* Array_Resize_TisBlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639_m41F90852B582F8D735042149296B764163A567CF_gshared (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<System.Byte>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10C0613B6FE5AE67A46CA4FBEAD63B63D985B2FE_gshared (uint8_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		uint8_t* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint8_t*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.ChainCleanup>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122* Array_Resize_TisChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122_m64D8EF8BB91B2609B1342B83D4D53E86975E5FE6_gshared (ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (ChainCleanup_t720381A951125FF2EAA04EA1E544B86820F30122*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.DynamicBlobAssetBatch>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027* Array_Resize_TisDynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027_m4FA401C544417E980854D4B6001C83370FBEDFDC_gshared (DynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		DynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (DynamicBlobAssetBatch_tAF1A195EBA8DD36359A9439ED1BB2D99AD81F027*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.ECBChainHeapElement>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECBChainHeapElement_tE83963A87C0B8B2EEDE315AF9DFF749A38C666DD* Array_Resize_TisECBChainHeapElement_tE83963A87C0B8B2EEDE315AF9DFF749A38C666DD_m468E945A41AE1AEA5743E6D93264E4CF83AB4144_gshared (ECBChainHeapElement_tE83963A87C0B8B2EEDE315AF9DFF749A38C666DD* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		ECBChainHeapElement_tE83963A87C0B8B2EEDE315AF9DFF749A38C666DD* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (ECBChainHeapElement_tE83963A87C0B8B2EEDE315AF9DFF749A38C666DD*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.ECBChunk>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* Array_Resize_TisECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F_m750A6A0D49B103065FF4E202125056986D667C75_gshared (ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (ECBChunk_tF8E51552DBA320AB90FCAE9CF1185FAFD3764F4F*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.Entity>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* Array_Resize_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mC5BB9330BDFEBFAA9DB5C7944CB85294EE3C1905_gshared (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.EntityCommandBufferChain>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* Array_Resize_TisEntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB_m3AAE7792BA845F566080AA664D2FB5BDF484C218_gshared (EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (EntityCommandBufferChain_tCC0FFFC083A93ADF15F28AAF7E69C8BB3D6F7CCB*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.EntityCommandBufferData>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2* Array_Resize_TisEntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2_mEAA79B0F07ADBA138813AF393482A9899E93EAF6_gshared (EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.EntityDataAccess>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* Array_Resize_TisEntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36_m8BAD98636F5030416E231F86D4DD226036058715_gshared (EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (EntityDataAccess_t98E1CF6F73892A92AA3FF870A4BD941364E9CD36*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.EntityInChunk>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* Array_Resize_TisEntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB_m8E770F2DCD534263590F19BA805BC535A72CD632_gshared (EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.EntityName>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87* Array_Resize_TisEntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87_m1982A475298C6893B023D9672604E01D6593B22D_gshared (EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (EntityName_t08A13405B792D0AE39612E76BA3A5CBEAC68BD87*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.EntityQueryImpl>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* Array_Resize_TisEntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574_mD271992C8AFC9F4FFFFA3B8865DC9D777628D090_gshared (EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<System.Int32>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m650BD6DF112E0BA10F16CD4AEB69B3F56315818A_gshared (int32_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		int32_t* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (int32_t*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<System.IntPtr>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Array_Resize_TisIntPtr_t_mE40EE73EF83EE91C86523885A1D1C7C06432DF1D_gshared (intptr_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		intptr_t* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (intptr_t*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Jobs.JobHandle>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* Array_Resize_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mEAFDC783F1DFEB8DAA2F91787B55AC8CA873081A_gshared (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.NativeQueueBlockHeader>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_m8C744CD1CE4D53F1091FF16F217D01F63383307F_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.NativeQueueBlockPoolData>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m93832DFB5B554EA831759666A935D8F0A0CFF62C_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.NativeQueueData>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m76F48C43CFB38C4C960B46E577B02CE1977A7411_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.SystemState>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* Array_Resize_TisSystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D_m3FE889B66B1F0583F8370E0F27E7C975F4C428D1_gshared (SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<System.UInt16>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Array_Resize_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m71F83BF487CB828ED10C8F5F912A51718FF3D494_gshared (uint16_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		uint16_t* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint16_t*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<System.UInt64>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m34CE882F9D9BCFE16F14B811FC8D98826D0F0350_gshared (uint64_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		uint64_t* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint64_t*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m4DDAF322C46D9079D75572AADF1A08415602A9E4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m23D8F6089E72A446C5C1F65C3A6F616010E47EEF_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_mC022822FCD113C676FC19D41E1A9855913822283_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m08F0B952ED2E934D0179AA48FE82AC737B061956_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.ComponentDependencyManager/DependencyHandle>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15* Array_Resize_TisDependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15_mA75B421153B05F79BFE3CD2782312ECFAC016F4A_gshared (DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (DependencyHandle_t73038501598DF9B7E83BF8486D87B9DED6200B15*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.Serialization.DotsSerialization/NodeHeader>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeHeader_tC393A021B9635C19BEC9CEEA905E76D4B90FDC4F* Array_Resize_TisNodeHeader_tC393A021B9635C19BEC9CEEA905E76D4B90FDC4F_m25D49DBFF757F1323091A34B62CE80A36769A7BE_gshared (NodeHeader_tC393A021B9635C19BEC9CEEA905E76D4B90FDC4F* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		NodeHeader_tC393A021B9635C19BEC9CEEA905E76D4B90FDC4F* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NodeHeader_tC393A021B9635C19BEC9CEEA905E76D4B90FDC4F*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.ECBSharedPlaybackState/BufferWithFixUp>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6* Array_Resize_TisBufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6_m2099E68FE75C0B186594AE9CAB60FD456A8F9AE3_gshared (BufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		BufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (BufferWithFixUp_tDFD5630DDFDBC051A462A026DFAEAA4A047FB3B6*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Collections.RewindableAllocator/MemoryBlock>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m2A155FE33CD8CA9D1BBCABFEF87F29DCC0245019_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Scenes.SceneHeaderUtility/HeaderData>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3* Array_Resize_TisHeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3_m012C7AEBB2462A2F7B0845A08A3C3C154FF7A9C7_gshared (HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.Scratchpad/Shard>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shard_t8EF5BDC09768D5B1976356C2754921DE03A244E9* Array_Resize_TisShard_t8EF5BDC09768D5B1976356C2754921DE03A244E9_m60981127FAD5E3EAAE45A3F22179B8DDDBAD2B10_gshared (Shard_t8EF5BDC09768D5B1976356C2754921DE03A244E9* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		Shard_t8EF5BDC09768D5B1976356C2754921DE03A244E9* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (Shard_t8EF5BDC09768D5B1976356C2754921DE03A244E9*)(L_6);
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.Entities.WorldUnmanagedImpl/StateAllocLevel1>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D* Array_Resize_TisStateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D_mF0C8A99DA3FB6D30A6D1843F413098FA4337131A_gshared (StateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		StateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_6;
		L_6 = Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (StateAllocLevel1_t93303AA6CAA1A10E9819D11E131EDD90DE20043D*)(L_6);
	}
}
