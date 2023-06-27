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

// BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C
// 0x0018 (0x0E68 - 0x0E50)
class APBW_BP_Parent_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	TArray<class UStaticMesh*>                         StaticMeshAlternateArray;                                 // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C");
		return ptr;
	}


	void OnRep_Random_Chance();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBW_BP_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
