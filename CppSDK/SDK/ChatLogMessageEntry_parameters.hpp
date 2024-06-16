#pragma once

 

// Package: ChatLogMessageEntry

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ChatLogMessageEntry.ChatLogMessageEntry_C.ExecuteUbergraph_ChatLogMessageEntry
// 0x0088 (0x0088 - 0x0000)
struct ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6183[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_TagertPlayerId;                 // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_TagertName;                     // 0x0020(0x0018)()
	class FString                                 K2Node_CustomEvent_CharacterId;                    // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              K2Node_CustomEvent_PrivilegeType;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6184[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatMessageEntryItem_C*                K2Node_DynamicCast_AsChat_Message_Entry_Item;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6185[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry) == 0x000008, "Wrong alignment on ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry");
static_assert(sizeof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry) == 0x000088, "Wrong size on ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, EntryPoint) == 0x000000, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_Event_bIsExpanded) == 0x000005, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_Event_bIsSelected) == 0x000006, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_Event_ListItemObject) == 0x000008, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_CustomEvent_TagertPlayerId) == 0x000010, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_CustomEvent_TagertPlayerId' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_CustomEvent_TagertName) == 0x000020, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_CustomEvent_TagertName' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_CustomEvent_CharacterId) == 0x000038, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_CustomEvent_PrivilegeType) == 0x000048, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_CustomEvent_PrivilegeType' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_DynamicCast_AsChat_Message_Entry_Item) == 0x000050, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_DynamicCast_AsChat_Message_Entry_Item' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, CallFunc_GetHUD_ReturnValue) == 0x000068, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000070, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function ChatLogMessageEntry.ChatLogMessageEntry_C.DircetChat
// 0x0040 (0x0040 - 0x0000)
struct ChatLogMessageEntry_C_DircetChat final
{
public:
	class FString                                 TagertPlayerId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   TagertName;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CharacterId;                                       // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              PrivilegeType;                                     // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogMessageEntry_C_DircetChat) == 0x000008, "Wrong alignment on ChatLogMessageEntry_C_DircetChat");
static_assert(sizeof(ChatLogMessageEntry_C_DircetChat) == 0x000040, "Wrong size on ChatLogMessageEntry_C_DircetChat");
static_assert(offsetof(ChatLogMessageEntry_C_DircetChat, TagertPlayerId) == 0x000000, "Member 'ChatLogMessageEntry_C_DircetChat::TagertPlayerId' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_DircetChat, TagertName) == 0x000010, "Member 'ChatLogMessageEntry_C_DircetChat::TagertName' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_DircetChat, CharacterId) == 0x000028, "Member 'ChatLogMessageEntry_C_DircetChat::CharacterId' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_DircetChat, PrivilegeType) == 0x000038, "Member 'ChatLogMessageEntry_C_DircetChat::PrivilegeType' has a wrong offset!");

// Function ChatLogMessageEntry.ChatLogMessageEntry_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct ChatLogMessageEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogMessageEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on ChatLogMessageEntry_C_OnListItemObjectSet");
static_assert(sizeof(ChatLogMessageEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on ChatLogMessageEntry_C_OnListItemObjectSet");
static_assert(offsetof(ChatLogMessageEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'ChatLogMessageEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct ChatLogMessageEntry_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogMessageEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on ChatLogMessageEntry_C_BP_OnItemSelectionChanged");
static_assert(sizeof(ChatLogMessageEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on ChatLogMessageEntry_C_BP_OnItemSelectionChanged");
static_assert(offsetof(ChatLogMessageEntry_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'ChatLogMessageEntry_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct ChatLogMessageEntry_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogMessageEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on ChatLogMessageEntry_C_BP_OnItemExpansionChanged");
static_assert(sizeof(ChatLogMessageEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on ChatLogMessageEntry_C_BP_OnItemExpansionChanged");
static_assert(offsetof(ChatLogMessageEntry_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'ChatLogMessageEntry_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function ChatLogMessageEntry.ChatLogMessageEntry_C.CreateChatMessage
// 0x0108 (0x0108 - 0x0000)
struct ChatLogMessageEntry_C_CreateChatMessage final
{
public:
	struct FSBChatUIMessage                       InMessage;                                         // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         StampSize;                                         // 0x0070(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndInit;                                         // 0x0074(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCursorStampHit;                                  // 0x0075(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsUnreadWidget;                                    // 0x0076(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCopy;                                            // 0x0077(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6186[0x1];                                     // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsStampMessage_RetStampID;                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_IsStampMessage_OutMessage;                // 0x0080(0x0018)()
	bool                                          CallFunc_IsStampMessage_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6187[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogOtherPlayerMessage_C*           CallFunc_Create_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& TagertPlayerId, class FText TagertName, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	class UChatLogUnreadMessage_C*                CallFunc_Create_ReturnValue_1;                     // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatLogMyMessage_C*                    CallFunc_Create_ReturnValue_2;                     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UChatLogOtherMessageTempList_C*         CallFunc_Create_ReturnValue_3;                     // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6188[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_3;                   // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogMessageEntry_C_CreateChatMessage) == 0x000008, "Wrong alignment on ChatLogMessageEntry_C_CreateChatMessage");
static_assert(sizeof(ChatLogMessageEntry_C_CreateChatMessage) == 0x000108, "Wrong size on ChatLogMessageEntry_C_CreateChatMessage");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, InMessage) == 0x000000, "Member 'ChatLogMessageEntry_C_CreateChatMessage::InMessage' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, StampSize) == 0x000070, "Member 'ChatLogMessageEntry_C_CreateChatMessage::StampSize' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, IsEndInit) == 0x000074, "Member 'ChatLogMessageEntry_C_CreateChatMessage::IsEndInit' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, IsCursorStampHit) == 0x000075, "Member 'ChatLogMessageEntry_C_CreateChatMessage::IsCursorStampHit' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, IsUnreadWidget) == 0x000076, "Member 'ChatLogMessageEntry_C_CreateChatMessage::IsUnreadWidget' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, IsCopy) == 0x000077, "Member 'ChatLogMessageEntry_C_CreateChatMessage::IsCopy' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000078, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000079, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, K2Node_SwitchEnum_CmpSuccess) == 0x00007A, "Member 'ChatLogMessageEntry_C_CreateChatMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_IsStampMessage_RetStampID) == 0x00007C, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_IsStampMessage_RetStampID' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_IsStampMessage_OutMessage) == 0x000080, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_IsStampMessage_OutMessage' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_IsStampMessage_ReturnValue) == 0x000098, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_IsStampMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_Create_ReturnValue) == 0x0000A0, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_AddChild_ReturnValue) == 0x0000A8, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, K2Node_CreateDelegate_OutputDelegate) == 0x0000B0, "Member 'ChatLogMessageEntry_C_CreateChatMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_Create_ReturnValue_1) == 0x0000C0, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_AddChild_ReturnValue_1) == 0x0000C8, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_Create_ReturnValue_2) == 0x0000D0, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_AddChild_ReturnValue_2) == 0x0000D8, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_GetPlayerId_ReturnValue) == 0x0000E0, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_Create_ReturnValue_3) == 0x0000F0, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000F8, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogMessageEntry_C_CreateChatMessage, CallFunc_AddChild_ReturnValue_3) == 0x000100, "Member 'ChatLogMessageEntry_C_CreateChatMessage::CallFunc_AddChild_ReturnValue_3' has a wrong offset!");

}

