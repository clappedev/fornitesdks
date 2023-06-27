#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// 0x00BC (0x0BCC - 0x0B10)
class AParent_Tree_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     Wind_Direction;                                           // 0x0B18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StormActive_;                                             // 0x0B24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DistanceFieldsEnabled_;                                   // 0x0B25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B26(0x0002) MISSED OFFSET
	struct FFortWindImpulseHandle                      WindHandle;                                               // 0x0B28(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugWind;                                                // 0x0B2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B2D(0x0003) MISSED OFFSET
	float                                              Debug_Wind_Intensity;                                     // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B44(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               SpawnWindFX_;                                             // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0B51(0x000F) MISSED OFFSET
	struct FTransform                                  WindFX_Transform;                                         // 0x0B60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WindFX_MaxDrawDistance;                                   // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B94(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    WindFX;                                                   // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LeafRadius;                                               // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeafCenter_Offset;                                        // 0x0BA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCylinder;                                              // 0x0BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BB1(0x0003) MISSED OFFSET
	float                                              Hue;                                                      // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindDirection;                                            // 0x0BB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundRadius;                                              // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundsHeight_CylinderOnly_;                               // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_Tree.Parent_Tree_C");
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
