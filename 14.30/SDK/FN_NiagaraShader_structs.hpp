#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	Log                            = 0,
	Warning                        = 1,
	Error                          = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NiagaraShader.SimulationStageMetaData
// 0x0030
struct FSimulationStageMetaData
{
	struct FName                                       SimulationStageName;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       IterationSource;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSpawnOnly : 1;                                           // 0x0010(0x0001)
	unsigned char                                      bWritesParticles : 1;                                     // 0x0010(0x0001)
	unsigned char                                      bPartialParticleUpdate : 1;                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FName>                               OutputDestinations;                                       // 0x0018(0x0010) (ZeroConstructor)
	int                                                MinStage;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxStage;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// 0x0028
struct FNiagaraDataInterfaceGeneratedFunction
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0030
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString                                     DataInterfaceHLSLSymbol;                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DIClassName;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                       // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x0048
struct FNiagaraCompileEvent
{
	EFNiagaraCompileEventSeverity                      Severity;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
	struct FGuid                                       NodeGuid;                                                 // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PinGuid;                                                  // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               StackGuids;                                               // 0x0038(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
