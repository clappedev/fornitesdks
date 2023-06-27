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

// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
// 0x002F (0x0268 - 0x0239)
class ATVPostProcessBPAthena_C : public ATVPostProcessBP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       FullScreenTVPP_OnlyMaterialModified;                      // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7;// 0x0250(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7;// 0x0254(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7;// 0x0258(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FrontEndCameraSwitchFadeAthena;                           // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C");
		
		return ptr;
	}


	void IsEnabledForCurrentSubgame(bool* bEnabled);
	void FrontEndCameraSwitchFadeAthena__FinishedFunc();
	void FrontEndCameraSwitchFadeAthena__UpdateFunc();
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();
	void ExecuteUbergraph_TVPostProcessBPAthena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
