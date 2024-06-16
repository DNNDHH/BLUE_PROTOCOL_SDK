#pragma once

 

// Package: ChatTypeWindow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChatTypeWindow.ChatTypeWindow_C.EventTypeSelected__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatTypeWindow_C_EventTypeSelected__DelegateSignature final
{
public:
	ESBChatLogType                                SelectedType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatTypeWindow_C_EventTypeSelected__DelegateSignature) == 0x000001, "Wrong alignment on ChatTypeWindow_C_EventTypeSelected__DelegateSignature");
static_assert(sizeof(ChatTypeWindow_C_EventTypeSelected__DelegateSignature) == 0x000001, "Wrong size on ChatTypeWindow_C_EventTypeSelected__DelegateSignature");
static_assert(offsetof(ChatTypeWindow_C_EventTypeSelected__DelegateSignature, SelectedType) == 0x000000, "Member 'ChatTypeWindow_C_EventTypeSelected__DelegateSignature::SelectedType' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.ExecuteUbergraph_ChatTypeWindow
// 0x00B0 (0x00B0 - 0x0000)
struct ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_499E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatWindowTypeItem_C*                  K2Node_ComponentBoundEvent_TypeItem_4;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  K2Node_ComponentBoundEvent_TypeItem_3;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  K2Node_ComponentBoundEvent_TypeItem_2;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  K2Node_ComponentBoundEvent_TypeItem_1;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcPosition_Position;                    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEndAnimOut_Isend;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEndAnimOut_Isend_1;                     // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEndAnimOut_Isend_2;                     // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEndAnimOut_Isend_3;                     // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499F[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatWindowTypeItem_C*                  K2Node_ComponentBoundEvent_TypeItem;               // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEndAnimOut_Isend_4;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49A0[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTalkModeShortCycle_ReturnValue;         // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow) == 0x000008, "Wrong alignment on ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow");
static_assert(sizeof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow) == 0x0000B0, "Wrong size on ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, EntryPoint) == 0x000000, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_MakeStruct_Margin) == 0x000004, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_ComponentBoundEvent_TypeItem_4) == 0x000028, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_ComponentBoundEvent_TypeItem_4' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_ComponentBoundEvent_TypeItem_3) == 0x000030, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_ComponentBoundEvent_TypeItem_3' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_ComponentBoundEvent_TypeItem_2) == 0x000038, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_ComponentBoundEvent_TypeItem_2' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_ComponentBoundEvent_TypeItem_1) == 0x000040, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_ComponentBoundEvent_TypeItem_1' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_CalcPosition_Position) == 0x000048, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_CalcPosition_Position' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000050, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_IsEndAnimOut_Isend) == 0x000058, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_IsEndAnimOut_Isend' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_IsEndAnimOut_Isend_1) == 0x000059, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_IsEndAnimOut_Isend_1' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_IsEndAnimOut_Isend_2) == 0x00005A, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_IsEndAnimOut_Isend_2' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_IsEndAnimOut_Isend_3) == 0x00005B, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_IsEndAnimOut_Isend_3' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_ComponentBoundEvent_TypeItem) == 0x000060, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_ComponentBoundEvent_TypeItem' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_IsEndAnimOut_Isend_4) == 0x000068, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_IsEndAnimOut_Isend_4' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_GetOwningPlayer_ReturnValue) == 0x000088, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_GetHUD_ReturnValue) == 0x000090, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000098, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, CallFunc_IsTalkModeShortCycle_ReturnValue) == 0x0000A9, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::CallFunc_IsTalkModeShortCycle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow, K2Node_SwitchEnum_CmpSuccess) == 0x0000AA, "Member 'ChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.OnClickedDirectChatItem
// 0x0008 (0x0008 - 0x0000)
struct ChatTypeWindow_C_OnClickedDirectChatItem final
{
public:
	class UChatWindowTypeItem_C*                  TypeItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatTypeWindow_C_OnClickedDirectChatItem) == 0x000008, "Wrong alignment on ChatTypeWindow_C_OnClickedDirectChatItem");
static_assert(sizeof(ChatTypeWindow_C_OnClickedDirectChatItem) == 0x000008, "Wrong size on ChatTypeWindow_C_OnClickedDirectChatItem");
static_assert(offsetof(ChatTypeWindow_C_OnClickedDirectChatItem, TypeItem) == 0x000000, "Member 'ChatTypeWindow_C_OnClickedDirectChatItem::TypeItem' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature final
{
public:
	class UChatWindowTypeItem_C*                  TypeItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature");
static_assert(sizeof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong size on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature");
static_assert(offsetof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature, TypeItem) == 0x000000, "Member 'ChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature::TypeItem' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature final
{
public:
	class UChatWindowTypeItem_C*                  TypeItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature");
static_assert(sizeof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong size on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature");
static_assert(offsetof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature, TypeItem) == 0x000000, "Member 'ChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature::TypeItem' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature final
{
public:
	class UChatWindowTypeItem_C*                  TypeItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature");
static_assert(sizeof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong size on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature");
static_assert(offsetof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature, TypeItem) == 0x000000, "Member 'ChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature::TypeItem' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature final
{
public:
	class UChatWindowTypeItem_C*                  TypeItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature");
static_assert(sizeof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong size on ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature");
static_assert(offsetof(ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature, TypeItem) == 0x000000, "Member 'ChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature::TypeItem' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.ShowWindow
// 0x0028 (0x0028 - 0x0000)
struct ChatTypeWindow_C_ShowWindow final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49A1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatTypeWindow_C_ShowWindow) == 0x000008, "Wrong alignment on ChatTypeWindow_C_ShowWindow");
static_assert(sizeof(ChatTypeWindow_C_ShowWindow) == 0x000028, "Wrong size on ChatTypeWindow_C_ShowWindow");
static_assert(offsetof(ChatTypeWindow_C_ShowWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ChatTypeWindow_C_ShowWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ShowWindow, CallFunc_PlaySE_ReturnValue) == 0x000010, "Member 'ChatTypeWindow_C_ShowWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ShowWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'ChatTypeWindow_C_ShowWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_ShowWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'ChatTypeWindow_C_ShowWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.HideWindow
// 0x0018 (0x0018 - 0x0000)
struct ChatTypeWindow_C_HideWindow final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49A2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatTypeWindow_C_HideWindow) == 0x000008, "Wrong alignment on ChatTypeWindow_C_HideWindow");
static_assert(sizeof(ChatTypeWindow_C_HideWindow) == 0x000018, "Wrong size on ChatTypeWindow_C_HideWindow");
static_assert(offsetof(ChatTypeWindow_C_HideWindow, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'ChatTypeWindow_C_HideWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_HideWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ChatTypeWindow_C_HideWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_HideWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'ChatTypeWindow_C_HideWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.IsEndAnimOut
// 0x0003 (0x0003 - 0x0000)
struct ChatTypeWindow_C_IsEndAnimOut final
{
public:
	bool                                          IsEnd;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatTypeWindow_C_IsEndAnimOut) == 0x000001, "Wrong alignment on ChatTypeWindow_C_IsEndAnimOut");
static_assert(sizeof(ChatTypeWindow_C_IsEndAnimOut) == 0x000003, "Wrong size on ChatTypeWindow_C_IsEndAnimOut");
static_assert(offsetof(ChatTypeWindow_C_IsEndAnimOut, IsEnd) == 0x000000, "Member 'ChatTypeWindow_C_IsEndAnimOut::IsEnd' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_IsEndAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'ChatTypeWindow_C_IsEndAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_IsEndAnimOut, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'ChatTypeWindow_C_IsEndAnimOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.InitDirectChatItem
// 0x0070 (0x0070 - 0x0000)
struct ChatTypeWindow_C_InitDirectChatItem final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class UChatWindowTypeItem_C* TypeItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49A3[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatWindowTypeItem_C*                  CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49A4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49A5[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBDirectChatSenderLogData>     CallFunc_GetDirectChatSenderLog_ReturnValue;       // 0x0050(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatTypeWindow_C_InitDirectChatItem) == 0x000008, "Wrong alignment on ChatTypeWindow_C_InitDirectChatItem");
static_assert(sizeof(ChatTypeWindow_C_InitDirectChatItem) == 0x000070, "Wrong size on ChatTypeWindow_C_InitDirectChatItem");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, K2Node_MakeStruct_Margin) == 0x000000, "Member 'ChatTypeWindow_C_InitDirectChatItem::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'ChatTypeWindow_C_InitDirectChatItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, Temp_int_Variable) == 0x000020, "Member 'ChatTypeWindow_C_InitDirectChatItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_Create_ReturnValue) == 0x000028, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_GetUIManager_IsValid) == 0x000044, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_GetUIManager_ReturnValue) == 0x000048, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_GetDirectChatSenderLog_ReturnValue) == 0x000050, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_GetDirectChatSenderLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000064, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000068, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_InitDirectChatItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000069, "Member 'ChatTypeWindow_C_InitDirectChatItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ChatTypeWindow.ChatTypeWindow_C.CalcPosition
// 0x0018 (0x0018 - 0x0000)
struct ChatTypeWindow_C_CalcPosition final
{
public:
	struct FVector2D                              Param_Position;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewPortCalcOffset_Position;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatTypeWindow_C_CalcPosition) == 0x000004, "Wrong alignment on ChatTypeWindow_C_CalcPosition");
static_assert(sizeof(ChatTypeWindow_C_CalcPosition) == 0x000018, "Wrong size on ChatTypeWindow_C_CalcPosition");
static_assert(offsetof(ChatTypeWindow_C_CalcPosition, Param_Position) == 0x000000, "Member 'ChatTypeWindow_C_CalcPosition::Param_Position' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_CalcPosition, CallFunc_GetViewPortCalcOffset_Position) == 0x000008, "Member 'ChatTypeWindow_C_CalcPosition::CallFunc_GetViewPortCalcOffset_Position' has a wrong offset!");
static_assert(offsetof(ChatTypeWindow_C_CalcPosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000010, "Member 'ChatTypeWindow_C_CalcPosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");

}

