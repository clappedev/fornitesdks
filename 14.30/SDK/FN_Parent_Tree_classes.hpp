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

// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// 0x00B4 (0x0C8C - 0x0BD8)
class AParent_Tree_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     Wind_Direction;                                           // 0x0BE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StormActive_;                                             // 0x0BEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DistanceFieldsEnabled_;                                   // 0x0BED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0BEE(0x0002) MISSED OFFSET
	struct FFortWindImpulseHandle                      WindHandle;                                               // 0x0BF0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugWind;                                                // 0x0BF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BF5(0x0003) MISSED OFFSET
	float                                              Debug_Wind_Intensity;                                     // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BFC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C0C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               SpawnWindFX_;                                             // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0C19(0x0007) MISSED OFFSET
	struct FTransform                                  WindFX_Transform;                                         // 0x0C20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WindFX_MaxDrawDistance;                                   // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0C54(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    WindFX;                                                   // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LeafRadius;                                               // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeafCenter_Offset;                                        // 0x0C64(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCylinder;                                              // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0C71(0x0003) MISSED OFFSET
	float                                              Hue;                                                      // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindDirection;                                            // 0x0C78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundRadius;                                              // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundsHeight_CylinderOnly_;                               // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Parent_Tree.Parent_Tree_C");
		
		return ptr;
	}


	void RemoveTestWind(float BlendTime);
	void UserConstructionScript();
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Parent_Tree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
