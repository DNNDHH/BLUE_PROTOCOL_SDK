#pragma once

 

// Package: GuildMemberMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildMemberMenu.GuildMemberMenu_C.ExecuteUbergraph_GuildMemberMenu
// 0x0580 (0x0580 - 0x0000)
struct GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5516[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       K2Node_ComponentBoundEvent_Data;                   // 0x0008(0x00D8)()
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0108(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5517[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0110(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0508(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x050C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x050D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5518[0x2];                                     // 0x050E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0510(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0531(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5519[0x6];                                     // 0x0532(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0538(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_GetGuildMemberList_ReturnValue;   // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551A[0x6];                                     // 0x0542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0550(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0568(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x056C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x057C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu) == 0x000008, "Wrong alignment on GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu");
static_assert(sizeof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu) == 0x000580, "Wrong size on GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, EntryPoint) == 0x000000, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_ComponentBoundEvent_Data) == 0x000008, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_CreateDelegate_OutputDelegate) == 0x0000E0, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_Create_ReturnValue) == 0x0000F0, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000F8, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_GetConcernedList_ReturnValue) == 0x000100, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_CustomEvent_bWasSuccessful) == 0x000108, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000110, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_CustomEvent_RetCode_1) == 0x000508, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00050C, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_Not_PreBool_ReturnValue) == 0x00050D, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_GetCharacterId_ReturnValue) == 0x000510, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_GetPlayerId_ReturnValue) == 0x000520, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000530, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000531, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_GetGuildComp_ReturnValue) == 0x000538, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_BooleanAND_ReturnValue) == 0x000540, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_Request_GetGuildMemberList_ReturnValue) == 0x000541, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_Request_GetGuildMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000548, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000550, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_GetConcernedList_ReturnValue_1) == 0x000560, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_CustomEvent_RetCode) == 0x000568, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00056C, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00057C, "Member 'GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function GuildMemberMenu.GuildMemberMenu_C.OnCompletedGuildMemberList_Event
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberMenu_C_OnCompletedGuildMemberList_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberMenu_C_OnCompletedGuildMemberList_Event) == 0x000004, "Wrong alignment on GuildMemberMenu_C_OnCompletedGuildMemberList_Event");
static_assert(sizeof(GuildMemberMenu_C_OnCompletedGuildMemberList_Event) == 0x000004, "Wrong size on GuildMemberMenu_C_OnCompletedGuildMemberList_Event");
static_assert(offsetof(GuildMemberMenu_C_OnCompletedGuildMemberList_Event, RetCode) == 0x000000, "Member 'GuildMemberMenu_C_OnCompletedGuildMemberList_Event::RetCode' has a wrong offset!");

// Function GuildMemberMenu.GuildMemberMenu_C.OnConpletedGetProfile
// 0x0408 (0x0408 - 0x0000)
struct GuildMemberMenu_C_OnConpletedGetProfile final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberMenu_C_OnConpletedGetProfile) == 0x000008, "Wrong alignment on GuildMemberMenu_C_OnConpletedGetProfile");
static_assert(sizeof(GuildMemberMenu_C_OnConpletedGetProfile) == 0x000408, "Wrong size on GuildMemberMenu_C_OnConpletedGetProfile");
static_assert(offsetof(GuildMemberMenu_C_OnConpletedGetProfile, bWasSuccessful) == 0x000000, "Member 'GuildMemberMenu_C_OnConpletedGetProfile::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_OnConpletedGetProfile, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildMemberMenu_C_OnConpletedGetProfile::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_OnConpletedGetProfile, RetCode) == 0x000400, "Member 'GuildMemberMenu_C_OnConpletedGetProfile::RetCode' has a wrong offset!");

// Function GuildMemberMenu.GuildMemberMenu_C.BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature
// 0x00D8 (0x00D8 - 0x0000)
struct GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature final
{
public:
	struct FGuildMemberData                       Data;                                              // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature");
static_assert(sizeof(GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature) == 0x0000D8, "Wrong size on GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature");
static_assert(offsetof(GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature, Data) == 0x000000, "Member 'GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature::Data' has a wrong offset!");

// Function GuildMemberMenu.GuildMemberMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildMemberMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildMemberMenu_C_GetGuildComp");
static_assert(sizeof(GuildMemberMenu_C_GetGuildComp) == 0x000018, "Wrong size on GuildMemberMenu_C_GetGuildComp");
static_assert(offsetof(GuildMemberMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildMemberMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMemberMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMemberMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildMemberMenu.GuildMemberMenu_C.Initialize
// 0x0108 (0x0108 - 0x0000)
struct GuildMemberMenu_C_Initialize final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildMemberData>               CallFunc_GetGuildMemberList_ReturnValue;           // 0x0008(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0038(0x00B8)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00F0(0x0018)()
};
static_assert(alignof(GuildMemberMenu_C_Initialize) == 0x000008, "Wrong alignment on GuildMemberMenu_C_Initialize");
static_assert(sizeof(GuildMemberMenu_C_Initialize) == 0x000108, "Wrong size on GuildMemberMenu_C_Initialize");
static_assert(offsetof(GuildMemberMenu_C_Initialize, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'GuildMemberMenu_C_Initialize::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_Initialize, CallFunc_GetGuildMemberList_ReturnValue) == 0x000008, "Member 'GuildMemberMenu_C_Initialize::CallFunc_GetGuildMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_Initialize, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'GuildMemberMenu_C_Initialize::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'GuildMemberMenu_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_Initialize, CallFunc_GetGuildData_ReturnValue) == 0x000038, "Member 'GuildMemberMenu_C_Initialize::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberMenu_C_Initialize, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F0, "Member 'GuildMemberMenu_C_Initialize::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

}

