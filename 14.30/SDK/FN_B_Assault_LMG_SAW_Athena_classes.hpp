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

// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
// 0x0020 (0x1330 - 0x1310)
class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     LaserScaleUntargeted;                                     // 0x1318(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaserScaleTargeted;                                       // 0x1324(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnSetTargeting(bool bNewIsTargeting);
	void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
