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

// Enum MantisRuntime.EFortMantisBranchPath
enum class EFortMantisBranchPath : uint8_t
{
	Default                        = 0,
	Path                           = 1,
	Path01                         = 2,
	Path02                         = 3,
	Path03                         = 4,
	Path04                         = 5,
	EFortMantisBranchPath_MAX      = 6
};


// Enum MantisRuntime.EFortMantisBranchRule
enum class EFortMantisBranchRule : uint8_t
{
	Off                            = 0,
	Any                            = 1,
	Starter                        = 2,
	EFortMantisBranchRule_MAX      = 3
};


// Enum MantisRuntime.EFortMantisNotifyWindow
enum class EFortMantisNotifyWindow : uint8_t
{
	Invalid                        = 0,
	Input                          = 1,
	Execution                      = 2,
	Damage                         = 3,
	EFortMantisNotifyWindow_MAX    = 4
};


// Enum MantisRuntime.EFortMantisNotifyEvent
enum class EFortMantisNotifyEvent : uint8_t
{
	Invalid                        = 0,
	Branch                         = 1,
	EFortMantisNotifyEvent_MAX     = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MantisRuntime.FortMantisTechniqueData
// 0x00B8
struct FFortMantisTechniqueData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartsSequence;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndsSequence;                                            // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              InputWindowDelay;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRootMotion;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FGameplayTagQuery                           ActivationTagQuery;                                       // 0x0020(0x0048) (Edit, DisableEditOnInstance)
	struct FGameplayTagQuery                           OngoingTagQuery;                                          // 0x0068(0x0048) (Edit, DisableEditOnInstance)
	struct FGameplayTag                                ApplicationTag;                                           // 0x00B0(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct MantisRuntime.FortMantisTechniqueBranch
// 0x0014
struct FFortMantisTechniqueBranch
{
	struct FName                                       FromTechnique;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ToTechnique;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortMantisBranchPath                              BranchPath;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MantisRuntime.FortMantisMontageData
// 0x0018
struct FFortMantisMontageData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct MantisRuntime.FortRootMotionSource_Mantis
// 0x0020 (0x00C0 - 0x00A0)
struct FFortRootMotionSource_Mantis : public FRootMotionSource
{
	float                                              CurrentTechniqueTime;                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UAnimMontage*                                TechniqueMontage;                                         // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LatestRepMovementLocation;                                // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
};

// ScriptStruct MantisRuntime.FortMantisTargetData
// 0x0008 (0x0010 - 0x0008)
struct FFortMantisTargetData : public FGameplayAbilityTargetData
{
	int                                                TechniqueDataIndex;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
