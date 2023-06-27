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

// BlueprintGeneratedClass BP_Curie_IceBlock.BP_Curie_IceBlock_C
// 0x0030 (0x07F8 - 0x07C8)
class ABP_Curie_IceBlock_C : public AFortCurieBGA
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Shrink_Growth_BBC056E94CAD8AF5AAA8039EB9A8BD60;           // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Shrink__Direction_BBC056E94CAD8AF5AAA8039EB9A8BD60;       // 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Shrink;                                                   // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Growth_Growth_E5809E494ECFF24BA9FBF8959CC96B3B;           // 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Growth__Direction_E5809E494ECFF24BA9FBF8959CC96B3B;       // 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Growth;                                                   // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Curie_IceBlock.BP_Curie_IceBlock_C");
		
		return ptr;
	}


	void Growth__FinishedFunc();
	void Growth__UpdateFunc();
	void Shrink__FinishedFunc();
	void Shrink__UpdateFunc();
	void ReceiveBeginPlay();
	void HandleShrink();
	void ExecuteUbergraph_BP_Curie_IceBlock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
