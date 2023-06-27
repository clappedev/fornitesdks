#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// 0x0058 (0x0090 - 0x0038)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                              Template;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x004C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0058(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsoluteScale;                                           // 0x0064(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x0065(0x001B) MISSED OFFSET
	unsigned char                                      Attached : 1;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0084(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
		
		return ptr;
	}


	class UFXSystemComponent* GetSpawnedEffect();
};


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// 0x0030 (0x0060 - 0x0030)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                              Template;                                                 // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0040(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x004C(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyAtEnd;                                            // 0x0058(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
