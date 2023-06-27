// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemTencent.TssAntiComponent.ServerHandleDataFromClient
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UTssAntiComponent::ServerHandleDataFromClient(TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemTencent.TssAntiComponent.ServerHandleDataFromClient");

	UTssAntiComponent_ServerHandleDataFromClient_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemTencent.TssAntiComponent.ClientPlayerLogin
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UTssAntiComponent::ClientPlayerLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemTencent.TssAntiComponent.ClientPlayerLogin");

	UTssAntiComponent_ClientPlayerLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemTencent.TssAntiComponent.ClientHandleDataFromServer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<unsigned char>          Data                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UTssAntiComponent::ClientHandleDataFromServer(TArray<unsigned char> Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemTencent.TssAntiComponent.ClientHandleDataFromServer");

	UTssAntiComponent_ClientHandleDataFromServer_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
