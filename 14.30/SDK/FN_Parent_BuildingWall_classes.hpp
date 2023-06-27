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

// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
// 0x0018 (0x0CE8 - 0x0CD0)
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	struct FVector                                     BuildingBoundsMax;                                        // 0x0CD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BuildingBoundsMin;                                        // 0x0CDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
