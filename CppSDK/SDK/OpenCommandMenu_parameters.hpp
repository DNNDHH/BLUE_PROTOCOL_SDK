#pragma once

 

// Package: OpenCommandMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function OpenCommandMenu.OpenCommandMenu_C.ExecuteUbergraph_OpenCommandMenu
// 0x0150 (0x0150 - 0x0000)
struct OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4E9F[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA0[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0048(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA1[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA2[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_6;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA3[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4EA4[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA5[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EA6[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu) == 0x000008, "Wrong alignment on OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu");
static_assert(sizeof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu) == 0x000150, "Wrong size on OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, EntryPoint) == 0x000000, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_Event_Animation) == 0x000028, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_Result) == 0x000048, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000050, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000060, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000068, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000078, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000088, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetPlayerManager_ReturnValue) == 0x000098, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000A0, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000B0, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000B8, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000C8, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000D4, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x0000E8, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetPlayerManager_ReturnValue_1) == 0x0000F0, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000F8, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000108, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_InUIType) == 0x000110, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_bInVisibility) == 0x000111, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_bInInstantly) == 0x000112, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000113, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000118, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, Temp_byte_Variable) == 0x000120, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_Sender_1) == 0x000128, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_Param_1) == 0x000130, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_Sender) == 0x000138, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_CustomEvent_Param) == 0x000140, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, Temp_byte_Variable_1) == 0x000148, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000149, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, Temp_bool_Variable) == 0x00014A, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_BooleanAND_ReturnValue) == 0x00014B, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x00014C, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu, K2Node_Select_Default) == 0x00014D, "Member 'OpenCommandMenu_C_ExecuteUbergraph_OpenCommandMenu::K2Node_Select_Default' has a wrong offset!");

// Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Leave
// 0x0010 (0x0010 - 0x0000)
struct OpenCommandMenu_C_OnPhotoMode_Leave final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OpenCommandMenu_C_OnPhotoMode_Leave) == 0x000008, "Wrong alignment on OpenCommandMenu_C_OnPhotoMode_Leave");
static_assert(sizeof(OpenCommandMenu_C_OnPhotoMode_Leave) == 0x000010, "Wrong size on OpenCommandMenu_C_OnPhotoMode_Leave");
static_assert(offsetof(OpenCommandMenu_C_OnPhotoMode_Leave, Sender) == 0x000000, "Member 'OpenCommandMenu_C_OnPhotoMode_Leave::Sender' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_OnPhotoMode_Leave, Param) == 0x000008, "Member 'OpenCommandMenu_C_OnPhotoMode_Leave::Param' has a wrong offset!");

// Function OpenCommandMenu.OpenCommandMenu_C.OnPhotoMode Enter
// 0x0010 (0x0010 - 0x0000)
struct OpenCommandMenu_C_OnPhotoMode_Enter final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OpenCommandMenu_C_OnPhotoMode_Enter) == 0x000008, "Wrong alignment on OpenCommandMenu_C_OnPhotoMode_Enter");
static_assert(sizeof(OpenCommandMenu_C_OnPhotoMode_Enter) == 0x000010, "Wrong size on OpenCommandMenu_C_OnPhotoMode_Enter");
static_assert(offsetof(OpenCommandMenu_C_OnPhotoMode_Enter, Sender) == 0x000000, "Member 'OpenCommandMenu_C_OnPhotoMode_Enter::Sender' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_OnPhotoMode_Enter, Param) == 0x000008, "Member 'OpenCommandMenu_C_OnPhotoMode_Enter::Param' has a wrong offset!");

// Function OpenCommandMenu.OpenCommandMenu_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'OpenCommandMenu_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function OpenCommandMenu.OpenCommandMenu_C.OnChangeOpenCommandMenuFlag
// 0x0001 (0x0001 - 0x0000)
struct OpenCommandMenu_C_OnChangeOpenCommandMenuFlag final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OpenCommandMenu_C_OnChangeOpenCommandMenuFlag) == 0x000001, "Wrong alignment on OpenCommandMenu_C_OnChangeOpenCommandMenuFlag");
static_assert(sizeof(OpenCommandMenu_C_OnChangeOpenCommandMenuFlag) == 0x000001, "Wrong size on OpenCommandMenu_C_OnChangeOpenCommandMenuFlag");
static_assert(offsetof(OpenCommandMenu_C_OnChangeOpenCommandMenuFlag, Result) == 0x000000, "Member 'OpenCommandMenu_C_OnChangeOpenCommandMenuFlag::Result' has a wrong offset!");

// Function OpenCommandMenu.OpenCommandMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct OpenCommandMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OpenCommandMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on OpenCommandMenu_C_OnAnimationFinished");
static_assert(sizeof(OpenCommandMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on OpenCommandMenu_C_OnAnimationFinished");
static_assert(offsetof(OpenCommandMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'OpenCommandMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function OpenCommandMenu.OpenCommandMenu_C.UpdateVisibility
// 0x0018 (0x0018 - 0x0000)
struct OpenCommandMenu_C_UpdateVisibility final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetOpenCommandMenuFlag_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EA7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OpenCommandMenu_C_UpdateVisibility) == 0x000008, "Wrong alignment on OpenCommandMenu_C_UpdateVisibility");
static_assert(sizeof(OpenCommandMenu_C_UpdateVisibility) == 0x000018, "Wrong size on OpenCommandMenu_C_UpdateVisibility");
static_assert(offsetof(OpenCommandMenu_C_UpdateVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'OpenCommandMenu_C_UpdateVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UpdateVisibility, CallFunc_GetOpenCommandMenuFlag_ReturnValue) == 0x000008, "Member 'OpenCommandMenu_C_UpdateVisibility::CallFunc_GetOpenCommandMenuFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UpdateVisibility, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'OpenCommandMenu_C_UpdateVisibility::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function OpenCommandMenu.OpenCommandMenu_C.UpdateKeyText
// 0x0090 (0x0090 - 0x0000)
struct OpenCommandMenu_C_UpdateKeyText final
{
public:
	class FString                                 CallFunc_GetDisplayShortTextByAction_ReturnValue;  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
};
static_assert(alignof(OpenCommandMenu_C_UpdateKeyText) == 0x000008, "Wrong alignment on OpenCommandMenu_C_UpdateKeyText");
static_assert(sizeof(OpenCommandMenu_C_UpdateKeyText) == 0x000090, "Wrong size on OpenCommandMenu_C_UpdateKeyText");
static_assert(offsetof(OpenCommandMenu_C_UpdateKeyText, CallFunc_GetDisplayShortTextByAction_ReturnValue) == 0x000000, "Member 'OpenCommandMenu_C_UpdateKeyText::CallFunc_GetDisplayShortTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UpdateKeyText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'OpenCommandMenu_C_UpdateKeyText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UpdateKeyText, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'OpenCommandMenu_C_UpdateKeyText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UpdateKeyText, K2Node_MakeArray_Array) == 0x000068, "Member 'OpenCommandMenu_C_UpdateKeyText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OpenCommandMenu_C_UpdateKeyText, CallFunc_Format_ReturnValue) == 0x000078, "Member 'OpenCommandMenu_C_UpdateKeyText::CallFunc_Format_ReturnValue' has a wrong offset!");

}

