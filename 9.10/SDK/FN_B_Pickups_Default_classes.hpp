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

// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
// 0x001F (0x04C0 - 0x04A1)
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Background;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C");
		return ptr;
	}


	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid);
	void Setup_Light();
	void UserConstructionScript();
	void Randomize_Mesh_Rotation_for_BR();
	void OnTossed();
	void OnPickedUp();
	void ExecuteUbergraph_B_Pickups_Default(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
