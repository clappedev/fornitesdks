#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C
// 0x0073 (0x0A00 - 0x098D)
class UGAB_Spray_Generic_C : public UGAB_Emote_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DecalSize;                                                // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	class UAthenaSprayItemDefinition*                  MySpray;                                                  // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecalTraceDistance;                                       // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09AC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x09AC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GAB_Spray_Generic.GAB_Spray_Generic_C.DefaultSprayMontage_M
	unsigned char                                      UnknownData04[0x28];                                      // 0x09D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GAB_Spray_Generic.GAB_Spray_Generic_C.DefaultSprayMontage_F

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C");
		return ptr;
	}


	void GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender);
	void TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal);
	void OnMontageStartedPlaying();
	void ExecuteUbergraph_GAB_Spray_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
