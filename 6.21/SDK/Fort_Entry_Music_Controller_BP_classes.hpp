#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x39 (0x361 - 0x328)
// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       Enter_Lobby_Loop;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_B;                                       // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_A;                                       // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoginMusic;                                        // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CurrentMusic;                                      // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Lobby_Music_Activate;                           // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fort_Entry_Music_Controller_BP_C");
		return Clss;
	}

	void UserConstructionScript();
	void Change_Music(class USoundBase* New_Music);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void MakeNextMusicPackStartFromBeginning();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class UFortMusicContext* CallFunc_GetContext_ReturnValue, class USoundBase* K2Node_CustomEvent_New_Music1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class UFortMusicContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsPlaying_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
