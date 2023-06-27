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

// BlueprintGeneratedClass Tracer_Shotgun.Tracer_Shotgun_C
// 0x0008 (0x02C0 - 0x02B8)
class ATracer_Shotgun_C : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tracer_Shotgun.Tracer_Shotgun_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tracer_Shotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
