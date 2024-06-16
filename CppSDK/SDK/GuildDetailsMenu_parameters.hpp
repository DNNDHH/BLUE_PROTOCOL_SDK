#pragma once

 

// Package: GuildDetailsMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildDetailsMenu.GuildDetailsMenu_C.ExecuteUbergraph_GuildDetailsMenu
// 0x00F0 (0x00F0 - 0x0000)
struct GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ECF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_Edit;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ED0[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ED1[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0030(0x00B8)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu) == 0x000008, "Wrong alignment on GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu");
static_assert(sizeof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu) == 0x0000F0, "Wrong size on GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, EntryPoint) == 0x000000, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, Temp_bool_IsClosed_Variable) == 0x000018, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, K2Node_ComponentBoundEvent_Edit) == 0x000019, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::K2Node_ComponentBoundEvent_Edit' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, CallFunc_GetGuildComp_ReturnValue) == 0x000020, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, K2Node_CustomEvent_RetCode) == 0x000028, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, CallFunc_GetGuildData_ReturnValue) == 0x000030, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function GuildDetailsMenu.GuildDetailsMenu_C.OnCompleteGetGuildData_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildDetailsMenu_C_OnCompleteGetGuildData_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetailsMenu_C_OnCompleteGetGuildData_Event) == 0x000004, "Wrong alignment on GuildDetailsMenu_C_OnCompleteGetGuildData_Event");
static_assert(sizeof(GuildDetailsMenu_C_OnCompleteGetGuildData_Event) == 0x000004, "Wrong size on GuildDetailsMenu_C_OnCompleteGetGuildData_Event");
static_assert(offsetof(GuildDetailsMenu_C_OnCompleteGetGuildData_Event, RetCode) == 0x000000, "Member 'GuildDetailsMenu_C_OnCompleteGetGuildData_Event::RetCode' has a wrong offset!");

// Function GuildDetailsMenu.GuildDetailsMenu_C.BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature final
{
public:
	bool                                          Edit;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature) == 0x000001, "Wrong alignment on GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature");
static_assert(sizeof(GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature) == 0x000001, "Wrong size on GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature");
static_assert(offsetof(GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature, Edit) == 0x000000, "Member 'GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature::Edit' has a wrong offset!");

// Function GuildDetailsMenu.GuildDetailsMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildDetailsMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildDetailsMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildDetailsMenu_C_GetGuildComp");
static_assert(sizeof(GuildDetailsMenu_C_GetGuildComp) == 0x000018, "Wrong size on GuildDetailsMenu_C_GetGuildComp");
static_assert(offsetof(GuildDetailsMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildDetailsMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildDetailsMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildDetailsMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildDetailsMenu.GuildDetailsMenu_C.Initialize
// 0x00C0 (0x00C0 - 0x0000)
struct GuildDetailsMenu_C_Initialize final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0008(0x00B8)()
};
static_assert(alignof(GuildDetailsMenu_C_Initialize) == 0x000008, "Wrong alignment on GuildDetailsMenu_C_Initialize");
static_assert(sizeof(GuildDetailsMenu_C_Initialize) == 0x0000C0, "Wrong size on GuildDetailsMenu_C_Initialize");
static_assert(offsetof(GuildDetailsMenu_C_Initialize, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'GuildDetailsMenu_C_Initialize::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildDetailsMenu_C_Initialize, CallFunc_GetGuildData_ReturnValue) == 0x000008, "Member 'GuildDetailsMenu_C_Initialize::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");

}

