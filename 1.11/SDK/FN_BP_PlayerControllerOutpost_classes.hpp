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

// BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
// 0x0019 (0x2999 - 0x2980)
class ABP_PlayerControllerOutpost_C : public AFortPlayerControllerOutpost
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2980(0x0008) (Transient, DuplicateTransient)
	class AOutpostStructureBase*                       NewVar_1;                                                 // 0x2988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOutpostStructureBase*                       NewVar_2;                                                 // 0x2990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               GetHelp;                                                  // 0x2998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C");
		return ptr;
	}


	void UserConstructionScript();
	void ServerStartExpandingOutpost(bool GetHelp);
	void ExecuteUbergraph_BP_PlayerControllerOutpost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
