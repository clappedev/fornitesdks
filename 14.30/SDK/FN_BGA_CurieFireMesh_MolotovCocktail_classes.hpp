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

// BlueprintGeneratedClass BGA_CurieFireMesh_MolotovCocktail.BGA_CurieFireMesh_MolotovCocktail_C
// 0x0020 (0x0870 - 0x0850)
class ABGA_CurieFireMesh_MolotovCocktail_C : public ABGA_GenericCurieFuel_Parent_C
{
public:
	struct FScalableFloat                              SelfPropagationFuelRowValue;                              // 0x0850(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_CurieFireMesh_MolotovCocktail.BGA_CurieFireMesh_MolotovCocktail_C");
		
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
