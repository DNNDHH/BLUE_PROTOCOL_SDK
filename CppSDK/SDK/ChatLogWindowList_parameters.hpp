#pragma once

 

// Package: ChatLogWindowList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChatLogWindowList.ChatLogWindowList_C.OnChangeFilterType__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatLogWindowList_C_OnChangeFilterType__DelegateSignature final
{
public:
	int32                                         InType;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InDetailType;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_OnChangeFilterType__DelegateSignature) == 0x000004, "Wrong alignment on ChatLogWindowList_C_OnChangeFilterType__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_OnChangeFilterType__DelegateSignature) == 0x000008, "Wrong size on ChatLogWindowList_C_OnChangeFilterType__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_OnChangeFilterType__DelegateSignature, InType) == 0x000000, "Member 'ChatLogWindowList_C_OnChangeFilterType__DelegateSignature::InType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_OnChangeFilterType__DelegateSignature, InDetailType) == 0x000004, "Member 'ChatLogWindowList_C_OnChangeFilterType__DelegateSignature::InDetailType' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabCloseRequest__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature final
{
public:
	ESBChatLogWindowSlot                          RequestSlot;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature, RequestSlot) == 0x000000, "Member 'ChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature::RequestSlot' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.OnChangeChatUnreadNotify__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature final
{
public:
	bool                                          Param_IsChatUnreadNotify;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature, Param_IsChatUnreadNotify) == 0x000000, "Member 'ChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature::Param_IsChatUnreadNotify' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.OnChangeUnreadVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature, Param_IsVisible) == 0x000000, "Member 'ChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature::Param_IsVisible' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.ExecuteUbergraph_ChatLogWindowList
// 0x00C0 (0x00C0 - 0x0000)
struct ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4737[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_12;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_11;           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_10;           // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_9;            // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_8;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_7;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_6;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_5;            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_4;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_3;            // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_2;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked_1;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4738[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatUIMessage                       K2Node_CustomEvent_InMess;                         // 0x0020(0x0070)()
	bool                                          K2Node_CustomEvent_bRecieve;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsScrollEndListView_Ret;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4739[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_473A[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCreateChat_ReturnValue;                 // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsScrollEndListView_Ret_1;                // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          CallFunc_Get_Tab_Type_to_Slot_Slot;                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList) == 0x000008, "Wrong alignment on ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList");
static_assert(sizeof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList) == 0x0000C0, "Wrong size on ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, EntryPoint) == 0x000000, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000008, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_12) == 0x00000C, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_12' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_11) == 0x00000D, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_11' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_10) == 0x00000E, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_10' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_9) == 0x00000F, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_9' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_8) == 0x000010, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_8' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_7) == 0x000011, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_7' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_6) == 0x000012, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_6' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_5) == 0x000013, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_5' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_4) == 0x000014, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_4' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_3) == 0x000015, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_2) == 0x000016, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_IsVisible_ReturnValue) == 0x000017, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked_1) == 0x000018, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_IsChecked) == 0x000019, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_CustomEvent_InMess) == 0x000020, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_CustomEvent_InMess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_CustomEvent_bRecieve) == 0x000090, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_CustomEvent_bRecieve' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_IsScrollEndListView_Ret) == 0x000091, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_IsScrollEndListView_Ret' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_GetPlayerId_ReturnValue) == 0x000098, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A8, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, K2Node_ComponentBoundEvent_Widget) == 0x0000B0, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_IsCreateChat_ReturnValue) == 0x0000B8, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_IsCreateChat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_BooleanOR_ReturnValue) == 0x0000B9, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_IsScrollEndListView_Ret_1) == 0x0000BA, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_IsScrollEndListView_Ret_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000BB, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList, CallFunc_Get_Tab_Type_to_Slot_Slot) == 0x0000BC, "Member 'ChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList::CallFunc_Get_Tab_Type_to_Slot_Slot' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong size on ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature, Widget) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature::Widget' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.OnReciveMessage
// 0x0078 (0x0078 - 0x0000)
struct ChatLogWindowList_C_OnReciveMessage final
{
public:
	struct FSBChatUIMessage                       InMess;                                            // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bRecieve;                                          // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_OnReciveMessage) == 0x000008, "Wrong alignment on ChatLogWindowList_C_OnReciveMessage");
static_assert(sizeof(ChatLogWindowList_C_OnReciveMessage) == 0x000078, "Wrong size on ChatLogWindowList_C_OnReciveMessage");
static_assert(offsetof(ChatLogWindowList_C_OnReciveMessage, InMess) == 0x000000, "Member 'ChatLogWindowList_C_OnReciveMessage::InMess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_OnReciveMessage, bRecieve) == 0x000070, "Member 'ChatLogWindowList_C_OnReciveMessage::bRecieve' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature");
static_assert(sizeof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature) == 0x000001, "Wrong size on ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature");
static_assert(offsetof(ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'ChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.Init
// 0x0018 (0x0018 - 0x0000)
struct ChatLogWindowList_C_Init final
{
public:
	class UUMG_ChatLogWindow_C*                   InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InFilterType;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InDetailFilterType;                                // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             InTabType;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewLocalVar_0;                                     // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_Init) == 0x000008, "Wrong alignment on ChatLogWindowList_C_Init");
static_assert(sizeof(ChatLogWindowList_C_Init) == 0x000018, "Wrong size on ChatLogWindowList_C_Init");
static_assert(offsetof(ChatLogWindowList_C_Init, InWidget) == 0x000000, "Member 'ChatLogWindowList_C_Init::InWidget' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Init, InFilterType) == 0x000008, "Member 'ChatLogWindowList_C_Init::InFilterType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Init, InDetailFilterType) == 0x00000C, "Member 'ChatLogWindowList_C_Init::InDetailFilterType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Init, InTabType) == 0x000010, "Member 'ChatLogWindowList_C_Init::InTabType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Init, NewLocalVar_0) == 0x000011, "Member 'ChatLogWindowList_C_Init::NewLocalVar_0' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.InitFilterCheckBox
// 0x00C0 (0x00C0 - 0x0000)
struct ChatLogWindowList_C_InitFilterCheckBox final
{
public:
	TArray<class UChatLogFilterItem_C*>           SystemLogDetailList;                               // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Cnt;                                               // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_473B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_473C[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_473D[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_473E[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_473F[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4740[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4741[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4742[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4743[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UChatLogFilterItem_C*>           K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4744[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFilterItem_C*                   CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4745[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4746[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue_1;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4747[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFilterItem_C*                   K2Node_DynamicCast_AsChat_Log_Filter_Item;         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_InitFilterCheckBox) == 0x000008, "Wrong alignment on ChatLogWindowList_C_InitFilterCheckBox");
static_assert(sizeof(ChatLogWindowList_C_InitFilterCheckBox) == 0x0000C0, "Wrong size on ChatLogWindowList_C_InitFilterCheckBox");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, SystemLogDetailList) == 0x000000, "Member 'ChatLogWindowList_C_InitFilterCheckBox::SystemLogDetailList' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, Cnt) == 0x000010, "Member 'ChatLogWindowList_C_InitFilterCheckBox::Cnt' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, Temp_int_Variable) == 0x000014, "Member 'ChatLogWindowList_C_InitFilterCheckBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, Temp_int_Variable_1) == 0x000018, "Member 'ChatLogWindowList_C_InitFilterCheckBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_IntToByte_ReturnValue) == 0x00001C, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_GetValidValue_ReturnValue) == 0x000024, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000025, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002C, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, K2Node_SwitchEnum_CmpSuccess) == 0x00002D, "Member 'ChatLogWindowList_C_InitFilterCheckBox::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000030, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_MakeLiteralInt_ReturnValue) == 0x000034, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, Temp_int_Variable_2) == 0x000038, "Member 'ChatLogWindowList_C_InitFilterCheckBox::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, Temp_int_Variable_3) == 0x00003C, "Member 'ChatLogWindowList_C_InitFilterCheckBox::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x000040, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_GetValidValue_ReturnValue_1) == 0x000048, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_IntToByte_ReturnValue_3) == 0x000049, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_IntToByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x00004C, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1) == 0x000050, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, K2Node_SwitchEnum_CmpSuccess_1) == 0x000051, "Member 'ChatLogWindowList_C_InitFilterCheckBox::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x000054, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x00005C, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Less_IntInt_ReturnValue_1) == 0x000060, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Less_IntInt_ReturnValue_2) == 0x000068, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, K2Node_MakeArray_Array) == 0x000070, "Member 'ChatLogWindowList_C_InitFilterCheckBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Add_IntInt_ReturnValue_2) == 0x000080, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Array_Get_Item) == 0x000088, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_And_IntInt_ReturnValue) == 0x000094, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000098, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_Add_IntInt_ReturnValue_3) == 0x00009C, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_GetChildAt_ReturnValue) == 0x0000A0, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_And_IntInt_ReturnValue_1) == 0x0000A8, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_And_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, K2Node_DynamicCast_AsChat_Log_Filter_Item) == 0x0000B0, "Member 'ChatLogWindowList_C_InitFilterCheckBox::K2Node_DynamicCast_AsChat_Log_Filter_Item' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'ChatLogWindowList_C_InitFilterCheckBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_InitFilterCheckBox, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0000B9, "Member 'ChatLogWindowList_C_InitFilterCheckBox::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.Change Tab Mode
// 0x0028 (0x0028 - 0x0000)
struct ChatLogWindowList_C_Change_Tab_Mode final
{
public:
	ESBChatLogTabType                             InTabType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInit;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          CallFunc_Get_Tab_Type_to_Slot_Slot;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4748[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetChatLogWindowSlotData_bIsSuccess;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4749[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatLogWindowStatusSave             CallFunc_GetChatLogWindowSlotData_ReturnValue;     // 0x0014(0x0010)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_Change_Tab_Mode) == 0x000008, "Wrong alignment on ChatLogWindowList_C_Change_Tab_Mode");
static_assert(sizeof(ChatLogWindowList_C_Change_Tab_Mode) == 0x000028, "Wrong size on ChatLogWindowList_C_Change_Tab_Mode");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, InTabType) == 0x000000, "Member 'ChatLogWindowList_C_Change_Tab_Mode::InTabType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, bInit) == 0x000001, "Member 'ChatLogWindowList_C_Change_Tab_Mode::bInit' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000003, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_Get_Tab_Type_to_Slot_Slot) == 0x000005, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_Get_Tab_Type_to_Slot_Slot' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_GetConfigSaveManager_IsValid) == 0x000006, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_GetChatLogWindowSlotData_bIsSuccess) == 0x000010, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_GetChatLogWindowSlotData_bIsSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_GetChatLogWindowSlotData_ReturnValue) == 0x000014, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_GetChatLogWindowSlotData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, K2Node_SwitchEnum_CmpSuccess) == 0x000024, "Member 'ChatLogWindowList_C_Change_Tab_Mode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Change_Tab_Mode, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000025, "Member 'ChatLogWindowList_C_Change_Tab_Mode::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.NextTabSelection
// 0x0060 (0x0060 - 0x0000)
struct ChatLogWindowList_C_NextTabSelection final
{
public:
	bool                                          bPrevious;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_474A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBChatLogTabType>                     VisibleTabList;                                    // 0x0008(0x0010)(Edit, BlueprintVisible)
	ESBChatLogTabType                             Temp_byte_Variable;                                // 0x0018(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_474B[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_474C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogTabType                             Temp_byte_Variable_1;                              // 0x002D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             Temp_byte_Variable_2;                              // 0x002E(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             CallFunc_Array_Get_Item;                           // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             CallFunc_Array_Get_Item_1;                         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             CallFunc_Array_Get_Item_2;                         // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474D[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatLogTabType                             CallFunc_Array_Get_Item_3;                         // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_474E[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_474F[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_NextTabSelection) == 0x000008, "Wrong alignment on ChatLogWindowList_C_NextTabSelection");
static_assert(sizeof(ChatLogWindowList_C_NextTabSelection) == 0x000060, "Wrong size on ChatLogWindowList_C_NextTabSelection");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, bPrevious) == 0x000000, "Member 'ChatLogWindowList_C_NextTabSelection::bPrevious' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, VisibleTabList) == 0x000008, "Member 'ChatLogWindowList_C_NextTabSelection::VisibleTabList' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, Temp_byte_Variable) == 0x000018, "Member 'ChatLogWindowList_C_NextTabSelection::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, Temp_bool_True_if_break_was_hit_Variable) == 0x000019, "Member 'ChatLogWindowList_C_NextTabSelection::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'ChatLogWindowList_C_NextTabSelection::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Not_PreBool_ReturnValue) == 0x00002C, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, Temp_byte_Variable_1) == 0x00002D, "Member 'ChatLogWindowList_C_NextTabSelection::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, Temp_byte_Variable_2) == 0x00002E, "Member 'ChatLogWindowList_C_NextTabSelection::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Get_Item) == 0x00002F, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_LastIndex_ReturnValue) == 0x000030, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Get_Item_1) == 0x000034, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Get_Item_2) == 0x000035, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Get_Item_3) == 0x00003D, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003E, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Add_ReturnValue_1) == 0x000048, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'ChatLogWindowList_C_NextTabSelection::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Array_Add_ReturnValue_2) == 0x000050, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Less_IntInt_ReturnValue_1) == 0x000054, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_BooleanAND_ReturnValue) == 0x00005C, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_IsVisible_ReturnValue) == 0x00005D, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_NextTabSelection, CallFunc_IsVisible_ReturnValue_1) == 0x00005E, "Member 'ChatLogWindowList_C_NextTabSelection::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.Set Filter List Visible
// 0x000C (0x000C - 0x0000)
struct ChatLogWindowList_C_Set_Filter_List_Visible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4750[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_Set_Filter_List_Visible) == 0x000004, "Wrong alignment on ChatLogWindowList_C_Set_Filter_List_Visible");
static_assert(sizeof(ChatLogWindowList_C_Set_Filter_List_Visible) == 0x00000C, "Wrong size on ChatLogWindowList_C_Set_Filter_List_Visible");
static_assert(offsetof(ChatLogWindowList_C_Set_Filter_List_Visible, InVisible) == 0x000000, "Member 'ChatLogWindowList_C_Set_Filter_List_Visible::InVisible' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Set_Filter_List_Visible, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'ChatLogWindowList_C_Set_Filter_List_Visible::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Set_Filter_List_Visible, CallFunc_PlaySE_ReturnValue_1) == 0x000008, "Member 'ChatLogWindowList_C_Set_Filter_List_Visible::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.CreateChatLogList
// 0x00D8 (0x00D8 - 0x0000)
struct ChatLogWindowList_C_CreateChatLogList final
{
public:
	int32                                         InFilterType;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InDetailFilterType;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBChatUIMessage>               ChatLogMessList;                                   // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4751[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatUIMessage                       CallFunc_Array_Get_Item;                           // 0x0020(0x0070)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDirectChatPlayer_ret;                   // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4752[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4753[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4754[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCreateChat_ReturnValue;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4755[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4756[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBChatUIMessage>               CallFunc_GetChatLogMessage_ReturnValue;            // 0x00C8(0x0010)(ReferenceParm)
};
static_assert(alignof(ChatLogWindowList_C_CreateChatLogList) == 0x000008, "Wrong alignment on ChatLogWindowList_C_CreateChatLogList");
static_assert(sizeof(ChatLogWindowList_C_CreateChatLogList) == 0x0000D8, "Wrong size on ChatLogWindowList_C_CreateChatLogList");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, InFilterType) == 0x000000, "Member 'ChatLogWindowList_C_CreateChatLogList::InFilterType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, InDetailFilterType) == 0x000004, "Member 'ChatLogWindowList_C_CreateChatLogList::InDetailFilterType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, ChatLogMessList) == 0x000008, "Member 'ChatLogWindowList_C_CreateChatLogList::ChatLogMessList' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ChatLogWindowList_C_CreateChatLogList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_Array_Get_Item) == 0x000020, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_IsDirectChatPlayer_ret) == 0x000094, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_IsDirectChatPlayer_ret' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_Not_PreBool_ReturnValue) == 0x000095, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'ChatLogWindowList_C_CreateChatLogList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_GetGameInstance_ReturnValue) == 0x0000A8, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_IsCreateChat_ReturnValue) == 0x0000B0, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_IsCreateChat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, K2Node_DynamicCast_AsSBGame_Instance) == 0x0000B8, "Member 'ChatLogWindowList_C_CreateChatLogList::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'ChatLogWindowList_C_CreateChatLogList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_BooleanAND_ReturnValue) == 0x0000C1, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CreateChatLogList, CallFunc_GetChatLogMessage_ReturnValue) == 0x0000C8, "Member 'ChatLogWindowList_C_CreateChatLogList::CallFunc_GetChatLogMessage_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.IsDirectChatPlayer
// 0x0110 (0x0110 - 0x0000)
struct ChatLogWindowList_C_IsDirectChatPlayer final
{
public:
	struct FSBChatUIMessage                       InMess;                                            // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Ret;                                               // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4757[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4758[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4759[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_475A[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBDirectChatUIMessage>         CallFunc_GetDirectChatLogList_ReturnValue;         // 0x00A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_475B[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDirectChatUIMessage                 CallFunc_Array_Get_Item;                           // 0x00B8(0x0050)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_IsDirectChatPlayer) == 0x000008, "Wrong alignment on ChatLogWindowList_C_IsDirectChatPlayer");
static_assert(sizeof(ChatLogWindowList_C_IsDirectChatPlayer) == 0x000110, "Wrong size on ChatLogWindowList_C_IsDirectChatPlayer");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, InMess) == 0x000000, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::InMess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, Ret) == 0x000070, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::Ret' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, Temp_int_Array_Index_Variable) == 0x000074, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000078, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_GetGameInstance_ReturnValue) == 0x000088, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, K2Node_DynamicCast_AsSBGame_Instance) == 0x000090, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_GetDirectChatLogList_ReturnValue) == 0x0000A0, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_GetDirectChatLogList_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_Less_IntInt_ReturnValue) == 0x000108, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000109, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x00010A, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsDirectChatPlayer, CallFunc_BooleanOR_ReturnValue) == 0x00010B, "Member 'ChatLogWindowList_C_IsDirectChatPlayer::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.ChangeFilter
// 0x0018 (0x0018 - 0x0000)
struct ChatLogWindowList_C_ChangeFilter final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatFilterType                             InFilterType;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_475C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Not_Int_ReturnValue;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Or_IntInt_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_ChangeFilter) == 0x000004, "Wrong alignment on ChatLogWindowList_C_ChangeFilter");
static_assert(sizeof(ChatLogWindowList_C_ChangeFilter) == 0x000018, "Wrong size on ChatLogWindowList_C_ChangeFilter");
static_assert(offsetof(ChatLogWindowList_C_ChangeFilter, InEnable) == 0x000000, "Member 'ChatLogWindowList_C_ChangeFilter::InEnable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeFilter, InFilterType) == 0x000001, "Member 'ChatLogWindowList_C_ChangeFilter::InFilterType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeFilter, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ChatLogWindowList_C_ChangeFilter::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeFilter, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000008, "Member 'ChatLogWindowList_C_ChangeFilter::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeFilter, CallFunc_Not_Int_ReturnValue) == 0x00000C, "Member 'ChatLogWindowList_C_ChangeFilter::CallFunc_Not_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeFilter, CallFunc_And_IntInt_ReturnValue) == 0x000010, "Member 'ChatLogWindowList_C_ChangeFilter::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeFilter, CallFunc_Or_IntInt_ReturnValue) == 0x000014, "Member 'ChatLogWindowList_C_ChangeFilter::CallFunc_Or_IntInt_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.ChangeDetailFilter
// 0x0018 (0x0018 - 0x0000)
struct ChatLogWindowList_C_ChangeDetailFilter final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBChatDetailFilterType                       InDetailFilterType;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_475D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Not_Int_ReturnValue;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Or_IntInt_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_ChangeDetailFilter) == 0x000004, "Wrong alignment on ChatLogWindowList_C_ChangeDetailFilter");
static_assert(sizeof(ChatLogWindowList_C_ChangeDetailFilter) == 0x000018, "Wrong size on ChatLogWindowList_C_ChangeDetailFilter");
static_assert(offsetof(ChatLogWindowList_C_ChangeDetailFilter, InEnable) == 0x000000, "Member 'ChatLogWindowList_C_ChangeDetailFilter::InEnable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeDetailFilter, InDetailFilterType) == 0x000001, "Member 'ChatLogWindowList_C_ChangeDetailFilter::InDetailFilterType' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeDetailFilter, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ChatLogWindowList_C_ChangeDetailFilter::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeDetailFilter, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000008, "Member 'ChatLogWindowList_C_ChangeDetailFilter::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeDetailFilter, CallFunc_Not_Int_ReturnValue) == 0x00000C, "Member 'ChatLogWindowList_C_ChangeDetailFilter::CallFunc_Not_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeDetailFilter, CallFunc_And_IntInt_ReturnValue) == 0x000010, "Member 'ChatLogWindowList_C_ChangeDetailFilter::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChangeDetailFilter, CallFunc_Or_IntInt_ReturnValue) == 0x000014, "Member 'ChatLogWindowList_C_ChangeDetailFilter::CallFunc_Or_IntInt_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.InitChidMode
// 0x0004 (0x0004 - 0x0000)
struct ChatLogWindowList_C_InitChidMode final
{
public:
	int32                                         InTabTextId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_InitChidMode) == 0x000004, "Wrong alignment on ChatLogWindowList_C_InitChidMode");
static_assert(sizeof(ChatLogWindowList_C_InitChidMode) == 0x000004, "Wrong size on ChatLogWindowList_C_InitChidMode");
static_assert(offsetof(ChatLogWindowList_C_InitChidMode, InTabTextId) == 0x000000, "Member 'ChatLogWindowList_C_InitChidMode::InTabTextId' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.RefreshLog
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_RefreshLog final
{
public:
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_RefreshLog) == 0x000001, "Wrong alignment on ChatLogWindowList_C_RefreshLog");
static_assert(sizeof(ChatLogWindowList_C_RefreshLog) == 0x000001, "Wrong size on ChatLogWindowList_C_RefreshLog");
static_assert(offsetof(ChatLogWindowList_C_RefreshLog, CallFunc_IsVisible_ReturnValue) == 0x000000, "Member 'ChatLogWindowList_C_RefreshLog::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.SetFullChildWindow
// 0x0002 (0x0002 - 0x0000)
struct ChatLogWindowList_C_SetFullChildWindow final
{
public:
	bool                                          InFull;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_SetFullChildWindow) == 0x000001, "Wrong alignment on ChatLogWindowList_C_SetFullChildWindow");
static_assert(sizeof(ChatLogWindowList_C_SetFullChildWindow) == 0x000002, "Wrong size on ChatLogWindowList_C_SetFullChildWindow");
static_assert(offsetof(ChatLogWindowList_C_SetFullChildWindow, InFull) == 0x000000, "Member 'ChatLogWindowList_C_SetFullChildWindow::InFull' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetFullChildWindow, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'ChatLogWindowList_C_SetFullChildWindow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.SetSeparationButtonEnabled
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_SetSeparationButtonEnabled final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_SetSeparationButtonEnabled) == 0x000001, "Wrong alignment on ChatLogWindowList_C_SetSeparationButtonEnabled");
static_assert(sizeof(ChatLogWindowList_C_SetSeparationButtonEnabled) == 0x000001, "Wrong size on ChatLogWindowList_C_SetSeparationButtonEnabled");
static_assert(offsetof(ChatLogWindowList_C_SetSeparationButtonEnabled, InEnable) == 0x000000, "Member 'ChatLogWindowList_C_SetSeparationButtonEnabled::InEnable' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.SetWindowSize
// 0x0018 (0x0018 - 0x0000)
struct ChatLogWindowList_C_SetWindowSize final
{
public:
	struct FVector2D                              InSize;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_SetWindowSize) == 0x000004, "Wrong alignment on ChatLogWindowList_C_SetWindowSize");
static_assert(sizeof(ChatLogWindowList_C_SetWindowSize) == 0x000018, "Wrong size on ChatLogWindowList_C_SetWindowSize");
static_assert(offsetof(ChatLogWindowList_C_SetWindowSize, InSize) == 0x000000, "Member 'ChatLogWindowList_C_SetWindowSize::InSize' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetWindowSize, CallFunc_BreakVector2D_X) == 0x000008, "Member 'ChatLogWindowList_C_SetWindowSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetWindowSize, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'ChatLogWindowList_C_SetWindowSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetWindowSize, CallFunc_FClamp_ReturnValue) == 0x000010, "Member 'ChatLogWindowList_C_SetWindowSize::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetWindowSize, CallFunc_FClamp_ReturnValue_1) == 0x000014, "Member 'ChatLogWindowList_C_SetWindowSize::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.GetWindowSize
// 0x0010 (0x0010 - 0x0000)
struct ChatLogWindowList_C_GetWindowSize final
{
public:
	struct FVector2D                              RetSize;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_GetWindowSize) == 0x000004, "Wrong alignment on ChatLogWindowList_C_GetWindowSize");
static_assert(sizeof(ChatLogWindowList_C_GetWindowSize) == 0x000010, "Wrong size on ChatLogWindowList_C_GetWindowSize");
static_assert(offsetof(ChatLogWindowList_C_GetWindowSize, RetSize) == 0x000000, "Member 'ChatLogWindowList_C_GetWindowSize::RetSize' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_GetWindowSize, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'ChatLogWindowList_C_GetWindowSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.Create Message Entry
// 0x00A0 (0x00A0 - 0x0000)
struct ChatLogWindowList_C_Create_Message_Entry final
{
public:
	struct FSBChatUIMessage                       InMess;                                            // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bRecieve;                                          // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_475E[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatMessageEntryItem_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetVisibleSetting_ReturnValue_1;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_475F[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatMessageEntryItem_C*                CallFunc_SpawnObject_ReturnValue_1;                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_Create_Message_Entry) == 0x000008, "Wrong alignment on ChatLogWindowList_C_Create_Message_Entry");
static_assert(sizeof(ChatLogWindowList_C_Create_Message_Entry) == 0x0000A0, "Wrong size on ChatLogWindowList_C_Create_Message_Entry");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, InMess) == 0x000000, "Member 'ChatLogWindowList_C_Create_Message_Entry::InMess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, bRecieve) == 0x000070, "Member 'ChatLogWindowList_C_Create_Message_Entry::bRecieve' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_SpawnObject_ReturnValue) == 0x000078, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000080, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_GetVisibleSetting_ReturnValue) == 0x000088, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_GetVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_GetVisibleSetting_ReturnValue_1) == 0x000089, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_GetVisibleSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_Not_PreBool_ReturnValue) == 0x00008A, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_BooleanAND_ReturnValue) == 0x00008B, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_BooleanAND_ReturnValue_1) == 0x00008C, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_SpawnObject_ReturnValue_1) == 0x000090, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Create_Message_Entry, CallFunc_BooleanAND_ReturnValue_2) == 0x000098, "Member 'ChatLogWindowList_C_Create_Message_Entry::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.IsScrollEndListView
// 0x0002 (0x0002 - 0x0000)
struct ChatLogWindowList_C_IsScrollEndListView final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsScrollBottom_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_IsScrollEndListView) == 0x000001, "Wrong alignment on ChatLogWindowList_C_IsScrollEndListView");
static_assert(sizeof(ChatLogWindowList_C_IsScrollEndListView) == 0x000002, "Wrong size on ChatLogWindowList_C_IsScrollEndListView");
static_assert(offsetof(ChatLogWindowList_C_IsScrollEndListView, Ret) == 0x000000, "Member 'ChatLogWindowList_C_IsScrollEndListView::Ret' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_IsScrollEndListView, CallFunc_IsScrollBottom_ReturnValue) == 0x000001, "Member 'ChatLogWindowList_C_IsScrollEndListView::CallFunc_IsScrollBottom_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.SetTab
// 0x0006 (0x0006 - 0x0000)
struct ChatLogWindowList_C_SetTab final
{
public:
	ESBChatLogWindowSlot                          InSlot;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdd;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_SetTab) == 0x000001, "Wrong alignment on ChatLogWindowList_C_SetTab");
static_assert(sizeof(ChatLogWindowList_C_SetTab) == 0x000006, "Wrong size on ChatLogWindowList_C_SetTab");
static_assert(offsetof(ChatLogWindowList_C_SetTab, InSlot) == 0x000000, "Member 'ChatLogWindowList_C_SetTab::InSlot' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetTab, bAdd) == 0x000001, "Member 'ChatLogWindowList_C_SetTab::bAdd' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetTab, CallFunc_IsVisible_ReturnValue) == 0x000002, "Member 'ChatLogWindowList_C_SetTab::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetTab, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'ChatLogWindowList_C_SetTab::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetTab, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000004, "Member 'ChatLogWindowList_C_SetTab::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_SetTab, CallFunc_IsVisible_ReturnValue_1) == 0x000005, "Member 'ChatLogWindowList_C_SetTab::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.Get Tab Type to Slot
// 0x0006 (0x0006 - 0x0000)
struct ChatLogWindowList_C_Get_Tab_Type_to_Slot final
{
public:
	ESBChatLogWindowSlot                          Param_Slot;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogWindowSlot                          K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_Get_Tab_Type_to_Slot) == 0x000001, "Wrong alignment on ChatLogWindowList_C_Get_Tab_Type_to_Slot");
static_assert(sizeof(ChatLogWindowList_C_Get_Tab_Type_to_Slot) == 0x000006, "Wrong size on ChatLogWindowList_C_Get_Tab_Type_to_Slot");
static_assert(offsetof(ChatLogWindowList_C_Get_Tab_Type_to_Slot, Param_Slot) == 0x000000, "Member 'ChatLogWindowList_C_Get_Tab_Type_to_Slot::Param_Slot' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Get_Tab_Type_to_Slot, Temp_byte_Variable) == 0x000001, "Member 'ChatLogWindowList_C_Get_Tab_Type_to_Slot::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Get_Tab_Type_to_Slot, Temp_byte_Variable_1) == 0x000002, "Member 'ChatLogWindowList_C_Get_Tab_Type_to_Slot::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Get_Tab_Type_to_Slot, Temp_byte_Variable_2) == 0x000003, "Member 'ChatLogWindowList_C_Get_Tab_Type_to_Slot::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Get_Tab_Type_to_Slot, Temp_byte_Variable_3) == 0x000004, "Member 'ChatLogWindowList_C_Get_Tab_Type_to_Slot::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_Get_Tab_Type_to_Slot, K2Node_Select_Default) == 0x000005, "Member 'ChatLogWindowList_C_Get_Tab_Type_to_Slot::K2Node_Select_Default' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.SetChatLogSlot
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_SetChatLogSlot final
{
public:
	ESBChatLogWindowSlot                          Param_Slot;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogWindowList_C_SetChatLogSlot) == 0x000001, "Wrong alignment on ChatLogWindowList_C_SetChatLogSlot");
static_assert(sizeof(ChatLogWindowList_C_SetChatLogSlot) == 0x000001, "Wrong size on ChatLogWindowList_C_SetChatLogSlot");
static_assert(offsetof(ChatLogWindowList_C_SetChatLogSlot, Param_Slot) == 0x000000, "Member 'ChatLogWindowList_C_SetChatLogSlot::Param_Slot' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.CheckUnread
// 0x0058 (0x0058 - 0x0000)
struct ChatLogWindowList_C_CheckUnread final
{
public:
	TArray<class UObject*>                        DisplayMessageList;                                // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4760[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4761[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4762[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    CallFunc_GetDisplayedEntryWidgets_ReturnValue;     // 0x0030(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UChatLogMessageEntry_C*                 K2Node_DynamicCast_AsChat_Log_Message_Entry;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4763[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_CheckUnread) == 0x000008, "Wrong alignment on ChatLogWindowList_C_CheckUnread");
static_assert(sizeof(ChatLogWindowList_C_CheckUnread) == 0x000058, "Wrong size on ChatLogWindowList_C_CheckUnread");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, DisplayMessageList) == 0x000000, "Member 'ChatLogWindowList_C_CheckUnread::DisplayMessageList' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'ChatLogWindowList_C_CheckUnread::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, Temp_int_Array_Index_Variable) == 0x000014, "Member 'ChatLogWindowList_C_CheckUnread::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'ChatLogWindowList_C_CheckUnread::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_Not_PreBool_ReturnValue_1) == 0x000024, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_BooleanAND_ReturnValue) == 0x000025, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_Array_Get_Item) == 0x000028, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_GetDisplayedEntryWidgets_ReturnValue) == 0x000030, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_GetDisplayedEntryWidgets_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, K2Node_DynamicCast_AsChat_Log_Message_Entry) == 0x000040, "Member 'ChatLogWindowList_C_CheckUnread::K2Node_DynamicCast_AsChat_Log_Message_Entry' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'ChatLogWindowList_C_CheckUnread::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_CheckUnread, CallFunc_BooleanAND_ReturnValue_1) == 0x000051, "Member 'ChatLogWindowList_C_CheckUnread::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.ChatCloseUnreadUpdate
// 0x0020 (0x0020 - 0x0000)
struct ChatLogWindowList_C_ChatCloseUnreadUpdate final
{
public:
	int32                                         UnreadIdx;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4764[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_ChatCloseUnreadUpdate) == 0x000008, "Wrong alignment on ChatLogWindowList_C_ChatCloseUnreadUpdate");
static_assert(sizeof(ChatLogWindowList_C_ChatCloseUnreadUpdate) == 0x000020, "Wrong size on ChatLogWindowList_C_ChatCloseUnreadUpdate");
static_assert(offsetof(ChatLogWindowList_C_ChatCloseUnreadUpdate, UnreadIdx) == 0x000000, "Member 'ChatLogWindowList_C_ChatCloseUnreadUpdate::UnreadIdx' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChatCloseUnreadUpdate, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'ChatLogWindowList_C_ChatCloseUnreadUpdate::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChatCloseUnreadUpdate, K2Node_DynamicCast_AsSBGame_Instance) == 0x000010, "Member 'ChatLogWindowList_C_ChatCloseUnreadUpdate::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_ChatCloseUnreadUpdate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ChatLogWindowList_C_ChatCloseUnreadUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.UpdateChatLogStatus
// 0x0014 (0x0014 - 0x0000)
struct ChatLogWindowList_C_UpdateChatLogStatus final
{
public:
	struct FSBChatLogWindowStatusSave             InStatus;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_UpdateChatLogStatus) == 0x000004, "Wrong alignment on ChatLogWindowList_C_UpdateChatLogStatus");
static_assert(sizeof(ChatLogWindowList_C_UpdateChatLogStatus) == 0x000014, "Wrong size on ChatLogWindowList_C_UpdateChatLogStatus");
static_assert(offsetof(ChatLogWindowList_C_UpdateChatLogStatus, InStatus) == 0x000000, "Member 'ChatLogWindowList_C_UpdateChatLogStatus::InStatus' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_UpdateChatLogStatus, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'ChatLogWindowList_C_UpdateChatLogStatus::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_UpdateChatLogStatus, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000011, "Member 'ChatLogWindowList_C_UpdateChatLogStatus::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogWindowList_C_UpdateChatLogStatus, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'ChatLogWindowList_C_UpdateChatLogStatus::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function ChatLogWindowList.ChatLogWindowList_C.GetChatUnreadNotify
// 0x0001 (0x0001 - 0x0000)
struct ChatLogWindowList_C_GetChatUnreadNotify final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogWindowList_C_GetChatUnreadNotify) == 0x000001, "Wrong alignment on ChatLogWindowList_C_GetChatUnreadNotify");
static_assert(sizeof(ChatLogWindowList_C_GetChatUnreadNotify) == 0x000001, "Wrong size on ChatLogWindowList_C_GetChatUnreadNotify");
static_assert(offsetof(ChatLogWindowList_C_GetChatUnreadNotify, Result) == 0x000000, "Member 'ChatLogWindowList_C_GetChatUnreadNotify::Result' has a wrong offset!");

}

