#pragma once

 

// Package: BP_PlayerLevelStartSequenceActivateDungeon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon
// 0x03B0 (0x03B0 - 0x0000)
struct BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_CustomEvent_OutArray;                       // 0x0018(0x0010)(ConstParm, ReferenceParm)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B8[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<class FName>& OutArray)> K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91B9[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDungeonDisplayName_ReturnValue;        // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91BA[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0088(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91BB[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91BC[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91BD[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	TMap<class FName, struct FSBMapInfo>          CallFunc_GetMapInfoMap_ReturnValue;                // 0x0138(0x0050)(ConstParm)
	TArray<struct FSBMapInfo>                     CallFunc_Map_Values_Values;                        // 0x0188(0x0010)(ReferenceParm)
	struct FSBMapInfo                             CallFunc_Array_Get_Item_1;                         // 0x0198(0x01E0)()
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0384(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0385(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91BE[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x038C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91BF[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91C0[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon) == 0x0003B0, "Wrong size on BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, Temp_bool_True_if_break_was_hit_Variable) == 0x000008, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_IsStandalone_ReturnValue) == 0x00000A, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000B, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_CustomEvent_OutArray) == 0x000018, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_CustomEvent_OutArray' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_DynamicCast_AsSBPlayer_State) == 0x000028, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_GetDungeonDisplayName_ReturnValue) == 0x000058, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_GetDungeonDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_CustomEvent_Result) == 0x000080, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_MakeStruct_FormatArgumentData) == 0x000088, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_MakeArray_Array) == 0x0000C8, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Array_Length_ReturnValue_1) == 0x0000DC, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000E0, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000E8, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_GetMasterDataManager_IsValid) == 0x000110, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_GetMasterDataManager_ReturnValue) == 0x000118, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Format_ReturnValue) == 0x000120, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_GetMapInfoMap_ReturnValue) == 0x000138, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_GetMapInfoMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Map_Values_Values) == 0x000188, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Array_Get_Item_1) == 0x000198, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Array_Get_Item_2) == 0x000378, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Array_Length_ReturnValue_2) == 0x000380, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000384, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000385, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, Temp_int_Loop_Counter_Variable) == 0x000388, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, K2Node_CreateDelegate_OutputDelegate_1) == 0x00038C, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Less_IntInt_ReturnValue) == 0x00039C, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Add_IntInt_ReturnValue) == 0x0003A0, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_BooleanAND_ReturnValue) == 0x0003A4, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon, CallFunc_Create_ReturnValue) == 0x0003A8, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.DialogEnd
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd) == 0x000001, "Wrong alignment on BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd) == 0x000001, "Wrong size on BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd, Result) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd::Result' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.GetActiveDungeons
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons final
{
public:
	TArray<class FName>                           OutArray;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons");
static_assert(sizeof(BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons) == 0x000010, "Wrong size on BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons");
static_assert(offsetof(BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons, OutArray) == 0x000000, "Member 'BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons::OutArray' has a wrong offset!");

}

