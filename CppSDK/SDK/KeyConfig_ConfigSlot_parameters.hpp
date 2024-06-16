#pragma once

 

// Package: KeyConfig_ConfigSlot

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "KeyAssignSet_structs.hpp"
#include "KeyConfigItemName_structs.hpp"
#include "KeyConfigType_structs.hpp"
#include "KeyInputMode_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ConvertBookMark
// 0x00B0 (0x00B0 - 0x0000)
struct KeyConfig_ConfigSlot_C_ConvertBookMark final
{
public:
	EConfig_KeyconfigItems                        ConfigType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBBookMarkerSlot                             Param_Slot;                                        // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61DF[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EConfig_KeyconfigItems, ESBBookMarkerSlot> TmpConfig2Slot;                                    // 0x0008(0x0050)(Edit, BlueprintVisible)
	TMap<EConfig_KeyconfigItems, ESBBookMarkerSlot> K2Node_MakeMap_Map;                                // 0x0058(0x0050)()
	ESBBookMarkerSlot                             CallFunc_Map_Find_Value;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_ConvertBookMark) == 0x000008, "Wrong alignment on KeyConfig_ConfigSlot_C_ConvertBookMark");
static_assert(sizeof(KeyConfig_ConfigSlot_C_ConvertBookMark) == 0x0000B0, "Wrong size on KeyConfig_ConfigSlot_C_ConvertBookMark");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ConvertBookMark, ConfigType) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_ConvertBookMark::ConfigType' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ConvertBookMark, bIsValid) == 0x000001, "Member 'KeyConfig_ConfigSlot_C_ConvertBookMark::bIsValid' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ConvertBookMark, Param_Slot) == 0x000002, "Member 'KeyConfig_ConfigSlot_C_ConvertBookMark::Param_Slot' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ConvertBookMark, TmpConfig2Slot) == 0x000008, "Member 'KeyConfig_ConfigSlot_C_ConvertBookMark::TmpConfig2Slot' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ConvertBookMark, K2Node_MakeMap_Map) == 0x000058, "Member 'KeyConfig_ConfigSlot_C_ConvertBookMark::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ConvertBookMark, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'KeyConfig_ConfigSlot_C_ConvertBookMark::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ConvertBookMark, CallFunc_Map_Find_ReturnValue) == 0x0000A9, "Member 'KeyConfig_ConfigSlot_C_ConvertBookMark::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.IsBookMarks
// 0x0220 (0x0220 - 0x0000)
struct KeyConfig_ConfigSlot_C_IsBookMarks final
{
public:
	EConfig_KeyconfigItems                        KeyConfigItems;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBookMark;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61E0[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61E1[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBookMarks_ReturnValue;                  // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBookMarks_ReturnValue_1;                // 0x021B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_IsBookMarks) == 0x000008, "Wrong alignment on KeyConfig_ConfigSlot_C_IsBookMarks");
static_assert(sizeof(KeyConfig_ConfigSlot_C_IsBookMarks) == 0x000220, "Wrong size on KeyConfig_ConfigSlot_C_IsBookMarks");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, KeyConfigItems) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::KeyConfigItems' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, IsBookMark) == 0x000001, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::IsBookMark' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, Temp_int_Array_Index_Variable) == 0x000004, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000010, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_Array_Get_Item) == 0x000024, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000218, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000219, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_IsBookMarks_ReturnValue) == 0x00021A, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_IsBookMarks_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_IsBookMarks_ReturnValue_1) == 0x00021B, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_IsBookMarks_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_IsBookMarks, CallFunc_BooleanOR_ReturnValue) == 0x00021C, "Member 'KeyConfig_ConfigSlot_C_IsBookMarks::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.GetItemStringId
// 0x0048 (0x0048 - 0x0000)
struct KeyConfig_ConfigSlot_C_GetItemStringId final
{
public:
	EConfig_KeyconfigItems                        Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61E2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61E3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61E4[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyConfigItemName                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_GetItemStringId) == 0x000008, "Wrong alignment on KeyConfig_ConfigSlot_C_GetItemStringId");
static_assert(sizeof(KeyConfig_ConfigSlot_C_GetItemStringId) == 0x000048, "Wrong size on KeyConfig_ConfigSlot_C_GetItemStringId");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, Type) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::Type' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, TextId) == 0x000004, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::TextId' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, Temp_int_Array_Index_Variable) == 0x000008, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000018, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_Array_Get_Item) == 0x00002C, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_GetDataTableRowFromName_OutRow) == 0x000038, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000040, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_GetItemStringId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'KeyConfig_ConfigSlot_C_GetItemStringId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetData
// 0x0020 (0x0020 - 0x0000)
struct KeyConfig_ConfigSlot_C_SetData final
{
public:
	struct FKeyConfigType                         ConfigData;                                        // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_SetData) == 0x000008, "Wrong alignment on KeyConfig_ConfigSlot_C_SetData");
static_assert(sizeof(KeyConfig_ConfigSlot_C_SetData) == 0x000020, "Wrong size on KeyConfig_ConfigSlot_C_SetData");
static_assert(offsetof(KeyConfig_ConfigSlot_C_SetData, ConfigData) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_SetData::ConfigData' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.CheckChanged
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_ConfigSlot_C_CheckChanged final
{
public:
	bool                                          Param_bChanged;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_CheckChanged) == 0x000001, "Wrong alignment on KeyConfig_ConfigSlot_C_CheckChanged");
static_assert(sizeof(KeyConfig_ConfigSlot_C_CheckChanged) == 0x000001, "Wrong size on KeyConfig_ConfigSlot_C_CheckChanged");
static_assert(offsetof(KeyConfig_ConfigSlot_C_CheckChanged, Param_bChanged) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_CheckChanged::Param_bChanged' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetKeyMouse
// 0x0002 (0x0002 - 0x0000)
struct KeyConfig_ConfigSlot_C_SetKeyMouse final
{
public:
	ESBKeyConfigKeyboardKey                       KeyboardKey;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          MouseKey;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_SetKeyMouse) == 0x000001, "Wrong alignment on KeyConfig_ConfigSlot_C_SetKeyMouse");
static_assert(sizeof(KeyConfig_ConfigSlot_C_SetKeyMouse) == 0x000002, "Wrong size on KeyConfig_ConfigSlot_C_SetKeyMouse");
static_assert(offsetof(KeyConfig_ConfigSlot_C_SetKeyMouse, KeyboardKey) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_SetKeyMouse::KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_SetKeyMouse, MouseKey) == 0x000001, "Member 'KeyConfig_ConfigSlot_C_SetKeyMouse::MouseKey' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetGamePadButton
// 0x0002 (0x0002 - 0x0000)
struct KeyConfig_ConfigSlot_C_SetGamePadButton final
{
public:
	ESBKeyConfigGamepadKey                        Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSwichLR;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_SetGamePadButton) == 0x000001, "Wrong alignment on KeyConfig_ConfigSlot_C_SetGamePadButton");
static_assert(sizeof(KeyConfig_ConfigSlot_C_SetGamePadButton) == 0x000002, "Wrong size on KeyConfig_ConfigSlot_C_SetGamePadButton");
static_assert(offsetof(KeyConfig_ConfigSlot_C_SetGamePadButton, Selection) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_SetGamePadButton::Selection' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_SetGamePadButton, bSwichLR) == 0x000001, "Member 'KeyConfig_ConfigSlot_C_SetGamePadButton::bSwichLR' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.KeyMouseChanged
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_ConfigSlot_C_KeyMouseChanged final
{
public:
	bool                                          Param_KeyMouseChanged;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_KeyMouseChanged) == 0x000001, "Wrong alignment on KeyConfig_ConfigSlot_C_KeyMouseChanged");
static_assert(sizeof(KeyConfig_ConfigSlot_C_KeyMouseChanged) == 0x000001, "Wrong size on KeyConfig_ConfigSlot_C_KeyMouseChanged");
static_assert(offsetof(KeyConfig_ConfigSlot_C_KeyMouseChanged, Param_KeyMouseChanged) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_KeyMouseChanged::Param_KeyMouseChanged' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.PadChanged
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_ConfigSlot_C_PadChanged final
{
public:
	bool                                          Param_PadChanged;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_PadChanged) == 0x000001, "Wrong alignment on KeyConfig_ConfigSlot_C_PadChanged");
static_assert(sizeof(KeyConfig_ConfigSlot_C_PadChanged) == 0x000001, "Wrong size on KeyConfig_ConfigSlot_C_PadChanged");
static_assert(offsetof(KeyConfig_ConfigSlot_C_PadChanged, Param_PadChanged) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_PadChanged::Param_PadChanged' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.SetRequireSetting
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_ConfigSlot_C_SetRequireSetting final
{
public:
	bool                                          bRequire;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_SetRequireSetting) == 0x000001, "Wrong alignment on KeyConfig_ConfigSlot_C_SetRequireSetting");
static_assert(sizeof(KeyConfig_ConfigSlot_C_SetRequireSetting) == 0x000001, "Wrong size on KeyConfig_ConfigSlot_C_SetRequireSetting");
static_assert(offsetof(KeyConfig_ConfigSlot_C_SetRequireSetting, bRequire) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_SetRequireSetting::bRequire' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ExecuteUbergraph_KeyConfig_ConfigSlot
// 0x0290 (0x0290 - 0x0000)
struct KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyInputMode                                 Temp_byte_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61E5[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyConfigType                         K2Node_CustomEvent_ConfigData;                     // 0x0020(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ConvertBookMark_bIsValid;                 // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBBookMarkerSlot                             CallFunc_ConvertBookMark_Slot;                     // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ConvertBookMark_bIsValid_1;               // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBBookMarkerSlot                             CallFunc_ConvertBookMark_Slot_1;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61E6[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMark_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBookMarks_IsBookMark;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61E7[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemStringId_TextId;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	bool                                          Temp_bool_Variable_11;                             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bChanged;                       // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigKeyboardKey                       K2Node_CustomEvent_KeyBoardKey;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          K2Node_CustomEvent_MouseKey;                       // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61E8[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyNameText_Mouse_DisplayText;         // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61E9[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyNameText_KB_DisplayText;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        K2Node_CustomEvent_Selection;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSwichLR;                       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61EA[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyNameText_Pad_DisplayText;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_KeyMouseChanged;                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61EB[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Select_Default_2;                           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_PadChanged;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61EC[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Select_Default_3;                           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61ED[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_Select_Default_4;                           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue_1;               // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x0116(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0117(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_5;                           // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bRequire;                       // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61EE[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyText_ReturnValue;                   // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_7;                           // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyText_ReturnValue_1;                 // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_8;                           // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyText_ReturnValue_2;                 // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0188(0x0018)()
	class FString                                 K2Node_Select_Default_9;                           // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_3;            // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_4;            // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyText_ReturnValue_3;                 // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyText_ReturnValue_4;                 // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_5;            // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_10;                          // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyText_ReturnValue_5;                 // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_11;                          // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_12;                          // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0230(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61EF[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0270(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot) == 0x000008, "Wrong alignment on KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot");
static_assert(sizeof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot) == 0x000290, "Wrong size on KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, EntryPoint) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable) == 0x000004, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_1) == 0x000005, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_2) == 0x000006, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_byte_Variable) == 0x000007, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_object_Variable) == 0x000008, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_3) == 0x000010, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_byte_Variable_1) == 0x000011, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_byte_Variable_2) == 0x000012, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_4) == 0x000013, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_5) == 0x000014, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_6) == 0x000015, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_7) == 0x000016, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_8) == 0x000017, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_9) == 0x000018, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_10) == 0x000019, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_ConfigData) == 0x000020, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_ConfigData' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Not_PreBool_ReturnValue_1) == 0x000041, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Not_PreBool_ReturnValue_2) == 0x000042, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_ConvertBookMark_bIsValid) == 0x000043, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_ConvertBookMark_bIsValid' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_ConvertBookMark_Slot) == 0x000044, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_ConvertBookMark_Slot' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_ConvertBookMark_bIsValid_1) == 0x000045, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_ConvertBookMark_bIsValid_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_ConvertBookMark_Slot_1) == 0x000046, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_ConvertBookMark_Slot_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetBookMark_ReturnValue) == 0x000048, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetBookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_IsBookMarks_IsBookMark) == 0x000058, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_IsBookMarks_IsBookMark' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetItemStringId_TextId) == 0x00005C, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetItemStringId_TextId' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_11) == 0x000088, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_bChanged) == 0x000089, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_bChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_KeyBoardKey) == 0x00008A, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_KeyBoardKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_MouseKey) == 0x00008B, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00008C, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetIsEnabled_ReturnValue) == 0x00008D, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyNameText_Mouse_DisplayText) == 0x000090, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyNameText_Mouse_DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_BooleanOR_ReturnValue) == 0x0000A0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000A1, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_BooleanAND_ReturnValue) == 0x0000A2, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default) == 0x0000A3, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyNameText_KB_DisplayText) == 0x0000A8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyNameText_KB_DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_1) == 0x0000B8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_Selection) == 0x0000C8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_Selection' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_bSwichLR) == 0x0000C9, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_bSwichLR' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_12) == 0x0000CA, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000CB, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyNameText_Pad_DisplayText) == 0x0000D0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyNameText_Pad_DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_KeyMouseChanged) == 0x0000E0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_KeyMouseChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_2) == 0x0000E8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_PadChanged) == 0x0000F0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_PadChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_3) == 0x0000F8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_SwitchEnum_CmpSuccess) == 0x000100, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_SwitchEnum_CmpSuccess_1) == 0x000101, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_4) == 0x000108, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetIsEnabled_ReturnValue_1) == 0x000111, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetIsEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000112, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000113, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000114, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000115, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, Temp_bool_Variable_13) == 0x000116, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_BooleanOR_ReturnValue_1) == 0x000117, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_BooleanOR_ReturnValue_2) == 0x000118, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_5) == 0x000119, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_BooleanOR_ReturnValue_3) == 0x00011A, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_CustomEvent_bRequire) == 0x00011B, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_CustomEvent_bRequire' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_6) == 0x00011C, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_MakeLiteralName_ReturnValue) == 0x000120, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyText_ReturnValue) == 0x000128, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000138, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_7) == 0x000140, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyText_ReturnValue_1) == 0x000150, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_MakeLiteralName_ReturnValue_2) == 0x000160, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_8) == 0x000168, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyText_ReturnValue_2) == 0x000178, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000188, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_9) == 0x0001A0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_MakeLiteralName_ReturnValue_3) == 0x0001B0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_MakeLiteralName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_MakeLiteralName_ReturnValue_4) == 0x0001B8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_MakeLiteralName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyText_ReturnValue_3) == 0x0001C0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyText_ReturnValue_4) == 0x0001D0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_MakeLiteralName_ReturnValue_5) == 0x0001E0, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_MakeLiteralName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_10) == 0x0001E8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetKeyText_ReturnValue_5) == 0x0001F8, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetKeyText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_11) == 0x000208, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_PlayAnimation_ReturnValue) == 0x000218, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, K2Node_Select_Default_12) == 0x000220, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000230, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_PlayAnimation_ReturnValue_1) == 0x000248, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Conv_StringToName_ReturnValue) == 0x000250, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000258, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000260, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000270, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000288, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot, CallFunc_BooleanAND_ReturnValue_1) == 0x000289, "Member 'KeyConfig_ConfigSlot_C_ExecuteUbergraph_KeyConfig_ConfigSlot::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Pad__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature final
{
public:
	EConfig_KeyconfigItems                        Param_KeyType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeyConfig_ConfigSlot_C*                Caller;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature) == 0x000008, "Wrong alignment on KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature");
static_assert(sizeof(KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature) == 0x000010, "Wrong size on KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature, Param_KeyType) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature::Param_KeyType' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature, Caller) == 0x000008, "Member 'KeyConfig_ConfigSlot_C_ButtonClicked_Pad__DelegateSignature::Caller' has a wrong offset!");

// Function KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C.ButtonClicked_Key__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature final
{
public:
	EConfig_KeyconfigItems                        Param_KeyType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeyConfig_ConfigSlot_C*                Caller;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature) == 0x000008, "Wrong alignment on KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature");
static_assert(sizeof(KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature) == 0x000010, "Wrong size on KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature, Param_KeyType) == 0x000000, "Member 'KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature::Param_KeyType' has a wrong offset!");
static_assert(offsetof(KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature, Caller) == 0x000008, "Member 'KeyConfig_ConfigSlot_C_ButtonClicked_Key__DelegateSignature::Caller' has a wrong offset!");

}

