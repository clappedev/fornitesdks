#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
	Input                          = 0,
	Output                         = 1,
	Invalid                        = 2,
	ERigVMParameterType_MAX        = 3
};


// Enum RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
	Execute_0_Operands             = 0,
	Execute_1_Operands             = 1,
	Execute_2_Operands             = 2,
	Execute_3_Operands             = 3,
	Execute_4_Operands             = 4,
	Execute_5_Operands             = 5,
	Execute_6_Operands             = 6,
	Execute_7_Operands             = 7,
	Execute_8_Operands             = 8,
	Execute_9_Operands             = 9,
	Execute_10_Operands            = 10,
	Execute_11_Operands            = 11,
	Execute_12_Operands            = 12,
	Execute_13_Operands            = 13,
	Execute_14_Operands            = 14,
	Execute_15_Operands            = 15,
	Execute_16_Operands            = 16,
	Execute_17_Operands            = 17,
	Execute_18_Operands            = 18,
	Execute_19_Operands            = 19,
	Execute_20_Operands            = 20,
	Execute_21_Operands            = 21,
	Execute_22_Operands            = 22,
	Execute_23_Operands            = 23,
	Execute_24_Operands            = 24,
	Execute_25_Operands            = 25,
	Execute_26_Operands            = 26,
	Execute_27_Operands            = 27,
	Execute_28_Operands            = 28,
	Execute_29_Operands            = 29,
	Execute_30_Operands            = 30,
	Execute_31_Operands            = 31,
	Execute_32_Operands            = 32,
	Execute_33_Operands            = 33,
	Execute_34_Operands            = 34,
	Execute_35_Operands            = 35,
	Execute_36_Operands            = 36,
	Execute_37_Operands            = 37,
	Execute_38_Operands            = 38,
	Execute_39_Operands            = 39,
	Execute_40_Operands            = 40,
	Execute_41_Operands            = 41,
	Execute_42_Operands            = 42,
	Execute_43_Operands            = 43,
	Execute_44_Operands            = 44,
	Execute_45_Operands            = 45,
	Execute_46_Operands            = 46,
	Execute_47_Operands            = 47,
	Execute_48_Operands            = 48,
	Execute_49_Operands            = 49,
	Execute_50_Operands            = 50,
	Execute_51_Operands            = 51,
	Execute_52_Operands            = 52,
	Execute_53_Operands            = 53,
	Execute_54_Operands            = 54,
	Execute_55_Operands            = 55,
	Execute_56_Operands            = 56,
	Execute_57_Operands            = 57,
	Execute_58_Operands            = 58,
	Execute_59_Operands            = 59,
	Execute_60_Operands            = 60,
	Execute_61_Operands            = 61,
	Execute_62_Operands            = 62,
	Execute_63_Operands            = 63,
	Execute_64_Operands            = 64,
	Zero                           = 65,
	BoolFalse                      = 66,
	BoolTrue                       = 67,
	Copy                           = 68,
	Increment                      = 69,
	Decrement                      = 70,
	Equals                         = 71,
	NotEquals                      = 72,
	JumpAbsolute                   = 73,
	JumpForward                    = 74,
	JumpBackward                   = 75,
	JumpAbsoluteIf                 = 76,
	JumpForwardIf                  = 77,
	JumpBackwardIf                 = 78,
	ChangeType                     = 79,
	Exit                           = 80,
	Invalid                        = 81,
	ERigVMOpCode_MAX               = 82
};


// Enum RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
	Plain                          = 0,
	String                         = 1,
	Name                           = 2,
	Struct                         = 3,
	Invalid                        = 4,
	ERigVMRegisterType_MAX         = 5
};


// Enum RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
	Work                           = 0,
	Literal                        = 1,
	Invalid                        = 2,
	ERigVMMemoryType_MAX           = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RigVM.RigVMRegister
// 0x0024
struct FRigVMRegister
{
	ERigVMRegisterType                                 Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint32_t                                           ByteIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ElementSize;                                              // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ElementCount;                                             // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           SliceIndex;                                               // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           SliceCount;                                               // 0x000E(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignmentBytes;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0011(0x0001) MISSED OFFSET
	uint16_t                                           TrailingBytes;                                            // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ScriptStructIndex;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsArray;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMRegisterOffset
// 0x0038
struct FRigVMRegisterOffset
{
	TArray<int>                                        Segments;                                                 // 0x0000(0x0010) (ZeroConstructor)
	ERigVMRegisterType                                 Type;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       CPPType;                                                  // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UScriptStruct*                               ScriptStruct;                                             // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ScriptStructPath;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ElementSize;                                              // 0x0030(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMMemoryContainer
// 0x00A0
struct FRigVMMemoryContainer
{
	bool                                               bUseNameMap;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	ERigVMMemoryType                                   MemoryType;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FRigVMRegister>                      Registers;                                                // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FRigVMRegisterOffset>                RegisterOffsets;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class UScriptStruct*>                       ScriptStructs;                                            // 0x0038(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, int>                            NameMap;                                                  // 0x0048(0x0050) (Transient)
	bool                                               bEncounteredErrorDuringLoad;                              // 0x0098(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMByteCode
// 0x0010
struct FRigVMByteCode
{
	TArray<unsigned char>                              ByteCode;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct RigVM.RigVMInstruction
// 0x0010
struct FRigVMInstruction
{
	ERigVMOpCode                                       OpCode;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           ByteCodeIndex;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMInstructionArray
// 0x0010
struct FRigVMInstructionArray
{
	TArray<struct FRigVMInstruction>                   Instructions;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct RigVM.RigVMParameter
// 0x0030
struct FRigVMParameter
{
	ERigVMParameterType                                Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RegisterIndex;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CPPType;                                                  // 0x0010(0x0010) (ZeroConstructor)
	class UScriptStruct*                               ScriptStruct;                                             // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ScriptStructPath;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMExecuteContext
// 0x0010
struct FRigVMExecuteContext
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMStruct
// 0x0008
struct FRigVMStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct RigVM.RigVMOperand
// 0x0006
struct FRigVMOperand
{
	ERigVMMemoryType                                   MemoryType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           RegisterIndex;                                            // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           RegisterOffset;                                           // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMMemoryStatistics
// 0x000C
struct FRigVMMemoryStatistics
{
	uint32_t                                           RegisterCount;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           DataBytes;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           TotalBytes;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMByteCodeStatistics
// 0x0008
struct FRigVMByteCodeStatistics
{
	uint32_t                                           InstructionCount;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           DataBytes;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct RigVM.RigVMStatistics
// 0x002C
struct FRigVMStatistics
{
	uint32_t                                           BytesForCDO;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           BytesPerInstance;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRigVMMemoryStatistics                      LiteralMemory;                                            // 0x0008(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRigVMMemoryStatistics                      WorkMemory;                                               // 0x0014(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           BytesForCaching;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRigVMByteCodeStatistics                    ByteCode;                                                 // 0x0024(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
