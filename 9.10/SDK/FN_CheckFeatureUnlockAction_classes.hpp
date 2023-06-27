#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CheckFeatureUnlockAction.CheckFeatureUnlockAction_C
// 0x0010 (0x02B0 - 0x02A0)
class ACheckFeatureUnlockAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckFeatureUnlockAction.CheckFeatureUnlockAction_C");
		return ptr;
	}


	void HandleFeatureUnlockClosed();
	void IsFeatureUnlockRunning(bool* bRunning);
	void IsFrontendDailyRewardsRunning(bool* IsRunning);
	void ShowFeatureUnlock();
	void IsFeatureUnlockAvailable(bool* Feature_Unlock_Available);
	void IsFrontEndRewardsRunning(bool* bRunning);
	void Execute(struct FFortScriptedActionParams Params);
	void ExecuteUbergraph_CheckFeatureUnlockAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
