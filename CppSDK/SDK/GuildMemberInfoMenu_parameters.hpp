#pragma once

 

// Package: GuildMemberInfoMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.ExecuteUbergraph_GuildMemberInfoMenu
// 0x00F8 (0x00F8 - 0x0000)
struct GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildMenu_C*                           K2Node_DynamicCast_AsGuild_Menu;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83B9[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonId;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ButtonId;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83BA[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberInviteMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83BB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberEntryMenu_C*                CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SubPage;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83BC[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberMenu_C*                     CallFunc_Create_ReturnValue_2;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentWidget_Parent_1;                 // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83BD[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface;         // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83BE[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0088(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83BF[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x00A0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C0[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x00A8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C1[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu) == 0x000008, "Wrong alignment on GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu");
static_assert(sizeof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu) == 0x0000F8, "Wrong size on GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, EntryPoint) == 0x000000, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, Temp_int_Variable) == 0x000004, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_GetParentWidget_Parent) == 0x000008, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_DynamicCast_AsGuild_Menu) == 0x000010, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_DynamicCast_AsGuild_Menu' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CustomEvent_ButtonId) == 0x000020, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CustomEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_ComponentBoundEvent_ButtonId) == 0x000024, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_ComponentBoundEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000029, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_Create_ReturnValue) == 0x000030, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_SwitchInteger_CmpSuccess) == 0x000038, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CustomEvent_SubPage) == 0x000048, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CustomEvent_SubPage' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_Create_ReturnValue_2) == 0x000050, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_GetParentWidget_Parent_1) == 0x000058, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_GetParentWidget_Parent_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, Temp_bool_Has_Been_Initd_Variable) == 0x000060, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface) == 0x000068, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_GetGuildComp_ReturnValue) == 0x000080, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CustomEvent_RetCode_2) == 0x000088, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00008C, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CustomEvent_RetCode_1) == 0x0000A0, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000A4, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CustomEvent_RetCode) == 0x0000A8, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000AC, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0000BC, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, Temp_bool_IsClosed_Variable) == 0x0000BD, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C0, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_GetGuildComp_ReturnValue_1) == 0x0000D0, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000D8, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x0000E8, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000EC, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000F0, "Member 'GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedDenyMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInfoMenu_C_CompletedDenyMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInfoMenu_C_CompletedDenyMember) == 0x000004, "Wrong alignment on GuildMemberInfoMenu_C_CompletedDenyMember");
static_assert(sizeof(GuildMemberInfoMenu_C_CompletedDenyMember) == 0x000004, "Wrong size on GuildMemberInfoMenu_C_CompletedDenyMember");
static_assert(offsetof(GuildMemberInfoMenu_C_CompletedDenyMember, RetCode) == 0x000000, "Member 'GuildMemberInfoMenu_C_CompletedDenyMember::RetCode' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedAcceptMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInfoMenu_C_CompletedAcceptMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInfoMenu_C_CompletedAcceptMember) == 0x000004, "Wrong alignment on GuildMemberInfoMenu_C_CompletedAcceptMember");
static_assert(sizeof(GuildMemberInfoMenu_C_CompletedAcceptMember) == 0x000004, "Wrong size on GuildMemberInfoMenu_C_CompletedAcceptMember");
static_assert(offsetof(GuildMemberInfoMenu_C_CompletedAcceptMember, RetCode) == 0x000000, "Member 'GuildMemberInfoMenu_C_CompletedAcceptMember::RetCode' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedGGetEntryList
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInfoMenu_C_CompletedGGetEntryList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInfoMenu_C_CompletedGGetEntryList) == 0x000004, "Wrong alignment on GuildMemberInfoMenu_C_CompletedGGetEntryList");
static_assert(sizeof(GuildMemberInfoMenu_C_CompletedGGetEntryList) == 0x000004, "Wrong size on GuildMemberInfoMenu_C_CompletedGGetEntryList");
static_assert(offsetof(GuildMemberInfoMenu_C_CompletedGGetEntryList, RetCode) == 0x000000, "Member 'GuildMemberInfoMenu_C_CompletedGGetEntryList::RetCode' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateCommandMenuBG
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInfoMenu_C_UpdateCommandMenuBG final
{
public:
	int32                                         SubPage;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInfoMenu_C_UpdateCommandMenuBG) == 0x000004, "Wrong alignment on GuildMemberInfoMenu_C_UpdateCommandMenuBG");
static_assert(sizeof(GuildMemberInfoMenu_C_UpdateCommandMenuBG) == 0x000004, "Wrong size on GuildMemberInfoMenu_C_UpdateCommandMenuBG");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateCommandMenuBG, SubPage) == 0x000000, "Member 'GuildMemberInfoMenu_C_UpdateCommandMenuBG::SubPage' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000004, "Wrong size on GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.SelectTab
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberInfoMenu_C_SelectTab final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInfoMenu_C_SelectTab) == 0x000004, "Wrong alignment on GuildMemberInfoMenu_C_SelectTab");
static_assert(sizeof(GuildMemberInfoMenu_C_SelectTab) == 0x000004, "Wrong size on GuildMemberInfoMenu_C_SelectTab");
static_assert(offsetof(GuildMemberInfoMenu_C_SelectTab, ButtonId) == 0x000000, "Member 'GuildMemberInfoMenu_C_SelectTab::ButtonId' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildMemberInfoMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberInfoMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildMemberInfoMenu_C_GetGuildComp");
static_assert(sizeof(GuildMemberInfoMenu_C_GetGuildComp) == 0x000018, "Wrong size on GuildMemberInfoMenu_C_GetGuildComp");
static_assert(offsetof(GuildMemberInfoMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildMemberInfoMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMemberInfoMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMemberInfoMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateSubMenuButtonStateByIndex
// 0x0038 (0x0038 - 0x0000)
struct GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex final
{
public:
	int32                                         SubButtonIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSubButtonIndex;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNewMember_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83C3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex) == 0x000008, "Wrong alignment on GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex");
static_assert(sizeof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex) == 0x000038, "Wrong size on GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, SubButtonIndex) == 0x000000, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::SubButtonIndex' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, LocalSubButtonIndex) == 0x000004, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::LocalSubButtonIndex' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, CallFunc_GetGuildComp_ReturnValue) == 0x000010, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, CallFunc_HasNewMember_ReturnValue) == 0x000018, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::CallFunc_HasNewMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, CallFunc_GetGuildEntryList_ReturnValue) == 0x000020, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

