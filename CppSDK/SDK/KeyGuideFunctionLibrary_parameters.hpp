#pragma once

 

// Package: KeyGuideFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeMovesText
// 0x0210 (0x0210 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x01C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x01D0(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetGamepadStickCharaCode_ReturnValue;     // 0x01E8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01F8(0x0018)()
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText) == 0x000210, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText, __WorldContext) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText, ReturnValue) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText, CallFunc_GetGamepadStickCharaCode_ReturnValue) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText::CallFunc_GetGamepadStickCharaCode_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText, CallFunc_Conv_StringToText_ReturnValue) == 0x0001F8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeMovesText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_KeyConfigActiontoKey
// 0x0230 (0x0230 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B51[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Key;                                               // 0x01D8(0x0018)(Parm, OutParm, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B52[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_MouseKeyToKey_ReturnValue;                // 0x01F8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B53[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0218(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey) == 0x000230, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, KeyConfigAction) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, __WorldContext) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, Key) == 0x0001D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::Key' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, CallFunc_GetActionKeyMouse_MouseKey) == 0x0001F0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x0001F1, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, CallFunc_MouseKeyToKey_ReturnValue) == 0x0001F8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::CallFunc_MouseKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000210, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000218, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_KeyConfigActiontoKey::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeString
// 0x02B0 (0x02B0 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B54[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue1;                                      // 0x01D8(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B55[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x0208(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_1;     // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0270(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0298(0x0018)()
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString) == 0x0002B0, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, KeyConfigAction) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, __WorldContext) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, ReturnValue1) == 0x0001D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::ReturnValue1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001F0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000200, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_GetActionKeyPad_ReturnValue) == 0x000201, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_GamepadKeyToKey_ReturnValue) == 0x000208, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000220, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000230, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_GetDisplayTextByAction_ReturnValue_1) == 0x000240, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_GetDisplayTextByAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_Replace_ReturnValue) == 0x000250, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_Replace_ReturnValue_1) == 0x000260, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_Conv_StringToText_ReturnValue) == 0x000270, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_Concat_StrStr_ReturnValue) == 0x000288, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000298, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeString::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeDodgeAttackText
// 0x0258 (0x0258 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x01C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x01D0(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue_1;            // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B56[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x01E8(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue_1;            // 0x0200(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0238(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText) == 0x000258, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, __WorldContext) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, ReturnValue) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, CallFunc_GetActionKeyPad_ReturnValue) == 0x0001E0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, CallFunc_GetActionKeyPad_ReturnValue_1) == 0x0001E1, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::CallFunc_GetActionKeyPad_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, CallFunc_GamepadKeyToKey_ReturnValue) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, CallFunc_GamepadKeyToKey_ReturnValue_1) == 0x000200, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::CallFunc_GamepadKeyToKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000218, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x000228, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, K2Node_MakeArray_Array) == 0x000238, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText, CallFunc_JoinStringArray_ReturnValue) == 0x000248, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeDodgeAttackText::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeJumpAttackText
// 0x0258 (0x0258 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x01C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x01D0(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue_1;            // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B57[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x01E8(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue_1;            // 0x0200(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0238(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText) == 0x000258, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, __WorldContext) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, ReturnValue) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, CallFunc_GetActionKeyPad_ReturnValue) == 0x0001E0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, CallFunc_GetActionKeyPad_ReturnValue_1) == 0x0001E1, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::CallFunc_GetActionKeyPad_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, CallFunc_GamepadKeyToKey_ReturnValue) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, CallFunc_GamepadKeyToKey_ReturnValue_1) == 0x000200, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::CallFunc_GamepadKeyToKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000218, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x000228, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, K2Node_MakeArray_Array) == 0x000238, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText, CallFunc_JoinStringArray_ReturnValue) == 0x000248, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeJumpAttackText::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad_MakeString
// 0x0280 (0x0280 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDash;                                            // 0x01C9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDodge;                                           // 0x01CA(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B58[0x5];                                     // 0x01CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x01D8(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 TmpStr;                                            // 0x01E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 KeyText;                                           // 0x01F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Flag;                                              // 0x0208(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B59[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x020C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0213(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B5A[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x0218(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B5B[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0244(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B5C[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x024C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString) == 0x000280, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, KeyConfigAction) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, IsDash) == 0x0001C9, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::IsDash' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, IsDodge) == 0x0001CA, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::IsDodge' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, __WorldContext) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, ReturnValue) == 0x0001D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, TmpStr) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::TmpStr' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, KeyText) == 0x0001F8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::KeyText' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, Flag) == 0x000208, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::Flag' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, Temp_int_Variable) == 0x00020C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_BooleanOR_ReturnValue) == 0x000210, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000211, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_GetActionKeyPad_ReturnValue) == 0x000212, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_BooleanAND_ReturnValue) == 0x000213, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_GamepadKeyToKey_ReturnValue) == 0x000218, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000230, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, Temp_bool_Variable) == 0x000240, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, Temp_int_Variable_1) == 0x000244, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, Temp_bool_Variable_1) == 0x000248, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, K2Node_Select_Default) == 0x00024C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_GetTextFromAsset_ReturnValue) == 0x000250, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, K2Node_Select_Default_1) == 0x000260, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString, CallFunc_Concat_StrStr_ReturnValue) == 0x000270, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad_MakeString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMessage
// 0x02C8 (0x02C8 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage final
{
public:
	TArray<class USBRuntimeTextBlock*>            InKey;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> TargetMap;                                         // 0x0010(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0060(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTextBlock*                             InSheethTextObject;                                // 0x0228(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0230(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B5D[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Map_Find_Value;                           // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0253(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B5E[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_KeyGuide_Mouse2_GetKeytoTextString_ReturnValue; // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B5F[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0270(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B60[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02B0(0x0018)()
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage) == 0x0002C8, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, InKey) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::InKey' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, TargetMap) == 0x000010, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::TargetMap' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, KeyConfigData) == 0x000060, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, InSheethTextObject) == 0x000228, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::InSheethTextObject' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, __WorldContext) == 0x000230, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000238, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Array_Length_ReturnValue) == 0x00023C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, Temp_int_Array_Index_Variable) == 0x000240, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, Temp_int_Loop_Counter_Variable) == 0x000244, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Array_Get_Item) == 0x000248, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Map_Find_Value) == 0x000250, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Map_Find_ReturnValue) == 0x000251, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Less_IntInt_ReturnValue) == 0x000252, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000253, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000254, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_KeyGuide_Mouse2_GetKeytoTextString_ReturnValue) == 0x000258, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_KeyGuide_Mouse2_GetKeytoTextString_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_BooleanAND_ReturnValue) == 0x000268, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000270, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000288, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000290, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Concat_StrStr_ReturnValue) == 0x0002A0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002B0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_MakePare
// 0x00F0 (0x00F0 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_MakePare final
{
public:
	TArray<class USBRuntimeTextBlock*>            InKey;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<ESBKeyConfigAction>                    InValue;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Return_Value;                                      // 0x0028(0x0050)(Parm, OutParm, ContainsInstancedReference)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Pare;                                              // 0x0078(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B61[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B62[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item_1;                         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_MakePare");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare) == 0x0000F0, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_MakePare");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, InKey) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::InKey' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, InValue) == 0x000010, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::InValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, __WorldContext) == 0x000020, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, Return_Value) == 0x000028, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::Return_Value' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, Pare) == 0x000078, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::Pare' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, Temp_int_Array_Index_Variable) == 0x0000CC, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, Temp_int_Loop_Counter_Variable) == 0x0000D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, CallFunc_Less_IntInt_ReturnValue) == 0x0000E0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, CallFunc_Add_IntInt_ReturnValue) == 0x0000E4, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_MakePare, CallFunc_Array_Get_Item_1) == 0x0000E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_MakePare::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_KeyConfigActiontoKey
// 0x0230 (0x0230 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B63[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Key;                                               // 0x01D8(0x0018)(Parm, OutParm, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B64[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_MouseKeyToKey_ReturnValue;                // 0x01F8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B65[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0218(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey) == 0x000230, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, KeyConfigAction) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, __WorldContext) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, Key) == 0x0001D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::Key' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, CallFunc_GetActionKeyMouse_MouseKey) == 0x0001F0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x0001F1, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, CallFunc_MouseKeyToKey_ReturnValue) == 0x0001F8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::CallFunc_MouseKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000210, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000218, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_KeyConfigActiontoKey::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_GetKeytoTextString
// 0x0230 (0x0230 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B66[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x01D8(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	struct FKey                                   CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key; // 0x01E8(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0210(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString) == 0x000230, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, KeyConfigAction) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, __WorldContext) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, ReturnValue) == 0x0001D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000200, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, K2Node_MakeArray_Array) == 0x000210, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString, CallFunc_JoinStringArray_ReturnValue) == 0x000220, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_GetKeytoTextString::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Mouse2_MakeMovesText
// 0x02A0 (0x02A0 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTextBlock*                             TextObject;                                        // 0x01C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Text;                                              // 0x01D8(0x0010)(Edit, BlueprintVisible)
	class FString                                 Temp_string_Variable;                              // 0x01E8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x01F8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B67[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B68[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0230(0x0018)()
	TArray<ESBKeyConfigAction>                    K2Node_MakeArray_Array;                            // 0x0248(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item;                           // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B69[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B6A[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key; // 0x0268(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B6B[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText) == 0x0002A0, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, TextObject) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::TextObject' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, __WorldContext) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, Text) == 0x0001D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::Text' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, Temp_string_Variable) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, Temp_string_Variable_1) == 0x0001F8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, Temp_int_Array_Index_Variable) == 0x000208, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, Temp_int_Loop_Counter_Variable) == 0x00020C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Add_IntInt_ReturnValue) == 0x000210, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_JoinStringArray_ReturnValue) == 0x000218, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Array_Add_ReturnValue) == 0x000228, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Conv_StringToText_ReturnValue) == 0x000230, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, K2Node_MakeArray_Array) == 0x000248, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Array_Add_ReturnValue_1) == 0x000258, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Array_Get_Item) == 0x00025C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Array_Length_ReturnValue) == 0x000260, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key) == 0x000268, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Less_IntInt_ReturnValue) == 0x000280, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000288, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText, CallFunc_Array_Add_ReturnValue_2) == 0x000298, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Mouse2_MakeMovesText::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.Key Guide Mouse 2 Make Oriento Camera Text
// 0x02B8 (0x02B8 - 0x0000)
struct KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTextBlock*                             InTextObject;                                      // 0x01C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x01D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Text;                                              // 0x01D8(0x0010)(Edit, BlueprintVisible)
	class FString                                 Temp_string_Variable;                              // 0x01E8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x01F8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0208(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B6C[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B6D[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0240(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B6E[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBKeyConfigAction>                    K2Node_MakeArray_Array;                            // 0x0260(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item;                           // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B6F[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B70[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key; // 0x0280(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B71[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text");
static_assert(sizeof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text) == 0x0002B8, "Wrong size on KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, InTextObject) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::InTextObject' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, __WorldContext) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, Text) == 0x0001D8, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::Text' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, Temp_string_Variable) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, Temp_string_Variable_1) == 0x0001F8, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, Temp_string_Variable_2) == 0x000208, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, Temp_int_Array_Index_Variable) == 0x000218, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, Temp_int_Loop_Counter_Variable) == 0x00021C, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000220, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Add_IntInt_ReturnValue) == 0x000224, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Array_Add_ReturnValue) == 0x000228, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_JoinStringArray_ReturnValue) == 0x000230, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000240, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Array_Add_ReturnValue_1) == 0x000258, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, K2Node_MakeArray_Array) == 0x000260, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Array_Add_ReturnValue_2) == 0x000270, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Array_Get_Item) == 0x000274, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Array_Length_ReturnValue) == 0x000278, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key) == 0x000280, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_KeyGuide_Mouse2_KeyConfigActiontoKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Less_IntInt_ReturnValue) == 0x000298, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_GetKeyTextByKey_ReturnValue) == 0x0002A0, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text, CallFunc_Array_Add_ReturnValue_3) == 0x0002B0, "Member 'KeyGuideFunctionLibrary_C_Key_Guide_Mouse_2_Make_Oriento_Camera_Text::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetPareItems
// 0x00A0 (0x00A0 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems final
{
public:
	TArray<class UWidget*>                        InAllChildren;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBRuntimeTextBlock*>            OutActionTextArray;                                // 0x0018(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<ESBKeyConfigAction>                    OutActionConfigArray;                              // 0x0028(0x0010)(Parm, OutParm)
	TArray<ESBKeyConfigAction>                    TmpActionConfigArray;                              // 0x0038(0x0010)(Edit, BlueprintVisible)
	TArray<class USBRuntimeTextBlock*>            TmpActionTextArray;                                // 0x0048(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UWidget*>                        AllChildren;                                       // 0x0058(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B72[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B73[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeyGuide_Item_C*                       K2Node_DynamicCast_AsKey_Guide_Item;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B74[0x1];                                     // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems) == 0x0000A0, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, InAllChildren) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::InAllChildren' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, __WorldContext) == 0x000010, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, OutActionTextArray) == 0x000018, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::OutActionTextArray' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, OutActionConfigArray) == 0x000028, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::OutActionConfigArray' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, TmpActionConfigArray) == 0x000038, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::TmpActionConfigArray' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, TmpActionTextArray) == 0x000048, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::TmpActionTextArray' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, AllChildren) == 0x000058, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::AllChildren' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, Temp_int_Array_Index_Variable) == 0x000068, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, CallFunc_Array_Get_Item) == 0x000078, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, K2Node_DynamicCast_AsKey_Guide_Item) == 0x000088, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::K2Node_DynamicCast_AsKey_Guide_Item' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, CallFunc_Less_IntInt_ReturnValue) == 0x000091, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000092, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, CallFunc_Array_Add_ReturnValue) == 0x000094, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems, CallFunc_Array_Add_ReturnValue_1) == 0x000098, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetPareItems::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_GetVerticalChildWidget
// 0x00E0 (0x00E0 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget final
{
public:
	class UPanelWidget*                           _____;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        Out;                                               // 0x0010(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWidget*>                        TmpVerticalChildWidget;                            // 0x0020(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B75[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B76[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               K2Node_DynamicCast_AsOverlay;                      // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B77[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x0080(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B78[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBox*                           K2Node_DynamicCast_AsVertical_Box;                 // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B79[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_2;             // 0x00B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item_2;                         // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B7A[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget) == 0x0000E0, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, _____) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::_____' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, __WorldContext) == 0x000008, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, Out) == 0x000010, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::Out' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, TmpVerticalChildWidget) == 0x000020, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::TmpVerticalChildWidget' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_GetAllChildren_ReturnValue) == 0x000038, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, Temp_int_Array_Index_Variable) == 0x000050, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, Temp_int_Array_Index_Variable_1) == 0x000054, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, Temp_int_Loop_Counter_Variable_1) == 0x000058, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, Temp_int_Array_Index_Variable_2) == 0x000064, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Array_Get_Item) == 0x000068, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, K2Node_DynamicCast_AsOverlay) == 0x000070, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::K2Node_DynamicCast_AsOverlay' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_GetAllChildren_ReturnValue_1) == 0x000080, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, K2Node_DynamicCast_AsVertical_Box) == 0x0000A0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::K2Node_DynamicCast_AsVertical_Box' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A9, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_GetAllChildren_ReturnValue_2) == 0x0000B0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_GetAllChildren_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Array_Get_Item_2) == 0x0000C0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Array_Length_ReturnValue_2) == 0x0000C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, Temp_int_Loop_Counter_Variable_2) == 0x0000CC, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Array_Add_ReturnValue) == 0x0000D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000D4, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000D8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_GetVerticalChildWidget::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C.KeyGuide_Gamepad2_MakeChangeLockText
// 0x0218 (0x0218 - 0x0000)
struct KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x01C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x01D0(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B7B[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGamepadStickCharaCode_ReturnValue;     // 0x01F0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0200(0x0018)()
};
static_assert(alignof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText) == 0x000008, "Wrong alignment on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText");
static_assert(sizeof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText) == 0x000218, "Wrong size on KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText, KeyConfigData) == 0x000000, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText, __WorldContext) == 0x0001C8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText::__WorldContext' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText, ReturnValue) == 0x0001D0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText, CallFunc_Not_PreBool_ReturnValue) == 0x0001E8, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText, CallFunc_GetGamepadStickCharaCode_ReturnValue) == 0x0001F0, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText::CallFunc_GetGamepadStickCharaCode_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText, CallFunc_Conv_StringToText_ReturnValue) == 0x000200, "Member 'KeyGuideFunctionLibrary_C_KeyGuide_Gamepad2_MakeChangeLockText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

