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

// BlueprintGeneratedClass B_HeldObjectSocketManager.B_HeldObjectSocketManager_C
// 0x0042 (0x0802 - 0x07C0)
class AB_HeldObjectSocketManager_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AB_HeldObjectSocket_C*>               HeldObjectSockets;                                        // 0x07D0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FGameplayTagContainer>               CurrentTags;                                              // 0x07E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>               DefaultCorrectTags;                                       // 0x07F0(0x0010) (Edit, BlueprintVisible)
	bool                                               CombinationCorrect;                                       // 0x0800(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SocketOrderMatters;                                       // 0x0801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HeldObjectSocketManager.B_HeldObjectSocketManager_C");
		
		return ptr;
	}


	void OnRep_CombinationCorrect();
	void CheckTagMatches();
	void VerifyHeldObjectTags(bool OrderMatters, TArray<struct FGameplayTagContainer>* CorrectTags, TArray<struct FGameplayTagContainer>* CurrentTags, bool* IsValidMatch);
	void UpdateHeldObjectTags(class AB_HeldObjectSocket_C* ChangedSocket);
	void ReceiveBeginPlay();
	void OnCombinationCorrect();
	void ExecuteUbergraph_B_HeldObjectSocketManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
