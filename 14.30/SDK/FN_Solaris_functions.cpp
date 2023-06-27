// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Solaris.SolarisArrayLibrary.Num
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisArrayLibrary::STATIC_Num(TArray<int> Array)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Num");

	USolarisArrayLibrary_Num_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisArrayLibrary.Move
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Source                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USolarisArrayLibrary::STATIC_Move(TArray<int> Target, TArray<int> Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Move");

	USolarisArrayLibrary_Move_Params params;
	params.Target = Target;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solaris.SolarisArrayLibrary.IsValidIndex
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisArrayLibrary::STATIC_IsValidIndex(TArray<int> Array, int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.IsValidIndex");

	USolarisArrayLibrary_IsValidIndex_Params params;
	params.Array = Array;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisArrayLibrary.Empty
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USolarisArrayLibrary::STATIC_Empty(TArray<int> Array)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Empty");

	USolarisArrayLibrary_Empty_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Solaris.SolarisArrayLibrary.Contains
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            search_item                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisArrayLibrary::STATIC_Contains(TArray<int> Array, int search_item)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Contains");

	USolarisArrayLibrary_Contains_Params params;
	params.Array = Array;
	params.search_item = search_item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisArrayLibrary.Concat
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Lhs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Rhs                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> USolarisArrayLibrary::STATIC_Concat(TArray<int> Lhs, TArray<int> Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Concat");

	USolarisArrayLibrary_Concat_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisArrayLibrary.Add
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            new_item                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisArrayLibrary::STATIC_Add(TArray<int> Array, int new_item)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Add");

	USolarisArrayLibrary_Add_Params params;
	params.Array = Array;
	params.new_item = new_item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Bool.logical_xor
// (Final, Native, Static, Public)
// Parameters:
// bool                           Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Bool::STATIC_logical_xor(bool Lhs, bool Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Bool.logical_xor");

	USolarisMathLibrary_Bool_logical_xor_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Bool.equal
// (Final, Native, Static, Public)
// Parameters:
// bool                           Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Bool::STATIC_equal(bool Lhs, bool Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Bool.equal");

	USolarisMathLibrary_Bool_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.subtract_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_subtract_equals(int Rhs, int* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.subtract_equals");

	USolarisMathLibrary_Int_subtract_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Subtract
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_Subtract(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Subtract");

	USolarisMathLibrary_Int_Subtract_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.not_equal
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Int::STATIC_not_equal(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.not_equal");

	USolarisMathLibrary_Int_not_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.negate
// (Final, Native, Static, Public)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_negate(int Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.negate");

	USolarisMathLibrary_Int_negate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.multiply_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_multiply_equals(int Rhs, int* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.multiply_equals");

	USolarisMathLibrary_Int_multiply_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Multiply
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_Multiply(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Multiply");

	USolarisMathLibrary_Int_Multiply_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.min
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_min(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.min");

	USolarisMathLibrary_Int_min_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.max
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_max(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.max");

	USolarisMathLibrary_Int_max_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.less_equal
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Int::STATIC_less_equal(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.less_equal");

	USolarisMathLibrary_Int_less_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.less
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Int::STATIC_less(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.less");

	USolarisMathLibrary_Int_less_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Int::STATIC_greater_equal(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.greater_equal");

	USolarisMathLibrary_Int_greater_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.greater
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Int::STATIC_greater(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.greater");

	USolarisMathLibrary_Int_greater_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.equal
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Int::STATIC_equal(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.equal");

	USolarisMathLibrary_Int_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.divide_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_divide_equals(int Rhs, int* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.divide_equals");

	USolarisMathLibrary_Int_divide_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Divide
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_Divide(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Divide");

	USolarisMathLibrary_Int_Divide_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.add_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_add_equals(int Rhs, int* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.add_equals");

	USolarisMathLibrary_Int_add_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Add
// (Final, Native, Static, Public)
// Parameters:
// int                            Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_Add(int Lhs, int Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Add");

	USolarisMathLibrary_Int_Add_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.abs
// (Final, Native, Static, Public)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisMathLibrary_Int::STATIC_abs(int Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.abs");

	USolarisMathLibrary_Int_abs_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.subtract_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// float                          Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_subtract_equals(float Rhs, float* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.subtract_equals");

	USolarisMathLibrary_Float_subtract_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.Subtract
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_Subtract(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.Subtract");

	USolarisMathLibrary_Float_Subtract_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.not_equal
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Float::STATIC_not_equal(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.not_equal");

	USolarisMathLibrary_Float_not_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.negate
// (Final, Native, Static, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_negate(float Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.negate");

	USolarisMathLibrary_Float_negate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.multiply_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// float                          Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_multiply_equals(float Rhs, float* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.multiply_equals");

	USolarisMathLibrary_Float_multiply_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.Multiply
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_Multiply(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.Multiply");

	USolarisMathLibrary_Float_Multiply_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.min
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_min(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.min");

	USolarisMathLibrary_Float_min_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.max
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_max(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.max");

	USolarisMathLibrary_Float_max_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.less_equal
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Float::STATIC_less_equal(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.less_equal");

	USolarisMathLibrary_Float_less_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.less
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Float::STATIC_less(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.less");

	USolarisMathLibrary_Float_less_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Float::STATIC_greater_equal(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.greater_equal");

	USolarisMathLibrary_Float_greater_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.greater
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Float::STATIC_greater(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.greater");

	USolarisMathLibrary_Float_greater_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.equal
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Float::STATIC_equal(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.equal");

	USolarisMathLibrary_Float_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.divide_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// float                          Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_divide_equals(float Rhs, float* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.divide_equals");

	USolarisMathLibrary_Float_divide_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.Divide
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_Divide(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.Divide");

	USolarisMathLibrary_Float_Divide_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.assign
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// float                          Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_assign(float Rhs, float* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.assign");

	USolarisMathLibrary_Float_assign_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.add_equals
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// float                          Lhs                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_add_equals(float Rhs, float* Lhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.add_equals");

	USolarisMathLibrary_Float_add_equals_Params params;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lhs != nullptr)
		*Lhs = params.Lhs;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.Add
// (Final, Native, Static, Public)
// Parameters:
// float                          Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_Add(float Lhs, float Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.Add");

	USolarisMathLibrary_Float_Add_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Float.abs
// (Final, Native, Static, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USolarisMathLibrary_Float::STATIC_abs(float Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Float.abs");

	USolarisMathLibrary_Float_abs_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_String.not_equal
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Lhs                            (Parm, ZeroConstructor)
// struct FString                 Rhs                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_String::STATIC_not_equal(const struct FString& Lhs, const struct FString& Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_String.not_equal");

	USolarisMathLibrary_String_not_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_String.equal
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Lhs                            (Parm, ZeroConstructor)
// struct FString                 Rhs                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_String::STATIC_equal(const struct FString& Lhs, const struct FString& Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_String.equal");

	USolarisMathLibrary_String_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Object.not_equal
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Object::STATIC_not_equal(class UObject* Lhs, class UObject* Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Object.not_equal");

	USolarisMathLibrary_Object_not_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Object.equal
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Object::STATIC_equal(class UObject* Lhs, class UObject* Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Object.equal");

	USolarisMathLibrary_Object_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Enum.not_equal
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Enum::STATIC_not_equal(unsigned char Lhs, unsigned char Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Enum.not_equal");

	USolarisMathLibrary_Enum_not_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Enum.equal
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  Lhs                            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Rhs                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisMathLibrary_Enum::STATIC_equal(unsigned char Lhs, unsigned char Rhs)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Enum.equal");

	USolarisMathLibrary_Enum_equal_Params params;
	params.Lhs = Lhs;
	params.Rhs = Rhs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.MakeUnsetOptional
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Property                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisUtilLibrary::STATIC_MakeUnsetOptional(class UObject* Property)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.MakeUnsetOptional");

	USolarisUtilLibrary_MakeUnsetOptional_Params params;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.MakeOptionalFromValue
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Property                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisUtilLibrary::STATIC_MakeOptionalFromValue(class UObject* Property, int Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.MakeOptionalFromValue");

	USolarisUtilLibrary_MakeOptionalFromValue_Params params;
	params.Property = Property;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.IsOptionalSet
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Property                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Optional                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisUtilLibrary::STATIC_IsOptionalSet(class UObject* Property, int Optional)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.IsOptionalSet");

	USolarisUtilLibrary_IsOptionalSet_Params params;
	params.Property = Property;
	params.Optional = Optional;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.IsNonNullObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisUtilLibrary::STATIC_IsNonNullObject(class UObject* Object)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.IsNonNullObject");

	USolarisUtilLibrary_IsNonNullObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.InstantiateObject
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* USolarisUtilLibrary::STATIC_InstantiateObject(class UObject* Type)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.InstantiateObject");

	USolarisUtilLibrary_InstantiateObject_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.HasTrait
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 TraitClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USolarisUtilLibrary::STATIC_HasTrait(class UObject* Object, class UObject* TraitClass)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.HasTrait");

	USolarisUtilLibrary_HasTrait_Params params;
	params.Object = Object;
	params.TraitClass = TraitClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.GetOptionalValue
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Property                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Optional                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USolarisUtilLibrary::STATIC_GetOptionalValue(class UObject* Property, int Optional)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.GetOptionalValue");

	USolarisUtilLibrary_GetOptionalValue_Params params;
	params.Property = Property;
	params.Optional = Optional;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisUtilLibrary.GetClass
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* USolarisUtilLibrary::STATIC_GetClass(class UObject* Object)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Solaris.SolarisUtilLibrary.GetClass");

	USolarisUtilLibrary_GetClass_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
