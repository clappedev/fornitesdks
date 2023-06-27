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

// BlueprintGeneratedClass GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C
// 0x0048 (0x0B08 - 0x0AC0)
class UGA_Quest_Awakening_HightowerDate_VR_C : public UGA_Quest_PassiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                T_Location;                                               // 0x0AC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle                 Awakening_Handle;                                         // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_Awakening;                                             // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                T_Hightower;                                              // 0x0AE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     Quest_Awakening;                                          // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Quest_Complete;                                        // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AF1(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         NewVar_1;                                                 // 0x0AF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C");
		
		return ptr;
	}


	void Wait_End_Game_Phase(EAthenaGamePhase GamePhase);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Quest_Awakening_HightowerDate_VR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
