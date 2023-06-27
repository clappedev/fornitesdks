#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStopDebugging");

	Params::AReplicationGraphDebugActor_ServerStopDebugging_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStartDebugging");

	Params::AReplicationGraphDebugActor_ServerStartDebugging_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const class FString& Str)
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintAllActorInfo");

	Params::AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params Parms;
	Parms.Str = Str;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerCellInfo");

	Params::AReplicationGraphDebugActor_ServerCellInfo_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                     CellLocation                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CellExtent                                                       (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*>& Actors)
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ClientCellInfo");

	Params::AReplicationGraphDebugActor_ClientCellInfo_Params Parms;
	Parms.CellLocation = CellLocation;
	Parms.CellExtent = CellExtent;
	Parms.Actors = Actors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
