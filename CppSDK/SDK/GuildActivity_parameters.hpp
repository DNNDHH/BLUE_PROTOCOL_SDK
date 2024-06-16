#pragma once

 

// Package: GuildActivity

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildActivity.GuildActivity_C.ExecuteUbergraph_GuildActivity
// 0x0488 (0x0488 - 0x0000)
struct GuildActivity_C_ExecuteUbergraph_GuildActivity final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_Component;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_Component_1;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ED2[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0048(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ED3[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0050(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0448(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ED4[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0450(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0458(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0468(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildActivity_C_ExecuteUbergraph_GuildActivity) == 0x000008, "Wrong alignment on GuildActivity_C_ExecuteUbergraph_GuildActivity");
static_assert(sizeof(GuildActivity_C_ExecuteUbergraph_GuildActivity) == 0x000488, "Wrong size on GuildActivity_C_ExecuteUbergraph_GuildActivity");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, EntryPoint) == 0x000000, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, K2Node_CustomEvent_RetCode_1) == 0x000004, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, CallFunc_GetGuildComp_Component) == 0x000018, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::CallFunc_GetGuildComp_Component' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, CallFunc_GetGuildComp_Component_1) == 0x000030, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::CallFunc_GetGuildComp_Component_1' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, Temp_bool_Has_Been_Initd_Variable) == 0x000038, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, Temp_bool_IsClosed_Variable) == 0x000039, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, CallFunc_GetSBPlayerController_ReturnValue) == 0x000040, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, K2Node_CustomEvent_bWasSuccessful) == 0x000048, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000050, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, K2Node_CustomEvent_RetCode) == 0x000448, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, CallFunc_GetConcernedList_ReturnValue) == 0x000450, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, CallFunc_GetSBRetMessage_ReturnValue) == 0x000458, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, CallFunc_Conv_StringToText_ReturnValue) == 0x000468, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_ExecuteUbergraph_GuildActivity, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000480, "Member 'GuildActivity_C_ExecuteUbergraph_GuildActivity::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function GuildActivity.GuildActivity_C.OnCompleteProfileLoaded
// 0x0408 (0x0408 - 0x0000)
struct GuildActivity_C_OnCompleteProfileLoaded final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ED5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivity_C_OnCompleteProfileLoaded) == 0x000008, "Wrong alignment on GuildActivity_C_OnCompleteProfileLoaded");
static_assert(sizeof(GuildActivity_C_OnCompleteProfileLoaded) == 0x000408, "Wrong size on GuildActivity_C_OnCompleteProfileLoaded");
static_assert(offsetof(GuildActivity_C_OnCompleteProfileLoaded, bWasSuccessful) == 0x000000, "Member 'GuildActivity_C_OnCompleteProfileLoaded::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_OnCompleteProfileLoaded, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildActivity_C_OnCompleteProfileLoaded::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_OnCompleteProfileLoaded, RetCode) == 0x000400, "Member 'GuildActivity_C_OnCompleteProfileLoaded::RetCode' has a wrong offset!");

// Function GuildActivity.GuildActivity_C.OnCompleteGuildActivity_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildActivity_C_OnCompleteGuildActivity_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivity_C_OnCompleteGuildActivity_Event) == 0x000004, "Wrong alignment on GuildActivity_C_OnCompleteGuildActivity_Event");
static_assert(sizeof(GuildActivity_C_OnCompleteGuildActivity_Event) == 0x000004, "Wrong size on GuildActivity_C_OnCompleteGuildActivity_Event");
static_assert(offsetof(GuildActivity_C_OnCompleteGuildActivity_Event, RetCode) == 0x000000, "Member 'GuildActivity_C_OnCompleteGuildActivity_Event::RetCode' has a wrong offset!");

// Function GuildActivity.GuildActivity_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildActivity_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                Component;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivity_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildActivity_C_GetGuildComp");
static_assert(sizeof(GuildActivity_C_GetGuildComp) == 0x000018, "Wrong size on GuildActivity_C_GetGuildComp");
static_assert(offsetof(GuildActivity_C_GetGuildComp, Component) == 0x000000, "Member 'GuildActivity_C_GetGuildComp::Component' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildActivity_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivity_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildActivity_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildActivity.GuildActivity_C.IsRequested
// 0x0001 (0x0001 - 0x0000)
struct GuildActivity_C_IsRequested final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildActivity_C_IsRequested) == 0x000001, "Wrong alignment on GuildActivity_C_IsRequested");
static_assert(sizeof(GuildActivity_C_IsRequested) == 0x000001, "Wrong size on GuildActivity_C_IsRequested");
static_assert(offsetof(GuildActivity_C_IsRequested, Result) == 0x000000, "Member 'GuildActivity_C_IsRequested::Result' has a wrong offset!");

}

