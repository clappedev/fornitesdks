#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{

};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{

};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{

};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{

};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{

};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraVariable
// 0x0030
struct FNiagaraVariable
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0008
struct FNiagaraTypeDefinition
{
	class UStruct*                                     Struct;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x0048
struct FNiagaraTestStruct
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x0018
struct FNiagaraTestStructInner
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0018
struct FNiagaraScriptDataInterfaceInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0038
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x0010
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraDataSetType                                Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x0010) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0038
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameterBinding
// 0x0030
struct FNiagaraParameterBinding
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterBurst
// 0x0010
struct FNiagaraEmitterBurst
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0028 (0x0050 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0038
struct FNiagaraEventGeneratorProperties
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0028
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
