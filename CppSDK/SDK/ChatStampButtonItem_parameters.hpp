#pragma once

 

// Package: ChatStampButtonItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelect__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ChatStampButtonItem_C_OnSelect__DelegateSignature final
{
public:
	int32                                         RetStampID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F60[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 InSelectItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatStampButtonItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_OnSelect__DelegateSignature");
static_assert(sizeof(ChatStampButtonItem_C_OnSelect__DelegateSignature) == 0x000010, "Wrong size on ChatStampButtonItem_C_OnSelect__DelegateSignature");
static_assert(offsetof(ChatStampButtonItem_C_OnSelect__DelegateSignature, RetStampID) == 0x000000, "Member 'ChatStampButtonItem_C_OnSelect__DelegateSignature::RetStampID' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnSelect__DelegateSignature, InSelectItem) == 0x000008, "Member 'ChatStampButtonItem_C_OnSelect__DelegateSignature::InSelectItem' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelectRight__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ChatStampButtonItem_C_OnSelectRight__DelegateSignature final
{
public:
	int32                                         RetStampID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F61[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 InSelectItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatStampButtonItem_C_OnSelectRight__DelegateSignature) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_OnSelectRight__DelegateSignature");
static_assert(sizeof(ChatStampButtonItem_C_OnSelectRight__DelegateSignature) == 0x000010, "Wrong size on ChatStampButtonItem_C_OnSelectRight__DelegateSignature");
static_assert(offsetof(ChatStampButtonItem_C_OnSelectRight__DelegateSignature, RetStampID) == 0x000000, "Member 'ChatStampButtonItem_C_OnSelectRight__DelegateSignature::RetStampID' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnSelectRight__DelegateSignature, InSelectItem) == 0x000008, "Member 'ChatStampButtonItem_C_OnSelectRight__DelegateSignature::InSelectItem' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.ExecuteUbergraph_ChatStampButtonItem
// 0x0070 (0x0070 - 0x0000)
struct ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsCoolTime)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F62[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F63[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsCoolTime)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_IsCoolTime;                     // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bValid;                         // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F64[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_StampId;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F65[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBChatManager*                         CallFunc_GetChatManager_ReturnValue_1;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCoolTimeCountStamp_ReturnValue;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F66[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFloatStampIcon_C*               CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem");
static_assert(sizeof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem) == 0x000070, "Wrong size on ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, EntryPoint) == 0x000000, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_IsValid_ReturnValue_1) == 0x000015, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_GetChatManager_ReturnValue) == 0x000018, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_GetChatManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, K2Node_CustomEvent_IsCoolTime) == 0x000034, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::K2Node_CustomEvent_IsCoolTime' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_Not_PreBool_ReturnValue) == 0x000035, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, K2Node_CustomEvent_bValid) == 0x000036, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::K2Node_CustomEvent_bValid' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, K2Node_CustomEvent_StampId) == 0x000038, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::K2Node_CustomEvent_StampId' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_GetChatManager_ReturnValue_1) == 0x000040, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_GetChatManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_IsCoolTimeCountStamp_ReturnValue) == 0x000048, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_IsCoolTimeCountStamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000049, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_Create_ReturnValue) == 0x000050, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000058, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem, CallFunc_BooleanAND_ReturnValue) == 0x000069, "Member 'ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.OnValidStampDelegate_Event_0
// 0x0008 (0x0008 - 0x0000)
struct ChatStampButtonItem_C_OnValidStampDelegate_Event_0 final
{
public:
	bool                                          bValid;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F67[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_StampId;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatStampButtonItem_C_OnValidStampDelegate_Event_0) == 0x000004, "Wrong alignment on ChatStampButtonItem_C_OnValidStampDelegate_Event_0");
static_assert(sizeof(ChatStampButtonItem_C_OnValidStampDelegate_Event_0) == 0x000008, "Wrong size on ChatStampButtonItem_C_OnValidStampDelegate_Event_0");
static_assert(offsetof(ChatStampButtonItem_C_OnValidStampDelegate_Event_0, bValid) == 0x000000, "Member 'ChatStampButtonItem_C_OnValidStampDelegate_Event_0::bValid' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnValidStampDelegate_Event_0, Param_StampId) == 0x000004, "Member 'ChatStampButtonItem_C_OnValidStampDelegate_Event_0::Param_StampId' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.OnChangeCoolTimeStamp
// 0x0001 (0x0001 - 0x0000)
struct ChatStampButtonItem_C_OnChangeCoolTimeStamp final
{
public:
	bool                                          IsCoolTime;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatStampButtonItem_C_OnChangeCoolTimeStamp) == 0x000001, "Wrong alignment on ChatStampButtonItem_C_OnChangeCoolTimeStamp");
static_assert(sizeof(ChatStampButtonItem_C_OnChangeCoolTimeStamp) == 0x000001, "Wrong size on ChatStampButtonItem_C_OnChangeCoolTimeStamp");
static_assert(offsetof(ChatStampButtonItem_C_OnChangeCoolTimeStamp, IsCoolTime) == 0x000000, "Member 'ChatStampButtonItem_C_OnChangeCoolTimeStamp::IsCoolTime' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SetStamp
// 0x0018 (0x0018 - 0x0000)
struct ChatStampButtonItem_C_SetStamp final
{
public:
	int32                                         InStampId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F68[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatStampButtonItem_C_SetStamp) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_SetStamp");
static_assert(sizeof(ChatStampButtonItem_C_SetStamp) == 0x000018, "Wrong size on ChatStampButtonItem_C_SetStamp");
static_assert(offsetof(ChatStampButtonItem_C_SetStamp, InStampId) == 0x000000, "Member 'ChatStampButtonItem_C_SetStamp::InStampId' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetStamp, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'ChatStampButtonItem_C_SetStamp::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SetIconSelected
// 0x07C8 (0x07C8 - 0x0000)
struct ChatStampButtonItem_C_SetIconSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F69[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00B8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0140(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01C8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0250(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x04C8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0550(0x0278)()
};
static_assert(alignof(ChatStampButtonItem_C_SetIconSelected) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_SetIconSelected");
static_assert(sizeof(ChatStampButtonItem_C_SetIconSelected) == 0x0007C8, "Wrong size on ChatStampButtonItem_C_SetIconSelected");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, IsSelected) == 0x000000, "Member 'ChatStampButtonItem_C_SetIconSelected::IsSelected' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_1) == 0x0000B8, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_2) == 0x000140, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_3) == 0x0001C8, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_ButtonStyle) == 0x000250, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_SlateBrush_4) == 0x0004C8, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetIconSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000550, "Member 'ChatStampButtonItem_C_SetIconSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SetDragable
// 0x0001 (0x0001 - 0x0000)
struct ChatStampButtonItem_C_SetDragable final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatStampButtonItem_C_SetDragable) == 0x000001, "Wrong alignment on ChatStampButtonItem_C_SetDragable");
static_assert(sizeof(ChatStampButtonItem_C_SetDragable) == 0x000001, "Wrong size on ChatStampButtonItem_C_SetDragable");
static_assert(offsetof(ChatStampButtonItem_C_SetDragable, InDragable) == 0x000000, "Member 'ChatStampButtonItem_C_SetDragable::InDragable' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.OnPreviewMouseButtonDown
// 0x0398 (0x0398 - 0x0000)
struct ChatStampButtonItem_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1; // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F6A[0x6];                                     // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue_1;        // 0x0220(0x00B8)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F6B[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x02E0(0x00B8)()
};
static_assert(alignof(ChatStampButtonItem_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_OnPreviewMouseButtonDown");
static_assert(sizeof(ChatStampButtonItem_C_OnPreviewMouseButtonDown) == 0x000398, "Wrong size on ChatStampButtonItem_C_OnPreviewMouseButtonDown");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000218, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1) == 0x000219, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue_1) == 0x000220, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, CallFunc_BooleanAND_ReturnValue) == 0x0002D8, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x0002E0, "Member 'ChatStampButtonItem_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.OnDragDetected
// 0x00B8 (0x00B8 - 0x0000)
struct ChatStampButtonItem_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutDragDropOperation_C*           CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatStampButtonItem_C_OnDragDetected) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_OnDragDetected");
static_assert(sizeof(ChatStampButtonItem_C_OnDragDetected) == 0x0000B8, "Wrong size on ChatStampButtonItem_C_OnDragDetected");
static_assert(offsetof(ChatStampButtonItem_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'ChatStampButtonItem_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'ChatStampButtonItem_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnDragDetected, Operation) == 0x0000A8, "Member 'ChatStampButtonItem_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B0, "Member 'ChatStampButtonItem_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct ChatStampButtonItem_C_SetPressedSoundId final
{
public:
	ESystemSE                                     PressedSystemSEId;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatStampButtonItem_C_SetPressedSoundId) == 0x000001, "Wrong alignment on ChatStampButtonItem_C_SetPressedSoundId");
static_assert(sizeof(ChatStampButtonItem_C_SetPressedSoundId) == 0x000002, "Wrong size on ChatStampButtonItem_C_SetPressedSoundId");
static_assert(offsetof(ChatStampButtonItem_C_SetPressedSoundId, PressedSystemSEId) == 0x000000, "Member 'ChatStampButtonItem_C_SetPressedSoundId::PressedSystemSEId' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ChatStampButtonItem_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SetViewLarger
// 0x0001 (0x0001 - 0x0000)
struct ChatStampButtonItem_C_SetViewLarger final
{
public:
	bool                                          InViewLarger;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatStampButtonItem_C_SetViewLarger) == 0x000001, "Wrong alignment on ChatStampButtonItem_C_SetViewLarger");
static_assert(sizeof(ChatStampButtonItem_C_SetViewLarger) == 0x000001, "Wrong size on ChatStampButtonItem_C_SetViewLarger");
static_assert(offsetof(ChatStampButtonItem_C_SetViewLarger, InViewLarger) == 0x000000, "Member 'ChatStampButtonItem_C_SetViewLarger::InViewLarger' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.GetFloatStampPoint
// 0x0050 (0x0050 - 0x0000)
struct ChatStampButtonItem_C_GetFloatStampPoint final
{
public:
	struct FVector2D                              OutPos;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0008(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatStampButtonItem_C_GetFloatStampPoint) == 0x000004, "Wrong alignment on ChatStampButtonItem_C_GetFloatStampPoint");
static_assert(sizeof(ChatStampButtonItem_C_GetFloatStampPoint) == 0x000050, "Wrong size on ChatStampButtonItem_C_GetFloatStampPoint");
static_assert(offsetof(ChatStampButtonItem_C_GetFloatStampPoint, OutPos) == 0x000000, "Member 'ChatStampButtonItem_C_GetFloatStampPoint::OutPos' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_GetFloatStampPoint, CallFunc_GetCachedGeometry_ReturnValue) == 0x000008, "Member 'ChatStampButtonItem_C_GetFloatStampPoint::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_GetFloatStampPoint, CallFunc_LocalToViewport_PixelPosition) == 0x000040, "Member 'ChatStampButtonItem_C_GetFloatStampPoint::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_GetFloatStampPoint, CallFunc_LocalToViewport_ViewportPosition) == 0x000048, "Member 'ChatStampButtonItem_C_GetFloatStampPoint::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SetLimitedTimeIcon
// 0x0001 (0x0001 - 0x0000)
struct ChatStampButtonItem_C_SetLimitedTimeIcon final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatStampButtonItem_C_SetLimitedTimeIcon) == 0x000001, "Wrong alignment on ChatStampButtonItem_C_SetLimitedTimeIcon");
static_assert(sizeof(ChatStampButtonItem_C_SetLimitedTimeIcon) == 0x000001, "Wrong size on ChatStampButtonItem_C_SetLimitedTimeIcon");
static_assert(offsetof(ChatStampButtonItem_C_SetLimitedTimeIcon, Visible) == 0x000000, "Member 'ChatStampButtonItem_C_SetLimitedTimeIcon::Visible' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SetShortcutIcon
// 0x0018 (0x0018 - 0x0000)
struct ChatStampButtonItem_C_SetShortcutIcon final
{
public:
	class FString                                 Param_StampId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsVisibility;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRegistShortcutByStamp_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatStampButtonItem_C_SetShortcutIcon) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_SetShortcutIcon");
static_assert(sizeof(ChatStampButtonItem_C_SetShortcutIcon) == 0x000018, "Wrong size on ChatStampButtonItem_C_SetShortcutIcon");
static_assert(offsetof(ChatStampButtonItem_C_SetShortcutIcon, Param_StampId) == 0x000000, "Member 'ChatStampButtonItem_C_SetShortcutIcon::Param_StampId' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetShortcutIcon, IsVisibility) == 0x000010, "Member 'ChatStampButtonItem_C_SetShortcutIcon::IsVisibility' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_SetShortcutIcon, CallFunc_IsRegistShortcutByStamp_ReturnValue) == 0x000011, "Member 'ChatStampButtonItem_C_SetShortcutIcon::CallFunc_IsRegistShortcutByStamp_ReturnValue' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.SefFloatStampOrder
// 0x0001 (0x0001 - 0x0000)
struct ChatStampButtonItem_C_SefFloatStampOrder final
{
public:
	EUIZOrder                                     InOrder;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatStampButtonItem_C_SefFloatStampOrder) == 0x000001, "Wrong alignment on ChatStampButtonItem_C_SefFloatStampOrder");
static_assert(sizeof(ChatStampButtonItem_C_SefFloatStampOrder) == 0x000001, "Wrong size on ChatStampButtonItem_C_SefFloatStampOrder");
static_assert(offsetof(ChatStampButtonItem_C_SefFloatStampOrder, InOrder) == 0x000000, "Member 'ChatStampButtonItem_C_SefFloatStampOrder::InOrder' has a wrong offset!");

// Function ChatStampButtonItem.ChatStampButtonItem_C.GetShortcutItemInfo
// 0x00B0 (0x00B0 - 0x0000)
struct ChatStampButtonItem_C_GetShortcutItemInfo final
{
public:
	struct FShortcutItemInfo                      OutShortcutItemInfo;                               // 0x0000(0x0050)(Parm, OutParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FShortcutItemInfo                      K2Node_MakeStruct_ShortcutItemInfo;                // 0x0060(0x0050)()
};
static_assert(alignof(ChatStampButtonItem_C_GetShortcutItemInfo) == 0x000008, "Wrong alignment on ChatStampButtonItem_C_GetShortcutItemInfo");
static_assert(sizeof(ChatStampButtonItem_C_GetShortcutItemInfo) == 0x0000B0, "Wrong size on ChatStampButtonItem_C_GetShortcutItemInfo");
static_assert(offsetof(ChatStampButtonItem_C_GetShortcutItemInfo, OutShortcutItemInfo) == 0x000000, "Member 'ChatStampButtonItem_C_GetShortcutItemInfo::OutShortcutItemInfo' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_GetShortcutItemInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'ChatStampButtonItem_C_GetShortcutItemInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatStampButtonItem_C_GetShortcutItemInfo, K2Node_MakeStruct_ShortcutItemInfo) == 0x000060, "Member 'ChatStampButtonItem_C_GetShortcutItemInfo::K2Node_MakeStruct_ShortcutItemInfo' has a wrong offset!");

}

