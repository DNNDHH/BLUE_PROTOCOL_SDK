#pragma once

 

// Package: GuildRecruitmentMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnSelectRecruitmentEntryItem__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntry;                                        // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature) == 0x000008, "Wrong alignment on GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature");
static_assert(sizeof(GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature) == 0x0000E0, "Wrong size on GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature");
static_assert(offsetof(GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature, GuildEntry) == 0x000000, "Member 'GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature::GuildEntry' has a wrong offset!");

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.ExecuteUbergraph_GuildRecruitmentMenu
// 0x0230 (0x0230 - 0x0000)
struct GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EC8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        K2Node_ComponentBoundEvent_GuildEntryData;         // 0x0008(0x00E0)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x00F0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EC9[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x00F8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ECA[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, struct FGuildData& InGuildData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0128(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ECB[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             K2Node_CustomEvent_InGuildData;                    // 0x0130(0x00B8)(ConstParm)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ECC[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x01F0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0200(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ECD[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu) == 0x000008, "Wrong alignment on GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu");
static_assert(sizeof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu) == 0x000230, "Wrong size on GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, EntryPoint) == 0x000000, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_ComponentBoundEvent_GuildEntryData) == 0x000008, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_ComponentBoundEvent_GuildEntryData' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, CallFunc_GetGuildComp_ReturnValue) == 0x0000E8, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_CustomEvent_RetCode_2) == 0x0000F0, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F4, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_CustomEvent_RetCode_1) == 0x0000F8, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, Temp_bool_Has_Been_Initd_Variable) == 0x0000FC, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000FD, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, CallFunc_GetGuildComp_ReturnValue_1) == 0x000100, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000108, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000118, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_CustomEvent_RetCode) == 0x000128, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_CustomEvent_InGuildData) == 0x000130, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_CustomEvent_InGuildData' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, Temp_bool_IsClosed_Variable) == 0x0001E8, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x0001F0, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000200, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000218, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00021C, "Member 'GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Event_OnGetedGuildDatail
// 0x00C0 (0x00C0 - 0x0000)
struct GuildRecruitmentMenu_C_Event_OnGetedGuildDatail final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ECE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             InGuildData;                                       // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GuildRecruitmentMenu_C_Event_OnGetedGuildDatail) == 0x000008, "Wrong alignment on GuildRecruitmentMenu_C_Event_OnGetedGuildDatail");
static_assert(sizeof(GuildRecruitmentMenu_C_Event_OnGetedGuildDatail) == 0x0000C0, "Wrong size on GuildRecruitmentMenu_C_Event_OnGetedGuildDatail");
static_assert(offsetof(GuildRecruitmentMenu_C_Event_OnGetedGuildDatail, RetCode) == 0x000000, "Member 'GuildRecruitmentMenu_C_Event_OnGetedGuildDatail::RetCode' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_Event_OnGetedGuildDatail, InGuildData) == 0x000008, "Member 'GuildRecruitmentMenu_C_Event_OnGetedGuildDatail::InGuildData' has a wrong offset!");

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetSendedEntries_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event) == 0x000004, "Wrong alignment on GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event");
static_assert(sizeof(GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event) == 0x000004, "Wrong size on GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event");
static_assert(offsetof(GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event, RetCode) == 0x000000, "Member 'GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event::RetCode' has a wrong offset!");

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetInviteList_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event) == 0x000004, "Wrong alignment on GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event");
static_assert(sizeof(GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event) == 0x000004, "Wrong size on GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event");
static_assert(offsetof(GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event, RetCode) == 0x000000, "Member 'GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event::RetCode' has a wrong offset!");

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntryData;                                    // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature) == 0x000008, "Wrong alignment on GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature");
static_assert(sizeof(GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature) == 0x0000E0, "Wrong size on GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature");
static_assert(offsetof(GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature, GuildEntryData) == 0x000000, "Member 'GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature::GuildEntryData' has a wrong offset!");

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildRecruitmentMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildRecruitmentMenu_C_GetGuildComp");
static_assert(sizeof(GuildRecruitmentMenu_C_GetGuildComp) == 0x000018, "Wrong size on GuildRecruitmentMenu_C_GetGuildComp");
static_assert(offsetof(GuildRecruitmentMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildRecruitmentMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildRecruitmentMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildRecruitmentMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.UpdateSelectGuideText
// 0x0038 (0x0038 - 0x0000)
struct GuildRecruitmentMenu_C_UpdateSelectGuideText final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerEntryList_ReturnValue;           // 0x0008(0x0010)(ReferenceParm)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerInviteList_ReturnValue;          // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildRecruitmentMenu_C_UpdateSelectGuideText) == 0x000008, "Wrong alignment on GuildRecruitmentMenu_C_UpdateSelectGuideText");
static_assert(sizeof(GuildRecruitmentMenu_C_UpdateSelectGuideText) == 0x000038, "Wrong size on GuildRecruitmentMenu_C_UpdateSelectGuideText");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_GetPlayerEntryList_ReturnValue) == 0x000008, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_GetPlayerEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_GetPlayerInviteList_ReturnValue) == 0x000018, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_GetPlayerInviteList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000031, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_IsVisible_ReturnValue) == 0x000032, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_BooleanOR_ReturnValue) == 0x000033, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentMenu_C_UpdateSelectGuideText, CallFunc_Not_PreBool_ReturnValue) == 0x000034, "Member 'GuildRecruitmentMenu_C_UpdateSelectGuideText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

