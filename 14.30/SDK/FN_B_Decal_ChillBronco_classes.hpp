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

// BlueprintGeneratedClass B_Decal_ChillBronco.B_Decal_ChillBronco_C
// 0x0020 (0x0248 - 0x0228)
class AB_Decal_ChillBronco_C : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FadeIn_NewTrack_0_3A7C89534084CE1CFC71329D5810F1B3;       // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeIn__Direction_3A7C89534084CE1CFC71329D5810F1B3;       // 0x0234(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeIn;                                                   // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Decal_MID;                                                // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Decal_ChillBronco.B_Decal_ChillBronco_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Decal_ChillBronco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
