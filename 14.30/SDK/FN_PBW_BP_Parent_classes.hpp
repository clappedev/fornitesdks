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

// BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C
// 0x0018 (0x0CE8 - 0x0CD0)
class APBW_BP_Parent_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UStaticMesh*>                         StaticMeshAlternateArray;                                 // 0x0CD8(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C");
		
		return ptr;
	}


	void OnRep_Random_Chance();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBW_BP_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
