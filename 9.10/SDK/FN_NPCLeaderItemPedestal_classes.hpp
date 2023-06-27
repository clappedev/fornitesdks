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

// BlueprintGeneratedClass NPCLeaderItemPedestal.NPCLeaderItemPedestal_C
// 0x0020 (0x0328 - 0x0308)
class ANPCLeaderItemPedestal_C : public AFortItemPreviewPedestal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestToShow;                                              // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition*                         HeroItemDefinition;                                       // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCLeaderItemPedestal.NPCLeaderItemPedestal_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_NPCLeaderItemPedestal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
