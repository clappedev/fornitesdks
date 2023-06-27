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

// Function UACCommon.UACNetComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Packet                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUACNetComponent::SendPacketToServer(unsigned char Type, TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UACCommon.UACNetComponent.SendPacketToServer");

	UUACNetComponent_SendPacketToServer_Params params;
	params.Type = Type;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UACCommon.UACNetComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// unsigned char                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Packet                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUACNetComponent::SendPacketToClient(unsigned char Type, TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UACCommon.UACNetComponent.SendPacketToClient");

	UUACNetComponent_SendPacketToClient_Params params;
	params.Type = Type;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UACCommon.UACNetComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)

void UUACNetComponent::SendClientHello()
{
	static auto fn = UObject::FindObject<UFunction>("Function UACCommon.UACNetComponent.SendClientHello");

	UUACNetComponent_SendClientHello_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
