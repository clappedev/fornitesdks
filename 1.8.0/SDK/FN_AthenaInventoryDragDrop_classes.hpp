#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AthenaInventoryDragDrop.AthenaInventoryDragDrop_C
// 0x0001 (0x0089 - 0x0088)
class UAthenaInventoryDragDrop_C : public UDragDropOperation
{
public:
	bool                                               SplitTheStack;                                            // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaInventoryDragDrop.AthenaInventoryDragDrop_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
