#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusPickupManager_BuildMode_C::UpdateKeybinds()
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "UpdateKeybinds");

	Params::UBacchusPickupManager_BuildMode_C_UpdateKeybinds_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.RefreshCounts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentUpdateTime                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusPickupManager_BuildMode_C::RefreshCounts(float CurrentUpdateTime, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue)
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "RefreshCounts");

	Params::UBacchusPickupManager_BuildMode_C_RefreshCounts_Params Parms;
	Parms.CurrentUpdateTime = CurrentUpdateTime;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBacchusPickupManager_BuildMode_C::Construct()
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "Construct");

	Params::UBacchusPickupManager_BuildMode_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusPickupManager_BuildMode_C::HandleWorldItemsChanged()
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "HandleWorldItemsChanged");

	Params::UBacchusPickupManager_BuildMode_C_HandleWorldItemsChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>      ItemsAdded                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      ItemsRemoved                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBacchusPickupManager_BuildMode_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "HandleWorldItemListChanged");

	Params::UBacchusPickupManager_BuildMode_C_HandleWorldItemListChanged_Params Parms;
	Parms.ItemsAdded = ItemsAdded;
	Parms.ItemsRemoved = ItemsRemoved;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleBuildingMaterialChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusPickupManager_BuildMode_C::HandleBuildingMaterialChanged()
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "HandleBuildingMaterialChanged");

	Params::UBacchusPickupManager_BuildMode_C_HandleBuildingMaterialChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.HandleItemPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusPickupManager_BuildMode_C::HandleItemPickup(class UFortWorldItem* NewItem, int32 Count)
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "HandleItemPickup");

	Params::UBacchusPickupManager_BuildMode_C_HandleItemPickup_Params Parms;
	Parms.NewItem = NewItem;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBacchusPickupManager_BuildMode_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "PreConstruct");

	Params::UBacchusPickupManager_BuildMode_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BacchusPickupManager_BuildMode.BacchusPickupManager_BuildMode_C.ExecuteUbergraph_BacchusPickupManager_BuildMode
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsAdded                                    (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>      K2Node_CustomEvent_ItemsRemoved                                  (ConstParm, ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItem*              K2Node_CustomEvent_NewItem                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Count                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBacchusPickupManager_BuildMode_C::ExecuteUbergraph_BacchusPickupManager_BuildMode(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue2, class UFortWorldItem* K2Node_CustomEvent_NewItem, int32 K2Node_CustomEvent_Count, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("BacchusPickupManager_BuildMode_C", "ExecuteUbergraph_BacchusPickupManager_BuildMode");

	Params::UBacchusPickupManager_BuildMode_C_ExecuteUbergraph_BacchusPickupManager_BuildMode_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ItemsAdded = K2Node_CustomEvent_ItemsAdded;
	Parms.K2Node_CustomEvent_ItemsRemoved = K2Node_CustomEvent_ItemsRemoved;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CustomEvent_NewItem = K2Node_CustomEvent_NewItem;
	Parms.K2Node_CustomEvent_Count = K2Node_CustomEvent_Count;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
