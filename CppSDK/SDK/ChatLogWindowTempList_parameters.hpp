#pragma once

 

// Package: ChatLogWindowTempList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.ExecuteUbergraph_ChatLogWindowTempList
// 0x0110 (0x0110 - 0x0000)
struct ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7470[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatUIMessage                       K2Node_CustomEvent_InMess;                         // 0x0018(0x0070)()
	bool                                          K2Node_CustomEvent_bRecieve;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleChat_IsVisible;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7471[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InType;                         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7472[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue_1;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7473[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7474[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7475[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0100(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList");
static_assert(sizeof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList) == 0x000110, "Wrong size on ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, EntryPoint) == 0x000000, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, K2Node_CustomEvent_InMess) == 0x000018, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::K2Node_CustomEvent_InMess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, K2Node_CustomEvent_bRecieve) == 0x000088, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::K2Node_CustomEvent_bRecieve' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_IsVisibleChat_IsVisible) == 0x000089, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_IsVisibleChat_IsVisible' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, K2Node_CustomEvent_InType) == 0x00008C, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::K2Node_CustomEvent_InType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000A8, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_BooleanAND_ReturnValue) == 0x0000B0, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000B1, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B8, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, K2Node_ComponentBoundEvent_Widget) == 0x0000C0, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_GetChatManager_ReturnValue) == 0x0000C8, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_GetChatManager_ReturnValue_1) == 0x0000D0, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_GetChatManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_IsValid_ReturnValue_1) == 0x0000D9, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000E0, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_BooleanAND_ReturnValue_1) == 0x0000E8, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_GetVisibleSetting_ReturnValue) == 0x0000E9, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000EC, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_BooleanAND_ReturnValue_2) == 0x0000FC, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000100, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_EqualEqual_FloatFloat_ReturnValue_1) == 0x000108, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_EqualEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList, CallFunc_EqualEqual_FloatFloat_ReturnValue_2) == 0x000109, "Member 'ChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList::CallFunc_EqualEqual_FloatFloat_ReturnValue_2' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(sizeof(ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong size on ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(offsetof(ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature, Widget) == 0x000000, "Member 'ChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature::Widget' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnUpdateFilterType
// 0x0004 (0x0004 - 0x0000)
struct ChatLogWindowTempList_C_OnUpdateFilterType final
{
public:
	int32                                         InType;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_OnUpdateFilterType) == 0x000004, "Wrong alignment on ChatLogWindowTempList_C_OnUpdateFilterType");
static_assert(sizeof(ChatLogWindowTempList_C_OnUpdateFilterType) == 0x000004, "Wrong size on ChatLogWindowTempList_C_OnUpdateFilterType");
static_assert(offsetof(ChatLogWindowTempList_C_OnUpdateFilterType, InType) == 0x000000, "Member 'ChatLogWindowTempList_C_OnUpdateFilterType::InType' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnCreateMessage_Event
// 0x0078 (0x0078 - 0x0000)
struct ChatLogWindowTempList_C_OnCreateMessage_Event final
{
public:
	struct FSBChatUIMessage                       InMess;                                            // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bRecieve;                                          // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowTempList_C_OnCreateMessage_Event) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_OnCreateMessage_Event");
static_assert(sizeof(ChatLogWindowTempList_C_OnCreateMessage_Event) == 0x000078, "Wrong size on ChatLogWindowTempList_C_OnCreateMessage_Event");
static_assert(offsetof(ChatLogWindowTempList_C_OnCreateMessage_Event, InMess) == 0x000000, "Member 'ChatLogWindowTempList_C_OnCreateMessage_Event::InMess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_OnCreateMessage_Event, bRecieve) == 0x000070, "Member 'ChatLogWindowTempList_C_OnCreateMessage_Event::bRecieve' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.ShowWindow
// 0x0010 (0x0010 - 0x0000)
struct ChatLogWindowTempList_C_ShowWindow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowTempList_C_ShowWindow) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_ShowWindow");
static_assert(sizeof(ChatLogWindowTempList_C_ShowWindow) == 0x000010, "Wrong size on ChatLogWindowTempList_C_ShowWindow");
static_assert(offsetof(ChatLogWindowTempList_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ChatLogWindowTempList_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'ChatLogWindowTempList_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.HideWindow
// 0x0010 (0x0010 - 0x0000)
struct ChatLogWindowTempList_C_HideWindow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowTempList_C_HideWindow) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_HideWindow");
static_assert(sizeof(ChatLogWindowTempList_C_HideWindow) == 0x000010, "Wrong size on ChatLogWindowTempList_C_HideWindow");
static_assert(offsetof(ChatLogWindowTempList_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ChatLogWindowTempList_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'ChatLogWindowTempList_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetEditMode
// 0x0005 (0x0005 - 0x0000)
struct ChatLogWindowTempList_C_SetEditMode final
{
public:
	bool                                          InEdit;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_SetEditMode) == 0x000001, "Wrong alignment on ChatLogWindowTempList_C_SetEditMode");
static_assert(sizeof(ChatLogWindowTempList_C_SetEditMode) == 0x000005, "Wrong size on ChatLogWindowTempList_C_SetEditMode");
static_assert(offsetof(ChatLogWindowTempList_C_SetEditMode, InEdit) == 0x000000, "Member 'ChatLogWindowTempList_C_SetEditMode::InEdit' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetEditMode, Temp_bool_Variable) == 0x000001, "Member 'ChatLogWindowTempList_C_SetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetEditMode, Temp_byte_Variable) == 0x000002, "Member 'ChatLogWindowTempList_C_SetEditMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetEditMode, Temp_byte_Variable_1) == 0x000003, "Member 'ChatLogWindowTempList_C_SetEditMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetEditMode, K2Node_Select_Default) == 0x000004, "Member 'ChatLogWindowTempList_C_SetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.GetWindowSize
// 0x0010 (0x0010 - 0x0000)
struct ChatLogWindowTempList_C_GetWindowSize final
{
public:
	struct FVector2D                              RetSize;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_GetWindowSize) == 0x000004, "Wrong alignment on ChatLogWindowTempList_C_GetWindowSize");
static_assert(sizeof(ChatLogWindowTempList_C_GetWindowSize) == 0x000010, "Wrong size on ChatLogWindowTempList_C_GetWindowSize");
static_assert(offsetof(ChatLogWindowTempList_C_GetWindowSize, RetSize) == 0x000000, "Member 'ChatLogWindowTempList_C_GetWindowSize::RetSize' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_GetWindowSize, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'ChatLogWindowTempList_C_GetWindowSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetWindowSize
// 0x0018 (0x0018 - 0x0000)
struct ChatLogWindowTempList_C_SetWindowSize final
{
public:
	struct FVector2D                              InSize;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_SetWindowSize) == 0x000004, "Wrong alignment on ChatLogWindowTempList_C_SetWindowSize");
static_assert(sizeof(ChatLogWindowTempList_C_SetWindowSize) == 0x000018, "Wrong size on ChatLogWindowTempList_C_SetWindowSize");
static_assert(offsetof(ChatLogWindowTempList_C_SetWindowSize, InSize) == 0x000000, "Member 'ChatLogWindowTempList_C_SetWindowSize::InSize' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetWindowSize, CallFunc_BreakVector2D_X) == 0x000008, "Member 'ChatLogWindowTempList_C_SetWindowSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetWindowSize, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'ChatLogWindowTempList_C_SetWindowSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetWindowSize, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'ChatLogWindowTempList_C_SetWindowSize::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetWindowSize, CallFunc_FClamp_ReturnValue_1) == 0x000014, "Member 'ChatLogWindowTempList_C_SetWindowSize::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.CreateMessageEntry
// 0x0098 (0x0098 - 0x0000)
struct ChatLogWindowTempList_C_CreateMessageEntry final
{
public:
	struct FSBChatUIMessage                       InMess;                                            // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bRecieve;                                          // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7476[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHudVisible_ReturnValue;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7477[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatMessageEntryItem_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_CreateMessageEntry) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_CreateMessageEntry");
static_assert(sizeof(ChatLogWindowTempList_C_CreateMessageEntry) == 0x000098, "Wrong size on ChatLogWindowTempList_C_CreateMessageEntry");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, InMess) == 0x000000, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::InMess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, bRecieve) == 0x000070, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::bRecieve' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_GetUIManager_IsValid) == 0x000071, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_GetUIManager_ReturnValue) == 0x000078, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000080, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_IsHudVisible_ReturnValue) == 0x000088, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_IsHudVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_GetVisibleSetting_ReturnValue) == 0x000089, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_BooleanAND_ReturnValue) == 0x00008A, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_BooleanAND_ReturnValue_1) == 0x00008B, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_CreateMessageEntry, CallFunc_SpawnObject_ReturnValue) == 0x000090, "Member 'ChatLogWindowTempList_C_CreateMessageEntry::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetVisible
// 0x0028 (0x0028 - 0x0000)
struct ChatLogWindowTempList_C_SetVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7478[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_SetVisible) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_SetVisible");
static_assert(sizeof(ChatLogWindowTempList_C_SetVisible) == 0x000028, "Wrong size on ChatLogWindowTempList_C_SetVisible");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, Param_IsVisible) == 0x000000, "Member 'ChatLogWindowTempList_C_SetVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, Temp_bool_Variable) == 0x000001, "Member 'ChatLogWindowTempList_C_SetVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, Temp_byte_Variable) == 0x000002, "Member 'ChatLogWindowTempList_C_SetVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, Temp_byte_Variable_1) == 0x000003, "Member 'ChatLogWindowTempList_C_SetVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'ChatLogWindowTempList_C_SetVisible::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ChatLogWindowTempList_C_SetVisible::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'ChatLogWindowTempList_C_SetVisible::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000020, "Member 'ChatLogWindowTempList_C_SetVisible::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetVisible, K2Node_Select_Default) == 0x000021, "Member 'ChatLogWindowTempList_C_SetVisible::K2Node_Select_Default' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.IsVisibleChat
// 0x0078 (0x0078 - 0x0000)
struct ChatLogWindowTempList_C_IsVisibleChat final
{
public:
	struct FSBChatUIMessage                       InChatMessage;                                     // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Param_IsVisible;                                   // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowTempList_C_IsVisibleChat) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_IsVisibleChat");
static_assert(sizeof(ChatLogWindowTempList_C_IsVisibleChat) == 0x000078, "Wrong size on ChatLogWindowTempList_C_IsVisibleChat");
static_assert(offsetof(ChatLogWindowTempList_C_IsVisibleChat, InChatMessage) == 0x000000, "Member 'ChatLogWindowTempList_C_IsVisibleChat::InChatMessage' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_IsVisibleChat, Param_IsVisible) == 0x000070, "Member 'ChatLogWindowTempList_C_IsVisibleChat::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_IsVisibleChat, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'ChatLogWindowTempList_C_IsVisibleChat::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetUnreadIconVisible
// 0x0018 (0x0018 - 0x0000)
struct ChatLogWindowTempList_C_SetUnreadIconVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7479[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_SetUnreadIconVisible) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_SetUnreadIconVisible");
static_assert(sizeof(ChatLogWindowTempList_C_SetUnreadIconVisible) == 0x000018, "Wrong size on ChatLogWindowTempList_C_SetUnreadIconVisible");
static_assert(offsetof(ChatLogWindowTempList_C_SetUnreadIconVisible, Param_IsVisible) == 0x000000, "Member 'ChatLogWindowTempList_C_SetUnreadIconVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetUnreadIconVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'ChatLogWindowTempList_C_SetUnreadIconVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetUnreadIconVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'ChatLogWindowTempList_C_SetUnreadIconVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetUnreadIconVisible, Temp_bool_Variable) == 0x000003, "Member 'ChatLogWindowTempList_C_SetUnreadIconVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetUnreadIconVisible, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ChatLogWindowTempList_C_SetUnreadIconVisible::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_SetUnreadIconVisible, K2Node_Select_Default) == 0x000010, "Member 'ChatLogWindowTempList_C_SetUnreadIconVisible::K2Node_Select_Default' has a wrong offset!");

// Function ChatLogWindowTempList.ChatLogWindowTempList_C.UpdatePopTime
// 0x0030 (0x0030 - 0x0000)
struct ChatLogWindowTempList_C_UpdatePopTime final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_2;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_747A[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLogDispTimeType_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedChatLogWindowStatus_ReturnValue;  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_747B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowTempList_C_UpdatePopTime) == 0x000008, "Wrong alignment on ChatLogWindowTempList_C_UpdatePopTime");
static_assert(sizeof(ChatLogWindowTempList_C_UpdatePopTime) == 0x000030, "Wrong size on ChatLogWindowTempList_C_UpdatePopTime");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, Temp_int_Variable) == 0x000000, "Member 'ChatLogWindowTempList_C_UpdatePopTime::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, Temp_float_Variable) == 0x000004, "Member 'ChatLogWindowTempList_C_UpdatePopTime::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, Temp_float_Variable_1) == 0x000008, "Member 'ChatLogWindowTempList_C_UpdatePopTime::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, Temp_float_Variable_2) == 0x00000C, "Member 'ChatLogWindowTempList_C_UpdatePopTime::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, Temp_float_Variable_3) == 0x000010, "Member 'ChatLogWindowTempList_C_UpdatePopTime::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, CallFunc_GetConfigSaveManager_IsValid) == 0x000014, "Member 'ChatLogWindowTempList_C_UpdatePopTime::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'ChatLogWindowTempList_C_UpdatePopTime::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, CallFunc_GetLogDispTimeType_ReturnValue) == 0x000020, "Member 'ChatLogWindowTempList_C_UpdatePopTime::CallFunc_GetLogDispTimeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, CallFunc_IsLoadedChatLogWindowStatus_ReturnValue) == 0x000024, "Member 'ChatLogWindowTempList_C_UpdatePopTime::CallFunc_IsLoadedChatLogWindowStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowTempList_C_UpdatePopTime, K2Node_Select_Default) == 0x000028, "Member 'ChatLogWindowTempList_C_UpdatePopTime::K2Node_Select_Default' has a wrong offset!");

}

