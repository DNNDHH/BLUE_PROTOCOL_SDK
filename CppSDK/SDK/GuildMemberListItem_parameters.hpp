#pragma once

 

// Package: GuildMemberListItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMember__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberListItem_C_OnSelectedMember__DelegateSignature final
{
public:
	class UGuildMemberListItem_C*                 MemberData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberListItem_C_OnSelectedMember__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberListItem_C_OnSelectedMember__DelegateSignature");
static_assert(sizeof(GuildMemberListItem_C_OnSelectedMember__DelegateSignature) == 0x000008, "Wrong size on GuildMemberListItem_C_OnSelectedMember__DelegateSignature");
static_assert(offsetof(GuildMemberListItem_C_OnSelectedMember__DelegateSignature, MemberData) == 0x000000, "Member 'GuildMemberListItem_C_OnSelectedMember__DelegateSignature::MemberData' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.OnClickedCancelInvite__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature final
{
public:
	class UGuildMemberListItem_C*                 MemberData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature");
static_assert(sizeof(GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature) == 0x000008, "Wrong size on GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature");
static_assert(offsetof(GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature, MemberData) == 0x000000, "Member 'GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature::MemberData' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature");
static_assert(sizeof(GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong size on GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature");
static_assert(offsetof(GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.ExecuteUbergraph_GuildMemberListItem
// 0x0038 (0x0038 - 0x0000)
struct GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459B[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberSettingDialog_C*            CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_459C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonPlayerListPannel_C*              K2Node_CustomEvent_TargetPlayerListPannel;         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem) == 0x000008, "Wrong alignment on GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem");
static_assert(sizeof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem) == 0x000038, "Wrong size on GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, EntryPoint) == 0x000000, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, K2Node_Event_IsDesignTime) == 0x000014, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, K2Node_CustomEvent_TargetPlayerListPannel) == 0x000028, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::K2Node_CustomEvent_TargetPlayerListPannel' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMemberListPannel
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberListItem_C_OnSelectedMemberListPannel final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberListItem_C_OnSelectedMemberListPannel) == 0x000008, "Wrong alignment on GuildMemberListItem_C_OnSelectedMemberListPannel");
static_assert(sizeof(GuildMemberListItem_C_OnSelectedMemberListPannel) == 0x000008, "Wrong size on GuildMemberListItem_C_OnSelectedMemberListPannel");
static_assert(offsetof(GuildMemberListItem_C_OnSelectedMemberListPannel, TargetPlayerListPannel) == 0x000000, "Member 'GuildMemberListItem_C_OnSelectedMemberListPannel::TargetPlayerListPannel' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberListItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberListItem_C_PreConstruct) == 0x000001, "Wrong alignment on GuildMemberListItem_C_PreConstruct");
static_assert(sizeof(GuildMemberListItem_C_PreConstruct) == 0x000001, "Wrong size on GuildMemberListItem_C_PreConstruct");
static_assert(offsetof(GuildMemberListItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GuildMemberListItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.Set MemberData
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberListItem_C_Set_MemberData final
{
public:
	struct FGuildMemberData                       Param_GuildMemberData;                             // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMemberListItem_C_Set_MemberData) == 0x000008, "Wrong alignment on GuildMemberListItem_C_Set_MemberData");
static_assert(sizeof(GuildMemberListItem_C_Set_MemberData) == 0x0000D8, "Wrong size on GuildMemberListItem_C_Set_MemberData");
static_assert(offsetof(GuildMemberListItem_C_Set_MemberData, Param_GuildMemberData) == 0x000000, "Member 'GuildMemberListItem_C_Set_MemberData::Param_GuildMemberData' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.InitializeMemberData
// 0x0020 (0x0020 - 0x0000)
struct GuildMemberListItem_C_InitializeMemberData final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCommonPlayerListPannel_C* TargetPlayerListPannel)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GuildMemberListItem_C_InitializeMemberData) == 0x000004, "Wrong alignment on GuildMemberListItem_C_InitializeMemberData");
static_assert(sizeof(GuildMemberListItem_C_InitializeMemberData) == 0x000020, "Wrong size on GuildMemberListItem_C_InitializeMemberData");
static_assert(offsetof(GuildMemberListItem_C_InitializeMemberData, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'GuildMemberListItem_C_InitializeMemberData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_InitializeMemberData, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'GuildMemberListItem_C_InitializeMemberData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberListItem_C_SetSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberListItem_C_SetSelected) == 0x000001, "Wrong alignment on GuildMemberListItem_C_SetSelected");
static_assert(sizeof(GuildMemberListItem_C_SetSelected) == 0x000001, "Wrong size on GuildMemberListItem_C_SetSelected");
static_assert(offsetof(GuildMemberListItem_C_SetSelected, IsSelected) == 0x000000, "Member 'GuildMemberListItem_C_SetSelected::IsSelected' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.GetMemberData
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberListItem_C_GetMemberData final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(Parm, OutParm)
};
static_assert(alignof(GuildMemberListItem_C_GetMemberData) == 0x000008, "Wrong alignment on GuildMemberListItem_C_GetMemberData");
static_assert(sizeof(GuildMemberListItem_C_GetMemberData) == 0x0000D8, "Wrong size on GuildMemberListItem_C_GetMemberData");
static_assert(offsetof(GuildMemberListItem_C_GetMemberData, Data) == 0x000000, "Member 'GuildMemberListItem_C_GetMemberData::Data' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.SetInviteMemberData
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberListItem_C_SetInviteMemberData final
{
public:
	struct FGuildMemberData                       Param_GuildMemberData;                             // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMemberListItem_C_SetInviteMemberData) == 0x000008, "Wrong alignment on GuildMemberListItem_C_SetInviteMemberData");
static_assert(sizeof(GuildMemberListItem_C_SetInviteMemberData) == 0x0000D8, "Wrong size on GuildMemberListItem_C_SetInviteMemberData");
static_assert(offsetof(GuildMemberListItem_C_SetInviteMemberData, Param_GuildMemberData) == 0x000000, "Member 'GuildMemberListItem_C_SetInviteMemberData::Param_GuildMemberData' has a wrong offset!");

// Function GuildMemberListItem.GuildMemberListItem_C.InitChangeTypeBtn
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberListItem_C_InitChangeTypeBtn final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberListItem_C_InitChangeTypeBtn) == 0x000001, "Wrong alignment on GuildMemberListItem_C_InitChangeTypeBtn");
static_assert(sizeof(GuildMemberListItem_C_InitChangeTypeBtn) == 0x000004, "Wrong size on GuildMemberListItem_C_InitChangeTypeBtn");
static_assert(offsetof(GuildMemberListItem_C_InitChangeTypeBtn, Temp_bool_Variable) == 0x000000, "Member 'GuildMemberListItem_C_InitChangeTypeBtn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_InitChangeTypeBtn, Temp_byte_Variable) == 0x000001, "Member 'GuildMemberListItem_C_InitChangeTypeBtn::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_InitChangeTypeBtn, Temp_byte_Variable_1) == 0x000002, "Member 'GuildMemberListItem_C_InitChangeTypeBtn::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildMemberListItem_C_InitChangeTypeBtn, K2Node_Select_Default) == 0x000003, "Member 'GuildMemberListItem_C_InitChangeTypeBtn::K2Node_Select_Default' has a wrong offset!");

}

