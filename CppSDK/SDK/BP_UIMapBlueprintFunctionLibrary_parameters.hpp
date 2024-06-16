#pragma once

 

// Package: BP_UIMapBlueprintFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsEnableFieldStatus
// 0x0098 (0x0098 - 0x0000)
struct BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus final
{
public:
	struct FDataTableRowHandle                    InFieldStatusDataTable;                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BF0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFieldStatusSetting                  FieldStatusSetting;                                // 0x0020(0x0020)(Edit, BlueprintVisible)
	class FName                                   RowName;                                           // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             DataTable;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBFieldStatusSetting                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFieldStatus                                  CallFunc_EvaluateFieldStatus_ReturnValue;          // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus) == 0x000008, "Wrong alignment on BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus");
static_assert(sizeof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus) == 0x000098, "Wrong size on BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, InFieldStatusDataTable) == 0x000000, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::InFieldStatusDataTable' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, __WorldContext) == 0x000010, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, IsEnable) == 0x000018, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::IsEnable' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, FieldStatusSetting) == 0x000020, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::FieldStatusSetting' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, RowName) == 0x000040, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::RowName' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, DataTable) == 0x000048, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::DataTable' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_Conv_NameToString_ReturnValue) == 0x000050, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000090, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_EvaluateFieldStatus_ReturnValue) == 0x000092, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_EvaluateFieldStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000093, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000094, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus, CallFunc_BooleanAND_ReturnValue) == 0x000095, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsViewHUDQuest
// 0x00E8 (0x00E8 - 0x0000)
struct BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BF1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BF2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CheckList;                                         // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BF3[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterQuestSetting               CallFunc_GetQuestSetting_ReturnValue;              // 0x0030(0x0038)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BF4[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BF5[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_AcceptedQuestInfo;  // 0x0080(0x0060)()
	bool                                          CallFunc_FindAcceptedQuestData_Exist;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest) == 0x000008, "Wrong alignment on BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest");
static_assert(sizeof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest) == 0x0000E8, "Wrong size on BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, QuestIndex) == 0x000000, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, __WorldContext) == 0x000008, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, Result) == 0x000010, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::Result' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CheckList) == 0x000018, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CheckList' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_GetQuestSetting_ReturnValue) == 0x000030, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_GetQuestSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, Temp_bool_True_if_break_was_hit_Variable) == 0x000070, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_Not_PreBool_ReturnValue) == 0x000071, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_FindAcceptedQuestData_AcceptedQuestInfo) == 0x000080, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_FindAcceptedQuestData_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_FindAcceptedQuestData_Exist) == 0x0000E0, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_FindAcceptedQuestData_Exist' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_BooleanAND_ReturnValue) == 0x0000E1, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E2, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000E3, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000E4, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest, CallFunc_BooleanOR_ReturnValue) == 0x0000E5, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsPublicDungeonDirectWarp
// 0x0068 (0x0068 - 0x0000)
struct BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp final
{
public:
	ESBLocationInfoType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BF6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   LocationId;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BF7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BF8[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BF9[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BFA[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetWarpPoints_OutArray;                   // 0x0050(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp) == 0x000008, "Wrong alignment on BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp");
static_assert(sizeof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp) == 0x000068, "Wrong size on BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, Type) == 0x000000, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::Type' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, LocationId) == 0x000004, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::LocationId' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, __WorldContext) == 0x000010, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, IsOpen) == 0x000018, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::IsOpen' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_Conv_NameToString_ReturnValue) == 0x000028, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_Contains_ReturnValue) == 0x000039, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003A, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, K2Node_DynamicCast_AsSBPlayer_State) == 0x000040, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_GetWarpPoints_OutArray) == 0x000050, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_GetWarpPoints_OutArray' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_Array_Find_ReturnValue) == 0x000060, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000064, "Member 'BP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}

