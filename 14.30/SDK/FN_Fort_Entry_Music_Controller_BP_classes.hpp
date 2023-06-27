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

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0048 (0x0268 - 0x0220)
class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Enter_Menu_Loop;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MenuMusic_B;                                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MenuMusic_A;                                              // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LoginMusic;                                               // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class USoundBase*                                  CurrentMusic;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Music_Activate_Override;                               // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UAthenaMusicPackItemDefinition*              MusicPackToPlayLater;                                     // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C");
		
		return ptr;
	}


	void Change_Music(class USoundBase* New_Music, float StartTime);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void MakeNextMusicPackStartFromBeginning();
	void DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* MusicPackToPlayLater);
	void ClearDelayedPlayMusicPack();
	void PlayEquippedMusicPack();
	void StartMusic();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
