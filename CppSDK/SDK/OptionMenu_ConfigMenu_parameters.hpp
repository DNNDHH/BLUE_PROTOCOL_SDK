#pragma once

 

// Package: OptionMenu_ConfigMenu

#include "Basic.hpp"

#include "EKeyGuideType_structs.hpp"
#include "Configurations_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetCloseState
// 0x0002 (0x0002 - 0x0000)
struct OptionMenu_ConfigMenu_C_SetCloseState final
{
public:
	bool                                          Close;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_SetCloseState) == 0x000001, "Wrong alignment on OptionMenu_ConfigMenu_C_SetCloseState");
static_assert(sizeof(OptionMenu_ConfigMenu_C_SetCloseState) == 0x000002, "Wrong size on OptionMenu_ConfigMenu_C_SetCloseState");
static_assert(offsetof(OptionMenu_ConfigMenu_C_SetCloseState, Close) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_SetCloseState::Close' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_SetCloseState, K2Node_SwitchInteger_CmpSuccess) == 0x000001, "Member 'OptionMenu_ConfigMenu_C_SetCloseState::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsClosable
// 0x0003 (0x0003 - 0x0000)
struct OptionMenu_ConfigMenu_C_IsClosable final
{
public:
	bool                                          IsClose;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClosed_IsClosed;                        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_IsClosable) == 0x000001, "Wrong alignment on OptionMenu_ConfigMenu_C_IsClosable");
static_assert(sizeof(OptionMenu_ConfigMenu_C_IsClosable) == 0x000003, "Wrong size on OptionMenu_ConfigMenu_C_IsClosable");
static_assert(offsetof(OptionMenu_ConfigMenu_C_IsClosable, IsClose) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_IsClosable::IsClose' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_IsClosable, CallFunc_IsClosed_IsClosed) == 0x000001, "Member 'OptionMenu_ConfigMenu_C_IsClosable::CallFunc_IsClosed_IsClosed' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_IsClosable, K2Node_SwitchInteger_CmpSuccess) == 0x000002, "Member 'OptionMenu_ConfigMenu_C_IsClosable::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsChangeable
// 0x0004 (0x0004 - 0x0000)
struct OptionMenu_ConfigMenu_C_IsChangeable final
{
public:
	bool                                          IsChanged;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Changed;                                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChanged_isChanged;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_IsChangeable) == 0x000001, "Wrong alignment on OptionMenu_ConfigMenu_C_IsChangeable");
static_assert(sizeof(OptionMenu_ConfigMenu_C_IsChangeable) == 0x000004, "Wrong size on OptionMenu_ConfigMenu_C_IsChangeable");
static_assert(offsetof(OptionMenu_ConfigMenu_C_IsChangeable, IsChanged) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_IsChangeable::IsChanged' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_IsChangeable, Changed) == 0x000001, "Member 'OptionMenu_ConfigMenu_C_IsChangeable::Changed' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_IsChangeable, K2Node_SwitchInteger_CmpSuccess) == 0x000002, "Member 'OptionMenu_ConfigMenu_C_IsChangeable::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_IsChangeable, CallFunc_IsChanged_isChanged) == 0x000003, "Member 'OptionMenu_ConfigMenu_C_IsChangeable::CallFunc_IsChanged_isChanged' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetSelectedItem
// 0x0008 (0x0008 - 0x0000)
struct OptionMenu_ConfigMenu_C_SetSelectedItem final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_SetSelectedItem) == 0x000004, "Wrong alignment on OptionMenu_ConfigMenu_C_SetSelectedItem");
static_assert(sizeof(OptionMenu_ConfigMenu_C_SetSelectedItem) == 0x000008, "Wrong size on OptionMenu_ConfigMenu_C_SetSelectedItem");
static_assert(offsetof(OptionMenu_ConfigMenu_C_SetSelectedItem, InItemID) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_SetSelectedItem::InItemID' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_SetSelectedItem, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'OptionMenu_ConfigMenu_C_SetSelectedItem::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfigDelegate_����
// 0x0001 (0x0001 - 0x0000)
struct OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____) == 0x000001, "Wrong alignment on OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____");
static_assert(sizeof(OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____) == 0x000001, "Wrong size on OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____");
static_assert(offsetof(OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____, Result) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate_____::Result' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfig
// 0x0001 (0x0001 - 0x0000)
struct OptionMenu_ConfigMenu_C_OnSaveCharaConfig final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_OnSaveCharaConfig) == 0x000001, "Wrong alignment on OptionMenu_ConfigMenu_C_OnSaveCharaConfig");
static_assert(sizeof(OptionMenu_ConfigMenu_C_OnSaveCharaConfig) == 0x000001, "Wrong size on OptionMenu_ConfigMenu_C_OnSaveCharaConfig");
static_assert(offsetof(OptionMenu_ConfigMenu_C_OnSaveCharaConfig, InResult) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_OnSaveCharaConfig::InResult' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ChangeCheck
// 0x0004 (0x0004 - 0x0000)
struct OptionMenu_ConfigMenu_C_ChangeCheck final
{
public:
	int32                                         Param_NextId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_ChangeCheck) == 0x000004, "Wrong alignment on OptionMenu_ConfigMenu_C_ChangeCheck");
static_assert(sizeof(OptionMenu_ConfigMenu_C_ChangeCheck) == 0x000004, "Wrong size on OptionMenu_ConfigMenu_C_ChangeCheck");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ChangeCheck, Param_NextId) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_ChangeCheck::Param_NextId' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SelectSubMenu
// 0x0004 (0x0004 - 0x0000)
struct OptionMenu_ConfigMenu_C_SelectSubMenu final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_SelectSubMenu) == 0x000004, "Wrong alignment on OptionMenu_ConfigMenu_C_SelectSubMenu");
static_assert(sizeof(OptionMenu_ConfigMenu_C_SelectSubMenu) == 0x000004, "Wrong size on OptionMenu_ConfigMenu_C_SelectSubMenu");
static_assert(offsetof(OptionMenu_ConfigMenu_C_SelectSubMenu, ButtonId) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_SelectSubMenu::ButtonId' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetTitleMode
// 0x0001 (0x0001 - 0x0000)
struct OptionMenu_ConfigMenu_C_SetTitleMode final
{
public:
	bool                                          bTitleMode;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_SetTitleMode) == 0x000001, "Wrong alignment on OptionMenu_ConfigMenu_C_SetTitleMode");
static_assert(sizeof(OptionMenu_ConfigMenu_C_SetTitleMode) == 0x000001, "Wrong size on OptionMenu_ConfigMenu_C_SetTitleMode");
static_assert(offsetof(OptionMenu_ConfigMenu_C_SetTitleMode, bTitleMode) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_SetTitleMode::bTitleMode' has a wrong offset!");

// Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ExecuteUbergraph_OptionMenu_ConfigMenu
// 0x0128 (0x0128 - 0x0000)
struct OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D6D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D6E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_2;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D6F[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfigurations                               Temp_byte_Variable_3;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfigurations                               Temp_byte_Variable_4;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfigurations                               Temp_byte_Variable_5;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfigurations                               Temp_byte_Variable_6;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfigurations                               Temp_byte_Variable_7;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D70[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 ButtonId)>               K2Node_CreateDelegate_OutputDelegate_2;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D71[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InResult;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D72[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D73[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D74[0x1];                                     // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Nextid;                         // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfigurations                               K2Node_Select_Default;                             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBOperateMode                                Temp_byte_Variable_8;                              // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D75[0x1];                                     // 0x00D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D76[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ButtonId;                       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D77[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D78[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_1;             // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_Select_Default_1;                           // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bTitleMode;                     // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D79[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu) == 0x000008, "Wrong alignment on OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu");
static_assert(sizeof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu) == 0x000128, "Wrong size on OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, EntryPoint) == 0x000000, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable) == 0x000010, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetHUD_ReturnValue) == 0x000018, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000020, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_1) == 0x000031, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_2) == 0x000032, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_int_Variable) == 0x000034, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_3) == 0x000038, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_4) == 0x000039, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_5) == 0x00003A, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_6) == 0x00003B, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_7) == 0x00003C, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000060, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000070, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000080, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CustomEvent_Result) == 0x000090, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000098, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CustomEvent_InResult) == 0x0000A0, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CustomEvent_InResult' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000A8, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000B8, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000C0, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_IsLocallyControlled_ReturnValue) == 0x0000C9, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_SwitchInteger_CmpSuccess) == 0x0000CA, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CustomEvent_Nextid) == 0x0000CC, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CustomEvent_Nextid' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_Select_Default) == 0x0000D0, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000D1, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, Temp_byte_Variable_8) == 0x0000D2, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000D4, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_SwitchInteger_CmpSuccess_1) == 0x0000E4, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CustomEvent_ButtonId) == 0x0000E8, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CustomEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetConfigSaveManager_IsValid) == 0x0000EC, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000F0, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetOperateMode_ReturnValue) == 0x0000F8, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0000F9, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000100, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetOperateMode_ReturnValue_1) == 0x000108, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetOperateMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_Select_Default_1) == 0x000109, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_CustomEvent_bTitleMode) == 0x00010A, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_CustomEvent_bTitleMode' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, CallFunc_GetPlayerController_ReturnValue_2) == 0x000110, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000118, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu, K2Node_DynamicCast_bSuccess_3) == 0x000120, "Member 'OptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

}

