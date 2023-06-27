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

// WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C
// 0x0031 (0x0269 - 0x0238)
class UAthenaTeamInfo_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                VerticalBoxSquadMembers;                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UAthenaTeamMemberInfo_C*>             SquadMembers;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAthenaTeamMemberInfo_C*>             DisconnectedSquadMembers;                                 // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAddFriendOptionsDisplayed;                               // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaTeamInfo.AthenaTeamInfo_C");
		return ptr;
	}


	void ClearSquadMembers();
	void HandleSquadMutedChanged(TArray<bool>* TeamMuted);
	void HandleSquadTalkingChanged(TArray<bool>* TeamTalking);
	void HandleSquadMemberRemoved();
	void HandleSquadRevivingChanged(TArray<bool>* TeamReviving);
	void HandleSquadMemberPlayerNamesChanged();
	void HandleSquadDeadChanged(TArray<bool>* TeamDead);
	void HandleSquadDBNOChanged(TArray<bool>* TeamDBNO);
	void HandleSquadMemberAdded();
	void HandleSquadHitInfoChanged(TArray<float>* HealthFractions, TArray<float>* ShieldFractions);
	void ClearContents();
	void AppendSquadMember(class AFortPlayerStateAthena* PlayerState, int PlayerIndex);
	void Construct();
	void HandlePartyLeft();
	void PreConstruct(bool* IsDesignTime);
	void RolloutAddFriend();
	void ExecuteUbergraph_AthenaTeamInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
