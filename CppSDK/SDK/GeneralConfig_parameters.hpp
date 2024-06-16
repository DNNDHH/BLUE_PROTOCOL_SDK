#pragma once

 

// Package: GeneralConfig

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "EKeyGuideType_structs.hpp"


namespace SDK::Params
{

// Function GeneralConfig.GeneralConfig_C.Get_HideOthersPlayerAtFishing_Visibility_0
// 0x0006 (0x0006 - 0x0000)
struct GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidHideOthersPlayerAtFishing_ReturnValue; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0) == 0x000001, "Wrong alignment on GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0");
static_assert(sizeof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0) == 0x000006, "Wrong size on GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0");
static_assert(offsetof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0, ReturnValue) == 0x000000, "Member 'GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0, Temp_bool_Variable) == 0x000001, "Member 'GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0, Temp_byte_Variable) == 0x000002, "Member 'GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0, CallFunc_ValidHideOthersPlayerAtFishing_ReturnValue) == 0x000004, "Member 'GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0::CallFunc_ValidHideOthersPlayerAtFishing_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0, K2Node_Select_Default) == 0x000005, "Member 'GeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_0::K2Node_Select_Default' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.On_Cmb_LogoPosition_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0");
static_assert(sizeof(GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.On_Cmb_PadKeyView_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0");
static_assert(sizeof(GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0");
static_assert(offsetof(GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.On_Cmb_LockTargetType_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0");
static_assert(sizeof(GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.On_Cmb_AutoTarget_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0");
static_assert(sizeof(GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0");
static_assert(offsetof(GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.On_Cmb_WeaponVisibility_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0");
static_assert(sizeof(GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0");
static_assert(offsetof(GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.On_Cmb_ShortcutRingMode_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0");
static_assert(sizeof(GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0");
static_assert(offsetof(GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.GenerateLockTargetType
// 0x0048 (0x0048 - 0x0000)
struct GeneralConfig_C_GenerateLockTargetType final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E02[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAutoTargetEnable_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E03[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_GenerateLockTargetType) == 0x000008, "Wrong alignment on GeneralConfig_C_GenerateLockTargetType");
static_assert(sizeof(GeneralConfig_C_GenerateLockTargetType) == 0x000048, "Wrong size on GeneralConfig_C_GenerateLockTargetType");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, Temp_bool_Variable) == 0x000000, "Member 'GeneralConfig_C_GenerateLockTargetType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, Temp_bool_Variable_1) == 0x000001, "Member 'GeneralConfig_C_GenerateLockTargetType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, Temp_bool_Variable_2) == 0x000002, "Member 'GeneralConfig_C_GenerateLockTargetType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, CallFunc_GetConfigSaveManager_IsValid) == 0x000003, "Member 'GeneralConfig_C_GenerateLockTargetType::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'GeneralConfig_C_GenerateLockTargetType::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, CallFunc_GetAutoTargetEnable_ReturnValue) == 0x000010, "Member 'GeneralConfig_C_GenerateLockTargetType::CallFunc_GetAutoTargetEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_GenerateLockTargetType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000028, "Member 'GeneralConfig_C_GenerateLockTargetType::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLockTargetType, K2Node_Select_Default) == 0x000038, "Member 'GeneralConfig_C_GenerateLockTargetType::K2Node_Select_Default' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.GenerateAutoTarget
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfig_C_GenerateAutoTarget final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E04[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAutoTargetSightFocus_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E05[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_GenerateAutoTarget) == 0x000008, "Wrong alignment on GeneralConfig_C_GenerateAutoTarget");
static_assert(sizeof(GeneralConfig_C_GenerateAutoTarget) == 0x000038, "Wrong size on GeneralConfig_C_GenerateAutoTarget");
static_assert(offsetof(GeneralConfig_C_GenerateAutoTarget, Temp_bool_Variable) == 0x000000, "Member 'GeneralConfig_C_GenerateAutoTarget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateAutoTarget, Temp_bool_Variable_1) == 0x000001, "Member 'GeneralConfig_C_GenerateAutoTarget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateAutoTarget, CallFunc_GetConfigSaveManager_IsValid) == 0x000002, "Member 'GeneralConfig_C_GenerateAutoTarget::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateAutoTarget, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'GeneralConfig_C_GenerateAutoTarget::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateAutoTarget, CallFunc_GetAutoTargetSightFocus_ReturnValue) == 0x000010, "Member 'GeneralConfig_C_GenerateAutoTarget::CallFunc_GetAutoTargetSightFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateAutoTarget, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'GeneralConfig_C_GenerateAutoTarget::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateAutoTarget, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000028, "Member 'GeneralConfig_C_GenerateAutoTarget::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.GenerateWeaponVisible
// 0x0068 (0x0068 - 0x0000)
struct GeneralConfig_C_GenerateWeaponVisible final
{
public:
	class FString                                 AddValue;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBWeaponVisibleType                          Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E06[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0020(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E07[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E08[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E09[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponVisibleType                          CallFunc_GetWeaponVisibleType_ReturnValue;         // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_GenerateWeaponVisible) == 0x000008, "Wrong alignment on GeneralConfig_C_GenerateWeaponVisible");
static_assert(sizeof(GeneralConfig_C_GenerateWeaponVisible) == 0x000068, "Wrong size on GeneralConfig_C_GenerateWeaponVisible");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, AddValue) == 0x000000, "Member 'GeneralConfig_C_GenerateWeaponVisible::AddValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, Temp_byte_Variable) == 0x000010, "Member 'GeneralConfig_C_GenerateWeaponVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, Temp_int_Variable) == 0x000014, "Member 'GeneralConfig_C_GenerateWeaponVisible::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, Temp_int_Variable_1) == 0x000018, "Member 'GeneralConfig_C_GenerateWeaponVisible::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, Temp_int_Variable_2) == 0x00001C, "Member 'GeneralConfig_C_GenerateWeaponVisible::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, Temp_int_Variable_3) == 0x000020, "Member 'GeneralConfig_C_GenerateWeaponVisible::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, Temp_int_Variable_4) == 0x000024, "Member 'GeneralConfig_C_GenerateWeaponVisible::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, Temp_int_Variable_5) == 0x000028, "Member 'GeneralConfig_C_GenerateWeaponVisible::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_Conv_IntToByte_ReturnValue) == 0x00002C, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_GetValidValue_ReturnValue) == 0x000034, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000035, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000036, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, K2Node_Select_Default) == 0x000038, "Member 'GeneralConfig_C_GenerateWeaponVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_GetConfigSaveManager_IsValid) == 0x000050, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000058, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_MakeLiteralInt_ReturnValue) == 0x000060, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_GetWeaponVisibleType_ReturnValue) == 0x000064, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_GetWeaponVisibleType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_Less_IntInt_ReturnValue) == 0x000065, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateWeaponVisible, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000066, "Member 'GeneralConfig_C_GenerateWeaponVisible::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.GenerateShortcutRingMode
// 0x0068 (0x0068 - 0x0000)
struct GeneralConfig_C_GenerateShortcutRingMode final
{
public:
	class FString                                 Menu;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBShortcutRingMode                           Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E0A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E0B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E0C[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E0D[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBShortcutRingMode                           CallFunc_GetShortcutRingMode_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E0E[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_GenerateShortcutRingMode) == 0x000008, "Wrong alignment on GeneralConfig_C_GenerateShortcutRingMode");
static_assert(sizeof(GeneralConfig_C_GenerateShortcutRingMode) == 0x000068, "Wrong size on GeneralConfig_C_GenerateShortcutRingMode");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, Menu) == 0x000000, "Member 'GeneralConfig_C_GenerateShortcutRingMode::Menu' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, Temp_byte_Variable) == 0x000010, "Member 'GeneralConfig_C_GenerateShortcutRingMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, Temp_int_Variable) == 0x000014, "Member 'GeneralConfig_C_GenerateShortcutRingMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, Temp_int_Variable_1) == 0x000018, "Member 'GeneralConfig_C_GenerateShortcutRingMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, Temp_int_Variable_2) == 0x00001C, "Member 'GeneralConfig_C_GenerateShortcutRingMode::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, Temp_int_Variable_3) == 0x000020, "Member 'GeneralConfig_C_GenerateShortcutRingMode::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_Conv_IntToByte_ReturnValue) == 0x000024, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_GetValidValue_ReturnValue) == 0x00002C, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00002D, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002E, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, K2Node_Select_Default) == 0x000030, "Member 'GeneralConfig_C_GenerateShortcutRingMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000048, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000050, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_GetShortcutRingMode_ReturnValue) == 0x000058, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_GetShortcutRingMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000059, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_MakeLiteralInt_ReturnValue) == 0x00005C, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateShortcutRingMode, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'GeneralConfig_C_GenerateShortcutRingMode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.GenerateLogoPos
// 0x0070 (0x0070 - 0x0000)
struct GeneralConfig_C_GenerateLogoPos final
{
public:
	class FString                                 AddSTR;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSSLogoPosition                             Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E0F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E10[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E11[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E12[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSSLogoPosition                             CallFunc_GetSSLogoPosition_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E13[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_GenerateLogoPos) == 0x000008, "Wrong alignment on GeneralConfig_C_GenerateLogoPos");
static_assert(sizeof(GeneralConfig_C_GenerateLogoPos) == 0x000070, "Wrong size on GeneralConfig_C_GenerateLogoPos");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, AddSTR) == 0x000000, "Member 'GeneralConfig_C_GenerateLogoPos::AddSTR' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, Temp_int_Variable) == 0x000010, "Member 'GeneralConfig_C_GenerateLogoPos::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, Temp_int_Variable_1) == 0x000014, "Member 'GeneralConfig_C_GenerateLogoPos::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, Temp_int_Variable_2) == 0x000018, "Member 'GeneralConfig_C_GenerateLogoPos::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, Temp_int_Variable_3) == 0x00001C, "Member 'GeneralConfig_C_GenerateLogoPos::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, Temp_byte_Variable) == 0x000020, "Member 'GeneralConfig_C_GenerateLogoPos::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, Temp_int_Variable_4) == 0x000024, "Member 'GeneralConfig_C_GenerateLogoPos::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, Temp_int_Variable_5) == 0x000028, "Member 'GeneralConfig_C_GenerateLogoPos::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_Conv_IntToByte_ReturnValue) == 0x00002C, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_GetValidValue_ReturnValue) == 0x000034, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000035, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000036, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, K2Node_Select_Default) == 0x000038, "Member 'GeneralConfig_C_GenerateLogoPos::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_GetConfigSaveManager_IsValid) == 0x000050, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000058, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_GetSSLogoPosition_ReturnValue) == 0x000060, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_GetSSLogoPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000061, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_MakeLiteralInt_ReturnValue) == 0x000064, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GenerateLogoPos, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'GeneralConfig_C_GenerateLogoPos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.GeneratePadKeyView
// 0x0070 (0x0070 - 0x0000)
struct GeneralConfig_C_GeneratePadKeyView final
{
public:
	class FName                                   Temp_name_Variable;                                // 0x0000(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E14[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E15[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E16[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             CallFunc_GetPadSkinType_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPadKeySkinType                             Temp_byte_Variable;                                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E17[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x004C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_GeneratePadKeyView) == 0x000008, "Wrong alignment on GeneralConfig_C_GeneratePadKeyView");
static_assert(sizeof(GeneralConfig_C_GeneratePadKeyView) == 0x000070, "Wrong size on GeneralConfig_C_GeneratePadKeyView");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, Temp_name_Variable) == 0x000000, "Member 'GeneralConfig_C_GeneratePadKeyView::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, Temp_name_Variable_1) == 0x000008, "Member 'GeneralConfig_C_GeneratePadKeyView::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, Temp_name_Variable_2) == 0x000010, "Member 'GeneralConfig_C_GeneratePadKeyView::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, Temp_int_Variable) == 0x000018, "Member 'GeneralConfig_C_GeneratePadKeyView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, Temp_int_Variable_1) == 0x00001C, "Member 'GeneralConfig_C_GeneratePadKeyView::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_GetValidValue_ReturnValue) == 0x000028, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000029, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002A, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, Temp_name_Variable_3) == 0x000030, "Member 'GeneralConfig_C_GeneratePadKeyView::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_GetConfigSaveManager_IsValid) == 0x000038, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000040, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_GetPadSkinType_ReturnValue) == 0x000048, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_GetPadSkinType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000049, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, Temp_byte_Variable) == 0x00004A, "Member 'GeneralConfig_C_GeneratePadKeyView::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, K2Node_Select_Default) == 0x00004C, "Member 'GeneralConfig_C_GeneratePadKeyView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_MakeLiteralInt_ReturnValue) == 0x000054, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000058, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_GeneratePadKeyView, CallFunc_Map_Contains_ReturnValue) == 0x000069, "Member 'GeneralConfig_C_GeneratePadKeyView::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.SetOperationModeCheckboxSeklected
// 0x0002 (0x0002 - 0x0000)
struct GeneralConfig_C_SetOperationModeCheckboxSeklected final
{
public:
	ESBOperateMode                                InSelected_Operate_Mode;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_SetOperationModeCheckboxSeklected) == 0x000001, "Wrong alignment on GeneralConfig_C_SetOperationModeCheckboxSeklected");
static_assert(sizeof(GeneralConfig_C_SetOperationModeCheckboxSeklected) == 0x000002, "Wrong size on GeneralConfig_C_SetOperationModeCheckboxSeklected");
static_assert(offsetof(GeneralConfig_C_SetOperationModeCheckboxSeklected, InSelected_Operate_Mode) == 0x000000, "Member 'GeneralConfig_C_SetOperationModeCheckboxSeklected::InSelected_Operate_Mode' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_SetOperationModeCheckboxSeklected, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'GeneralConfig_C_SetOperationModeCheckboxSeklected::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.Completed_C5B7DF9949CED661D78734AB2E938631
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631 final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E18[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FilePath;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631) == 0x000008, "Wrong alignment on GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631");
static_assert(sizeof(GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631) == 0x000018, "Wrong size on GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631");
static_assert(offsetof(GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631, Success) == 0x000000, "Member 'GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631::Success' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631, FilePath) == 0x000008, "Member 'GeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631::FilePath' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.OnSaveCharaConfig
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_OnSaveCharaConfig final
{
public:
	bool                                          In_Result;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_OnSaveCharaConfig) == 0x000001, "Wrong alignment on GeneralConfig_C_OnSaveCharaConfig");
static_assert(sizeof(GeneralConfig_C_OnSaveCharaConfig) == 0x000001, "Wrong size on GeneralConfig_C_OnSaveCharaConfig");
static_assert(offsetof(GeneralConfig_C_OnSaveCharaConfig, In_Result) == 0x000000, "Member 'GeneralConfig_C_OnSaveCharaConfig::In_Result' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.OnSaveCharaConfigDelegate
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_OnSaveCharaConfigDelegate final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_OnSaveCharaConfigDelegate) == 0x000001, "Wrong alignment on GeneralConfig_C_OnSaveCharaConfigDelegate");
static_assert(sizeof(GeneralConfig_C_OnSaveCharaConfigDelegate) == 0x000001, "Wrong size on GeneralConfig_C_OnSaveCharaConfigDelegate");
static_assert(offsetof(GeneralConfig_C_OnSaveCharaConfigDelegate, Result) == 0x000000, "Member 'GeneralConfig_C_OnSaveCharaConfigDelegate::Result' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature) == 0x000004, "Wrong alignment on GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature) == 0x000008, "Wrong size on GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature, Value) == 0x000000, "Member 'GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature, Ratio) == 0x000004, "Member 'GeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature::Ratio' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfig.GeneralConfig_C.ExecuteUbergraph_GeneralConfig
// 0x04A0 (0x04A0 - 0x0000)
struct GeneralConfig_C_ExecuteUbergraph_GeneralConfig final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_12;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E19[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_11;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_In_Result;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E1A[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E1B[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E1C[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E1D[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E1E[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E1F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E20[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E21[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E22[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetGamepadUISpeed_ReturnValue;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadMacheneCache_ReturnValue;             // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedMachineCache_ReturnValue;         // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue; // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUseCheckDialogActive_ReturnValue;       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowScreenshotNotifications_ReturnValue; // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHideHudAtScreenshot_ReturnValue;        // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHideOthersPlayerAtFishing_ReturnValue;  // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPadDecideButtonSwaped_ReturnValue;      // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShortcutRingCloseMode_ReturnValue;      // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShortcutRingAutoCommand_ReturnValue;    // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowDemoCaption_ReturnValue;            // 0x00D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSilentInterruptDialog_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSilentBalloon_ReturnValue;              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_1;             // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E23[0x5];                                     // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_10;          // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_9;           // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E24[0x5];                                     // 0x00F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable_1;                              // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E25[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_Value;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Ratio;                  // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E26[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E27[0x5];                                     // 0x0123(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_5;         // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_5;        // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E28[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             CallFunc_Map_Find_Value;                           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E29[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_4;         // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_4;        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSSLogoPosition                             CallFunc_Map_Find_Value_1;                         // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E2A[0x5];                                     // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_2;                // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_3;                // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetScreenshotSaveDirectory_ReturnValue;   // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetScreenshotSaveDirectory_ReturnValue_1; // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
	class USBOpenModelessDirectoryDialogScreenBlock* CallFunc_SBOpenModelessDirectoryDialogScreenBlock_ReturnValue; // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_8;           // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E2B[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_4;                // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_2;                              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E2C[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_3;         // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_3;        // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBShortcutRingMode                           CallFunc_Map_Find_Value_2;                         // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_7;           // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_6;           // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_5;           // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_4;           // 0x0206(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E2D[0x1];                                     // 0x0207(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_5;                // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_6;                // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_2;        // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBWeaponVisibleType                          CallFunc_Map_Find_Value_3;                         // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_3;                   // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E2E[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_7;                // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0260(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0288(0x0028)()
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E2F[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x02DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_Value_4;                         // 0x02DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_4;                   // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_Value_5;                         // 0x02DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_5;                   // 0x02DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E30[0x1];                                     // 0x02DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_8;                // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Success;                        // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E31[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_FilePath;                       // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_9;                // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool Success, const class FString& FilePath)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0318(0x0010)(ZeroConstructor, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable_3;                              // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable_4;                              // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_Select_Default;                             // 0x032A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x032B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E32[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_1;      // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue;    // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_6;           // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E33[0x5];                                     // 0x033B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_6;       // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_7;           // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E34[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_7;       // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_2;      // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_3;      // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_1;  // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_2;  // 0x035B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_8;           // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E35[0x3];                                     // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_8;       // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_9;           // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E36[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_9;       // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_3;  // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_4;      // 0x0379(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_4;  // 0x037A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_5;      // 0x037B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_10;          // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E37[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_10;      // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_11;          // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E38[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_11;      // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_6;      // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_7;      // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_5;  // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_6;  // 0x039B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_8;      // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_7;  // 0x039D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_12;          // 0x039E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E39[0x1];                                     // 0x039F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_12;      // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_5;                              // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_9;      // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_8;  // 0x03AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_13;          // 0x03AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E3A[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_13;      // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_14;          // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E3B[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_14;      // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_10;     // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_11;     // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_9;  // 0x03CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_10; // 0x03CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_15;          // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E3C[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_15;      // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_16;          // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E3D[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_16;      // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveMacheneCache_ReturnValue;             // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E3E[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetGamepadUISpeed_ReturnValue;            // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadMacheneCache_ReturnValue_1;           // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedMachineCache_ReturnValue_1;       // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_17;          // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E3F[0x5];                                     // 0x03F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_17;      // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_3;           // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_18;          // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E40[0x6];                                     // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_18;      // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_6;                              // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_11; // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E41[0x6];                                     // 0x0412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_10;               // 0x0418(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_12;     // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0429(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x042A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x042B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_19;          // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E42[0x3];                                     // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_19;      // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_11;               // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_12; // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_13;     // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x044A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_20;          // 0x044B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E43[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_20;      // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_12;               // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_14;     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_13; // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x046A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x046B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_21;          // 0x046C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E44[0x3];                                     // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_21;      // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_14; // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                K2Node_Select_Default_1;                           // 0x047A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E45[0x5];                                     // 0x047B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_13;               // 0x0480(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_7;                              // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_15;     // 0x0491(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_8;                              // 0x0492(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0493(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_9;                              // 0x0494(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default_2;                           // 0x0495(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_10;                             // 0x0496(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0497(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_11;                             // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default_3;                           // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_12;                             // 0x049A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x049B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_13;                             // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default_4;                           // 0x049D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default_5;                           // 0x049E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig) == 0x000008, "Wrong alignment on GeneralConfig_C_ExecuteUbergraph_GeneralConfig");
static_assert(sizeof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig) == 0x0004A0, "Wrong size on GeneralConfig_C_ExecuteUbergraph_GeneralConfig");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, EntryPoint) == 0x000000, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::EntryPoint' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable) == 0x000004, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_12) == 0x000006, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_12' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_11) == 0x000018, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_11' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_CustomEvent_In_Result) == 0x000019, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_CustomEvent_In_Result' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsLocallyControlled_ReturnValue) == 0x000031, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerController_ReturnValue) == 0x000038, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetHUD_ReturnValue) == 0x000040, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000048, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerController_ReturnValue_1) == 0x000060, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_CustomEvent_Result) == 0x000068, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid) == 0x000079, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000080, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000088, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000090, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetOperateMode_ReturnValue) == 0x000098, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_2) == 0x000099, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0000A0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_3) == 0x0000A8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x0000B0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_4) == 0x0000B8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x0000C0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetGamepadUISpeed_ReturnValue) == 0x0000C8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetGamepadUISpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_LoadMacheneCache_ReturnValue) == 0x0000CC, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_LoadMacheneCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsLoadedMachineCache_ReturnValue) == 0x0000CD, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsLoadedMachineCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue) == 0x0000CE, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Not_PreBool_ReturnValue) == 0x0000CF, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsUseCheckDialogActive_ReturnValue) == 0x0000D0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsUseCheckDialogActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsShowScreenshotNotifications_ReturnValue) == 0x0000D1, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsShowScreenshotNotifications_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsHideHudAtScreenshot_ReturnValue) == 0x0000D2, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsHideHudAtScreenshot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsHideOthersPlayerAtFishing_ReturnValue) == 0x0000D3, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsHideOthersPlayerAtFishing_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsPadDecideButtonSwaped_ReturnValue) == 0x0000D4, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsPadDecideButtonSwaped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsShortcutRingCloseMode_ReturnValue) == 0x0000D5, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsShortcutRingCloseMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsShortcutRingAutoCommand_ReturnValue) == 0x0000D6, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsShortcutRingAutoCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsShowDemoCaption_ReturnValue) == 0x0000D7, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsShowDemoCaption_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsSilentInterruptDialog_ReturnValue) == 0x0000D8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsSilentInterruptDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsSilentBalloon_ReturnValue) == 0x0000D9, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsSilentBalloon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetOperateMode_ReturnValue_1) == 0x0000DA, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetOperateMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue) == 0x0000E0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x0000F0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_10) == 0x0000F1, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_10' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_9) == 0x0000F2, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_9' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000F8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000100, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_DynamicCast_bSuccess_3) == 0x000108, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_1) == 0x000109, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_Value) == 0x00010C, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_Ratio) == 0x000110, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_Ratio' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetSBPlayerController_ReturnValue) == 0x000118, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000120, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000121, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_bool_Variable) == 0x000122, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectedItem_5) == 0x000128, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectedItem_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectionType_5) == 0x000138, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectionType_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_1) == 0x000140, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_Value) == 0x000150, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_ReturnValue) == 0x000151, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectedItem_4) == 0x000158, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectedItem_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectionType_4) == 0x000168, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectionType_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_Value_1) == 0x000169, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_ReturnValue_1) == 0x00016A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_2) == 0x000170, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_3) == 0x000180, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetScreenshotSaveDirectory_ReturnValue) == 0x000190, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetScreenshotSaveDirectory_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetScreenshotSaveDirectory_ReturnValue_1) == 0x0001A0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetScreenshotSaveDirectory_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SBOpenModelessDirectoryDialogScreenBlock_ReturnValue) == 0x0001C8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SBOpenModelessDirectoryDialogScreenBlock_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsValid_ReturnValue) == 0x0001D0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_8) == 0x0001D1, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_8' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_4) == 0x0001D8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_2) == 0x0001E8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectedItem_3) == 0x0001F0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectedItem_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectionType_3) == 0x000200, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectionType_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_Value_2) == 0x000201, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_ReturnValue_2) == 0x000202, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_7) == 0x000203, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_7' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_6) == 0x000204, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_6' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_5) == 0x000205, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_4) == 0x000206, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_5) == 0x000208, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_6) == 0x000218, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectedItem_2) == 0x000228, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectedItem_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectionType_2) == 0x000238, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectionType_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_bool_Variable_1) == 0x000239, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_Value_3) == 0x00023A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_Value_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_ReturnValue_3) == 0x00023B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_string_Variable) == 0x000240, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_7) == 0x000250, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_MakeStruct_SlateColor) == 0x000260, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_MakeStruct_SlateColor_1) == 0x000288, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x0002B0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectionType_1) == 0x0002C0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectedItem) == 0x0002C8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_SelectionType) == 0x0002D8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002D9, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0002DA, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_Value_4) == 0x0002DB, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_Value_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_ReturnValue_4) == 0x0002DC, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_Value_5) == 0x0002DD, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_Value_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Map_Find_ReturnValue_5) == 0x0002DE, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Map_Find_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_8) == 0x0002E0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_CustomEvent_Success) == 0x0002F0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_CustomEvent_Success' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_CustomEvent_FilePath) == 0x0002F8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_CustomEvent_FilePath' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_9) == 0x000308, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_CreateDelegate_OutputDelegate_1) == 0x000318, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_3) == 0x000328, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_4) == 0x000329, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_Select_Default) == 0x00032A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_5) == 0x00032B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x000330, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_1) == 0x000338, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue) == 0x000339, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_6) == 0x00033A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_6' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_6) == 0x000340, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_7) == 0x000348, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_7' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_7) == 0x000350, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_2) == 0x000358, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_3) == 0x000359, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_1) == 0x00035A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_2) == 0x00035B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_8) == 0x00035C, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_8' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_8) == 0x000360, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_9) == 0x000368, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_9' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_9) == 0x000370, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_3) == 0x000378, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_4) == 0x000379, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_4) == 0x00037A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_5) == 0x00037B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_10) == 0x00037C, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_10' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_10) == 0x000380, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_11) == 0x000388, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_11' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_11) == 0x000390, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_6) == 0x000398, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_7) == 0x000399, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_5) == 0x00039A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_6) == 0x00039B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_8) == 0x00039C, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_7) == 0x00039D, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_12) == 0x00039E, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_12' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_12) == 0x0003A0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_5) == 0x0003A8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_9) == 0x0003A9, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_8) == 0x0003AA, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_13) == 0x0003AB, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_13' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_13) == 0x0003B0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_14) == 0x0003B8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_14' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_14) == 0x0003C0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_10) == 0x0003C8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_11) == 0x0003C9, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_9) == 0x0003CA, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_10) == 0x0003CB, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_15) == 0x0003CC, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_15' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_15) == 0x0003D0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_16) == 0x0003D8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_16' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_16) == 0x0003E0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveMacheneCache_ReturnValue) == 0x0003E8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveMacheneCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SetGamepadUISpeed_ReturnValue) == 0x0003EC, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SetGamepadUISpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_LoadMacheneCache_ReturnValue_1) == 0x0003F0, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_LoadMacheneCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsLoadedMachineCache_ReturnValue_1) == 0x0003F1, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsLoadedMachineCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_17) == 0x0003F2, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_17' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_17) == 0x0003F8, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_3) == 0x000400, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_18) == 0x000401, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_18' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_18) == 0x000408, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_6) == 0x000410, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_11) == 0x000411, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_10) == 0x000418, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_12) == 0x000428, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_MakeLiteralByte_ReturnValue) == 0x000429, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x00042A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_Not_PreBool_ReturnValue_1) == 0x00042B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_19) == 0x00042C, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_19' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_19) == 0x000430, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_11) == 0x000438, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_12) == 0x000448, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_13) == 0x000449, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x00044A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_20) == 0x00044B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_20' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_20) == 0x000450, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_12) == 0x000458, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_14) == 0x000468, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_13) == 0x000469, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00046A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_ComponentBoundEvent_bIsChecked) == 0x00046B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_IsValid_21) == 0x00046C, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_IsValid_21' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetConfigSaveManager_ReturnValue_21) == 0x000470, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetConfigSaveManager_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_bool_Variable_2) == 0x000478, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_IsModifyGeneralConfigSave_ReturnValue_14) == 0x000479, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_IsModifyGeneralConfigSave_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_Select_Default_1) == 0x00047A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_GetPlayerId_ReturnValue_13) == 0x000480, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_GetPlayerId_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_7) == 0x000490, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, CallFunc_SaveGeneralConfigData_ReturnValue_15) == 0x000491, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::CallFunc_SaveGeneralConfigData_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_8) == 0x000492, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_bool_Variable_3) == 0x000493, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_9) == 0x000494, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_Select_Default_2) == 0x000495, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_10) == 0x000496, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_bool_Variable_4) == 0x000497, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_11) == 0x000498, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_Select_Default_3) == 0x000499, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_12) == 0x00049A, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_bool_Variable_5) == 0x00049B, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, Temp_byte_Variable_13) == 0x00049C, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_Select_Default_4) == 0x00049D, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(GeneralConfig_C_ExecuteUbergraph_GeneralConfig, K2Node_Select_Default_5) == 0x00049E, "Member 'GeneralConfig_C_ExecuteUbergraph_GeneralConfig::K2Node_Select_Default_5' has a wrong offset!");

}

