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

// BlueprintGeneratedClass B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C
// 0x0024 (0x0304 - 0x02E0)
class AB_CameraLens_Lava_Bouncing_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Camera_Lava_Bouncing;                                   // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      VelocityActor;                                            // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetRot;                                                // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C");
		
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
