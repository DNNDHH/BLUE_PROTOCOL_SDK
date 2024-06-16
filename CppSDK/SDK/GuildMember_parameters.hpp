#pragma once

 

// Package: GuildMember

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildMember.GuildMember_C.ExecuteUbergraph_GuildMember
// 0x0638 (0x0638 - 0x0000)
struct GuildMember_C_ExecuteUbergraph_GuildMember final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A42[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	struct FGuildMemberData                       K2Node_ComponentBoundEvent_Data;                   // 0x0050(0x00D8)()
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0138(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A43[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0140(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0538(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A44[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0540(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0549(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A45[0x6];                                     // 0x054A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0550(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0558(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x055C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A46[0x3];                                     // 0x055D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0568(0x00B8)()
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0620(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0631(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMember_C_ExecuteUbergraph_GuildMember) == 0x000008, "Wrong alignment on GuildMember_C_ExecuteUbergraph_GuildMember");
static_assert(sizeof(GuildMember_C_ExecuteUbergraph_GuildMember) == 0x000638, "Wrong size on GuildMember_C_ExecuteUbergraph_GuildMember");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, EntryPoint) == 0x000000, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, K2Node_ComponentBoundEvent_Data) == 0x000050, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_Create_ReturnValue) == 0x000128, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_GetSBPlayerController_ReturnValue) == 0x000130, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, K2Node_CustomEvent_bWasSuccessful) == 0x000138, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000140, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, K2Node_CustomEvent_RetCode_1) == 0x000538, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_GetConcernedList_ReturnValue) == 0x000540, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000548, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000549, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_GetGuildComp_ReturnValue) == 0x000550, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, K2Node_CustomEvent_RetCode) == 0x000558, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00055C, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_GetGuildComp_ReturnValue_1) == 0x000560, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_GetGuildData_ReturnValue) == 0x000568, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_GetPlayerId_ReturnValue) == 0x000620, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000630, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMember_C_ExecuteUbergraph_GuildMember, CallFunc_BooleanAND_ReturnValue) == 0x000631, "Member 'GuildMember_C_ExecuteUbergraph_GuildMember::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GuildMember.GuildMember_C.OnCompleteUpdateGuildMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMember_C_OnCompleteUpdateGuildMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMember_C_OnCompleteUpdateGuildMember) == 0x000004, "Wrong alignment on GuildMember_C_OnCompleteUpdateGuildMember");
static_assert(sizeof(GuildMember_C_OnCompleteUpdateGuildMember) == 0x000004, "Wrong size on GuildMember_C_OnCompleteUpdateGuildMember");
static_assert(offsetof(GuildMember_C_OnCompleteUpdateGuildMember, RetCode) == 0x000000, "Member 'GuildMember_C_OnCompleteUpdateGuildMember::RetCode' has a wrong offset!");

// Function GuildMember.GuildMember_C.OnConpletedGetProfile
// 0x0408 (0x0408 - 0x0000)
struct GuildMember_C_OnConpletedGetProfile final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A47[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMember_C_OnConpletedGetProfile) == 0x000008, "Wrong alignment on GuildMember_C_OnConpletedGetProfile");
static_assert(sizeof(GuildMember_C_OnConpletedGetProfile) == 0x000408, "Wrong size on GuildMember_C_OnConpletedGetProfile");
static_assert(offsetof(GuildMember_C_OnConpletedGetProfile, bWasSuccessful) == 0x000000, "Member 'GuildMember_C_OnConpletedGetProfile::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMember_C_OnConpletedGetProfile, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildMember_C_OnConpletedGetProfile::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMember_C_OnConpletedGetProfile, RetCode) == 0x000400, "Member 'GuildMember_C_OnConpletedGetProfile::RetCode' has a wrong offset!");

// Function GuildMember.GuildMember_C.BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature) == 0x000008, "Wrong alignment on GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature");
static_assert(sizeof(GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature) == 0x0000D8, "Wrong size on GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature");
static_assert(offsetof(GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature, Data) == 0x000000, "Member 'GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature::Data' has a wrong offset!");

// Function GuildMember.GuildMember_C.Initialize
// 0x00F0 (0x00F0 - 0x0000)
struct GuildMember_C_Initialize final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0008(0x00B8)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00C0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00D8(0x0018)()
};
static_assert(alignof(GuildMember_C_Initialize) == 0x000008, "Wrong alignment on GuildMember_C_Initialize");
static_assert(sizeof(GuildMember_C_Initialize) == 0x0000F0, "Wrong size on GuildMember_C_Initialize");
static_assert(offsetof(GuildMember_C_Initialize, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'GuildMember_C_Initialize::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_Initialize, CallFunc_GetGuildData_ReturnValue) == 0x000008, "Member 'GuildMember_C_Initialize::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_Initialize, CallFunc_Conv_IntToText_ReturnValue) == 0x0000C0, "Member 'GuildMember_C_Initialize::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_Initialize, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000D8, "Member 'GuildMember_C_Initialize::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function GuildMember.GuildMember_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildMember_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMember_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildMember_C_GetGuildComp");
static_assert(sizeof(GuildMember_C_GetGuildComp) == 0x000018, "Wrong size on GuildMember_C_GetGuildComp");
static_assert(offsetof(GuildMember_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildMember_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMember_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMember_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMember_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

}

