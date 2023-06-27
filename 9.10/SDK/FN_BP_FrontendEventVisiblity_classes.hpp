#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C
// 0x0051 (0x0291 - 0x0240)
class ABP_FrontendEventVisiblity_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              AssetList;                                                // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               Debug;                                                    // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FString                                     EventTag;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              AssetList_InvisibleonEventActive;                         // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               EventEnabled;                                             // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C");
		return ptr;
	}


	void SetAssetListVisiblity_InvisibleonActive(bool Visibilty);
	void SetAssetListVisiblity(bool Visibilty);
	void UserConstructionScript();
	void OnEventEnded_D90685A246E0B23B716622898E705932(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio);
	void OnEventUpdated_D90685A246E0B23B716622898E705932(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio);
	void OnEventActive_D90685A246E0B23B716622898E705932(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FrontendEventVisiblity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
