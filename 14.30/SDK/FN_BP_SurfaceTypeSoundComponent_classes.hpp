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

// BlueprintGeneratedClass BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
// 0x006D (0x011D - 0x00B0)
class UBP_SurfaceTypeSoundComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, class USoundBase*> SoundMap;                                                 // 0x00C0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     Location;                                                 // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSurfaceTypeSet;                                         // 0x011C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C");
		
		return ptr;
	}


	void ActuallyPlaySound();
	void SetSurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType, class AActor* Actor);
	void PlaySound(const struct FVector& Location);
	void Test_Delay();
	void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
