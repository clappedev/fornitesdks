#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// 0x0080 (0x05C0 - 0x0540)
class AImpactNumbers_C : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spacing_percentage_for_1s;                                // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontYSize_1;                                              // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontXSize_1;                                              // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontSizeScaleMaxPerc;                                     // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Standard_Hit_Color;                                       // 0x0560(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Critical_Wall_Hit_Color;                                  // 0x0570(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Player_Damage_Color;                                      // 0x0580(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Number_Spacing_Multiplier;                                // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Number_of_number_rotations;                               // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Critical_Hit_Multiplier;                                  // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance_from_Camera_Before_Doubling_Size;                // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Critical_Enemy_Hit_Color;                                 // 0x05A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             Number_offset_per;                                        // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C");
		return ptr;
	}


	void Set_Material_Pararmeters(const struct FTransform& CameraTransform, const struct FVector& NumberLocation, struct FFortDamageNumberInfo* NewDamageHitInfoStruct);
	void init_a_new_number_set(struct FFortDamageNumberInfo* NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation);
	void UserConstructionScript();
	void OnNewDamageNumber(struct FFortDamageNumberInfo* NewDamageNumberInfo);
	void ExecuteUbergraph_ImpactNumbers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
