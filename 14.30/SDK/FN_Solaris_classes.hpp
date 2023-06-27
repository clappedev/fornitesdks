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

// Class Solaris.SolarisArrayLibrary
// 0x0000 (0x0028 - 0x0028)
class USolarisArrayLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisArrayLibrary");
		
		return ptr;
	}


	int STATIC_Num(TArray<int> Array);
	void STATIC_Move(TArray<int> Target, TArray<int> Source);
	bool STATIC_IsValidIndex(TArray<int> Array, int Index);
	void STATIC_Empty(TArray<int> Array);
	bool STATIC_Contains(TArray<int> Array, int search_item);
	TArray<int> STATIC_Concat(TArray<int> Lhs, TArray<int> Rhs);
	int STATIC_Add(TArray<int> Array, int new_item);
};


// Class Solaris.SolarisGeneratedClass
// 0x0028 (0x0258 - 0x0230)
class USolarisGeneratedClass : public UClass
{
public:
	uint32_t                                           SolClassFlags;                                            // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	TArray<class UObject*>                             CoroClasses;                                              // 0x0238(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             TraitClasses;                                             // 0x0248(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisGeneratedClass");
		
		return ptr;
	}

};


// Class Solaris.SolarisMathLibrary_Bool
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Bool : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Bool");
		
		return ptr;
	}


	bool STATIC_logical_xor(bool Lhs, bool Rhs);
	bool STATIC_equal(bool Lhs, bool Rhs);
};


// Class Solaris.SolarisMathLibrary_Int
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Int : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Int");
		
		return ptr;
	}


	int STATIC_subtract_equals(int Rhs, int* Lhs);
	int STATIC_Subtract(int Lhs, int Rhs);
	bool STATIC_not_equal(int Lhs, int Rhs);
	int STATIC_negate(int Value);
	int STATIC_multiply_equals(int Rhs, int* Lhs);
	int STATIC_Multiply(int Lhs, int Rhs);
	int STATIC_min(int Lhs, int Rhs);
	int STATIC_max(int Lhs, int Rhs);
	bool STATIC_less_equal(int Lhs, int Rhs);
	bool STATIC_less(int Lhs, int Rhs);
	bool STATIC_greater_equal(int Lhs, int Rhs);
	bool STATIC_greater(int Lhs, int Rhs);
	bool STATIC_equal(int Lhs, int Rhs);
	int STATIC_divide_equals(int Rhs, int* Lhs);
	int STATIC_Divide(int Lhs, int Rhs);
	int STATIC_add_equals(int Rhs, int* Lhs);
	int STATIC_Add(int Lhs, int Rhs);
	int STATIC_abs(int Value);
};


// Class Solaris.SolarisMathLibrary_Float
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Float : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Float");
		
		return ptr;
	}


	float STATIC_subtract_equals(float Rhs, float* Lhs);
	float STATIC_Subtract(float Lhs, float Rhs);
	bool STATIC_not_equal(float Lhs, float Rhs);
	float STATIC_negate(float Value);
	float STATIC_multiply_equals(float Rhs, float* Lhs);
	float STATIC_Multiply(float Lhs, float Rhs);
	float STATIC_min(float Lhs, float Rhs);
	float STATIC_max(float Lhs, float Rhs);
	bool STATIC_less_equal(float Lhs, float Rhs);
	bool STATIC_less(float Lhs, float Rhs);
	bool STATIC_greater_equal(float Lhs, float Rhs);
	bool STATIC_greater(float Lhs, float Rhs);
	bool STATIC_equal(float Lhs, float Rhs);
	float STATIC_divide_equals(float Rhs, float* Lhs);
	float STATIC_Divide(float Lhs, float Rhs);
	float STATIC_assign(float Rhs, float* Lhs);
	float STATIC_add_equals(float Rhs, float* Lhs);
	float STATIC_Add(float Lhs, float Rhs);
	float STATIC_abs(float Value);
};


// Class Solaris.SolarisMathLibrary_String
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_String : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_String");
		
		return ptr;
	}


	bool STATIC_not_equal(const struct FString& Lhs, const struct FString& Rhs);
	bool STATIC_equal(const struct FString& Lhs, const struct FString& Rhs);
};


// Class Solaris.SolarisMathLibrary_Object
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Object : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Object");
		
		return ptr;
	}


	bool STATIC_not_equal(class UObject* Lhs, class UObject* Rhs);
	bool STATIC_equal(class UObject* Lhs, class UObject* Rhs);
};


// Class Solaris.SolarisMathLibrary_Enum
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Enum : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Enum");
		
		return ptr;
	}


	bool STATIC_not_equal(unsigned char Lhs, unsigned char Rhs);
	bool STATIC_equal(unsigned char Lhs, unsigned char Rhs);
};


// Class Solaris.SolarisGameSettings
// 0x0018 (0x0040 - 0x0028)
class USolarisGameSettings : public UObject
{
public:
	TArray<struct FString>                             Blacklist;                                                // 0x0028(0x0010) (ZeroConstructor, Config)
	int                                                MaxAllowedSize;                                           // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisGameSettings");
		
		return ptr;
	}

};


// Class Solaris.SolarisUtilLibrary
// 0x0000 (0x0028 - 0x0028)
class USolarisUtilLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Solaris.SolarisUtilLibrary");
		
		return ptr;
	}


	int STATIC_MakeUnsetOptional(class UObject* Property);
	bool STATIC_MakeOptionalFromValue(class UObject* Property, int Value);
	bool STATIC_IsOptionalSet(class UObject* Property, int Optional);
	bool STATIC_IsNonNullObject(class UObject* Object);
	class UObject* STATIC_InstantiateObject(class UObject* Type);
	bool STATIC_HasTrait(class UObject* Object, class UObject* TraitClass);
	int STATIC_GetOptionalValue(class UObject* Property, int Optional);
	class UObject* STATIC_GetClass(class UObject* Object);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
