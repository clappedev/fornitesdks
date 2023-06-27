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

// BlueprintGeneratedClass Frontend.Frontend_C
// 0x0018 (0x0250 - 0x0238)
class AFrontend_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               NewLobby;                                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;   // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Frontend.Frontend_C");
		
		return ptr;
	}


	void PlaySpeech(const struct FString& Filename, int SampleRate, class USoundWave* AssetFile);
	void OnMatchStarted();
	void EnableTutorial();
	void ExecuteUbergraph_Frontend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
