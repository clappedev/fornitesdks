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

// BlueprintGeneratedClass Creative_Enabled_Component.Creative_Enabled_Component_C
// 0x00AB (0x0163 - 0x00B8)
class UCreative_Enabled_Component_C : public UCreative_DeviceComponent_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCreative_EnabledState                      EnabledState;                                             // 0x00C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Creative_Enabled_Component.Creative_Enabled_Component_C.On Enabled State Changed
	bool                                               EnabledDuringPlayMode;                                    // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnabledDuringEditMode;                                    // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00DA(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x00DA(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Creative_Enabled_Component.Creative_Enabled_Component_C.On Reset Complete
	struct FTimerHandle                                Reset_Timer;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x50];                                      // 0x00F8(0x0050) UNKNOWN PROPERTY: SetProperty Creative_Enabled_Component.Creative_Enabled_Component_C.IgnorePhases
	float                                              ResetDelay;                                               // 0x0148(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Enabled_Index;                                            // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can_be_Enabled_During_Edit_Mode;                          // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	class UFortMinigameLogicComponent*                 Logic_Component;                                          // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Switch_On_Phase_Change;                                   // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Switch_On_Play_Change;                                    // 0x0161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeEnabledDuringPreview;                                // 0x0162(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Creative_Enabled_Component.Creative_Enabled_Component_C");
		
		return ptr;
	}


	void Can_be_Enabled(bool* bTRUE);
	void OnRep_EIsEnabled();
	void IsResetting(bool* bTRUE, float* Remaining_Time);
	void Reset_Delay_Start(float Delay);
	void Reset_Delay_Complete();
	void Set_Enabled_on_Play_Mode(bool Play_Mode);
	void Set_Enabled(bool bEnabled);
	void IsEnabled(bool* Enabled);
	void Set_Enabled_on_Phase(EFortMinigameState State, int EnabledIndex);
	void Initialize_Component(class UFortMinigameLogicComponent* Logic_Component, int Enabled_Index);
	void Bind_to_Minigame(class AFortMinigame* Minigame);
	void Minigame_State_Changed(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void Minigame_Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void ExecuteUbergraph_Creative_Enabled_Component(int EntryPoint);
	void On_Reset_Complete__DelegateSignature();
	void On_Enabled_State_Changed__DelegateSignature(bool Enabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
