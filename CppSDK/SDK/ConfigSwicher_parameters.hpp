#pragma once

 

// Package: ConfigSwicher

#include "Basic.hpp"

#include "Configurations_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ConfigSwicher.ConfigSwicher_C.GenerateConfigs
// 0x00A0 (0x00A0 - 0x0000)
struct ConfigSwicher_C_GenerateConfigs final
{
public:
	class UClass*                                 Temp_class_Variable;                               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CD7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_2;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_3;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCSPlatform_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CD8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_4;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCSPlatform_ReturnValue_1;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CD9[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_5;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOptionChildBase*                     CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCSPlatform_ReturnValue_2;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CDA[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default_1;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOptionChildBase*                     CallFunc_Create_ReturnValue_1;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CDB[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default_2;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOptionChildBase*                     CallFunc_Create_ReturnValue_2;                     // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ConfigSwicher_C_GenerateConfigs) == 0x000008, "Wrong alignment on ConfigSwicher_C_GenerateConfigs");
static_assert(sizeof(ConfigSwicher_C_GenerateConfigs) == 0x0000A0, "Wrong size on ConfigSwicher_C_GenerateConfigs");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_class_Variable) == 0x000000, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_class_Variable_1) == 0x000008, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_bool_Variable) == 0x000010, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_class_Variable_2) == 0x000018, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_class_Variable_3) == 0x000020, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_IsCSPlatform_ReturnValue) == 0x000028, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_IsCSPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_class_Variable_4) == 0x000030, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_IsCSPlatform_ReturnValue_1) == 0x000038, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_IsCSPlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_bool_Variable_1) == 0x000039, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, K2Node_Select_Default) == 0x000048, "Member 'ConfigSwicher_C_GenerateConfigs::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_class_Variable_5) == 0x000050, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_Create_ReturnValue) == 0x000058, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_IsCSPlatform_ReturnValue_2) == 0x000060, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_IsCSPlatform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_AddChild_ReturnValue_1) == 0x000068, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, K2Node_Select_Default_1) == 0x000070, "Member 'ConfigSwicher_C_GenerateConfigs::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_AddChild_ReturnValue_2) == 0x000078, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_Create_ReturnValue_1) == 0x000080, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, Temp_bool_Variable_2) == 0x000088, "Member 'ConfigSwicher_C_GenerateConfigs::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, K2Node_Select_Default_2) == 0x000090, "Member 'ConfigSwicher_C_GenerateConfigs::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_GenerateConfigs, CallFunc_Create_ReturnValue_2) == 0x000098, "Member 'ConfigSwicher_C_GenerateConfigs::CallFunc_Create_ReturnValue_2' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.YesNoCheckResult
// 0x0008 (0x0008 - 0x0000)
struct ConfigSwicher_C_YesNoCheckResult final
{
public:
	bool                                          bIsYes;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsHasUnassinableSetkey;                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsLocalYes;                                       // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasUnassinableSetKey_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_YesNoCheckResult) == 0x000001, "Wrong alignment on ConfigSwicher_C_YesNoCheckResult");
static_assert(sizeof(ConfigSwicher_C_YesNoCheckResult) == 0x000008, "Wrong size on ConfigSwicher_C_YesNoCheckResult");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, bIsYes) == 0x000000, "Member 'ConfigSwicher_C_YesNoCheckResult::bIsYes' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, bIsHasUnassinableSetkey) == 0x000001, "Member 'ConfigSwicher_C_YesNoCheckResult::bIsHasUnassinableSetkey' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, bIsLocalYes) == 0x000002, "Member 'ConfigSwicher_C_YesNoCheckResult::bIsLocalYes' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'ConfigSwicher_C_YesNoCheckResult::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, CallFunc_HasUnassinableSetKey_ReturnValue) == 0x000004, "Member 'ConfigSwicher_C_YesNoCheckResult::CallFunc_HasUnassinableSetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'ConfigSwicher_C_YesNoCheckResult::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, CallFunc_BooleanAND_ReturnValue_1) == 0x000006, "Member 'ConfigSwicher_C_YesNoCheckResult::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_YesNoCheckResult, K2Node_SwitchEnum_CmpSuccess) == 0x000007, "Member 'ConfigSwicher_C_YesNoCheckResult::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.Get Widget
// 0x0018 (0x0018 - 0x0000)
struct ConfigSwicher_C_Get_Widget final
{
public:
	EConfigurations                               NectConfig;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CDC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_Get_Widget) == 0x000008, "Wrong alignment on ConfigSwicher_C_Get_Widget");
static_assert(sizeof(ConfigSwicher_C_Get_Widget) == 0x000018, "Wrong size on ConfigSwicher_C_Get_Widget");
static_assert(offsetof(ConfigSwicher_C_Get_Widget, NectConfig) == 0x000000, "Member 'ConfigSwicher_C_Get_Widget::NectConfig' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_Get_Widget, Widget) == 0x000008, "Member 'ConfigSwicher_C_Get_Widget::Widget' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_Get_Widget, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'ConfigSwicher_C_Get_Widget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.SetCloseState
// 0x0002 (0x0002 - 0x0000)
struct ConfigSwicher_C_SetCloseState final
{
public:
	bool                                          Close;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_SetCloseState) == 0x000001, "Wrong alignment on ConfigSwicher_C_SetCloseState");
static_assert(sizeof(ConfigSwicher_C_SetCloseState) == 0x000002, "Wrong size on ConfigSwicher_C_SetCloseState");
static_assert(offsetof(ConfigSwicher_C_SetCloseState, Close) == 0x000000, "Member 'ConfigSwicher_C_SetCloseState::Close' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_SetCloseState, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'ConfigSwicher_C_SetCloseState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.IsClosed
// 0x0003 (0x0003 - 0x0000)
struct ConfigSwicher_C_IsClosed final
{
public:
	bool                                          Param_IsClosed;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClosed_IsClosed;                        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_IsClosed) == 0x000001, "Wrong alignment on ConfigSwicher_C_IsClosed");
static_assert(sizeof(ConfigSwicher_C_IsClosed) == 0x000003, "Wrong size on ConfigSwicher_C_IsClosed");
static_assert(offsetof(ConfigSwicher_C_IsClosed, Param_IsClosed) == 0x000000, "Member 'ConfigSwicher_C_IsClosed::Param_IsClosed' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_IsClosed, CallFunc_IsClosed_IsClosed) == 0x000001, "Member 'ConfigSwicher_C_IsClosed::CallFunc_IsClosed_IsClosed' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_IsClosed, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'ConfigSwicher_C_IsClosed::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.IsCommandKeyAsNone
// 0x0002 (0x0002 - 0x0000)
struct ConfigSwicher_C_IsCommandKeyAsNone final
{
public:
	bool                                          bNone;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isCommandKeyAsNone_bNone;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_IsCommandKeyAsNone) == 0x000001, "Wrong alignment on ConfigSwicher_C_IsCommandKeyAsNone");
static_assert(sizeof(ConfigSwicher_C_IsCommandKeyAsNone) == 0x000002, "Wrong size on ConfigSwicher_C_IsCommandKeyAsNone");
static_assert(offsetof(ConfigSwicher_C_IsCommandKeyAsNone, bNone) == 0x000000, "Member 'ConfigSwicher_C_IsCommandKeyAsNone::bNone' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_IsCommandKeyAsNone, CallFunc_isCommandKeyAsNone_bNone) == 0x000001, "Member 'ConfigSwicher_C_IsCommandKeyAsNone::CallFunc_isCommandKeyAsNone_bNone' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.IsChanged
// 0x0004 (0x0004 - 0x0000)
struct ConfigSwicher_C_IsChanged final
{
public:
	bool                                          Param_IsChanged;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bChanged;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChanged_bChanged;                       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_IsChanged) == 0x000001, "Wrong alignment on ConfigSwicher_C_IsChanged");
static_assert(sizeof(ConfigSwicher_C_IsChanged) == 0x000004, "Wrong size on ConfigSwicher_C_IsChanged");
static_assert(offsetof(ConfigSwicher_C_IsChanged, Param_IsChanged) == 0x000000, "Member 'ConfigSwicher_C_IsChanged::Param_IsChanged' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_IsChanged, bChanged) == 0x000001, "Member 'ConfigSwicher_C_IsChanged::bChanged' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_IsChanged, CallFunc_IsChanged_bChanged) == 0x000002, "Member 'ConfigSwicher_C_IsChanged::CallFunc_IsChanged_bChanged' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_IsChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'ConfigSwicher_C_IsChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.ChangeConfigMode
// 0x0001 (0x0001 - 0x0000)
struct ConfigSwicher_C_ChangeConfigMode final
{
public:
	EConfigurations                               Configurations;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ConfigSwicher_C_ChangeConfigMode) == 0x000001, "Wrong alignment on ConfigSwicher_C_ChangeConfigMode");
static_assert(sizeof(ConfigSwicher_C_ChangeConfigMode) == 0x000001, "Wrong size on ConfigSwicher_C_ChangeConfigMode");
static_assert(offsetof(ConfigSwicher_C_ChangeConfigMode, Configurations) == 0x000000, "Member 'ConfigSwicher_C_ChangeConfigMode::Configurations' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.Changed
// 0x0001 (0x0001 - 0x0000)
struct ConfigSwicher_C_Changed final
{
public:
	bool                                          bConfigChanged;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_Changed) == 0x000001, "Wrong alignment on ConfigSwicher_C_Changed");
static_assert(sizeof(ConfigSwicher_C_Changed) == 0x000001, "Wrong size on ConfigSwicher_C_Changed");
static_assert(offsetof(ConfigSwicher_C_Changed, bConfigChanged) == 0x000000, "Member 'ConfigSwicher_C_Changed::bConfigChanged' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.YesNoCheck
// 0x0001 (0x0001 - 0x0000)
struct ConfigSwicher_C_YesNoCheck final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ConfigSwicher_C_YesNoCheck) == 0x000001, "Wrong alignment on ConfigSwicher_C_YesNoCheck");
static_assert(sizeof(ConfigSwicher_C_YesNoCheck) == 0x000001, "Wrong size on ConfigSwicher_C_YesNoCheck");
static_assert(offsetof(ConfigSwicher_C_YesNoCheck, Result) == 0x000000, "Member 'ConfigSwicher_C_YesNoCheck::Result' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.IsNone
// 0x0001 (0x0001 - 0x0000)
struct ConfigSwicher_C_IsNone final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ConfigSwicher_C_IsNone) == 0x000001, "Wrong alignment on ConfigSwicher_C_IsNone");
static_assert(sizeof(ConfigSwicher_C_IsNone) == 0x000001, "Wrong size on ConfigSwicher_C_IsNone");
static_assert(offsetof(ConfigSwicher_C_IsNone, Result) == 0x000000, "Member 'ConfigSwicher_C_IsNone::Result' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.SetTitleMode
// 0x0001 (0x0001 - 0x0000)
struct ConfigSwicher_C_SetTitleMode final
{
public:
	bool                                          bTitleMode;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_SetTitleMode) == 0x000001, "Wrong alignment on ConfigSwicher_C_SetTitleMode");
static_assert(sizeof(ConfigSwicher_C_SetTitleMode) == 0x000001, "Wrong size on ConfigSwicher_C_SetTitleMode");
static_assert(offsetof(ConfigSwicher_C_SetTitleMode, bTitleMode) == 0x000000, "Member 'ConfigSwicher_C_SetTitleMode::bTitleMode' has a wrong offset!");

// Function ConfigSwicher.ConfigSwicher_C.ExecuteUbergraph_ConfigSwicher
// 0x0150 (0x0150 - 0x0000)
struct ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CDD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	EConfigurations                               K2Node_CustomEvent_Configurations;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bConfigChanged;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CDE[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Get_Widget_Widget;                        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CDF[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNoAssignedTextId_TextId;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWaitSaveing__IsWaiting;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CE0[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	bool                                          CallFunc_isCommandKeyAsNone_bNone;                 // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CE1[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsChanged_bChanged;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CE2[0x5];                                     // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00E8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bTitleMode;                     // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7CE3[0x5];                                     // 0x011B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher) == 0x000008, "Wrong alignment on ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher");
static_assert(sizeof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher) == 0x000150, "Wrong size on ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, EntryPoint) == 0x000000, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::EntryPoint' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_CustomEvent_Configurations) == 0x000030, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_CustomEvent_Configurations' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_CustomEvent_bConfigChanged) == 0x000031, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_CustomEvent_bConfigChanged' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_Get_Widget_Widget) == 0x000038, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_Get_Widget_Widget' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_GetNoAssignedTextId_TextId) == 0x000044, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_GetNoAssignedTextId_TextId' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_IsWaitSaveing__IsWaiting) == 0x000048, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_IsWaitSaveing__IsWaiting' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000050, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_isCommandKeyAsNone_bNone) == 0x000078, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_isCommandKeyAsNone_bNone' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_MakeArray_Array) == 0x0000C0, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_IsChanged_bChanged) == 0x0000D0, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_IsChanged_bChanged' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_CustomEvent_Result_1) == 0x0000D1, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D2, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000D8, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000E8, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_Format_ReturnValue) == 0x000100, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_SwitchEnum_CmpSuccess_1) == 0x000118, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_CustomEvent_Result) == 0x000119, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_CustomEvent_bTitleMode) == 0x00011A, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_CustomEvent_bTitleMode' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_Create_ReturnValue) == 0x000120, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, CallFunc_Create_ReturnValue_1) == 0x000128, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_CreateDelegate_OutputDelegate) == 0x000130, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'ConfigSwicher_C_ExecuteUbergraph_ConfigSwicher::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

}

