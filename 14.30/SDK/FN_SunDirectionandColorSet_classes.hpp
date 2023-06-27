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

// BlueprintGeneratedClass SunDirectionandColorSet.SunDirectionandColorSet_C
// 0x0044 (0x0264 - 0x0220)
class ASunDirectionandColorSet_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     SunLightVector;                                           // 0x0238(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SunLightColor;                                            // 0x0244(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMaterialParameterInfo                      Material_COllection;                                      // 0x0254(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SunDirectionandColorSet.SunDirectionandColorSet_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SunDirectionandColorSet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
