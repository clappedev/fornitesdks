#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x48 (0x370 - 0x328)
// BlueprintGeneratedClass DudeBro_VortexMeshes.DudeBro_VortexMeshes_C
class ADudeBro_VortexMeshes_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UAudioComponent*                       Music;                                             // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       RuneBeamImpact;                                    // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       RuneBeam;                                          // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbAudio;                                          // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Fade_down_Vertex_Lerp_3BDF5CC944D22E0A33BFC5BB5B85D031; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fade_down_Vertex__Direction_3BDF5CC944D22E0A33BFC5BB5B85D031; // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fade_down_Vertex;                                  // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DudeBro_VortexMeshes_C");
		return Clss;
	}

	void UpdateDrainAmount(float Amount, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void UpdateCachedTime(float Time, float RatioComplete);
	void UserConstructionScript();
	void Fade_down_Vertex__FinishedFunc();
	void Fade_down_Vertex__UpdateFunc();
	void ReceiveBeginPlay();
	void StopSounds();
	void On_Cube_Final_Crack();
	void ExecuteUbergraph_DudeBro_VortexMeshes(int32 EntryPoint, float CallFunc_Lerp_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
