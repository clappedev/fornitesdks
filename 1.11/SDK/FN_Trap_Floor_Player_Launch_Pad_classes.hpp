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

// BlueprintGeneratedClass Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C
// 0x0058 (0x0F18 - 0x0EC0)
class ATrap_Floor_Player_Launch_Pad_C : public AFortLauncherAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0EC0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Athena_LaunchPad_temp;                                  // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PlacementSoundLocation;                                   // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        S_Athena_Launchpad_Collision;                             // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TraceLocation;                                            // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Reload_Sound;                                        // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C");
		return ptr;
	}


	struct FTransform GetFireLocationAndRotation();
	void UserConstructionScript();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void TriggerLaunchEffects(class AFortPlayerPawnAthena** Pawn);
	void ExecuteUbergraph_Trap_Floor_Player_Launch_Pad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
