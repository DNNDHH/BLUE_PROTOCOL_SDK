#pragma once

 

// Package: CommonPlayerListPannel

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "PlayerPannelTypeEnum_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SendLikeErrorStruct_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestCancelInvite__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature final
{
public:
	class USBPartyMemberState*                    MemberState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature, MemberState) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature::MemberState' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestPartyMemberButtonClicked__DelegateSignature
// 0x0120 (0x0120 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature final
{
public:
	class USBPartyMemberState*                    MemberState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerProfileSummaryData              ProfileData;                                       // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature) == 0x000120, "Wrong size on CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature, MemberState) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature::MemberState' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature, ProfileData) == 0x000008, "Member 'CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature::ProfileData' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestFriendButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.RequestTransitonMenu__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature final
{
public:
	class FString                                 MenuType;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature) == 0x000010, "Wrong size on CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature, MenuType) == 0x000000, "Member 'CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature::MenuType' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestBlockButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestSearchButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestConsentButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestContactButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestMailInBoxButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDungeonPartyMemberButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature final
{
public:
	class UCommonPlayerListPannel_C*              TargetPlayerListPannel;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature, TargetPlayerListPannel) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature::TargetPlayerListPannel' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.ExecuteUbergraph_CommonPlayerListPannel
// 0x1250 (0x1250 - 0x0000)
struct CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText; // 0x0008(0x0018)()
	bool                                          CallFunc_GetRemainTimeLimitGuideText_ReturnValue;  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerPannelTypeEnum                         K2Node_CustomEvent_NewPlayerPannelMode_4;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A9[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FContactListData                       K2Node_CustomEvent_NewContactListData_1;           // 0x0028(0x00C0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54AA[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText_1; // 0x00F0(0x0018)()
	bool                                          CallFunc_GetRemainTimeLimitGuideText_ReturnValue_1; // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerPannelTypeEnum                         K2Node_CustomEvent_NewPlayerPannelMode_3;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54AB[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FContactListData                       K2Node_CustomEvent_NewContactListData;             // 0x0110(0x00C0)()
	EPlayerPannelTypeEnum                         K2Node_CustomEvent_NewPlayerPannelMode_2;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54AC[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              K2Node_CustomEvent_NewPlayerProfileSummaryData_2;  // 0x01D8(0x0118)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54AD[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bCheckBlockStatus)>       K2Node_CreateDelegate_OutputDelegate;              // 0x02F4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetGuildComp_IsValid;                     // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54AE[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0308(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue;              // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0312(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54AF[0x5];                                     // 0x0313(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildMemberData                       K2Node_CustomEvent_GuildMemberData;                // 0x0318(0x00D8)()
	bool                                          K2Node_CustomEvent_bGuildMemberInviteList;         // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B0[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText_2; // 0x03F8(0x0018)()
	bool                                          CallFunc_GetRemainTimeLimitGuideText_ReturnValue_2; // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerPannelTypeEnum                         K2Node_CustomEvent_NewPlayerPannelMode_1;          // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54B1[0x6];                                     // 0x0412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              K2Node_CustomEvent_NewPlayerProfileSummaryData_1;  // 0x0418(0x0118)()
	EPlayerPannelTypeEnum                         K2Node_CustomEvent_NewPlayerPannelMode;            // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54B2[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              K2Node_CustomEvent_NewPlayerProfileSummaryData;    // 0x0538(0x0118)()
	bool                                          Temp_bool_Variable;                                // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0651(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0652(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0653(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOwnPartyLeader_ReturnValue;             // 0x0654(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNeedRejoin_ReturnValue;                 // 0x0655(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B3[0x2];                                     // 0x0656(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0658(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0668(0x0018)()
	bool                                          CallFunc_IsOwnPartyLeader_ReturnValue_1;           // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B4[0x7];                                     // 0x0681(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General; // 0x0688(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConvocation_ReturnValue;                // 0x0691(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B5[0x6];                                     // 0x0692(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General_1; // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bConvocation;                   // 0x06A1(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B6[0x6];                                     // 0x06A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x06A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x06B8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x06D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x06E0(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x06F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x06FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B7[0x5];                                     // 0x06FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0708(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0710(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B8[0x7];                                     // 0x0719(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0720(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0728(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0738(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0750(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0760(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54B9[0x7];                                     // 0x0761(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0768(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0770(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0780(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGuildComp_IsValid_1;                   // 0x0781(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BA[0x6];                                     // 0x0782(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0788(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0790(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue_1;            // 0x07A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x07A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x07A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x07A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x07A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x07A5(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               K2Node_CustomEvent_SendAdventureCardResult;        // 0x07A6(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x07AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShowSendAdventureCardError_ReturnValue;   // 0x07AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPlatform_ReturnValue;                // 0x07B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x07B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCommunicateRestrict_ReturnValue;       // 0x07B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BB[0x5];                                     // 0x07B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x07B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x07C8(0x0018)()
	bool                                          CallFunc_CheckPlatform_ReturnValue_1;              // 0x07E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCommunicateRestrict_ReturnValue_1;     // 0x07E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BC[0x6];                                     // 0x07E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x07E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x07F8(0x0018)()
	struct FButtonStyle                           K2Node_Select_Default;                             // 0x0810(0x0278)()
	struct FButtonStyle                           K2Node_Select_Default_1;                           // 0x0A88(0x0278)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0D00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Download;                       // 0x0D01(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0D02(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0D03(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BD[0x4];                                     // 0x0D04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0D08(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x1100(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x1104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BE[0x3];                                     // 0x1105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x1108(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x1118(0x0018)()
	class UButton*                                K2Node_Select_Default_2;                           // 0x1130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckOpenAdventureCard_IsOpen;            // 0x1139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckProfileEnable_IsOk;                  // 0x113A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54BF[0x5];                                     // 0x113B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x1140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x1150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54C0[0x7];                                     // 0x1151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x1158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x1168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x116A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54C1[0x5];                                     // 0x116B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_Select_Default_3;                           // 0x1170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x1178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x1188(0x0018)()
	TDelegate<void(bool bWasSuccessful, struct FSendAdventureCardResult& SendAdventureCardResult)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x11A0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_MenuType;                       // 0x11B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x11C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54C2[0x6];                                     // 0x11C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x11C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLikeSend                              K2Node_MakeStruct_LikeSend;                        // 0x11D0(0x0020)()
	TArray<struct FLikeSend>                      K2Node_MakeArray_Array;                            // 0x11F0(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x1200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54C3[0x7];                                     // 0x1201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x1208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x1210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x1211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54C4[0x6];                                     // 0x1212(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x1218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_2;           // 0x1220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bConvocation)>            K2Node_CreateDelegate_OutputDelegate_3;            // 0x1228(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x1238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x1239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C5[0x6];                                     // 0x123A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x1240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bCheckBlockStatus;              // 0x1248(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdatePlayerIcon_download;                // 0x1249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x124A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x124B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel");
static_assert(sizeof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel) == 0x001250, "Wrong size on CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, EntryPoint) == 0x000000, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, Temp_byte_Variable) == 0x000004, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText) == 0x000008, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetRemainTimeLimitGuideText_ReturnValue) == 0x000020, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetRemainTimeLimitGuideText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_BooleanOR_ReturnValue) == 0x000021, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerPannelMode_4) == 0x000022, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerPannelMode_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewContactListData_1) == 0x000028, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewContactListData_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText_1) == 0x0000F0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetRemainTimeLimitGuideText_ReturnValue_1) == 0x000108, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetRemainTimeLimitGuideText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerPannelMode_3) == 0x000109, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerPannelMode_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewContactListData) == 0x000110, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewContactListData' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerPannelMode_2) == 0x0001D0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerPannelMode_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerProfileSummaryData_2) == 0x0001D8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerProfileSummaryData_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Not_PreBool_ReturnValue) == 0x0002F0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CreateDelegate_OutputDelegate) == 0x0002F4, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetGuildComp_IsValid) == 0x000304, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetGuildComp_IsValid' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetGuildComp_ReturnValue) == 0x000308, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsGuildPromoter_ReturnValue) == 0x000310, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsGuildPromoter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_BooleanAND_ReturnValue) == 0x000311, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_BooleanAND_ReturnValue_1) == 0x000312, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_GuildMemberData) == 0x000318, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_GuildMemberData' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_bGuildMemberInviteList) == 0x0003F0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_bGuildMemberInviteList' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText_2) == 0x0003F8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetRemainTimeLimitGuideText_OutRemainGuideText_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetRemainTimeLimitGuideText_ReturnValue_2) == 0x000410, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetRemainTimeLimitGuideText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerPannelMode_1) == 0x000411, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerPannelMode_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerProfileSummaryData_1) == 0x000418, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerProfileSummaryData_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerPannelMode) == 0x000530, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerPannelMode' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_NewPlayerProfileSummaryData) == 0x000538, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_NewPlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, Temp_bool_Variable) == 0x000650, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsValid_ReturnValue_1) == 0x000651, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsPartyLeader_ReturnValue) == 0x000652, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_Enable) == 0x000653, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsOwnPartyLeader_ReturnValue) == 0x000654, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsOwnPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsNeedRejoin_ReturnValue) == 0x000655, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsNeedRejoin_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetTextFromAsset_ReturnValue) == 0x000658, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue) == 0x000668, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsOwnPartyLeader_ReturnValue_1) == 0x000680, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsOwnPartyLeader_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_AsSBParty_Member_State_General) == 0x000688, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_AsSBParty_Member_State_General' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_bSuccess) == 0x000690, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsConvocation_ReturnValue) == 0x000691, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsConvocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_AsSBParty_Member_State_General_1) == 0x000698, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_AsSBParty_Member_State_General_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_bSuccess_1) == 0x0006A0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_bConvocation) == 0x0006A1, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_bConvocation' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0006A8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0006B8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0006D0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0006E0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Not_PreBool_ReturnValue_1) == 0x0006F8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_SwitchEnum_CmpSuccess) == 0x0006F9, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_SwitchEnum_CmpSuccess_1) == 0x0006FA, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetPlayerController_ReturnValue) == 0x000700, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Create_ReturnValue) == 0x000708, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000710, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_bSuccess_2) == 0x000718, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetConcernedList_ReturnValue) == 0x000720, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000728, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000738, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetPlayerController_ReturnValue_1) == 0x000750, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000758, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_DynamicCast_bSuccess_3) == 0x000760, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetConcernedList_ReturnValue_1) == 0x000768, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CreateDelegate_OutputDelegate_1) == 0x000770, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, Temp_bool_Variable_1) == 0x000780, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetGuildComp_IsValid_1) == 0x000781, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetGuildComp_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetGuildComp_ReturnValue_1) == 0x000788, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetCharacterId_ReturnValue) == 0x000790, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsGuildPromoter_ReturnValue_1) == 0x0007A0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsGuildPromoter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_BooleanAND_ReturnValue_2) == 0x0007A1, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0007A2, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, Temp_bool_Variable_2) == 0x0007A3, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_BooleanAND_ReturnValue_3) == 0x0007A4, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_bWasSuccessful_1) == 0x0007A5, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_SendAdventureCardResult) == 0x0007A6, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_SendAdventureCardResult' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_BooleanAND_ReturnValue_4) == 0x0007AE, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_ShowSendAdventureCardError_ReturnValue) == 0x0007AF, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_ShowSendAdventureCardError_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_CheckPlatform_ReturnValue) == 0x0007B0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_CheckPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Not_PreBool_ReturnValue_2) == 0x0007B1, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_HasCommunicateRestrict_ReturnValue) == 0x0007B2, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_HasCommunicateRestrict_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0007B8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0007C8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_CheckPlatform_ReturnValue_1) == 0x0007E0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_CheckPlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_HasCommunicateRestrict_ReturnValue_1) == 0x0007E1, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_HasCommunicateRestrict_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0007E8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0007F8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_Select_Default) == 0x000810, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_Select_Default_1) == 0x000A88, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_Event_IsDesignTime) == 0x000D00, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_Download) == 0x000D01, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_Download' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_SwitchEnum_CmpSuccess_2) == 0x000D02, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_bWasSuccessful) == 0x000D03, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000D08, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_RetCode) == 0x001100, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, Temp_bool_Variable_3) == 0x001104, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetSBRetMessage_ReturnValue) == 0x001108, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue_6) == 0x001118, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_Select_Default_2) == 0x001130, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x001138, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_CheckOpenAdventureCard_IsOpen) == 0x001139, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_CheckOpenAdventureCard_IsOpen' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_CheckProfileEnable_IsOk) == 0x00113A, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_CheckProfileEnable_IsOk' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetPlayerId_ReturnValue) == 0x001140, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x001150, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetCharacterId_ReturnValue_1) == 0x001158, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, Temp_bool_Variable_4) == 0x001168, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x001169, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_BooleanAND_ReturnValue_5) == 0x00116A, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_Select_Default_3) == 0x001170, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x001178, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_Conv_StringToText_ReturnValue_7) == 0x001188, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CreateDelegate_OutputDelegate_2) == 0x0011A0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_MenuType) == 0x0011B0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_MenuType' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0011C0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetUIManager_IsValid) == 0x0011C1, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetUIManager_ReturnValue) == 0x0011C8, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_MakeStruct_LikeSend) == 0x0011D0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_MakeStruct_LikeSend' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_MakeArray_Array) == 0x0011F0, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsValid_ReturnValue_2) == 0x001200, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_DownloadImage_ReturnValue) == 0x001208, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsValid_ReturnValue_3) == 0x001210, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_IsValid_ReturnValue_4) == 0x001211, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetSBPlayerController_ReturnValue) == 0x001218, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetConcernedList_ReturnValue_2) == 0x001220, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetConcernedList_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CreateDelegate_OutputDelegate_3) == 0x001228, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, Temp_byte_Variable_1) == 0x001238, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_Select_Default_4) == 0x001239, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_GetSBPlayerState_ReturnValue) == 0x001240, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, K2Node_CustomEvent_bCheckBlockStatus) == 0x001248, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::K2Node_CustomEvent_bCheckBlockStatus' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_UpdatePlayerIcon_download) == 0x001249, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_UpdatePlayerIcon_download' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x00124A, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x00124B, "Member 'CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCheckBlockStatus
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_OnCheckBlockStatus final
{
public:
	bool                                          bCheckBlockStatus;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_OnCheckBlockStatus) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_OnCheckBlockStatus");
static_assert(sizeof(CommonPlayerListPannel_C_OnCheckBlockStatus) == 0x000001, "Wrong size on CommonPlayerListPannel_C_OnCheckBlockStatus");
static_assert(offsetof(CommonPlayerListPannel_C_OnCheckBlockStatus, bCheckBlockStatus) == 0x000000, "Member 'CommonPlayerListPannel_C_OnCheckBlockStatus::bCheckBlockStatus' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestTransitonMenu
// 0x0010 (0x0010 - 0x0000)
struct CommonPlayerListPannel_C_OnRequestTransitonMenu final
{
public:
	class FString                                 MenuType;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_OnRequestTransitonMenu) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_OnRequestTransitonMenu");
static_assert(sizeof(CommonPlayerListPannel_C_OnRequestTransitonMenu) == 0x000010, "Wrong size on CommonPlayerListPannel_C_OnRequestTransitonMenu");
static_assert(offsetof(CommonPlayerListPannel_C_OnRequestTransitonMenu, MenuType) == 0x000000, "Member 'CommonPlayerListPannel_C_OnRequestTransitonMenu::MenuType' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Complete_OpenPlayerProfile_Event
// 0x0408 (0x0408 - 0x0000)
struct CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54C6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event");
static_assert(sizeof(CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event) == 0x000408, "Wrong size on CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event");
static_assert(offsetof(CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event, bWasSuccessful) == 0x000000, "Member 'CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event, RetCode) == 0x000400, "Member 'CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event::RetCode' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCaptureImageFace
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_SetCaptureImageFace final
{
public:
	bool                                          Download;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetCaptureImageFace) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_SetCaptureImageFace");
static_assert(sizeof(CommonPlayerListPannel_C_SetCaptureImageFace) == 0x000001, "Wrong size on CommonPlayerListPannel_C_SetCaptureImageFace");
static_assert(offsetof(CommonPlayerListPannel_C_SetCaptureImageFace, Download) == 0x000000, "Member 'CommonPlayerListPannel_C_SetCaptureImageFace::Download' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_PreConstruct) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_PreConstruct");
static_assert(sizeof(CommonPlayerListPannel_C_PreConstruct) == 0x000001, "Wrong size on CommonPlayerListPannel_C_PreConstruct");
static_assert(offsetof(CommonPlayerListPannel_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonPlayerListPannel_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCharactersAdventurerCardSendDelegate_Event
// 0x0009 (0x0009 - 0x0000)
struct CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               SendAdventureCardResult;                           // 0x0001(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event");
static_assert(sizeof(CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event) == 0x000009, "Wrong size on CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event");
static_assert(offsetof(CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event, bWasSuccessful) == 0x000000, "Member 'CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event, SendAdventureCardResult) == 0x000001, "Member 'CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event::SendAdventureCardResult' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteChangeConvocationDelegate_Event
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event final
{
public:
	bool                                          bConvocation;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event");
static_assert(sizeof(CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event) == 0x000001, "Wrong size on CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event");
static_assert(offsetof(CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event, bConvocation) == 0x000000, "Member 'CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event::bConvocation' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.EnableInviteCommand
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_EnableInviteCommand final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_EnableInviteCommand) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_EnableInviteCommand");
static_assert(sizeof(CommonPlayerListPannel_C_EnableInviteCommand) == 0x000001, "Wrong size on CommonPlayerListPannel_C_EnableInviteCommand");
static_assert(offsetof(CommonPlayerListPannel_C_EnableInviteCommand, Enable) == 0x000000, "Member 'CommonPlayerListPannel_C_EnableInviteCommand::Enable' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateFriend
// 0x0120 (0x0120 - 0x0000)
struct CommonPlayerListPannel_C_UpdateFriend final
{
public:
	EPlayerPannelTypeEnum                         NewPlayerPannelMode;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              NewPlayerProfileSummaryData;                       // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonPlayerListPannel_C_UpdateFriend) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdateFriend");
static_assert(sizeof(CommonPlayerListPannel_C_UpdateFriend) == 0x000120, "Wrong size on CommonPlayerListPannel_C_UpdateFriend");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateFriend, NewPlayerPannelMode) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdateFriend::NewPlayerPannelMode' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateFriend, NewPlayerProfileSummaryData) == 0x000008, "Member 'CommonPlayerListPannel_C_UpdateFriend::NewPlayerProfileSummaryData' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateSearch
// 0x0120 (0x0120 - 0x0000)
struct CommonPlayerListPannel_C_UpdateSearch final
{
public:
	EPlayerPannelTypeEnum                         NewPlayerPannelMode;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              NewPlayerProfileSummaryData;                       // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonPlayerListPannel_C_UpdateSearch) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdateSearch");
static_assert(sizeof(CommonPlayerListPannel_C_UpdateSearch) == 0x000120, "Wrong size on CommonPlayerListPannel_C_UpdateSearch");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateSearch, NewPlayerPannelMode) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdateSearch::NewPlayerPannelMode' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateSearch, NewPlayerProfileSummaryData) == 0x000008, "Member 'CommonPlayerListPannel_C_UpdateSearch::NewPlayerProfileSummaryData' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberData
// 0x00E0 (0x00E0 - 0x0000)
struct CommonPlayerListPannel_C_SetGuildMemberData final
{
public:
	struct FGuildMemberData                       Param_GuildMemberData;                             // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Param_bGuildMemberInviteList;                      // 0x00D8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetGuildMemberData) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_SetGuildMemberData");
static_assert(sizeof(CommonPlayerListPannel_C_SetGuildMemberData) == 0x0000E0, "Wrong size on CommonPlayerListPannel_C_SetGuildMemberData");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildMemberData, Param_GuildMemberData) == 0x000000, "Member 'CommonPlayerListPannel_C_SetGuildMemberData::Param_GuildMemberData' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildMemberData, Param_bGuildMemberInviteList) == 0x0000D8, "Member 'CommonPlayerListPannel_C_SetGuildMemberData::Param_bGuildMemberInviteList' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateBlock
// 0x0120 (0x0120 - 0x0000)
struct CommonPlayerListPannel_C_UpdateBlock final
{
public:
	EPlayerPannelTypeEnum                         NewPlayerPannelMode;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54C9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              NewPlayerProfileSummaryData;                       // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonPlayerListPannel_C_UpdateBlock) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdateBlock");
static_assert(sizeof(CommonPlayerListPannel_C_UpdateBlock) == 0x000120, "Wrong size on CommonPlayerListPannel_C_UpdateBlock");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateBlock, NewPlayerPannelMode) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdateBlock::NewPlayerPannelMode' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateBlock, NewPlayerProfileSummaryData) == 0x000008, "Member 'CommonPlayerListPannel_C_UpdateBlock::NewPlayerProfileSummaryData' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateConsent
// 0x00C8 (0x00C8 - 0x0000)
struct CommonPlayerListPannel_C_UpdateConsent final
{
public:
	EPlayerPannelTypeEnum                         NewPlayerPannelMode;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FContactListData                       NewContactListData;                                // 0x0008(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonPlayerListPannel_C_UpdateConsent) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdateConsent");
static_assert(sizeof(CommonPlayerListPannel_C_UpdateConsent) == 0x0000C8, "Wrong size on CommonPlayerListPannel_C_UpdateConsent");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateConsent, NewPlayerPannelMode) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdateConsent::NewPlayerPannelMode' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateConsent, NewContactListData) == 0x000008, "Member 'CommonPlayerListPannel_C_UpdateConsent::NewContactListData' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateContact
// 0x00C8 (0x00C8 - 0x0000)
struct CommonPlayerListPannel_C_UpdateContact final
{
public:
	EPlayerPannelTypeEnum                         NewPlayerPannelMode;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FContactListData                       NewContactListData;                                // 0x0008(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CommonPlayerListPannel_C_UpdateContact) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdateContact");
static_assert(sizeof(CommonPlayerListPannel_C_UpdateContact) == 0x0000C8, "Wrong size on CommonPlayerListPannel_C_UpdateContact");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateContact, NewPlayerPannelMode) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdateContact::NewPlayerPannelMode' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateContact, NewContactListData) == 0x000008, "Member 'CommonPlayerListPannel_C_UpdateContact::NewContactListData' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSendLikeInfo
// 0x0078 (0x0078 - 0x0000)
struct CommonPlayerListPannel_C_SetSendLikeInfo final
{
public:
	bool                                          Param_bIsSendLike;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54CC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54CD[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54CE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSendableLikePlayer>            CallFunc_GetSendableLikePlayerList_ReturnValue;    // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CF[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSendableLikePlayer                    CallFunc_Array_Get_Item;                           // 0x0048(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetSendLikeInfo) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_SetSendLikeInfo");
static_assert(sizeof(CommonPlayerListPannel_C_SetSendLikeInfo) == 0x000078, "Wrong size on CommonPlayerListPannel_C_SetSendLikeInfo");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, Param_bIsSendLike) == 0x000000, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::Param_bIsSendLike' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, Temp_bool_True_if_break_was_hit_Variable) == 0x000008, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000A, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_GetConcernedList_ReturnValue) == 0x000028, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_GetSendableLikePlayerList_ReturnValue) == 0x000030, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_GetSendableLikePlayerList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_Array_Get_Item) == 0x000048, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000075, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetSendLikeInfo, CallFunc_BooleanAND_ReturnValue) == 0x000076, "Member 'CommonPlayerListPannel_C_SetSendLikeInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsOwnPartyLeader
// 0x0020 (0x0020 - 0x0000)
struct CommonPlayerListPannel_C_IsOwnPartyLeader final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_IsOwnPartyLeader) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_IsOwnPartyLeader");
static_assert(sizeof(CommonPlayerListPannel_C_IsOwnPartyLeader) == 0x000020, "Wrong size on CommonPlayerListPannel_C_IsOwnPartyLeader");
static_assert(offsetof(CommonPlayerListPannel_C_IsOwnPartyLeader, ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_IsOwnPartyLeader::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsOwnPartyLeader, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'CommonPlayerListPannel_C_IsOwnPartyLeader::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsOwnPartyLeader, K2Node_DynamicCast_AsSBPlayer_State) == 0x000010, "Member 'CommonPlayerListPannel_C_IsOwnPartyLeader::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsOwnPartyLeader, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CommonPlayerListPannel_C_IsOwnPartyLeader::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsOwnPartyLeader, CallFunc_IsCurrentPartyLeader_ReturnValue) == 0x000019, "Member 'CommonPlayerListPannel_C_IsOwnPartyLeader::CallFunc_IsCurrentPartyLeader_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEnableCommandModeButton
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_SetEnableCommandModeButton final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetEnableCommandModeButton) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_SetEnableCommandModeButton");
static_assert(sizeof(CommonPlayerListPannel_C_SetEnableCommandModeButton) == 0x000001, "Wrong size on CommonPlayerListPannel_C_SetEnableCommandModeButton");
static_assert(offsetof(CommonPlayerListPannel_C_SetEnableCommandModeButton, InEnable) == 0x000000, "Member 'CommonPlayerListPannel_C_SetEnableCommandModeButton::InEnable' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsCommandMode
// 0x0018 (0x0018 - 0x0000)
struct CommonPlayerListPannel_C_IsCommandMode final
{
public:
	class FString                                 InMyCharacterId;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsPromoteMember;                                   // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Result;                                            // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalPromoteMember;                                // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNeedRejoin_ReturnValue;                 // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_IsCommandMode) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_IsCommandMode");
static_assert(sizeof(CommonPlayerListPannel_C_IsCommandMode) == 0x000018, "Wrong size on CommonPlayerListPannel_C_IsCommandMode");
static_assert(offsetof(CommonPlayerListPannel_C_IsCommandMode, InMyCharacterId) == 0x000000, "Member 'CommonPlayerListPannel_C_IsCommandMode::InMyCharacterId' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsCommandMode, IsPromoteMember) == 0x000010, "Member 'CommonPlayerListPannel_C_IsCommandMode::IsPromoteMember' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsCommandMode, Result) == 0x000011, "Member 'CommonPlayerListPannel_C_IsCommandMode::Result' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsCommandMode, LocalPromoteMember) == 0x000012, "Member 'CommonPlayerListPannel_C_IsCommandMode::LocalPromoteMember' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsCommandMode, CallFunc_IsNeedRejoin_ReturnValue) == 0x000013, "Member 'CommonPlayerListPannel_C_IsCommandMode::CallFunc_IsNeedRejoin_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsCommandMode, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'CommonPlayerListPannel_C_IsCommandMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_IsCommandMode, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000015, "Member 'CommonPlayerListPannel_C_IsCommandMode::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendIcon
// 0x0020 (0x0020 - 0x0000)
struct CommonPlayerListPannel_C_SetFriendIcon final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D1[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetFriendIcon) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_SetFriendIcon");
static_assert(sizeof(CommonPlayerListPannel_C_SetFriendIcon) == 0x000020, "Wrong size on CommonPlayerListPannel_C_SetFriendIcon");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, Temp_bool_Variable) == 0x000000, "Member 'CommonPlayerListPannel_C_SetFriendIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, Temp_bool_Variable_1) == 0x000001, "Member 'CommonPlayerListPannel_C_SetFriendIcon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, Temp_bool_Variable_2) == 0x000002, "Member 'CommonPlayerListPannel_C_SetFriendIcon::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'CommonPlayerListPannel_C_SetFriendIcon::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, Temp_bool_Variable_3) == 0x000018, "Member 'CommonPlayerListPannel_C_SetFriendIcon::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000019, "Member 'CommonPlayerListPannel_C_SetFriendIcon::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, K2Node_Select_Default) == 0x00001A, "Member 'CommonPlayerListPannel_C_SetFriendIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, K2Node_Select_Default_1) == 0x00001B, "Member 'CommonPlayerListPannel_C_SetFriendIcon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendIcon, K2Node_SwitchEnum_CmpSuccess) == 0x00001C, "Member 'CommonPlayerListPannel_C_SetFriendIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFaceImage
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_SetFaceImage final
{
public:
	bool                                          CallFunc_UpdatePlayerIcon_download;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetFaceImage) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_SetFaceImage");
static_assert(sizeof(CommonPlayerListPannel_C_SetFaceImage) == 0x000001, "Wrong size on CommonPlayerListPannel_C_SetFaceImage");
static_assert(offsetof(CommonPlayerListPannel_C_SetFaceImage, CallFunc_UpdatePlayerIcon_download) == 0x000000, "Member 'CommonPlayerListPannel_C_SetFaceImage::CallFunc_UpdatePlayerIcon_download' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassLevel
// 0x0018 (0x0018 - 0x0000)
struct CommonPlayerListPannel_C_SetClassLevel final
{
public:
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0000(0x0018)()
};
static_assert(alignof(CommonPlayerListPannel_C_SetClassLevel) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_SetClassLevel");
static_assert(sizeof(CommonPlayerListPannel_C_SetClassLevel) == 0x000018, "Wrong size on CommonPlayerListPannel_C_SetClassLevel");
static_assert(offsetof(CommonPlayerListPannel_C_SetClassLevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_SetClassLevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetOnlineStateTagInfo
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_SetOnlineStateTagInfo final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetOnlineStateTagInfo) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_SetOnlineStateTagInfo");
static_assert(sizeof(CommonPlayerListPannel_C_SetOnlineStateTagInfo) == 0x000001, "Wrong size on CommonPlayerListPannel_C_SetOnlineStateTagInfo");
static_assert(offsetof(CommonPlayerListPannel_C_SetOnlineStateTagInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'CommonPlayerListPannel_C_SetOnlineStateTagInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetParty
// 0x0028 (0x0028 - 0x0000)
struct CommonPlayerListPannel_C_PreSetParty final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(CommonPlayerListPannel_C_PreSetParty) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_PreSetParty");
static_assert(sizeof(CommonPlayerListPannel_C_PreSetParty) == 0x000028, "Wrong size on CommonPlayerListPannel_C_PreSetParty");
static_assert(offsetof(CommonPlayerListPannel_C_PreSetParty, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_PreSetParty::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_PreSetParty, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_PreSetParty::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsSelected
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_IsSelected final
{
public:
	bool                                          Param_bSelected;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_IsSelected) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_IsSelected");
static_assert(sizeof(CommonPlayerListPannel_C_IsSelected) == 0x000001, "Wrong size on CommonPlayerListPannel_C_IsSelected");
static_assert(offsetof(CommonPlayerListPannel_C_IsSelected, Param_bSelected) == 0x000000, "Member 'CommonPlayerListPannel_C_IsSelected::Param_bSelected' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Profile Variables
// 0x00D8 (0x00D8 - 0x0000)
struct CommonPlayerListPannel_C_Set_Profile_Variables final
{
public:
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D2[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue_1;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D3[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue_2;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_2;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetPlayerIdString_self_CastInput;         // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetPlayerIdString_ReturnValue;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D4[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue_3;            // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue_4;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_Set_Profile_Variables) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_Set_Profile_Variables");
static_assert(sizeof(CommonPlayerListPannel_C_Set_Profile_Variables) == 0x0000D8, "Wrong size on CommonPlayerListPannel_C_Set_Profile_Variables");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetCharacterId_ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetCharacterId_ReturnValue_1) == 0x000010, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetFaceImageURL_ReturnValue) == 0x000020, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000030, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_IsValid_ReturnValue) == 0x000032, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000033, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetFaceImageURL_ReturnValue_1) == 0x000038, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetFaceImageURL_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_BooleanAND_ReturnValue_1) == 0x000048, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetClassType_ReturnValue) == 0x000049, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetFaceImageURL_ReturnValue_2) == 0x000050, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetFaceImageURL_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetCharacterName_self_CastInput) == 0x000060, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetCharacterName_ReturnValue) == 0x000070, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetCharacterId_ReturnValue_2) == 0x000080, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetCharacterId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetPlayerIdString_self_CastInput) == 0x000090, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetPlayerIdString_self_CastInput' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetPlayerIdString_ReturnValue) == 0x0000A0, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetPlayerIdString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, K2Node_SwitchEnum_CmpSuccess) == 0x0000B1, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetFaceImageURL_ReturnValue_3) == 0x0000B8, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetFaceImageURL_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Profile_Variables, CallFunc_GetFaceImageURL_ReturnValue_4) == 0x0000C8, "Member 'CommonPlayerListPannel_C_Set_Profile_Variables::CallFunc_GetFaceImageURL_ReturnValue_4' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.RefreshPannel
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_RefreshPannel final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_RefreshPannel) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_RefreshPannel");
static_assert(sizeof(CommonPlayerListPannel_C_RefreshPannel) == 0x000001, "Wrong size on CommonPlayerListPannel_C_RefreshPannel");
static_assert(offsetof(CommonPlayerListPannel_C_RefreshPannel, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'CommonPlayerListPannel_C_RefreshPannel::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckProfileEnable
// 0x0004 (0x0004 - 0x0000)
struct CommonPlayerListPannel_C_CheckProfileEnable final
{
public:
	ESBProfilePublicSettingType                   PublicSetting;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFriend;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsOk;                                              // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_CheckProfileEnable) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_CheckProfileEnable");
static_assert(sizeof(CommonPlayerListPannel_C_CheckProfileEnable) == 0x000004, "Wrong size on CommonPlayerListPannel_C_CheckProfileEnable");
static_assert(offsetof(CommonPlayerListPannel_C_CheckProfileEnable, PublicSetting) == 0x000000, "Member 'CommonPlayerListPannel_C_CheckProfileEnable::PublicSetting' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckProfileEnable, IsFriend) == 0x000001, "Member 'CommonPlayerListPannel_C_CheckProfileEnable::IsFriend' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckProfileEnable, IsOk) == 0x000002, "Member 'CommonPlayerListPannel_C_CheckProfileEnable::IsOk' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckProfileEnable, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'CommonPlayerListPannel_C_CheckProfileEnable::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Like Btn
// 0x0028 (0x0028 - 0x0000)
struct CommonPlayerListPannel_C_Set_Like_Btn final
{
public:
	bool                                          IsSendLIke;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OnlineStatus;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPSOnlyDiff;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetData_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetData_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_Set_Like_Btn) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_Set_Like_Btn");
static_assert(sizeof(CommonPlayerListPannel_C_Set_Like_Btn) == 0x000028, "Wrong size on CommonPlayerListPannel_C_Set_Like_Btn");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Like_Btn, IsSendLIke) == 0x000000, "Member 'CommonPlayerListPannel_C_Set_Like_Btn::IsSendLIke' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Like_Btn, OnlineStatus) == 0x000004, "Member 'CommonPlayerListPannel_C_Set_Like_Btn::OnlineStatus' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Like_Btn, IsPSOnlyDiff) == 0x000008, "Member 'CommonPlayerListPannel_C_Set_Like_Btn::IsPSOnlyDiff' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Like_Btn, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_Set_Like_Btn::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Like_Btn, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000020, "Member 'CommonPlayerListPannel_C_Set_Like_Btn::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Like_Btn, CallFunc_SetData_ReturnValue) == 0x000021, "Member 'CommonPlayerListPannel_C_Set_Like_Btn::CallFunc_SetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Like_Btn, CallFunc_SetData_ReturnValue_1) == 0x000022, "Member 'CommonPlayerListPannel_C_Set_Like_Btn::CallFunc_SetData_ReturnValue_1' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.CreateResponseWaitUIblocker
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerListPannel_C_CreateResponseWaitUIblocker final
{
public:
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_CreateResponseWaitUIblocker) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_CreateResponseWaitUIblocker");
static_assert(sizeof(CommonPlayerListPannel_C_CreateResponseWaitUIblocker) == 0x000008, "Wrong size on CommonPlayerListPannel_C_CreateResponseWaitUIblocker");
static_assert(offsetof(CommonPlayerListPannel_C_CreateResponseWaitUIblocker, CallFunc_Create_ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_CreateResponseWaitUIblocker::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.DeleteResponseWaitUIblocker
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_DeleteResponseWaitUIblocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_DeleteResponseWaitUIblocker) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_DeleteResponseWaitUIblocker");
static_assert(sizeof(CommonPlayerListPannel_C_DeleteResponseWaitUIblocker) == 0x000001, "Wrong size on CommonPlayerListPannel_C_DeleteResponseWaitUIblocker");
static_assert(offsetof(CommonPlayerListPannel_C_DeleteResponseWaitUIblocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_DeleteResponseWaitUIblocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildRoleIcon
// 0x0020 (0x0020 - 0x0000)
struct CommonPlayerListPannel_C_SetGuildRoleIcon final
{
public:
	class UWidget*                                Temp_object_Variable;                              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Temp_object_Variable_1;                            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGuildMemberRole                              Temp_byte_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D7[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_SetGuildRoleIcon) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_SetGuildRoleIcon");
static_assert(sizeof(CommonPlayerListPannel_C_SetGuildRoleIcon) == 0x000020, "Wrong size on CommonPlayerListPannel_C_SetGuildRoleIcon");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, Temp_object_Variable) == 0x000000, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, Temp_object_Variable_1) == 0x000008, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000011, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, Temp_byte_Variable) == 0x000012, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, CallFunc_BooleanOR_ReturnValue) == 0x000013, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, CallFunc_BooleanOR_ReturnValue_1) == 0x000014, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetGuildRoleIcon, K2Node_Select_Default) == 0x000018, "Member 'CommonPlayerListPannel_C_SetGuildRoleIcon::K2Node_Select_Default' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPannelVersion
// 0x0010 (0x0010 - 0x0000)
struct CommonPlayerListPannel_C_SetPannelVersion final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_SetPannelVersion) == 0x000004, "Wrong alignment on CommonPlayerListPannel_C_SetPannelVersion");
static_assert(sizeof(CommonPlayerListPannel_C_SetPannelVersion) == 0x000010, "Wrong size on CommonPlayerListPannel_C_SetPannelVersion");
static_assert(offsetof(CommonPlayerListPannel_C_SetPannelVersion, Temp_bool_Variable) == 0x000000, "Member 'CommonPlayerListPannel_C_SetPannelVersion::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetPannelVersion, Temp_int_Variable) == 0x000004, "Member 'CommonPlayerListPannel_C_SetPannelVersion::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetPannelVersion, Temp_int_Variable_1) == 0x000008, "Member 'CommonPlayerListPannel_C_SetPannelVersion::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetPannelVersion, K2Node_Select_Default) == 0x00000C, "Member 'CommonPlayerListPannel_C_SetPannelVersion::K2Node_Select_Default' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeBtn
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_InitLikeBtn final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_InitLikeBtn) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_InitLikeBtn");
static_assert(sizeof(CommonPlayerListPannel_C_InitLikeBtn) == 0x000001, "Wrong size on CommonPlayerListPannel_C_InitLikeBtn");
static_assert(offsetof(CommonPlayerListPannel_C_InitLikeBtn, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'CommonPlayerListPannel_C_InitLikeBtn::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyIcon
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerListPannel_C_SetPartyIcon final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_SetPartyIcon) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_SetPartyIcon");
static_assert(sizeof(CommonPlayerListPannel_C_SetPartyIcon) == 0x000001, "Wrong size on CommonPlayerListPannel_C_SetPartyIcon");
static_assert(offsetof(CommonPlayerListPannel_C_SetPartyIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'CommonPlayerListPannel_C_SetPartyIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Show Player Profile Error Message
// 0x0060 (0x0060 - 0x0000)
struct CommonPlayerListPannel_C_Show_Player_Profile_Error_Message final
{
public:
	class FName                                   InTextNameId;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54D9[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
};
static_assert(alignof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_Show_Player_Profile_Error_Message");
static_assert(sizeof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message) == 0x000060, "Wrong size on CommonPlayerListPannel_C_Show_Player_Profile_Error_Message");
static_assert(offsetof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message, InTextNameId) == 0x000000, "Member 'CommonPlayerListPannel_C_Show_Player_Profile_Error_Message::InTextNameId' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message, InTextID) == 0x000008, "Member 'CommonPlayerListPannel_C_Show_Player_Profile_Error_Message::InTextID' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message, CallFunc_NotEqual_NameName_ReturnValue) == 0x00000C, "Member 'CommonPlayerListPannel_C_Show_Player_Profile_Error_Message::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_Show_Player_Profile_Error_Message::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CommonPlayerListPannel_C_Show_Player_Profile_Error_Message::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000038, "Member 'CommonPlayerListPannel_C_Show_Player_Profile_Error_Message::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Show_Player_Profile_Error_Message, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'CommonPlayerListPannel_C_Show_Player_Profile_Error_Message::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.ShowSendAdventureCardError
// 0x000A (0x000A - 0x0000)
struct CommonPlayerListPannel_C_ShowSendAdventureCardError final
{
public:
	bool                                          InWasSuccessful;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               InSendAdventureResult;                             // 0x0001(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_ShowSendAdventureCardError) == 0x000001, "Wrong alignment on CommonPlayerListPannel_C_ShowSendAdventureCardError");
static_assert(sizeof(CommonPlayerListPannel_C_ShowSendAdventureCardError) == 0x00000A, "Wrong size on CommonPlayerListPannel_C_ShowSendAdventureCardError");
static_assert(offsetof(CommonPlayerListPannel_C_ShowSendAdventureCardError, InWasSuccessful) == 0x000000, "Member 'CommonPlayerListPannel_C_ShowSendAdventureCardError::InWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ShowSendAdventureCardError, InSendAdventureResult) == 0x000001, "Member 'CommonPlayerListPannel_C_ShowSendAdventureCardError::InSendAdventureResult' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_ShowSendAdventureCardError, ReturnValue) == 0x000009, "Member 'CommonPlayerListPannel_C_ShowSendAdventureCardError::ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.BindPlayerProfile
// 0x0050 (0x0050 - 0x0000)
struct CommonPlayerListPannel_C_BindPlayerProfile final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& MenuType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_BindPlayerProfile) == 0x000004, "Wrong alignment on CommonPlayerListPannel_C_BindPlayerProfile");
static_assert(sizeof(CommonPlayerListPannel_C_BindPlayerProfile) == 0x000050, "Wrong size on CommonPlayerListPannel_C_BindPlayerProfile");
static_assert(offsetof(CommonPlayerListPannel_C_BindPlayerProfile, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'CommonPlayerListPannel_C_BindPlayerProfile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_BindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'CommonPlayerListPannel_C_BindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_BindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'CommonPlayerListPannel_C_BindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_BindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'CommonPlayerListPannel_C_BindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_BindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'CommonPlayerListPannel_C_BindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UnbindPlayerProfile
// 0x0050 (0x0050 - 0x0000)
struct CommonPlayerListPannel_C_UnbindPlayerProfile final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& MenuType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_UnbindPlayerProfile) == 0x000004, "Wrong alignment on CommonPlayerListPannel_C_UnbindPlayerProfile");
static_assert(sizeof(CommonPlayerListPannel_C_UnbindPlayerProfile) == 0x000050, "Wrong size on CommonPlayerListPannel_C_UnbindPlayerProfile");
static_assert(offsetof(CommonPlayerListPannel_C_UnbindPlayerProfile, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'CommonPlayerListPannel_C_UnbindPlayerProfile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UnbindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'CommonPlayerListPannel_C_UnbindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UnbindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'CommonPlayerListPannel_C_UnbindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UnbindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'CommonPlayerListPannel_C_UnbindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UnbindPlayerProfile, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'CommonPlayerListPannel_C_UnbindPlayerProfile::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetErrorType
// 0x0068 (0x0068 - 0x0000)
struct CommonPlayerListPannel_C_SetErrorType final
{
public:
	int32                                         InWarning;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54DA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54DB[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSendLikeErrorStruct                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54DC[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54DD[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(CommonPlayerListPannel_C_SetErrorType) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_SetErrorType");
static_assert(sizeof(CommonPlayerListPannel_C_SetErrorType) == 0x000068, "Wrong size on CommonPlayerListPannel_C_SetErrorType");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, InWarning) == 0x000000, "Member 'CommonPlayerListPannel_C_SetErrorType::InWarning' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_Conv_StringToName_ReturnValue) == 0x00001C, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000024, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000034, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000038, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_NotEqual_NameName_ReturnValue) == 0x000048, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetErrorType, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'CommonPlayerListPannel_C_SetErrorType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckOpenAdventureCard
// 0x0034 (0x0034 - 0x0000)
struct CommonPlayerListPannel_C_CheckOpenAdventureCard final
{
public:
	int32                                         InWarning;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54DE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSendLikeErrorStruct                   CallFunc_Array_Get_Item;                           // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54DF[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_CheckOpenAdventureCard) == 0x000004, "Wrong alignment on CommonPlayerListPannel_C_CheckOpenAdventureCard");
static_assert(sizeof(CommonPlayerListPannel_C_CheckOpenAdventureCard) == 0x000034, "Wrong size on CommonPlayerListPannel_C_CheckOpenAdventureCard");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, InWarning) == 0x000000, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::InWarning' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, IsOpen) == 0x000004, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::IsOpen' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, Temp_int_Array_Index_Variable) == 0x000008, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, CallFunc_Array_Get_Item) == 0x000018, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000029, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_CheckOpenAdventureCard, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'CommonPlayerListPannel_C_CheckOpenAdventureCard::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerName
// 0x0048 (0x0048 - 0x0000)
struct CommonPlayerListPannel_C_UpdatePlayerName final
{
public:
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E0[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(CommonPlayerListPannel_C_UpdatePlayerName) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdatePlayerName");
static_assert(sizeof(CommonPlayerListPannel_C_UpdatePlayerName) == 0x000048, "Wrong size on CommonPlayerListPannel_C_UpdatePlayerName");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, CallFunc_GetPlayerName_ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000012, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, K2Node_SwitchEnum_CmpSuccess) == 0x000013, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, CallFunc_Not_PreBool_ReturnValue_1) == 0x000014, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, CallFunc_GetRestrictText_ReturnValue) == 0x000018, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'CommonPlayerListPannel_C_UpdatePlayerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerCommet
// 0x0050 (0x0050 - 0x0000)
struct CommonPlayerListPannel_C_UpdatePlayerCommet final
{
public:
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0018(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(CommonPlayerListPannel_C_UpdatePlayerCommet) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdatePlayerCommet");
static_assert(sizeof(CommonPlayerListPannel_C_UpdatePlayerCommet) == 0x000050, "Wrong size on CommonPlayerListPannel_C_UpdatePlayerCommet");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, CallFunc_GetPlayerName_ReturnValue) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000010, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000012, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, K2Node_SwitchEnum_CmpSuccess) == 0x000013, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, CallFunc_GetRestrictText_ReturnValue) == 0x000018, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, CallFunc_Not_PreBool_ReturnValue_1) == 0x000030, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerCommet, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'CommonPlayerListPannel_C_UpdatePlayerCommet::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerIcon
// 0x0020 (0x0020 - 0x0000)
struct CommonPlayerListPannel_C_UpdatePlayerIcon final
{
public:
	bool                                          Download;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPrivilegeCacheUGC_ReturnValue;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_UpdatePlayerIcon) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdatePlayerIcon");
static_assert(sizeof(CommonPlayerListPannel_C_UpdatePlayerIcon) == 0x000020, "Wrong size on CommonPlayerListPannel_C_UpdatePlayerIcon");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, Download) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::Download' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, CallFunc_GetPlayerName_ReturnValue) == 0x000008, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000018, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000019, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00001B, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, CallFunc_HasPrivilegeCacheUGC_ReturnValue) == 0x00001C, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::CallFunc_HasPrivilegeCacheUGC_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdatePlayerIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001D, "Member 'CommonPlayerListPannel_C_UpdatePlayerIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Is PSOnly Diff
// 0x0050 (0x0050 - 0x0000)
struct CommonPlayerListPannel_C_Set_Is_PSOnly_Diff final
{
public:
	struct FSBPlatformInfo                        Platform_Info;                                     // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0028(0x0020)()
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonPlayerListPannel_C_Set_Is_PSOnly_Diff) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_Set_Is_PSOnly_Diff");
static_assert(sizeof(CommonPlayerListPannel_C_Set_Is_PSOnly_Diff) == 0x000050, "Wrong size on CommonPlayerListPannel_C_Set_Is_PSOnly_Diff");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Is_PSOnly_Diff, Platform_Info) == 0x000000, "Member 'CommonPlayerListPannel_C_Set_Is_PSOnly_Diff::Platform_Info' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Is_PSOnly_Diff, CallFunc_GetSBPlayerState_ReturnValue) == 0x000020, "Member 'CommonPlayerListPannel_C_Set_Is_PSOnly_Diff::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Is_PSOnly_Diff, CallFunc_GetPlatformInfo_ReturnValue) == 0x000028, "Member 'CommonPlayerListPannel_C_Set_Is_PSOnly_Diff::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_Set_Is_PSOnly_Diff, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000048, "Member 'CommonPlayerListPannel_C_Set_Is_PSOnly_Diff::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendProgressText
// 0x0108 (0x0108 - 0x0000)
struct CommonPlayerListPannel_C_SetFriendProgressText final
{
public:
	struct FDateTime                              InProgressDate;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          InExtraVisible;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E4[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpStr;                                            // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EPlayerPannelTypeEnum                         Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E5[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E6[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_SBUtcNow_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours;                      // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_SetFriendProgressText) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_SetFriendProgressText");
static_assert(sizeof(CommonPlayerListPannel_C_SetFriendProgressText) == 0x000108, "Wrong size on CommonPlayerListPannel_C_SetFriendProgressText");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, InProgressDate) == 0x000000, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::InProgressDate' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, InExtraVisible) == 0x000008, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::InExtraVisible' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, TmpStr) == 0x000010, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::TmpStr' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, Temp_byte_Variable) == 0x000020, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, Temp_bool_Variable) == 0x000021, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, Temp_bool_Variable_1) == 0x000022, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, Temp_bool_Variable_2) == 0x000023, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, Temp_bool_Variable_3) == 0x000024, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, Temp_bool_Variable_4) == 0x000025, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, Temp_bool_Variable_5) == 0x000026, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, K2Node_Select_Default) == 0x000041, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BooleanAND_ReturnValue_1) == 0x000058, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_SBUtcNow_ReturnValue) == 0x000060, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_SBUtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000068, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakTimespan_Days) == 0x000070, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakTimespan_Hours) == 0x000074, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakTimespan_Minutes) == 0x000078, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakTimespan_Seconds) == 0x00007C, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakTimespan_Milliseconds) == 0x000080, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Add_FloatFloat_ReturnValue) == 0x000084, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Conv_IntToString_ReturnValue) == 0x000088, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000098, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Replace_ReturnValue) == 0x0000A8, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_Replace_ReturnValue_1) == 0x0000B8, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000C8, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_GetPosition_ReturnValue) == 0x0000D0, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakVector2D_X) == 0x0000D8, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakVector2D_Y) == 0x0000DC, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_MakeVector2D_ReturnValue) == 0x0000E0, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x0000E8, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_GetPosition_ReturnValue_1) == 0x0000F0, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakVector2D_X_1) == 0x0000F8, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_BreakVector2D_Y_1) == 0x0000FC, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_SetFriendProgressText, CallFunc_MakeVector2D_ReturnValue_1) == 0x000100, "Member 'CommonPlayerListPannel_C_SetFriendProgressText::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateCommandBtnStatus
// 0x00A0 (0x00A0 - 0x0000)
struct CommonPlayerListPannel_C_UpdateCommandBtnStatus final
{
public:
	bool                                          bIsVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54E9[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0080(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonPlayerListPannel_C_UpdateCommandBtnStatus) == 0x000008, "Wrong alignment on CommonPlayerListPannel_C_UpdateCommandBtnStatus");
static_assert(sizeof(CommonPlayerListPannel_C_UpdateCommandBtnStatus) == 0x0000A0, "Wrong size on CommonPlayerListPannel_C_UpdateCommandBtnStatus");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, bIsVisible) == 0x000000, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::bIsVisible' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000030, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_GetCharacterId_ReturnValue) == 0x000058, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000068, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000070, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000080, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, Temp_byte_Variable) == 0x000098, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, Temp_byte_Variable_1) == 0x000099, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, K2Node_SwitchEnum_CmpSuccess) == 0x00009A, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, Temp_bool_Variable) == 0x00009B, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonPlayerListPannel_C_UpdateCommandBtnStatus, K2Node_Select_Default) == 0x00009C, "Member 'CommonPlayerListPannel_C_UpdateCommandBtnStatus::K2Node_Select_Default' has a wrong offset!");

}

