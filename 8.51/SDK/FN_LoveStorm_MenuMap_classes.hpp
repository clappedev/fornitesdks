#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoveStorm_MenuMap.LoveStorm_MenuMap_C
// 0x0010 (0x0268 - 0x0258)
class ALoveStorm_MenuMap_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASoldierMannequin_Male_C*                    hr0010DarkCupid_ExecuteUbergraph_LoveStorm_MenuMap_RefProperty;// 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LoveStorm_MenuMap.LoveStorm_MenuMap_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_LoveStorm_MenuMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
