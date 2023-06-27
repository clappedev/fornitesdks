#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Solaris.MathLibrary_Bool.logical_xor
// (Final, Native, Static, Public)
// Parameters:
// bool                               LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Bool::Logical_xor(bool LHS, bool RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Bool", "logical_xor");

	Params::UMathLibrary_Bool_Logical_xor_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Bool.logical_not
// (Final, Native, Static, Public)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Bool::Logical_not(bool Value)
{
	static auto Func = Class->GetFunction("MathLibrary_Bool", "logical_not");

	Params::UMathLibrary_Bool_Logical_not_Params Parms;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.Subtract
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Subtract(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "Subtract");

	Params::UMathLibrary_Int_Subtract_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.not_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Int::Not_equal(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "not_equal");

	Params::UMathLibrary_Int_Not_equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.negate
// (Final, Native, Static, Public)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Negate(int32 Value)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "negate");

	Params::UMathLibrary_Int_Negate_Params Parms;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.Multiply
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Multiply(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "Multiply");

	Params::UMathLibrary_Int_Multiply_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.min
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Min(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "min");

	Params::UMathLibrary_Int_Min_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.max
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Max(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "max");

	Params::UMathLibrary_Int_Max_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.less_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Int::Less_equal(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "less_equal");

	Params::UMathLibrary_Int_Less_equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.less
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Int::Less(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "less");

	Params::UMathLibrary_Int_Less_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Int::Greater_equal(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "greater_equal");

	Params::UMathLibrary_Int_Greater_equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.greater
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Int::Greater(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "greater");

	Params::UMathLibrary_Int_Greater_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Int::Equal(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "equal");

	Params::UMathLibrary_Int_Equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.Divide
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Divide(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "Divide");

	Params::UMathLibrary_Int_Divide_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.Add
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Add(int32 LHS, int32 RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "Add");

	Params::UMathLibrary_Int_Add_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Int.abs
// (Final, Native, Static, Public)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMathLibrary_Int::Abs(int32 Value)
{
	static auto Func = Class->GetFunction("MathLibrary_Int", "abs");

	Params::UMathLibrary_Int_Abs_Params Parms;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.Subtract
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Subtract(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "Subtract");

	Params::UMathLibrary_Real_Subtract_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.not_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Real::Not_equal(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "not_equal");

	Params::UMathLibrary_Real_Not_equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.negate
// (Final, Native, Static, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Negate(float Value)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "negate");

	Params::UMathLibrary_Real_Negate_Params Parms;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.Multiply
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Multiply(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "Multiply");

	Params::UMathLibrary_Real_Multiply_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.min
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Min(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "min");

	Params::UMathLibrary_Real_Min_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.max
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Max(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "max");

	Params::UMathLibrary_Real_Max_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.less_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Real::Less_equal(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "less_equal");

	Params::UMathLibrary_Real_Less_equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.less
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Real::Less(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "less");

	Params::UMathLibrary_Real_Less_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Real::Greater_equal(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "greater_equal");

	Params::UMathLibrary_Real_Greater_equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.greater
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Real::Greater(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "greater");

	Params::UMathLibrary_Real_Greater_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMathLibrary_Real::Equal(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "equal");

	Params::UMathLibrary_Real_Equal_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.Divide
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Divide(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "Divide");

	Params::UMathLibrary_Real_Divide_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.Add
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Add(float LHS, float RHS)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "Add");

	Params::UMathLibrary_Real_Add_Params Parms;
	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function Solaris.MathLibrary_Real.abs
// (Final, Native, Static, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMathLibrary_Real::Abs(float Value)
{
	static auto Func = Class->GetFunction("MathLibrary_Real", "abs");

	Params::UMathLibrary_Real_Abs_Params Parms;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
