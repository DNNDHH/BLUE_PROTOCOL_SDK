#pragma once

 

// Package: ChatWindowTypeItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ChatWindowTypeItem.ChatWindowTypeItem_C.EventBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature final
{
public:
	class UChatWindowTypeItem_C*                  TypeItem;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature");
static_assert(sizeof(ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature) == 0x000008, "Wrong size on ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature");
static_assert(offsetof(ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature, TypeItem) == 0x000000, "Member 'ChatWindowTypeItem_C_EventBtnClicked__DelegateSignature::TypeItem' has a wrong offset!");

// Function ChatWindowTypeItem.ChatWindowTypeItem_C.ExecuteUbergraph_ChatWindowTypeItem
// 0x0008 (0x0008 - 0x0000)
struct ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem) == 0x000004, "Wrong alignment on ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem");
static_assert(sizeof(ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem) == 0x000008, "Wrong size on ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem");
static_assert(offsetof(ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem, EntryPoint) == 0x000000, "Member 'ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'ChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ChatWindowTypeItem.ChatWindowTypeItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ChatWindowTypeItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWindowTypeItem_C_PreConstruct) == 0x000001, "Wrong alignment on ChatWindowTypeItem_C_PreConstruct");
static_assert(sizeof(ChatWindowTypeItem_C_PreConstruct) == 0x000001, "Wrong size on ChatWindowTypeItem_C_PreConstruct");
static_assert(offsetof(ChatWindowTypeItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ChatWindowTypeItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetType
// 0x0002 (0x0002 - 0x0000)
struct ChatWindowTypeItem_C_SetType final
{
public:
	ESBChatLogType                                Param_InChatLogType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWindowTypeItem_C_SetType) == 0x000001, "Wrong alignment on ChatWindowTypeItem_C_SetType");
static_assert(sizeof(ChatWindowTypeItem_C_SetType) == 0x000002, "Wrong size on ChatWindowTypeItem_C_SetType");
static_assert(offsetof(ChatWindowTypeItem_C_SetType, Param_InChatLogType) == 0x000000, "Member 'ChatWindowTypeItem_C_SetType::Param_InChatLogType' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_SetType, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'ChatWindowTypeItem_C_SetType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetDirectChatData
// 0x0088 (0x0088 - 0x0000)
struct ChatWindowTypeItem_C_SetDirectChatData final
{
public:
	struct FSBDirectChatSenderLogData             InSenderData;                                      // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   SetTxtData;                                        // 0x0038(0x0018)(Edit, BlueprintVisible)
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0050(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_480B[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
};
static_assert(alignof(ChatWindowTypeItem_C_SetDirectChatData) == 0x000008, "Wrong alignment on ChatWindowTypeItem_C_SetDirectChatData");
static_assert(sizeof(ChatWindowTypeItem_C_SetDirectChatData) == 0x000088, "Wrong size on ChatWindowTypeItem_C_SetDirectChatData");
static_assert(offsetof(ChatWindowTypeItem_C_SetDirectChatData, InSenderData) == 0x000000, "Member 'ChatWindowTypeItem_C_SetDirectChatData::InSenderData' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_SetDirectChatData, SetTxtData) == 0x000038, "Member 'ChatWindowTypeItem_C_SetDirectChatData::SetTxtData' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_SetDirectChatData, CallFunc_GetRestrictText_ReturnValue) == 0x000050, "Member 'ChatWindowTypeItem_C_SetDirectChatData::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_SetDirectChatData, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000068, "Member 'ChatWindowTypeItem_C_SetDirectChatData::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_SetDirectChatData, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000069, "Member 'ChatWindowTypeItem_C_SetDirectChatData::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_SetDirectChatData, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'ChatWindowTypeItem_C_SetDirectChatData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ChatWindowTypeItem.ChatWindowTypeItem_C.GetTypeWindowPosition
// 0x00AC (0x00AC - 0x0000)
struct ChatWindowTypeItem_C_GetTypeWindowPosition final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_480C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x000C(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_480D[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue_1;          // 0x005C(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition_1;          // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition_1;       // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWindowTypeItem_C_GetTypeWindowPosition) == 0x000004, "Wrong alignment on ChatWindowTypeItem_C_GetTypeWindowPosition");
static_assert(sizeof(ChatWindowTypeItem_C_GetTypeWindowPosition) == 0x0000AC, "Wrong size on ChatWindowTypeItem_C_GetTypeWindowPosition");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, Position) == 0x000000, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::Position' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, Temp_bool_Variable) == 0x000008, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_GetCachedGeometry_ReturnValue) == 0x00000C, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000044, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_LocalToViewport_PixelPosition) == 0x000048, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_LocalToViewport_ViewportPosition) == 0x000050, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_GetCachedGeometry_ReturnValue_1) == 0x00005C, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_GetCachedGeometry_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_LocalToViewport_PixelPosition_1) == 0x000094, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_LocalToViewport_PixelPosition_1' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, CallFunc_LocalToViewport_ViewportPosition_1) == 0x00009C, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::CallFunc_LocalToViewport_ViewportPosition_1' has a wrong offset!");
static_assert(offsetof(ChatWindowTypeItem_C_GetTypeWindowPosition, K2Node_Select_Default) == 0x0000A4, "Member 'ChatWindowTypeItem_C_GetTypeWindowPosition::K2Node_Select_Default' has a wrong offset!");

}

