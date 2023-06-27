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

// AnimBlueprintGeneratedClass DBNO_Carried_Simulation.DBNO_Carried_Simulation_C
// 0x0810 (0x0AD0 - 0x02C0)
class UDBNO_Carried_Simulation_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData                  AnimBlueprintClassSubsystem_PropertyAccess;               // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x02D0(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                    // 0x0300(0x0020)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x0320(0x0088)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                    // 0x03A8(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x03C8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x0468(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x0530(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x0558(0x00C8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                    // 0x0620(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                    // 0x0640(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x0660(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x0688(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x06A8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x06C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x06F0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x0718(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x0738(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x0758(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x0780(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x07A0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x07C0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x07E8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x0808(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x0828(0x0028)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2;                           // 0x0850(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x08F0(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x09B8(0x0028)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt;                             // 0x09E0(0x00A0)
	bool                                               Carried;                                                  // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A81(0x0007) MISSED OFFSET
	class APlayerPawn_Athena_C*                        CarrierPawn;                                              // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortPlayerAnimInstance*                     CarrierAnimBP;                                            // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LHandIKLocation;                                          // 0x0A98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LHandIKRotation;                                          // 0x0AA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TempAttachLocation;                                       // 0x0AB0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TempAttachRotation;                                       // 0x0ABC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortCustomBodyType>                   my_bodytype;                                              // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortCustomGender>                     my_gender;                                                // 0x0AC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMale;                                                   // 0x0ACA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortPlayerAnimBodyType                            my_animbodytype;                                          // 0x0ACB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                bodytype_int;                                             // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DBNO_Carried_Simulation.DBNO_Carried_Simulation_C");
		
		return ptr;
	}


	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_DBNO_Carried_Simulation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
