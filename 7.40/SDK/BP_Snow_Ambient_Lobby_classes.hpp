#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x348 - 0x330)
// BlueprintGeneratedClass BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C
class ABP_Snow_Ambient_Lobby_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Snow_Ambient_Lobby;                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Snow_Ambient_Lobby_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateGameSettings();
	void ExecuteUbergraph_BP_Snow_Ambient_Lobby(int32 EntryPoint, bool CallFunc_IsActive_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
