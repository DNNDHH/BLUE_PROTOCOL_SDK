#pragma once

 

// Package: GuildMemberManageCBIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.ExecuteUbergraph_GuildMemberManageCBIcon
// 0x0038 (0x0038 - 0x0000)
struct GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5472[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	int32                                         K2Node_CustomEvent_TextId;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon) == 0x000008, "Wrong alignment on GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon");
static_assert(sizeof(GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon) == 0x000038, "Wrong size on GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon");
static_assert(offsetof(GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon, EntryPoint) == 0x000000, "Member 'GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon, K2Node_CustomEvent_TextId) == 0x000030, "Member 'GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon::K2Node_CustomEvent_TextId' has a wrong offset!");
static_assert(offsetof(GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon, K2Node_ComponentBoundEvent_bIsChecked) == 0x000034, "Member 'GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");

// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetTextById
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberManageCBIcon_C_SetTextById final
{
public:
	int32                                         Param_TextId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberManageCBIcon_C_SetTextById) == 0x000004, "Wrong alignment on GuildMemberManageCBIcon_C_SetTextById");
static_assert(sizeof(GuildMemberManageCBIcon_C_SetTextById) == 0x000004, "Wrong size on GuildMemberManageCBIcon_C_SetTextById");
static_assert(offsetof(GuildMemberManageCBIcon_C_SetTextById, Param_TextId) == 0x000000, "Member 'GuildMemberManageCBIcon_C_SetTextById::Param_TextId' has a wrong offset!");

// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.IsCheck
// 0x0002 (0x0002 - 0x0000)
struct GuildMemberManageCBIcon_C_IsCheck final
{
public:
	bool                                          Param_IsCheck;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberManageCBIcon_C_IsCheck) == 0x000001, "Wrong alignment on GuildMemberManageCBIcon_C_IsCheck");
static_assert(sizeof(GuildMemberManageCBIcon_C_IsCheck) == 0x000002, "Wrong size on GuildMemberManageCBIcon_C_IsCheck");
static_assert(offsetof(GuildMemberManageCBIcon_C_IsCheck, Param_IsCheck) == 0x000000, "Member 'GuildMemberManageCBIcon_C_IsCheck::Param_IsCheck' has a wrong offset!");
static_assert(offsetof(GuildMemberManageCBIcon_C_IsCheck, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'GuildMemberManageCBIcon_C_IsCheck::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetChecked
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberManageCBIcon_C_SetChecked final
{
public:
	bool                                          bIsCheck;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberManageCBIcon_C_SetChecked) == 0x000001, "Wrong alignment on GuildMemberManageCBIcon_C_SetChecked");
static_assert(sizeof(GuildMemberManageCBIcon_C_SetChecked) == 0x000001, "Wrong size on GuildMemberManageCBIcon_C_SetChecked");
static_assert(offsetof(GuildMemberManageCBIcon_C_SetChecked, bIsCheck) == 0x000000, "Member 'GuildMemberManageCBIcon_C_SetChecked::bIsCheck' has a wrong offset!");

}

