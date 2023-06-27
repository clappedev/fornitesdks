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

// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
		
		return ptr;
	}


	void STATIC_SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	void STATIC_EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};


// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0020 (0x0B80 - 0x0B60)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0B60(0x0018) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0B78(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0B78(0x0001) (Edit)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0B78(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B79(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		
		return ptr;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
