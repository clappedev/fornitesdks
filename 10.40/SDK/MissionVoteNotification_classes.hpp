#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xC0 - 0xB0)
// BlueprintGeneratedClass MissionVoteNotification.MissionVoteNotification_C
class UMissionVoteNotification_C : public UFortMissionVoteUINotification
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerController*                 PlayerController;                                  // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionVoteNotification_C");
		return Clss;
	}

	void OnActionTaken();
	void ExecuteUbergraph_MissionVoteNotification(int32 EntryPoint, class UMissionActivationWidget_C* CallFunc_Create_ReturnValue, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
