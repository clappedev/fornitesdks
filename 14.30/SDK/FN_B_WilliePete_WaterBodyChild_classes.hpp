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

// BlueprintGeneratedClass B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C
// 0x0010 (0x0F30 - 0x0F20)
class AB_WilliePete_WaterBodyChild_C : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Debug;                                                    // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_WilliePete_WaterBodyChild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
