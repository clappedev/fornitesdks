#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Solaris.SolarisArrayLibrary.Num
struct USolarisArrayLibrary_Num_Params
{
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisArrayLibrary.Move
struct USolarisArrayLibrary_Move_Params
{
	TArray<int>                                        Target;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Source;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Solaris.SolarisArrayLibrary.IsValidIndex
struct USolarisArrayLibrary_IsValidIndex_Params
{
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisArrayLibrary.Empty
struct USolarisArrayLibrary_Empty_Params
{
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Solaris.SolarisArrayLibrary.Contains
struct USolarisArrayLibrary_Contains_Params
{
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                search_item;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisArrayLibrary.Concat
struct USolarisArrayLibrary_Concat_Params
{
	TArray<int>                                        Lhs;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Rhs;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Solaris.SolarisArrayLibrary.Add
struct USolarisArrayLibrary_Add_Params
{
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                new_item;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Bool.logical_xor
struct USolarisMathLibrary_Bool_logical_xor_Params
{
	bool                                               Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Bool.equal
struct USolarisMathLibrary_Bool_equal_Params
{
	bool                                               Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.subtract_equals
struct USolarisMathLibrary_Int_subtract_equals_Params
{
	int                                                Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.Subtract
struct USolarisMathLibrary_Int_Subtract_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.not_equal
struct USolarisMathLibrary_Int_not_equal_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.negate
struct USolarisMathLibrary_Int_negate_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.multiply_equals
struct USolarisMathLibrary_Int_multiply_equals_Params
{
	int                                                Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.Multiply
struct USolarisMathLibrary_Int_Multiply_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.min
struct USolarisMathLibrary_Int_min_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.max
struct USolarisMathLibrary_Int_max_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.less_equal
struct USolarisMathLibrary_Int_less_equal_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.less
struct USolarisMathLibrary_Int_less_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.greater_equal
struct USolarisMathLibrary_Int_greater_equal_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.greater
struct USolarisMathLibrary_Int_greater_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.equal
struct USolarisMathLibrary_Int_equal_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.divide_equals
struct USolarisMathLibrary_Int_divide_equals_Params
{
	int                                                Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.Divide
struct USolarisMathLibrary_Int_Divide_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.add_equals
struct USolarisMathLibrary_Int_add_equals_Params
{
	int                                                Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.Add
struct USolarisMathLibrary_Int_Add_Params
{
	int                                                Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Int.abs
struct USolarisMathLibrary_Int_abs_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.subtract_equals
struct USolarisMathLibrary_Float_subtract_equals_Params
{
	float                                              Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.Subtract
struct USolarisMathLibrary_Float_Subtract_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.not_equal
struct USolarisMathLibrary_Float_not_equal_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.negate
struct USolarisMathLibrary_Float_negate_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.multiply_equals
struct USolarisMathLibrary_Float_multiply_equals_Params
{
	float                                              Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.Multiply
struct USolarisMathLibrary_Float_Multiply_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.min
struct USolarisMathLibrary_Float_min_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.max
struct USolarisMathLibrary_Float_max_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.less_equal
struct USolarisMathLibrary_Float_less_equal_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.less
struct USolarisMathLibrary_Float_less_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.greater_equal
struct USolarisMathLibrary_Float_greater_equal_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.greater
struct USolarisMathLibrary_Float_greater_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.equal
struct USolarisMathLibrary_Float_equal_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.divide_equals
struct USolarisMathLibrary_Float_divide_equals_Params
{
	float                                              Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.Divide
struct USolarisMathLibrary_Float_Divide_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.assign
struct USolarisMathLibrary_Float_assign_Params
{
	float                                              Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.add_equals
struct USolarisMathLibrary_Float_add_equals_Params
{
	float                                              Lhs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.Add
struct USolarisMathLibrary_Float_Add_Params
{
	float                                              Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Float.abs
struct USolarisMathLibrary_Float_abs_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_String.not_equal
struct USolarisMathLibrary_String_not_equal_Params
{
	struct FString                                     Lhs;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Rhs;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_String.equal
struct USolarisMathLibrary_String_equal_Params
{
	struct FString                                     Lhs;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Rhs;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Object.not_equal
struct USolarisMathLibrary_Object_not_equal_Params
{
	class UObject*                                     Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Object.equal
struct USolarisMathLibrary_Object_equal_Params
{
	class UObject*                                     Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Enum.not_equal
struct USolarisMathLibrary_Enum_not_equal_Params
{
	unsigned char                                      Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisMathLibrary_Enum.equal
struct USolarisMathLibrary_Enum_equal_Params
{
	unsigned char                                      Lhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Rhs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.MakeUnsetOptional
struct USolarisUtilLibrary_MakeUnsetOptional_Params
{
	class UObject*                                     Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.MakeOptionalFromValue
struct USolarisUtilLibrary_MakeOptionalFromValue_Params
{
	class UObject*                                     Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.IsOptionalSet
struct USolarisUtilLibrary_IsOptionalSet_Params
{
	class UObject*                                     Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Optional;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.IsNonNullObject
struct USolarisUtilLibrary_IsNonNullObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.InstantiateObject
struct USolarisUtilLibrary_InstantiateObject_Params
{
	class UObject*                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.HasTrait
struct USolarisUtilLibrary_HasTrait_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TraitClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.GetOptionalValue
struct USolarisUtilLibrary_GetOptionalValue_Params
{
	class UObject*                                     Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Optional;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Solaris.SolarisUtilLibrary.GetClass
struct USolarisUtilLibrary_GetClass_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
