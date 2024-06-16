#pragma once

 

// Package: KeyConfigNameFunction

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "KeyAssignSet_structs.hpp"
#include "InputCore_structs.hpp"
#include "NeedInputType_structs.hpp"


namespace SDK::Params
{

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameAsOperationMode
// 0x00E0 (0x00E0 - 0x0000)
struct KeyConfigNameFunction_C_GetKeyNameAsOperationMode final
{
public:
	ESBKeyConfigKeyboardKey                       KeyBoard;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        Gamepad;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseSuffix;                                         // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78FB[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          bUseSuffix;                                        // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78FC[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78FD[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyNameText_Pad_DisplayText;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyNameText_KB_DisplayText;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable_1;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78FE[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78FF[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7900[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7901[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_GetKeyNameAsOperationMode");
static_assert(sizeof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode) == 0x0000E0, "Wrong size on KeyConfigNameFunction_C_GetKeyNameAsOperationMode");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, KeyBoard) == 0x000000, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::KeyBoard' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, Gamepad) == 0x000001, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::Gamepad' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, UseSuffix) == 0x000002, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::UseSuffix' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, __WorldContext) == 0x000008, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, ReturnValue) == 0x000010, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, bUseSuffix) == 0x000020, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::bUseSuffix' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, TextId) == 0x000024, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::TextId' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, Temp_byte_Variable) == 0x000028, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_GetKeyNameText_Pad_DisplayText) == 0x000030, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_GetKeyNameText_Pad_DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_GetKeyNameText_KB_DisplayText) == 0x000040, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_GetKeyNameText_KB_DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, Temp_string_Variable) == 0x000050, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, Temp_byte_Variable_1) == 0x000060, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, Temp_int_Variable) == 0x000064, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, Temp_int_Variable_1) == 0x000068, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, Temp_int_Variable_2) == 0x00006C, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000070, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000078, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_GetOperateMode_ReturnValue) == 0x000080, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, K2Node_Select_Default) == 0x000088, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, K2Node_Select_Default_1) == 0x000098, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A0, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_SelectString_ReturnValue) == 0x0000B0, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, K2Node_MakeArray_Array) == 0x0000C0, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameAsOperationMode, CallFunc_JoinStringArray_ReturnValue) == 0x0000D0, "Member 'KeyConfigNameFunction_C_GetKeyNameAsOperationMode::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_KB
// 0x0048 (0x0048 - 0x0000)
struct KeyConfigNameFunction_C_GetKeyNameText_KB final
{
public:
	ESBKeyConfigKeyboardKey                       KeyType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7902[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DisplayText;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0020(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfigNameFunction_C_GetKeyNameText_KB) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_GetKeyNameText_KB");
static_assert(sizeof(KeyConfigNameFunction_C_GetKeyNameText_KB) == 0x000048, "Wrong size on KeyConfigNameFunction_C_GetKeyNameText_KB");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_KB, KeyType) == 0x000000, "Member 'KeyConfigNameFunction_C_GetKeyNameText_KB::KeyType' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_KB, __WorldContext) == 0x000008, "Member 'KeyConfigNameFunction_C_GetKeyNameText_KB::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_KB, DisplayText) == 0x000010, "Member 'KeyConfigNameFunction_C_GetKeyNameText_KB::DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_KB, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000020, "Member 'KeyConfigNameFunction_C_GetKeyNameText_KB::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_KB, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000038, "Member 'KeyConfigNameFunction_C_GetKeyNameText_KB::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Mouse
// 0x0048 (0x0048 - 0x0000)
struct KeyConfigNameFunction_C_GetKeyNameText_Mouse final
{
public:
	ESBKeyConfigMouseKey                          KeyType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7903[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DisplayText;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_MouseKeyToKey_ReturnValue;                // 0x0020(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfigNameFunction_C_GetKeyNameText_Mouse) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_GetKeyNameText_Mouse");
static_assert(sizeof(KeyConfigNameFunction_C_GetKeyNameText_Mouse) == 0x000048, "Wrong size on KeyConfigNameFunction_C_GetKeyNameText_Mouse");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Mouse, KeyType) == 0x000000, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Mouse::KeyType' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Mouse, __WorldContext) == 0x000008, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Mouse::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Mouse, DisplayText) == 0x000010, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Mouse::DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Mouse, CallFunc_MouseKeyToKey_ReturnValue) == 0x000020, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Mouse::CallFunc_MouseKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Mouse, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000038, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Mouse::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Pad
// 0x0048 (0x0048 - 0x0000)
struct KeyConfigNameFunction_C_GetKeyNameText_Pad final
{
public:
	ESBKeyConfigGamepadKey                        KeyType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7904[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DisplayText;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x0020(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfigNameFunction_C_GetKeyNameText_Pad) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_GetKeyNameText_Pad");
static_assert(sizeof(KeyConfigNameFunction_C_GetKeyNameText_Pad) == 0x000048, "Wrong size on KeyConfigNameFunction_C_GetKeyNameText_Pad");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Pad, KeyType) == 0x000000, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Pad::KeyType' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Pad, __WorldContext) == 0x000008, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Pad::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Pad, DisplayText) == 0x000010, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Pad::DisplayText' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Pad, CallFunc_GamepadKeyToKey_ReturnValue) == 0x000020, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Pad::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_GetKeyNameText_Pad, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000038, "Member 'KeyConfigNameFunction_C_GetKeyNameText_Pad::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsAssignedKeyType
// 0x05F8 (0x05F8 - 0x0000)
struct KeyConfigNameFunction_C_IsAssignedKeyType final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfig;                                         // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
	EConfig_KeyconfigItems                        ItemType;                                          // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7905[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAssign;                                          // 0x01D8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7906[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          AssignSet;                                         // 0x01E0(0x01E8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UDataTable*                             Table;                                             // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x03DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENeedInputType                                Temp_byte_Variable;                                // 0x03DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x03DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x03DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x03E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x03E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7907[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x03E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7908[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x03FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0408(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x05F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x05F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x05F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x05F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfigNameFunction_C_IsAssignedKeyType) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_IsAssignedKeyType");
static_assert(sizeof(KeyConfigNameFunction_C_IsAssignedKeyType) == 0x0005F8, "Wrong size on KeyConfigNameFunction_C_IsAssignedKeyType");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, KeyConfig) == 0x000000, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::KeyConfig' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, ItemType) == 0x0001C8, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::ItemType' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, __WorldContext) == 0x0001D0, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, IsAssign) == 0x0001D8, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::IsAssign' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, AssignSet) == 0x0001E0, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::AssignSet' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, Table) == 0x0003C8, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::Table' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, Temp_int_Array_Index_Variable) == 0x0003D0, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, Temp_int_Loop_Counter_Variable) == 0x0003D4, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_Add_IntInt_ReturnValue) == 0x0003D8, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, Temp_bool_Variable) == 0x0003DC, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, Temp_byte_Variable) == 0x0003DD, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_GetActionKeyPad_ReturnValue) == 0x0003DE, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0003DF, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_GetActionKeyMouse_MouseKey) == 0x0003E0, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x0003E1, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0003E2, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x0003E3, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_BooleanOR_ReturnValue) == 0x0003E4, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0003E8, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_BooleanAND_ReturnValue) == 0x0003F8, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_Array_Get_Item) == 0x0003FC, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_Array_Length_ReturnValue) == 0x000404, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000408, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0005F0, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_Less_IntInt_ReturnValue) == 0x0005F1, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_BooleanOR_ReturnValue_1) == 0x0005F2, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0005F3, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsAssignedKeyType, K2Node_Select_Default) == 0x0005F4, "Member 'KeyConfigNameFunction_C_IsAssignedKeyType::K2Node_Select_Default' has a wrong offset!");

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableKeyboardKey
// 0x0240 (0x0240 - 0x0000)
struct KeyConfigNameFunction_C_IsUnassignableKeyboardKey final
{
public:
	EConfig_KeyconfigItems                        ConfigType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       KeyboardKey;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7909[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUnassighnableKey;                                // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_790A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             Table;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_790B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_790C[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_IsUnassignableKeyboardKey");
static_assert(sizeof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey) == 0x000240, "Wrong size on KeyConfigNameFunction_C_IsUnassignableKeyboardKey");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, ConfigType) == 0x000000, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::ConfigType' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, KeyboardKey) == 0x000001, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, __WorldContext) == 0x000008, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, IsUnassighnableKey) == 0x000010, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::IsUnassighnableKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, Table) == 0x000018, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::Table' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000020, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, Temp_int_Array_Index_Variable) == 0x000024, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000030, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_Array_Get_Item) == 0x000044, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000238, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000239, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableKeyboardKey, CallFunc_Set_Contains_ReturnValue) == 0x00023A, "Member 'KeyConfigNameFunction_C_IsUnassignableKeyboardKey::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignablePadKey
// 0x0240 (0x0240 - 0x0000)
struct KeyConfigNameFunction_C_IsUnassignablePadKey final
{
public:
	EConfig_KeyconfigItems                        ConfigType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        PadKey;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_790D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUnassighnableKey;                                // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_790E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             Table;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_790F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7910[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfigNameFunction_C_IsUnassignablePadKey) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_IsUnassignablePadKey");
static_assert(sizeof(KeyConfigNameFunction_C_IsUnassignablePadKey) == 0x000240, "Wrong size on KeyConfigNameFunction_C_IsUnassignablePadKey");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, ConfigType) == 0x000000, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::ConfigType' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, PadKey) == 0x000001, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::PadKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, __WorldContext) == 0x000008, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, IsUnassighnableKey) == 0x000010, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::IsUnassighnableKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, Table) == 0x000018, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::Table' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000020, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, Temp_int_Array_Index_Variable) == 0x000024, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000030, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_Array_Get_Item) == 0x000044, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000238, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000239, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignablePadKey, CallFunc_Set_Contains_ReturnValue) == 0x00023A, "Member 'KeyConfigNameFunction_C_IsUnassignablePadKey::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");

// Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableMouseKey
// 0x0240 (0x0240 - 0x0000)
struct KeyConfigNameFunction_C_IsUnassignableMouseKey final
{
public:
	EConfig_KeyconfigItems                        ConfigType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          MouseKey;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7911[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUnassighnableKey;                                // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7912[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             Table;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7913[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7914[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyAssignSet                          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x01E8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfigNameFunction_C_IsUnassignableMouseKey) == 0x000008, "Wrong alignment on KeyConfigNameFunction_C_IsUnassignableMouseKey");
static_assert(sizeof(KeyConfigNameFunction_C_IsUnassignableMouseKey) == 0x000240, "Wrong size on KeyConfigNameFunction_C_IsUnassignableMouseKey");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, ConfigType) == 0x000000, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::ConfigType' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, MouseKey) == 0x000001, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::MouseKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, __WorldContext) == 0x000008, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, IsUnassighnableKey) == 0x000010, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::IsUnassighnableKey' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, Table) == 0x000018, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::Table' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000020, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, Temp_int_Array_Index_Variable) == 0x000024, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000030, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_Array_Get_Item) == 0x000044, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000238, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000239, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfigNameFunction_C_IsUnassignableMouseKey, CallFunc_Set_Contains_ReturnValue) == 0x00023A, "Member 'KeyConfigNameFunction_C_IsUnassignableMouseKey::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");

}

