#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LoginCamera_Blueprint.LoginCamera_Blueprint_C
// 0x0018 (0x08F8 - 0x08E0)
class ALoginCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            LoginCamera_1;                                            // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LoginCamera_Blueprint.LoginCamera_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnActivated();
	void ExecuteUbergraph_LoginCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
