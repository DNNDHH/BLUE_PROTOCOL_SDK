#pragma once

 

// Package: BP_PlayerLevelStartSequenceActivatePublicDungeon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon
// 0x01A0 (0x01A0 - 0x0000)
struct BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, TArray<class FString>& OutArray)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F43[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, bool Result)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3F44[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_CheckActivatedPubDng_ActivatedPubDng;     // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F45[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F46[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F47[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x00A4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_CustomEvent_OutArray;                       // 0x00A8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F48[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_NewDngID_return;                          // 0x00C0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDungeonDisplayName_ReturnValue;        // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F49[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0118(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F4A[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0160(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0170(0x0018)()
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F4B[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F4C[0x2];                                     // 0x0192(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0194(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidDxBattle_ReturnValue;                // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon) == 0x0001A0, "Wrong size on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_CheckActivatedPubDng_ActivatedPubDng) == 0x000030, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_CheckActivatedPubDng_ActivatedPubDng' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000044, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Create_ReturnValue) == 0x000048, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000050, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CustomEvent_Result_1) == 0x000078, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000080, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_DynamicCast_AsSBPlayer_State) == 0x000088, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000094, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CustomEvent_RetCode_1) == 0x0000A4, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CustomEvent_OutArray) == 0x0000A8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CustomEvent_OutArray' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_NewDngID_return) == 0x0000C0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_NewDngID_return' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_GetDungeonDisplayName_ReturnValue) == 0x0000E8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_GetDungeonDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Array_Length_ReturnValue_2) == 0x000110, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_MakeStruct_FormatArgumentData) == 0x000118, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000158, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_MakeArray_Array) == 0x000160, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Format_ReturnValue) == 0x000170, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_IsStandalone_ReturnValue) == 0x000188, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Array_Length_ReturnValue_3) == 0x00018C, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Not_PreBool_ReturnValue) == 0x000190, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000191, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CustomEvent_RetCode) == 0x000194, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, K2Node_CustomEvent_Result) == 0x000198, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon, CallFunc_ValidDxBattle_ReturnValue) == 0x000199, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon::CallFunc_ValidDxBattle_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.AddActivatedPublicDungeons
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons) == 0x000008, "Wrong size on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons, RetCode) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons::RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons, Result) == 0x000004, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons::Result' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.GetActivatedPublicDungeons
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OutArray;                                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons) == 0x000018, "Wrong size on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons, RetCode) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons::RetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons, OutArray) == 0x000008, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons::OutArray' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.DialogClose
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose::Result' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.CheckActivatedPubDng
// 0x0318 (0x0318 - 0x0000)
struct BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng final
{
public:
	TArray<class FName>                           ActivatedPubDng;                                   // 0x0000(0x0010)(Parm, OutParm)
	TArray<class FName>                           StabList;                                          // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           LRetId;                                            // 0x0020(0x0010)(Edit, BlueprintVisible)
	TMap<class FName, struct FSBMapInfo>          MapMaster;                                         // 0x0030(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4E[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4F[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMapInfo>                     CallFunc_Map_Values_Values;                        // 0x00A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F50[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_Array_Get_Item;                           // 0x00B8(0x01E0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x029D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F51[0x2];                                     // 0x029E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F52[0x1];                                     // 0x02B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCompletedDungeon_ReturnValue;           // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F53[0x5];                                     // 0x02BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FSBMapInfo>          CallFunc_GetMapInfoMap_ReturnValue;                // 0x02C8(0x0050)(ConstParm)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng) == 0x000318, "Wrong size on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, ActivatedPubDng) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::ActivatedPubDng' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, StabList) == 0x000010, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::StabList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, LRetId) == 0x000020, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::LRetId' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, MapMaster) == 0x000030, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::MapMaster' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, Temp_int_Array_Index_Variable) == 0x000080, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, K2Node_MakeArray_Array) == 0x000088, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_Map_Values_Values) == 0x0000A0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_Array_Length_ReturnValue) == 0x000298, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00029C, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_Less_IntInt_ReturnValue) == 0x00029D, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_Conv_NameToString_ReturnValue) == 0x0002A0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_IsEventTermActive_ReturnValue) == 0x0002B0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0002B1, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_BooleanOR_ReturnValue) == 0x0002B2, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_Array_Add_ReturnValue) == 0x0002B4, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_IsCompletedDungeon_ReturnValue) == 0x0002B8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_IsCompletedDungeon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_BooleanAND_ReturnValue) == 0x0002B9, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_GetMasterDataManager_IsValid) == 0x0002BA, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002C0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng, CallFunc_GetMapInfoMap_ReturnValue) == 0x0002C8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng::CallFunc_GetMapInfoMap_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.NewDngID
// 0x00E8 (0x00E8 - 0x0000)
struct BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID final
{
public:
	TArray<class FName>                           ClientCheckList;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         ServerList;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Return;                                            // 0x0020(0x0010)(Parm, OutParm)
	TArray<class FString>                         Ret;                                               // 0x0030(0x0010)(Edit, BlueprintVisible)
	bool                                          Flag;                                              // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F54[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ServerListBuf;                                     // 0x0048(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         ClientListBuf;                                     // 0x0058(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F55[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F56[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F57[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F58[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID) == 0x0000E8, "Wrong size on BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, ClientCheckList) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::ClientCheckList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, ServerList) == 0x000010, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::ServerList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Return) == 0x000020, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Return' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Ret) == 0x000030, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Ret' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Flag) == 0x000040, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Flag' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, ServerListBuf) == 0x000048, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::ServerListBuf' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, ClientListBuf) == 0x000058, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::ClientListBuf' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Temp_int_Array_Index_Variable) == 0x00006C, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Temp_int_Array_Index_Variable_1) == 0x000078, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Temp_int_Loop_Counter_Variable_1) == 0x00007C, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Temp_int_Array_Index_Variable_2) == 0x000088, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Get_Item) == 0x00008C, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Conv_NameToString_ReturnValue) == 0x000098, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Get_Item_2) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Add_ReturnValue) == 0x0000CC, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000D1, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Length_ReturnValue_2) == 0x0000D4, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, Temp_int_Loop_Counter_Variable_2) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Array_Add_ReturnValue_1) == 0x0000DC, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000E0, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000E4, "Member 'BP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

}

