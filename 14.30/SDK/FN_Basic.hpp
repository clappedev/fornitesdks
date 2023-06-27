#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

std::string GetById(int id);

class UObject;

class FUObjectItem
{
public:
	UObject* Object;
	int32_t Flags;
	int32_t ClusterIndex;
	int32_t SerialNumber;
	char padding[0x4];

	enum class ObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

	inline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}
};

class PreFUObjectItem
{
public:
	FUObjectItem* FUObject[10];
};

class TUObjectArray
{
public:
	inline void NumChunks(int *start, int *end) const
	{
		int cStart = 0, cEnd = 0;

		if (!cEnd)
		{
			//find where chunks start
			while (1)
			{
				if (Objects->FUObject[cStart] == 0)
				{
					cStart++;
				}
				else
				{
					break;
				}
			}

			cEnd = cStart;
			//find where chunks end
			while (1)
			{
				if (Objects->FUObject[cEnd] == 0)
				{
					break;
				}
				else
				{
					cEnd++;
				}
			}
		}

		*start = cStart;
		*end = cEnd;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		int cStart = 0, cEnd = 0;
		int chunkIndex = 0, chunkSize = 0xFFFF, chunkPos;
		FUObjectItem* Object;

		NumChunks(&cStart, &cEnd);

		chunkIndex = index / chunkSize;
		//this is so it stays in the previous chunk when the sizes are the same
		if (chunkSize * chunkIndex != 0 && 
			chunkSize * chunkIndex == index)
		{
			chunkIndex--;
		}

		chunkPos = cStart + chunkIndex;
		if (chunkPos < cEnd)
		{
			Object = Objects->FUObject[chunkPos] + (index - chunkSize * chunkIndex);
			if (!Object) { return NULL; }

			return Object->Object;
		}

		return nullptr;
	}

	inline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		int cStart = 0, cEnd = 0;
		int chunkIndex = 0, chunkSize = 0xFFFF, chunkPos;
		FUObjectItem* Object;

		NumChunks(&cStart, &cEnd);

		chunkIndex = index / chunkSize;
		//this is so it stays in the previous chunk when the sizes are the same
		if (chunkSize * chunkIndex != 0 && 
			chunkSize * chunkIndex == index)
		{
			chunkIndex--;
		}

		chunkPos = cStart + chunkIndex;
		if (chunkPos < cEnd)
		{
			Object = Objects->FUObject[chunkPos] + (index - chunkSize * chunkIndex);
			if (!Object) { return NULL; }

			return Object;
		}

		return nullptr;
	}

	inline int32_t Num() const
	{
		return NumElements;
	}

private:
	PreFUObjectItem* Objects;
	char padding[8];
	int32_t MaxElements;
	int32_t NumElements;
};

class FUObjectArray
{
public:
	//int32_t ObjFirstGCIndex;
	//int32_t ObjLastNonGCIndex;
	//int32_t MaxObjectsNotConsideredByGC;
	//int32_t OpenForDisregardForGC;
	TUObjectArray ObjObjects;
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

private:
	T* Data;
	int32_t Count;
	int32_t Max;
};

struct FName
{
	union
	{
		struct
		{
			int32_t ComparisonIndex;
			int32_t Number;
		};

		uint64_t CompositeComparisonValue;
	};

	inline FName()
		: ComparisonIndex(0),
		  Number(0)
	{
	};

	inline FName(int32_t i)
		: ComparisonIndex(i),
		  Number(0)
	{
	};

	inline std::string GetName() const
	{
		return GetById(ComparisonIndex);
	};

	inline bool operator==(const FName &other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	};
};

struct FString : private TArray<wchar_t>
{
	inline FString()
	{
	};

	inline FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{

		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

class FTextData {
public:
	char pad_0x0000[0x28];  //0x0000
	wchar_t* Name;          //0x0028 
	__int32 Length;         //0x0030 
};

struct FText {
	FTextData* Data;
	char UnknownData[0x10];

	wchar_t* GetText() const {
		if (Data)
			return Data->Name;

		return nullptr;
	}
};

struct FScriptDelegate
{
	char UnknownData[16];
};

struct FScriptMulticastDelegate
{
	char UnknownData[16];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
