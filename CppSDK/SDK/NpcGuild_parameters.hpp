#pragma once

 

// Package: NpcGuild

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function NpcGuild.NpcGuild_C.ExecuteUbergraph_NpcGuild
// 0x02A0 (0x02A0 - 0x0000)
struct NpcGuild_C_ExecuteUbergraph_NpcGuild final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A30[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A31[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        K2Node_ComponentBoundEvent_GuildEntry;             // 0x0018(0x00E0)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_5;                      // 0x0100(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A32[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0110(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FGuildData>                     CallFunc_GetGuildList_ReturnValue;                 // 0x0120(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0130(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A33[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0158(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A34[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0160(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A35[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_4;               // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue_1;              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A36[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0174(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0184(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0188(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A37[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01A0(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x01B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A38[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x01C0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01D0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A39[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_5;               // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x01F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Request_GetGuildMemberList_ReturnValue;   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A3A[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x022C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_5;            // 0x023C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName TutorialHelpId)>   K2Node_CreateDelegate_OutputDelegate_6;            // 0x024C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& KickedGuildName)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x025C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x026C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7A3B[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_KickedGuildName;                // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_TutorialHelpId;                 // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0298(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcGuild_C_ExecuteUbergraph_NpcGuild) == 0x000008, "Wrong alignment on NpcGuild_C_ExecuteUbergraph_NpcGuild");
static_assert(sizeof(NpcGuild_C_ExecuteUbergraph_NpcGuild) == 0x0002A0, "Wrong size on NpcGuild_C_ExecuteUbergraph_NpcGuild");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, EntryPoint) == 0x000000, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::EntryPoint' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_IsGuildMember_ReturnValue) == 0x000010, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_ComponentBoundEvent_GuildEntry) == 0x000018, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_ComponentBoundEvent_GuildEntry' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetGuildComp_ReturnValue_1) == 0x0000F8, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_RetCode_5) == 0x000100, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_RetCode_5' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetGuildComp_ReturnValue_2) == 0x000108, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetSBRetMessage_ReturnValue) == 0x000110, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetGuildList_ReturnValue) == 0x000120, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetGuildList_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_Conv_StringToText_ReturnValue) == 0x000130, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_Greater_IntInt_ReturnValue) == 0x00014C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00014D, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetGuildComp_ReturnValue_3) == 0x000150, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_RetCode_4) == 0x000158, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00015C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_RetCode_3) == 0x000160, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000164, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetGuildComp_ReturnValue_4) == 0x000168, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetGuildComp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_IsGuildMember_ReturnValue_1) == 0x000170, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_IsGuildMember_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate) == 0x000174, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_RetCode_2) == 0x000184, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000188, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000198, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001A0, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_RetCode_1) == 0x0001B8, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x0001C0, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001D0, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0001E8, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_GetGuildComp_ReturnValue_5) == 0x0001F0, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_GetGuildComp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001F8, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_Request_GetGuildMemberList_ReturnValue) == 0x000208, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_Request_GetGuildMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_2) == 0x00020C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_3) == 0x00021C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_4) == 0x00022C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_5) == 0x00023C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_6) == 0x00024C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_7) == 0x00025C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CreateDelegate_OutputDelegate_8) == 0x00026C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_KickedGuildName) == 0x000280, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_KickedGuildName' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_TutorialHelpId) == 0x000290, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_TutorialHelpId' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, K2Node_CustomEvent_RetCode) == 0x000298, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_ExecuteUbergraph_NpcGuild, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x00029C, "Member 'NpcGuild_C_ExecuteUbergraph_NpcGuild::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.OnCompleteGetGuildData_Event
// 0x0004 (0x0004 - 0x0000)
struct NpcGuild_C_OnCompleteGetGuildData_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_OnCompleteGetGuildData_Event) == 0x000004, "Wrong alignment on NpcGuild_C_OnCompleteGetGuildData_Event");
static_assert(sizeof(NpcGuild_C_OnCompleteGetGuildData_Event) == 0x000004, "Wrong size on NpcGuild_C_OnCompleteGetGuildData_Event");
static_assert(offsetof(NpcGuild_C_OnCompleteGetGuildData_Event, RetCode) == 0x000000, "Member 'NpcGuild_C_OnCompleteGetGuildData_Event::RetCode' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.Event_SetNowTurorialHelpId
// 0x0008 (0x0008 - 0x0000)
struct NpcGuild_C_Event_SetNowTurorialHelpId final
{
public:
	class FName                                   TutorialHelpId;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_Event_SetNowTurorialHelpId) == 0x000004, "Wrong alignment on NpcGuild_C_Event_SetNowTurorialHelpId");
static_assert(sizeof(NpcGuild_C_Event_SetNowTurorialHelpId) == 0x000008, "Wrong size on NpcGuild_C_Event_SetNowTurorialHelpId");
static_assert(offsetof(NpcGuild_C_Event_SetNowTurorialHelpId, TutorialHelpId) == 0x000000, "Member 'NpcGuild_C_Event_SetNowTurorialHelpId::TutorialHelpId' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.Event_OnCompleteNotifyKickedFromGuild
// 0x0010 (0x0010 - 0x0000)
struct NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild final
{
public:
	class FString                                 KickedGuildName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild) == 0x000008, "Wrong alignment on NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild");
static_assert(sizeof(NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild) == 0x000010, "Wrong size on NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild");
static_assert(offsetof(NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild, KickedGuildName) == 0x000000, "Member 'NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild::KickedGuildName' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.OnDissolution
// 0x0004 (0x0004 - 0x0000)
struct NpcGuild_C_OnDissolution final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_OnDissolution) == 0x000004, "Wrong alignment on NpcGuild_C_OnDissolution");
static_assert(sizeof(NpcGuild_C_OnDissolution) == 0x000004, "Wrong size on NpcGuild_C_OnDissolution");
static_assert(offsetof(NpcGuild_C_OnDissolution, RetCode) == 0x000000, "Member 'NpcGuild_C_OnDissolution::RetCode' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.OnGuildWithDraw
// 0x0004 (0x0004 - 0x0000)
struct NpcGuild_C_OnGuildWithDraw final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_OnGuildWithDraw) == 0x000004, "Wrong alignment on NpcGuild_C_OnGuildWithDraw");
static_assert(sizeof(NpcGuild_C_OnGuildWithDraw) == 0x000004, "Wrong size on NpcGuild_C_OnGuildWithDraw");
static_assert(offsetof(NpcGuild_C_OnGuildWithDraw, RetCode) == 0x000000, "Member 'NpcGuild_C_OnGuildWithDraw::RetCode' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.OnOrganized
// 0x0004 (0x0004 - 0x0000)
struct NpcGuild_C_OnOrganized final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_OnOrganized) == 0x000004, "Wrong alignment on NpcGuild_C_OnOrganized");
static_assert(sizeof(NpcGuild_C_OnOrganized) == 0x000004, "Wrong size on NpcGuild_C_OnOrganized");
static_assert(offsetof(NpcGuild_C_OnOrganized, RetCode) == 0x000000, "Member 'NpcGuild_C_OnOrganized::RetCode' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.OnCompletedChangeName
// 0x0004 (0x0004 - 0x0000)
struct NpcGuild_C_OnCompletedChangeName final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_OnCompletedChangeName) == 0x000004, "Wrong alignment on NpcGuild_C_OnCompletedChangeName");
static_assert(sizeof(NpcGuild_C_OnCompletedChangeName) == 0x000004, "Wrong size on NpcGuild_C_OnCompletedChangeName");
static_assert(offsetof(NpcGuild_C_OnCompletedChangeName, RetCode) == 0x000000, "Member 'NpcGuild_C_OnCompletedChangeName::RetCode' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.OnCompleteFindGuildShortID
// 0x0004 (0x0004 - 0x0000)
struct NpcGuild_C_OnCompleteFindGuildShortID final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcGuild_C_OnCompleteFindGuildShortID) == 0x000004, "Wrong alignment on NpcGuild_C_OnCompleteFindGuildShortID");
static_assert(sizeof(NpcGuild_C_OnCompleteFindGuildShortID) == 0x000004, "Wrong size on NpcGuild_C_OnCompleteFindGuildShortID");
static_assert(offsetof(NpcGuild_C_OnCompleteFindGuildShortID, RetCode) == 0x000000, "Member 'NpcGuild_C_OnCompleteFindGuildShortID::RetCode' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntry;                                        // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature) == 0x000008, "Wrong alignment on NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");
static_assert(sizeof(NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature) == 0x0000E0, "Wrong size on NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");
static_assert(offsetof(NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature, GuildEntry) == 0x000000, "Member 'NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature::GuildEntry' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.GetGuildComp
// 0x0020 (0x0020 - 0x0000)
struct NpcGuild_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcGuild_C_GetGuildComp) == 0x000008, "Wrong alignment on NpcGuild_C_GetGuildComp");
static_assert(sizeof(NpcGuild_C_GetGuildComp) == 0x000020, "Wrong size on NpcGuild_C_GetGuildComp");
static_assert(offsetof(NpcGuild_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'NpcGuild_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'NpcGuild_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'NpcGuild_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_GetGuildComp, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'NpcGuild_C_GetGuildComp::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function NpcGuild.NpcGuild_C.InGuildMemberInialize
// 0x00C8 (0x00C8 - 0x0000)
struct NpcGuild_C_InGuildMemberInialize final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildGrandMaster_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A3C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0010(0x00B8)()
};
static_assert(alignof(NpcGuild_C_InGuildMemberInialize) == 0x000008, "Wrong alignment on NpcGuild_C_InGuildMemberInialize");
static_assert(sizeof(NpcGuild_C_InGuildMemberInialize) == 0x0000C8, "Wrong size on NpcGuild_C_InGuildMemberInialize");
static_assert(offsetof(NpcGuild_C_InGuildMemberInialize, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'NpcGuild_C_InGuildMemberInialize::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_InGuildMemberInialize, CallFunc_IsGuildGrandMaster_ReturnValue) == 0x000008, "Member 'NpcGuild_C_InGuildMemberInialize::CallFunc_IsGuildGrandMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcGuild_C_InGuildMemberInialize, CallFunc_GetGuildData_ReturnValue) == 0x000010, "Member 'NpcGuild_C_InGuildMemberInialize::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");

}

