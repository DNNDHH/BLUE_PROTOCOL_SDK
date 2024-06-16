#pragma once

 

// Package: SBTextKeyIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function SBTextKeyIcon.SBTextKeyIcon_C.ExecuteUbergraph_SBTextKeyIcon
// 0x0090 (0x0090 - 0x0000)
struct SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_541C[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_541D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_541E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_541F[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x0070(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5420[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon");
static_assert(sizeof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon) == 0x000090, "Wrong size on SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, EntryPoint) == 0x000000, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_IsValid) == 0x000034, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000038, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000040, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000048, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_IsValid_2) == 0x000050, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000058, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_IsValid_3) == 0x000060, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x000068, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, K2Node_CustomEvent_SkinType) == 0x000070, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetPlayerManager_ReturnValue) == 0x000078, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, CallFunc_GetPlayerManager_ReturnValue_1) == 0x000080, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon, K2Node_Event_IsDesignTime) == 0x000088, "Member 'SBTextKeyIcon_C_ExecuteUbergraph_SBTextKeyIcon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SBTextKeyIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SBTextKeyIcon_C_PreConstruct) == 0x000001, "Wrong alignment on SBTextKeyIcon_C_PreConstruct");
static_assert(sizeof(SBTextKeyIcon_C_PreConstruct) == 0x000001, "Wrong size on SBTextKeyIcon_C_PreConstruct");
static_assert(offsetof(SBTextKeyIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SBTextKeyIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.CustomEvent_5
// 0x0001 (0x0001 - 0x0000)
struct SBTextKeyIcon_C_CustomEvent_5 final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SBTextKeyIcon_C_CustomEvent_5) == 0x000001, "Wrong alignment on SBTextKeyIcon_C_CustomEvent_5");
static_assert(sizeof(SBTextKeyIcon_C_CustomEvent_5) == 0x000001, "Wrong size on SBTextKeyIcon_C_CustomEvent_5");
static_assert(offsetof(SBTextKeyIcon_C_CustomEvent_5, SkinType) == 0x000000, "Member 'SBTextKeyIcon_C_CustomEvent_5::SkinType' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad1
// 0x0588 (0x0588 - 0x0000)
struct SBTextKeyIcon_C_SetDisplayTextByKBPad1 final
{
public:
	ESBKeyConfigAction                            KeyConfigActionKB;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            KeyConfigActionPad;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5421[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5422[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassCommonKeyConfig_ReturnValue;      // 0x0028(0x01C8)()
	struct FSBPlayerClassKeyConfigData            CallFunc_GetClassKeyConfig_ReturnValue;            // 0x01F0(0x01C8)()
	bool                                          CallFunc_IsClassKeyConfigCustomized_ReturnValue;   // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5423[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            K2Node_Select_Default;                             // 0x03C0(0x01C8)()
};
static_assert(alignof(SBTextKeyIcon_C_SetDisplayTextByKBPad1) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_SetDisplayTextByKBPad1");
static_assert(sizeof(SBTextKeyIcon_C_SetDisplayTextByKBPad1) == 0x000588, "Wrong size on SBTextKeyIcon_C_SetDisplayTextByKBPad1");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, KeyConfigActionKB) == 0x000000, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::KeyConfigActionKB' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, KeyConfigActionPad) == 0x000001, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::KeyConfigActionPad' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, Result) == 0x000002, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::Result' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, Temp_bool_Variable) == 0x000003, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, CallFunc_GetPlayerManager_ReturnValue) == 0x000010, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, CallFunc_GetClassCommonKeyConfig_ReturnValue) == 0x000028, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::CallFunc_GetClassCommonKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, CallFunc_GetClassKeyConfig_ReturnValue) == 0x0001F0, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::CallFunc_GetClassKeyConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, CallFunc_IsClassKeyConfigCustomized_ReturnValue) == 0x0003B8, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::CallFunc_IsClassKeyConfigCustomized_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad1, K2Node_Select_Default) == 0x0003C0, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad1::K2Node_Select_Default' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKBPad2
// 0x01E8 (0x01E8 - 0x0000)
struct SBTextKeyIcon_C_SetDisplayTextByKBPad2 final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigActionKB;                                 // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            KeyConfigActionPad;                                // 0x01C9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5424[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetActionKeyText_ReturnValue;             // 0x01D0(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_SetDisplayTextByKBPad2) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_SetDisplayTextByKBPad2");
static_assert(sizeof(SBTextKeyIcon_C_SetDisplayTextByKBPad2) == 0x0001E8, "Wrong size on SBTextKeyIcon_C_SetDisplayTextByKBPad2");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad2, KeyConfigData) == 0x000000, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad2::KeyConfigData' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad2, KeyConfigActionKB) == 0x0001C8, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad2::KeyConfigActionKB' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad2, KeyConfigActionPad) == 0x0001C9, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad2::KeyConfigActionPad' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKBPad2, CallFunc_GetActionKeyText_ReturnValue) == 0x0001D0, "Member 'SBTextKeyIcon_C_SetDisplayTextByKBPad2::CallFunc_GetActionKeyText_ReturnValue' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByAction
// 0x0030 (0x0030 - 0x0000)
struct SBTextKeyIcon_C_SetDisplayTextByAction final
{
public:
	ESBUIKeyConfigAction                          KeyConfigAction;                                   // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5425[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_SetDisplayTextByAction) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_SetDisplayTextByAction");
static_assert(sizeof(SBTextKeyIcon_C_SetDisplayTextByAction) == 0x000030, "Wrong size on SBTextKeyIcon_C_SetDisplayTextByAction");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByAction, KeyConfigAction) == 0x000000, "Member 'SBTextKeyIcon_C_SetDisplayTextByAction::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByAction, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000008, "Member 'SBTextKeyIcon_C_SetDisplayTextByAction::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByAction, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'SBTextKeyIcon_C_SetDisplayTextByAction::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByAction
// 0x0028 (0x0028 - 0x0000)
struct SBTextKeyIcon_C_GetDisplayTextByAction final
{
public:
	ESBUIKeyConfigAction                          KeyConfigAction;                                   // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5426[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SBTextKeyIcon_C_GetDisplayTextByAction) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_GetDisplayTextByAction");
static_assert(sizeof(SBTextKeyIcon_C_GetDisplayTextByAction) == 0x000028, "Wrong size on SBTextKeyIcon_C_GetDisplayTextByAction");
static_assert(offsetof(SBTextKeyIcon_C_GetDisplayTextByAction, KeyConfigAction) == 0x000000, "Member 'SBTextKeyIcon_C_GetDisplayTextByAction::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetDisplayTextByAction, ReturnValue) == 0x000008, "Member 'SBTextKeyIcon_C_GetDisplayTextByAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetDisplayTextByAction, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x000018, "Member 'SBTextKeyIcon_C_GetDisplayTextByAction::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.SetDisplayTextByKey
// 0x0048 (0x0048 - 0x0000)
struct SBTextKeyIcon_C_SetDisplayTextByKey final
{
public:
	struct FKey                                   InKey;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          bReplaceFunction;                                  // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5427[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayTextByKey_ReturnValue;          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_SetDisplayTextByKey) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_SetDisplayTextByKey");
static_assert(sizeof(SBTextKeyIcon_C_SetDisplayTextByKey) == 0x000048, "Wrong size on SBTextKeyIcon_C_SetDisplayTextByKey");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKey, InKey) == 0x000000, "Member 'SBTextKeyIcon_C_SetDisplayTextByKey::InKey' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKey, bReplaceFunction) == 0x000018, "Member 'SBTextKeyIcon_C_SetDisplayTextByKey::bReplaceFunction' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKey, CallFunc_GetDisplayTextByKey_ReturnValue) == 0x000020, "Member 'SBTextKeyIcon_C_SetDisplayTextByKey::CallFunc_GetDisplayTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetDisplayTextByKey, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'SBTextKeyIcon_C_SetDisplayTextByKey::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.SetText
// 0x0080 (0x0080 - 0x0000)
struct SBTextKeyIcon_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0068(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_SetText) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_SetText");
static_assert(sizeof(SBTextKeyIcon_C_SetText) == 0x000080, "Wrong size on SBTextKeyIcon_C_SetText");
static_assert(offsetof(SBTextKeyIcon_C_SetText, InText) == 0x000000, "Member 'SBTextKeyIcon_C_SetText::InText' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetText, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'SBTextKeyIcon_C_SetText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetText, K2Node_MakeArray_Array) == 0x000058, "Member 'SBTextKeyIcon_C_SetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_SetText, CallFunc_Format_ReturnValue) == 0x000068, "Member 'SBTextKeyIcon_C_SetText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.GetText
// 0x0030 (0x0030 - 0x0000)
struct SBTextKeyIcon_C_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_GetText) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_GetText");
static_assert(sizeof(SBTextKeyIcon_C_GetText) == 0x000030, "Wrong size on SBTextKeyIcon_C_GetText");
static_assert(offsetof(SBTextKeyIcon_C_GetText, ReturnValue) == 0x000000, "Member 'SBTextKeyIcon_C_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'SBTextKeyIcon_C_GetText::CallFunc_GetText_ReturnValue' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.GetDisplayTextByKey
// 0x0040 (0x0040 - 0x0000)
struct SBTextKeyIcon_C_GetDisplayTextByKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          bReplaceFunction;                                  // 0x0018(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5428[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SBTextKeyIcon_C_GetDisplayTextByKey) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_GetDisplayTextByKey");
static_assert(sizeof(SBTextKeyIcon_C_GetDisplayTextByKey) == 0x000040, "Wrong size on SBTextKeyIcon_C_GetDisplayTextByKey");
static_assert(offsetof(SBTextKeyIcon_C_GetDisplayTextByKey, Key) == 0x000000, "Member 'SBTextKeyIcon_C_GetDisplayTextByKey::Key' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetDisplayTextByKey, bReplaceFunction) == 0x000018, "Member 'SBTextKeyIcon_C_GetDisplayTextByKey::bReplaceFunction' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetDisplayTextByKey, ReturnValue) == 0x000020, "Member 'SBTextKeyIcon_C_GetDisplayTextByKey::ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetDisplayTextByKey, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000030, "Member 'SBTextKeyIcon_C_GetDisplayTextByKey::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyText
// 0x0250 (0x0250 - 0x0000)
struct SBTextKeyIcon_C_GetActionKeyText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigActionKB;                                 // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            KeyConfigActionPad;                                // 0x01C9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5429[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x01D0(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542A[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetActionKeyTextGamePad_ReturnValue;      // 0x01F0(0x0018)()
	class FText                                   CallFunc_GetActionKeyTextKB_ReturnValue;           // 0x0208(0x0018)()
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542B[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542C[0x6];                                     // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0238(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_GetActionKeyText) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_GetActionKeyText");
static_assert(sizeof(SBTextKeyIcon_C_GetActionKeyText) == 0x000250, "Wrong size on SBTextKeyIcon_C_GetActionKeyText");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, KeyConfigData) == 0x000000, "Member 'SBTextKeyIcon_C_GetActionKeyText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, KeyConfigActionKB) == 0x0001C8, "Member 'SBTextKeyIcon_C_GetActionKeyText::KeyConfigActionKB' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, KeyConfigActionPad) == 0x0001C9, "Member 'SBTextKeyIcon_C_GetActionKeyText::KeyConfigActionPad' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, ReturnValue) == 0x0001D0, "Member 'SBTextKeyIcon_C_GetActionKeyText::ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, Temp_bool_Variable) == 0x0001E8, "Member 'SBTextKeyIcon_C_GetActionKeyText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, CallFunc_GetActionKeyTextGamePad_ReturnValue) == 0x0001F0, "Member 'SBTextKeyIcon_C_GetActionKeyText::CallFunc_GetActionKeyTextGamePad_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, CallFunc_GetActionKeyTextKB_ReturnValue) == 0x000208, "Member 'SBTextKeyIcon_C_GetActionKeyText::CallFunc_GetActionKeyTextKB_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, CallFunc_GetConfigSaveManager_IsValid) == 0x000220, "Member 'SBTextKeyIcon_C_GetActionKeyText::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000228, "Member 'SBTextKeyIcon_C_GetActionKeyText::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, CallFunc_GetOperateMode_ReturnValue) == 0x000230, "Member 'SBTextKeyIcon_C_GetActionKeyText::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000231, "Member 'SBTextKeyIcon_C_GetActionKeyText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyText, K2Node_Select_Default) == 0x000238, "Member 'SBTextKeyIcon_C_GetActionKeyText::K2Node_Select_Default' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextKB
// 0x0248 (0x0248 - 0x0000)
struct SBTextKeyIcon_C_GetActionKeyTextKB final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigActionKB;                                 // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_542D[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x01D0(0x0018)(Parm, OutParm, ReturnParm)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_542E[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyNameText_Mouse_DisplayText;         // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_542F[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0208(0x0018)()
	class FString                                 CallFunc_GetKeyNameText_KB_DisplayText;            // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0230(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_GetActionKeyTextKB) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_GetActionKeyTextKB");
static_assert(sizeof(SBTextKeyIcon_C_GetActionKeyTextKB) == 0x000248, "Wrong size on SBTextKeyIcon_C_GetActionKeyTextKB");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, KeyConfigData) == 0x000000, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::KeyConfigData' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, KeyConfigActionKB) == 0x0001C8, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::KeyConfigActionKB' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, ReturnValue) == 0x0001D0, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, CallFunc_GetActionKeyMouse_MouseKey) == 0x0001E8, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x0001E9, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, CallFunc_GetKeyNameText_Mouse_DisplayText) == 0x0001F0, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::CallFunc_GetKeyNameText_Mouse_DisplayText' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000200, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, CallFunc_Conv_StringToText_ReturnValue) == 0x000208, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, CallFunc_GetKeyNameText_KB_DisplayText) == 0x000220, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::CallFunc_GetKeyNameText_KB_DisplayText' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextKB, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000230, "Member 'SBTextKeyIcon_C_GetActionKeyTextKB::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function SBTextKeyIcon.SBTextKeyIcon_C.GetActionKeyTextGamePad
// 0x0230 (0x0230 - 0x0000)
struct SBTextKeyIcon_C_GetActionKeyTextGamePad final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigActionPad;                                // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5430[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x01D0(0x0018)(Parm, OutParm, ReturnParm)
	ESBKeyConfigGamepadKey                        CallFunc_GetActionKeyPad_ReturnValue;              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5431[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GamepadKeyToKey_ReturnValue;              // 0x01F0(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0218(0x0018)()
};
static_assert(alignof(SBTextKeyIcon_C_GetActionKeyTextGamePad) == 0x000008, "Wrong alignment on SBTextKeyIcon_C_GetActionKeyTextGamePad");
static_assert(sizeof(SBTextKeyIcon_C_GetActionKeyTextGamePad) == 0x000230, "Wrong size on SBTextKeyIcon_C_GetActionKeyTextGamePad");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextGamePad, KeyConfigData) == 0x000000, "Member 'SBTextKeyIcon_C_GetActionKeyTextGamePad::KeyConfigData' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextGamePad, KeyConfigActionPad) == 0x0001C8, "Member 'SBTextKeyIcon_C_GetActionKeyTextGamePad::KeyConfigActionPad' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextGamePad, ReturnValue) == 0x0001D0, "Member 'SBTextKeyIcon_C_GetActionKeyTextGamePad::ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextGamePad, CallFunc_GetActionKeyPad_ReturnValue) == 0x0001E8, "Member 'SBTextKeyIcon_C_GetActionKeyTextGamePad::CallFunc_GetActionKeyPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextGamePad, CallFunc_GamepadKeyToKey_ReturnValue) == 0x0001F0, "Member 'SBTextKeyIcon_C_GetActionKeyTextGamePad::CallFunc_GamepadKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextGamePad, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000208, "Member 'SBTextKeyIcon_C_GetActionKeyTextGamePad::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(SBTextKeyIcon_C_GetActionKeyTextGamePad, CallFunc_Conv_StringToText_ReturnValue) == 0x000218, "Member 'SBTextKeyIcon_C_GetActionKeyTextGamePad::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

