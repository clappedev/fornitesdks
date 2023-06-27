#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x348 - 0x338)
// BlueprintGeneratedClass WM_PinManager.WM_PinManager_C
class AWM_PinManager_C : public AWorldMapPinManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WM_PinManager_C");
		return Clss;
	}

	class AWorldMapPin* CreateWorldMapPin(const class FString& TheaterId, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortTheaterMapData& CallFunc_GetTheaterData_OutTheaterData, bool CallFunc_GetTheaterData_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AWorldMapPin* CallFunc_FinishSpawningActor_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WM_PinManager(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
