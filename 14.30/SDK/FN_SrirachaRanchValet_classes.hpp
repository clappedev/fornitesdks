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

// Class SrirachaRanchValet.StreamingRadioPlayerComponent_Valet
// 0x0000 (0x0380 - 0x0380)
class UStreamingRadioPlayerComponent_Valet : public UStreamingRadioPlayerComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SrirachaRanchValet.StreamingRadioPlayerComponent_Valet");
		
		return ptr;
	}


	void ValetVehicleExploded(class AFortDagwoodVehicle* Veh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
