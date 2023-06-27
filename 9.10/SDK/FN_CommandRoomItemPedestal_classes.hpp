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

// BlueprintGeneratedClass CommandRoomItemPedestal.CommandRoomItemPedestal_C
// 0x0058 (0x0378 - 0x0320)
class ACommandRoomItemPedestal_C : public AFortCommandRoomPedestal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagQuery                           Animation_Tag_Query_Idle;                                 // 0x0330(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CommandRoomItemPedestal.CommandRoomItemPedestal_C");
		return ptr;
	}


	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_CommandRoomItemPedestal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
