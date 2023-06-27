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

// BlueprintGeneratedClass B_CameraLens_SpookyMist_Dive.B_CameraLens_SpookyMist_Dive_C
// 0x001C (0x031C - 0x0300)
class AB_CameraLens_SpookyMist_Dive_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      VelocityActor;                                            // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetRot;                                                // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraLens_SpookyMist_Dive.B_CameraLens_SpookyMist_Dive_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_SpookyMist_Dive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
