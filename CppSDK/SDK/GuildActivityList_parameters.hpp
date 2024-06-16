#pragma once

 

// Package: GuildActivityList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GuildActivityList.GuildActivityList_C.ExecuteUbergraph_GuildActivityList
// 0x0508 (0x0508 - 0x0000)
struct GuildActivityList_C_ExecuteUbergraph_GuildActivityList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44DB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44DC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44DD[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UserId;                         // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_CharacterId;                    // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Name;                           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0078(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44DE[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0080(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0478(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44DF[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0480(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0488(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0498(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44E0[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44E1[0x3];                                     // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x04CC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44E2[0x4];                                     // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x04E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44E3[0x6];                                     // 0x04F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x04F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList) == 0x000008, "Wrong alignment on GuildActivityList_C_ExecuteUbergraph_GuildActivityList");
static_assert(sizeof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList) == 0x000508, "Wrong size on GuildActivityList_C_ExecuteUbergraph_GuildActivityList");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, EntryPoint) == 0x000000, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, Temp_bool_IsClosed_Variable) == 0x000018, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_GetGuildComp_ReturnValue) == 0x000020, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CustomEvent_RetCode_1) == 0x000028, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003C, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CustomEvent_UserId) == 0x000040, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CustomEvent_UserId' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CustomEvent_CharacterId) == 0x000050, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CustomEvent_Name) == 0x000060, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_GetSBPlayerController_ReturnValue) == 0x000070, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CustomEvent_bWasSuccessful) == 0x000078, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000080, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CustomEvent_RetCode) == 0x000478, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_GetConcernedList_ReturnValue) == 0x000480, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_GetSBRetMessage_ReturnValue) == 0x000488, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_Conv_StringToText_ReturnValue) == 0x000498, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0004B0, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_GetPlayerId_ReturnValue) == 0x0004B8, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0004C8, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, K2Node_CreateDelegate_OutputDelegate_2) == 0x0004CC, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_GetCharacterId_ReturnValue) == 0x0004E0, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0004F0, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_BooleanAND_ReturnValue) == 0x0004F1, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_Create_ReturnValue) == 0x0004F8, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_ExecuteUbergraph_GuildActivityList, CallFunc_Not_PreBool_ReturnValue) == 0x000500, "Member 'GuildActivityList_C_ExecuteUbergraph_GuildActivityList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function GuildActivityList.GuildActivityList_C.OnCompleteProfileLoaded
// 0x0408 (0x0408 - 0x0000)
struct GuildActivityList_C_OnCompleteProfileLoaded final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44E4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivityList_C_OnCompleteProfileLoaded) == 0x000008, "Wrong alignment on GuildActivityList_C_OnCompleteProfileLoaded");
static_assert(sizeof(GuildActivityList_C_OnCompleteProfileLoaded) == 0x000408, "Wrong size on GuildActivityList_C_OnCompleteProfileLoaded");
static_assert(offsetof(GuildActivityList_C_OnCompleteProfileLoaded, bWasSuccessful) == 0x000000, "Member 'GuildActivityList_C_OnCompleteProfileLoaded::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_OnCompleteProfileLoaded, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildActivityList_C_OnCompleteProfileLoaded::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_OnCompleteProfileLoaded, RetCode) == 0x000400, "Member 'GuildActivityList_C_OnCompleteProfileLoaded::RetCode' has a wrong offset!");

// Function GuildActivityList.GuildActivityList_C.OnRequestPlayerCard
// 0x0030 (0x0030 - 0x0000)
struct GuildActivityList_C_OnRequestPlayerCard final
{
public:
	class FString                                 UserId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CharacterId;                                       // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivityList_C_OnRequestPlayerCard) == 0x000008, "Wrong alignment on GuildActivityList_C_OnRequestPlayerCard");
static_assert(sizeof(GuildActivityList_C_OnRequestPlayerCard) == 0x000030, "Wrong size on GuildActivityList_C_OnRequestPlayerCard");
static_assert(offsetof(GuildActivityList_C_OnRequestPlayerCard, UserId) == 0x000000, "Member 'GuildActivityList_C_OnRequestPlayerCard::UserId' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_OnRequestPlayerCard, CharacterId) == 0x000010, "Member 'GuildActivityList_C_OnRequestPlayerCard::CharacterId' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_OnRequestPlayerCard, Param_Name) == 0x000020, "Member 'GuildActivityList_C_OnRequestPlayerCard::Param_Name' has a wrong offset!");

// Function GuildActivityList.GuildActivityList_C.OnComplete RequestGetGuildActivity
// 0x0004 (0x0004 - 0x0000)
struct GuildActivityList_C_OnComplete_RequestGetGuildActivity final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivityList_C_OnComplete_RequestGetGuildActivity) == 0x000004, "Wrong alignment on GuildActivityList_C_OnComplete_RequestGetGuildActivity");
static_assert(sizeof(GuildActivityList_C_OnComplete_RequestGetGuildActivity) == 0x000004, "Wrong size on GuildActivityList_C_OnComplete_RequestGetGuildActivity");
static_assert(offsetof(GuildActivityList_C_OnComplete_RequestGetGuildActivity, RetCode) == 0x000000, "Member 'GuildActivityList_C_OnComplete_RequestGetGuildActivity::RetCode' has a wrong offset!");

// Function GuildActivityList.GuildActivityList_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildActivityList_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildActivityList_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildActivityList_C_GetGuildComp");
static_assert(sizeof(GuildActivityList_C_GetGuildComp) == 0x000018, "Wrong size on GuildActivityList_C_GetGuildComp");
static_assert(offsetof(GuildActivityList_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildActivityList_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildActivityList_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildActivityList_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildActivityList.GuildActivityList_C.GenerateGuildActivities
// 0x02C0 (0x02C0 - 0x0000)
struct GuildActivityList_C_GenerateGuildActivities final
{
public:
	class UGuildActivityBeforeStack_C*            MinStack;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildActivityBeforeStack_C*            HourStack;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildActivity                         NowActivity;                                       // 0x0010(0x00E0)(Edit, BlueprintVisible)
	class UGuildActivityBeforeStack_C*            DaysStack;                                         // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              Span;                                              // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Day;                                               // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hour;                                              // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Min;                                               // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E5[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Now;                                               // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildActivity>                 TmpActivities;                                     // 0x0118(0x0010)(Edit, BlueprintVisible)
	class USBUIGuildActivityUMGBase*              CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase; // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMinutes_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E6[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44E7[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIGuildActivityUMGBase*              CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase_1; // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildActivityBeforeStack_C*            CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHours_ReturnValue;                     // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44E8[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIGuildActivityUMGBase*              CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase_2; // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildActivityBeforeStack_C*            CallFunc_Create_ReturnValue_1;                     // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildActivityBeforeStack_C*            CallFunc_Create_ReturnValue_2;                     // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDays_ReturnValue;                      // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E9[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44EA[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildActivity                         CallFunc_Array_Get_Item;                           // 0x01A0(0x00E0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44EB[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHours_ReturnValue_1;                   // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDays_ReturnValue_1;                    // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44EC[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildActivity>                 CallFunc_GetGuildActivity_ReturnValue;             // 0x02B0(0x0010)(ReferenceParm)
};
static_assert(alignof(GuildActivityList_C_GenerateGuildActivities) == 0x000008, "Wrong alignment on GuildActivityList_C_GenerateGuildActivities");
static_assert(sizeof(GuildActivityList_C_GenerateGuildActivities) == 0x0002C0, "Wrong size on GuildActivityList_C_GenerateGuildActivities");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, MinStack) == 0x000000, "Member 'GuildActivityList_C_GenerateGuildActivities::MinStack' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, HourStack) == 0x000008, "Member 'GuildActivityList_C_GenerateGuildActivities::HourStack' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, NowActivity) == 0x000010, "Member 'GuildActivityList_C_GenerateGuildActivities::NowActivity' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, DaysStack) == 0x0000F0, "Member 'GuildActivityList_C_GenerateGuildActivities::DaysStack' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, Span) == 0x0000F8, "Member 'GuildActivityList_C_GenerateGuildActivities::Span' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, Day) == 0x000100, "Member 'GuildActivityList_C_GenerateGuildActivities::Day' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, Hour) == 0x000104, "Member 'GuildActivityList_C_GenerateGuildActivities::Hour' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, Min) == 0x000108, "Member 'GuildActivityList_C_GenerateGuildActivities::Min' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, Now) == 0x000110, "Member 'GuildActivityList_C_GenerateGuildActivities::Now' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, TmpActivities) == 0x000118, "Member 'GuildActivityList_C_GenerateGuildActivities::TmpActivities' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase) == 0x000128, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_GetMinutes_ReturnValue) == 0x000130, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_GetMinutes_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_AddChild_ReturnValue) == 0x000138, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000140, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, Temp_int_Array_Index_Variable) == 0x000144, "Member 'GuildActivityList_C_GenerateGuildActivities::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase_1) == 0x000148, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Create_ReturnValue) == 0x000150, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_GetHours_ReturnValue) == 0x000158, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_GetHours_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x00015C, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, Temp_int_Loop_Counter_Variable) == 0x000160, "Member 'GuildActivityList_C_GenerateGuildActivities::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Add_IntInt_ReturnValue) == 0x000164, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase_2) == 0x000168, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_CreateWidgets_AsSBUIGuild_Activity_UMGBase_2' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Create_ReturnValue_1) == 0x000170, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Create_ReturnValue_2) == 0x000178, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_AddChild_ReturnValue_1) == 0x000180, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_GetDays_ReturnValue) == 0x000188, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_GetDays_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_AddChild_ReturnValue_2) == 0x000190, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000198, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Array_Length_ReturnValue) == 0x000280, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Less_IntInt_ReturnValue) == 0x000284, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000288, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_UtcNow_ReturnValue) == 0x000290, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_GetHours_ReturnValue_1) == 0x000298, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_GetHours_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_GetDays_ReturnValue_1) == 0x00029C, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_GetDays_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Greater_IntInt_ReturnValue) == 0x0002A0, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0002A1, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_GetGuildComp_ReturnValue) == 0x0002A8, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_GenerateGuildActivities, CallFunc_GetGuildActivity_ReturnValue) == 0x0002B0, "Member 'GuildActivityList_C_GenerateGuildActivities::CallFunc_GetGuildActivity_ReturnValue' has a wrong offset!");

// Function GuildActivityList.GuildActivityList_C.CreateWidgets
// 0x0170 (0x0170 - 0x0000)
struct GuildActivityList_C_CreateWidgets final
{
public:
	struct FGuildActivity                         Activity;                                          // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USBUIGuildActivityUMGBase*              AsSBUIGuild_Activity_UMGBase;                      // 0x00E0(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGuildActivityType                            Temp_byte_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44ED[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_3;                             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_4;                             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_5;                             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_6;                             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_7;                             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_8;                             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_9;                             // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& UserId, const class FString& CharacterId, const class FString& Name)> K2Node_CreateDelegate_OutputDelegate;              // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 K2Node_Select_Default;                             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIGuildActivityUMGBase*              K2Node_DynamicCast_AsSBUIGuild_Activity_UMGBase;   // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildActivityList_C_CreateWidgets) == 0x000008, "Wrong alignment on GuildActivityList_C_CreateWidgets");
static_assert(sizeof(GuildActivityList_C_CreateWidgets) == 0x000170, "Wrong size on GuildActivityList_C_CreateWidgets");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Activity) == 0x000000, "Member 'GuildActivityList_C_CreateWidgets::Activity' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, AsSBUIGuild_Activity_UMGBase) == 0x0000E0, "Member 'GuildActivityList_C_CreateWidgets::AsSBUIGuild_Activity_UMGBase' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_byte_Variable) == 0x0000E8, "Member 'GuildActivityList_C_CreateWidgets::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable) == 0x0000F0, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_1) == 0x0000F8, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_2) == 0x000100, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_3) == 0x000108, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_4) == 0x000110, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_5) == 0x000118, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_6) == 0x000120, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_6' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_7) == 0x000128, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_7' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_8) == 0x000130, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_8' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, Temp_class_Variable_9) == 0x000138, "Member 'GuildActivityList_C_CreateWidgets::Temp_class_Variable_9' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'GuildActivityList_C_CreateWidgets::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, K2Node_Select_Default) == 0x000150, "Member 'GuildActivityList_C_CreateWidgets::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, CallFunc_Create_ReturnValue) == 0x000158, "Member 'GuildActivityList_C_CreateWidgets::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, K2Node_DynamicCast_AsSBUIGuild_Activity_UMGBase) == 0x000160, "Member 'GuildActivityList_C_CreateWidgets::K2Node_DynamicCast_AsSBUIGuild_Activity_UMGBase' has a wrong offset!");
static_assert(offsetof(GuildActivityList_C_CreateWidgets, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'GuildActivityList_C_CreateWidgets::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

