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

// BlueprintGeneratedClass Turntable.SunDirectionandColorSet_C
// 0x0044 (0x0284 - 0x0240)
class ASunDirectionandColorSet_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     SunLightVector;                                           // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SunLightColor;                                            // 0x0264(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMaterialParameterInfo                      Material_COllection;                                      // 0x0274(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Turntable.SunDirectionandColorSet_C");
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
