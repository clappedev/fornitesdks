#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0xFE8 - 0xFC8)
// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFC8(0x8)(Transient, DuplicateTransient)
	struct FVector                               LaserScaleUntargeted;                              // 0xFD0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaserScaleTargeted;                                // 0xFDC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Assault_LMG_SAW_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetTargeting(bool bNewIsTargeting);
	void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32 EntryPoint, bool K2Node_Event_bNewIsTargeting);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
