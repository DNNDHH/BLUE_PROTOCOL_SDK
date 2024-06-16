#pragma once

 

// Package: BP_KeyConfigFunctionLibrary

#include "Basic.hpp"

#include "Config_KeyconfigItems_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "KeyAssignSet_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function BP_KeyConfigFunctionLibrary.BP_KeyConfigFunctionLibrary_C.IsWarningKey
// 0x04C8 (0x04C8 - 0x0000)
struct BP_KeyConfigFunctionLibrary_C_IsWarningKey final
{
public:
	struct FKey                                   InKey;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        KeyItemType;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWarning;                                        // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F4E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   WarningText;                                       // 0x0030(0x0018)(Parm, OutParm)
	bool                                          ValidMsg;                                          // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F4F[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKeyAssignSet                          KeyAssign;                                         // 0x0050(0x01E8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                           TableNames;                                        // 0x0238(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             DataTable;                                         // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_PadToKeyConfigKey_ReturnValue;            // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F50[0x2];                                     // 0x0256(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x025E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F51[0x1];                                     // 0x025F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_MouseToKeyConfigKey_ReturnValue;          // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F52[0x2];                                     // 0x0266(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Contains_ReturnValue_1;               // 0x026D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x026E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F53[0x1];                                     // 0x026F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0274(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_KeyToKeyConfigKey_ReturnValue;            // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F54[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0285(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F55[0x2];                                     // 0x0286(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F56[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02A0(0x0018)()
	bool                                          CallFunc_Key_IsMouseButton_ReturnValue;            // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Key_IsKeyboardKey_ReturnValue;            // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F57[0x1];                                     // 0x02BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_2;                         // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Contains_ReturnValue_2;               // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F58[0x5];                                     // 0x02C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x02C8(0x0010)(ReferenceParm)
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x02D8(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidKeyConfigWarnMsg_ReturnValue;        // 0x04C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KeyConfigFunctionLibrary_C_IsWarningKey) == 0x000008, "Wrong alignment on BP_KeyConfigFunctionLibrary_C_IsWarningKey");
static_assert(sizeof(BP_KeyConfigFunctionLibrary_C_IsWarningKey) == 0x0004C8, "Wrong size on BP_KeyConfigFunctionLibrary_C_IsWarningKey");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, InKey) == 0x000000, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::InKey' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, KeyItemType) == 0x000018, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::KeyItemType' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, __WorldContext) == 0x000020, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, bIsWarning) == 0x000028, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::bIsWarning' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, WarningText) == 0x000030, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::WarningText' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, ValidMsg) == 0x000048, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::ValidMsg' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, TextId) == 0x00004C, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::TextId' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, KeyAssign) == 0x000050, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::KeyAssign' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, TableNames) == 0x000238, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::TableNames' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, DataTable) == 0x000248, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::DataTable' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, Temp_int_Array_Index_Variable) == 0x000250, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_PadToKeyConfigKey_ReturnValue) == 0x000254, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_PadToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000255, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Find_Value) == 0x000258, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Find_ReturnValue) == 0x00025C, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Contains_ReturnValue) == 0x00025D, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_BooleanAND_ReturnValue) == 0x00025E, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, Temp_int_Loop_Counter_Variable) == 0x000260, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_MouseToKeyConfigKey_ReturnValue) == 0x000264, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_MouseToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000265, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Find_Value_1) == 0x000268, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Find_ReturnValue_1) == 0x00026C, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Contains_ReturnValue_1) == 0x00026D, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_BooleanAND_ReturnValue_1) == 0x00026E, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Add_IntInt_ReturnValue) == 0x000270, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Array_Get_Item) == 0x000274, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_KeyToKeyConfigKey_ReturnValue) == 0x00027C, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_KeyToKeyConfigKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Array_Length_ReturnValue) == 0x000280, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000284, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Less_IntInt_ReturnValue) == 0x000285, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_GetTextFromAsset_ReturnValue) == 0x000288, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Key_IsGamepadKey_ReturnValue) == 0x000298, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Key_IsGamepadKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Conv_StringToText_ReturnValue) == 0x0002A0, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Key_IsMouseButton_ReturnValue) == 0x0002B8, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Key_IsMouseButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Key_IsKeyboardKey_ReturnValue) == 0x0002B9, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Key_IsKeyboardKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002BA, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Find_Value_2) == 0x0002BC, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Find_ReturnValue_2) == 0x0002C0, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_Map_Contains_ReturnValue_2) == 0x0002C1, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_Map_Contains_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_BooleanAND_ReturnValue_2) == 0x0002C2, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0002C8, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_GetDataTableRowFromName_OutRow) == 0x0002D8, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0004C0, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KeyConfigFunctionLibrary_C_IsWarningKey, CallFunc_ValidKeyConfigWarnMsg_ReturnValue) == 0x0004C1, "Member 'BP_KeyConfigFunctionLibrary_C_IsWarningKey::CallFunc_ValidKeyConfigWarnMsg_ReturnValue' has a wrong offset!");

}

