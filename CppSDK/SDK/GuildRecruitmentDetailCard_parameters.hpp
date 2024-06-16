#pragma once

 

// Package: GuildRecruitmentDetailCard

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.ExecuteUbergraph_GuildRecruitmentDetailCard
// 0x00B0 (0x00B0 - 0x0000)
struct GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CA3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CA4[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEntryId;                      // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0030(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CA5[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x006C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0070(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, bool IsAccept, const class FString& InEntryId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0090(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard) == 0x000008, "Wrong alignment on GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard");
static_assert(sizeof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard) == 0x0000B0, "Wrong size on GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, EntryPoint) == 0x000000, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_GetGuildComp_ReturnValue_1) == 0x000010, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, K2Node_CustomEvent_RetCode_1) == 0x000018, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, K2Node_CustomEvent_IsAccept) == 0x00001C, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, K2Node_CustomEvent_InEntryId) == 0x000020, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::K2Node_CustomEvent_InEntryId' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_GetSBRetMessage_ReturnValue) == 0x000030, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, K2Node_CustomEvent_RetCode) == 0x00006C, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000070, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000080, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000090, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000A8, "Member 'GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedCancelEntry
// 0x0004 (0x0004 - 0x0000)
struct GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry) == 0x000004, "Wrong alignment on GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry");
static_assert(sizeof(GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry) == 0x000004, "Wrong size on GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry, RetCode) == 0x000000, "Member 'GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry::RetCode' has a wrong offset!");

// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedInviteArraignment
// 0x0018 (0x0018 - 0x0000)
struct GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccept;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CA6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEntryId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment) == 0x000008, "Wrong alignment on GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment");
static_assert(sizeof(GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment) == 0x000018, "Wrong size on GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment, RetCode) == 0x000000, "Member 'GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment::RetCode' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment, IsAccept) == 0x000004, "Member 'GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment::IsAccept' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment, InEntryId) == 0x000008, "Member 'GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment::InEntryId' has a wrong offset!");

// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildRecruitmentDetailCard_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentDetailCard_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildRecruitmentDetailCard_C_GetGuildComp");
static_assert(sizeof(GuildRecruitmentDetailCard_C_GetGuildComp) == 0x000018, "Wrong size on GuildRecruitmentDetailCard_C_GetGuildComp");
static_assert(offsetof(GuildRecruitmentDetailCard_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildRecruitmentDetailCard_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildRecruitmentDetailCard_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildRecruitmentDetailCard_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Initialize
// 0x01B0 (0x01B0 - 0x0000)
struct GuildRecruitmentDetailCard_C_Initialize final
{
public:
	struct FGuildData                             GuildData;                                         // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuildEntryData                        GuildEntryData;                                    // 0x00B8(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bInvite;                                           // 0x0198(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CA7[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x019C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GuildRecruitmentDetailCard_C_Initialize) == 0x000008, "Wrong alignment on GuildRecruitmentDetailCard_C_Initialize");
static_assert(sizeof(GuildRecruitmentDetailCard_C_Initialize) == 0x0001B0, "Wrong size on GuildRecruitmentDetailCard_C_Initialize");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Initialize, GuildData) == 0x000000, "Member 'GuildRecruitmentDetailCard_C_Initialize::GuildData' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Initialize, GuildEntryData) == 0x0000B8, "Member 'GuildRecruitmentDetailCard_C_Initialize::GuildEntryData' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Initialize, bInvite) == 0x000198, "Member 'GuildRecruitmentDetailCard_C_Initialize::bInvite' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x00019C, "Member 'GuildRecruitmentDetailCard_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Send Answer To Invited Guild
// 0x0010 (0x0010 - 0x0000)
struct GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild final
{
public:
	bool                                          bIsAccept;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CA8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild) == 0x000008, "Wrong alignment on GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild");
static_assert(sizeof(GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild) == 0x000010, "Wrong size on GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild, bIsAccept) == 0x000000, "Member 'GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild::bIsAccept' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");

}

