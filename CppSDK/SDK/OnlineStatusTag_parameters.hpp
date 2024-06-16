#pragma once

 

// Package: OnlineStatusTag

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "PlayerPannelTypeEnum_structs.hpp"


namespace SDK::Params
{

// Function OnlineStatusTag.OnlineStatusTag_C.ExecuteUbergraph_OnlineStatusTag
// 0x0358 (0x0358 - 0x0000)
struct OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5451[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_BlancToSpace_Text;                        // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EPlayerPannelTypeEnum                         K2Node_CustomEvent_PlayerPannelMode;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5452[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              K2Node_CustomEvent_PlayerProfileSummaryData;       // 0x0038(0x0118)()
	struct FGuildMemberData                       K2Node_CustomEvent_GuildMemberData;                // 0x0150(0x00D8)()
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bActive;                        // 0x022E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5453[0x1];                                     // 0x022F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_LocationName_1;                 // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ZoneId_1;                       // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ContentId_1;                    // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        K2Node_CustomEvent_PlatformInfo_1;                 // 0x0260(0x0020)()
	bool                                          CallFunc_GetPlayerPotisionName_IsActiveMap;        // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5454[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPlayerPotisionName_PositionName;       // 0x0288(0x0018)()
	class FText                                   CallFunc_BlancToSpace_Text_1;                      // 0x02A0(0x0018)()
	bool                                          K2Node_CustomEvent_bInActive;                      // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bMySelf;                        // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5455[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_LocationName;                   // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ZoneId;                         // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ContentId;                      // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        K2Node_CustomEvent_PlatformInfo;                   // 0x02F0(0x0020)()
	bool                                          CallFunc_GetPlayerPotisionName_IsActiveMap_1;      // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5456[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPlayerPotisionName_PositionName_1;     // 0x0318(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0340(0x0018)()
};
static_assert(alignof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag) == 0x000008, "Wrong alignment on OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag");
static_assert(sizeof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag) == 0x000358, "Wrong size on OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, EntryPoint) == 0x000000, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_Event_IsDesignTime) == 0x000004, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_BlancToSpace_Text) == 0x000008, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_BlancToSpace_Text' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_PlayerPannelMode) == 0x000030, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_PlayerPannelMode' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_PlayerProfileSummaryData) == 0x000038, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_PlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_GuildMemberData) == 0x000150, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_GuildMemberData' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_Len_ReturnValue) == 0x000228, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_Greater_IntInt_ReturnValue) == 0x00022C, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_SwitchEnum_CmpSuccess) == 0x00022D, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_bActive) == 0x00022E, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_bActive' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_LocationName_1) == 0x000230, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_LocationName_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_ZoneId_1) == 0x000240, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_ZoneId_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_ContentId_1) == 0x000250, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_ContentId_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_PlatformInfo_1) == 0x000260, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_PlatformInfo_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_GetPlayerPotisionName_IsActiveMap) == 0x000280, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_GetPlayerPotisionName_IsActiveMap' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_GetPlayerPotisionName_PositionName) == 0x000288, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_GetPlayerPotisionName_PositionName' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_BlancToSpace_Text_1) == 0x0002A0, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_BlancToSpace_Text_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_bInActive) == 0x0002B8, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_bInActive' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_bMySelf) == 0x0002B9, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_bMySelf' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_LocationName) == 0x0002C0, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_LocationName' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_ZoneId) == 0x0002D0, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_ZoneId' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_ContentId) == 0x0002E0, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_ContentId' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, K2Node_CustomEvent_PlatformInfo) == 0x0002F0, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::K2Node_CustomEvent_PlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_GetPlayerPotisionName_IsActiveMap_1) == 0x000310, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_GetPlayerPotisionName_IsActiveMap_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_GetPlayerPotisionName_PositionName_1) == 0x000318, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_GetPlayerPotisionName_PositionName_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000330, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag, CallFunc_Conv_StringToText_ReturnValue) == 0x000340, "Member 'OnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.SetForPlayerProfile
// 0x0058 (0x0058 - 0x0000)
struct OnlineStatusTag_C_SetForPlayerProfile final
{
public:
	bool                                          bInActive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bMySelf;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5457[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocationName;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ZoneId;                                            // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ContentId;                                         // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        PlatformInfo;                                      // 0x0038(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(OnlineStatusTag_C_SetForPlayerProfile) == 0x000008, "Wrong alignment on OnlineStatusTag_C_SetForPlayerProfile");
static_assert(sizeof(OnlineStatusTag_C_SetForPlayerProfile) == 0x000058, "Wrong size on OnlineStatusTag_C_SetForPlayerProfile");
static_assert(offsetof(OnlineStatusTag_C_SetForPlayerProfile, bInActive) == 0x000000, "Member 'OnlineStatusTag_C_SetForPlayerProfile::bInActive' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetForPlayerProfile, bMySelf) == 0x000001, "Member 'OnlineStatusTag_C_SetForPlayerProfile::bMySelf' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetForPlayerProfile, LocationName) == 0x000008, "Member 'OnlineStatusTag_C_SetForPlayerProfile::LocationName' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetForPlayerProfile, ZoneId) == 0x000018, "Member 'OnlineStatusTag_C_SetForPlayerProfile::ZoneId' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetForPlayerProfile, ContentId) == 0x000028, "Member 'OnlineStatusTag_C_SetForPlayerProfile::ContentId' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetForPlayerProfile, PlatformInfo) == 0x000038, "Member 'OnlineStatusTag_C_SetForPlayerProfile::PlatformInfo' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.SetLocationInfo
// 0x0058 (0x0058 - 0x0000)
struct OnlineStatusTag_C_SetLocationInfo final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5458[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocationName;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ZoneId;                                            // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ContentId;                                         // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        PlatformInfo;                                      // 0x0038(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(OnlineStatusTag_C_SetLocationInfo) == 0x000008, "Wrong alignment on OnlineStatusTag_C_SetLocationInfo");
static_assert(sizeof(OnlineStatusTag_C_SetLocationInfo) == 0x000058, "Wrong size on OnlineStatusTag_C_SetLocationInfo");
static_assert(offsetof(OnlineStatusTag_C_SetLocationInfo, bActive) == 0x000000, "Member 'OnlineStatusTag_C_SetLocationInfo::bActive' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetLocationInfo, LocationName) == 0x000008, "Member 'OnlineStatusTag_C_SetLocationInfo::LocationName' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetLocationInfo, ZoneId) == 0x000018, "Member 'OnlineStatusTag_C_SetLocationInfo::ZoneId' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetLocationInfo, ContentId) == 0x000028, "Member 'OnlineStatusTag_C_SetLocationInfo::ContentId' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetLocationInfo, PlatformInfo) == 0x000038, "Member 'OnlineStatusTag_C_SetLocationInfo::PlatformInfo' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.SetLoginMapInfo
// 0x01F8 (0x01F8 - 0x0000)
struct OnlineStatusTag_C_SetLoginMapInfo final
{
public:
	EPlayerPannelTypeEnum                         PlayerPannelMode;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5459[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              PlayerProfileSummaryData;                          // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGuildMemberData                       GuildMemberData;                                   // 0x0120(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(OnlineStatusTag_C_SetLoginMapInfo) == 0x000008, "Wrong alignment on OnlineStatusTag_C_SetLoginMapInfo");
static_assert(sizeof(OnlineStatusTag_C_SetLoginMapInfo) == 0x0001F8, "Wrong size on OnlineStatusTag_C_SetLoginMapInfo");
static_assert(offsetof(OnlineStatusTag_C_SetLoginMapInfo, PlayerPannelMode) == 0x000000, "Member 'OnlineStatusTag_C_SetLoginMapInfo::PlayerPannelMode' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetLoginMapInfo, PlayerProfileSummaryData) == 0x000008, "Member 'OnlineStatusTag_C_SetLoginMapInfo::PlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_SetLoginMapInfo, GuildMemberData) == 0x000120, "Member 'OnlineStatusTag_C_SetLoginMapInfo::GuildMemberData' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OnlineStatusTag_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnlineStatusTag_C_PreConstruct) == 0x000001, "Wrong alignment on OnlineStatusTag_C_PreConstruct");
static_assert(sizeof(OnlineStatusTag_C_PreConstruct) == 0x000001, "Wrong size on OnlineStatusTag_C_PreConstruct");
static_assert(offsetof(OnlineStatusTag_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OnlineStatusTag_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.Init Login Map Info
// 0x00D0 (0x00D0 - 0x0000)
struct OnlineStatusTag_C_Init_Login_Map_Info final
{
public:
	int32                                         InStatus;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_545A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        InPlatformInfo;                                    // 0x0008(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bOnlyIcon;                                         // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_545B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InLastLogin;                                       // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Show_Loguin_Status_Text_outStatusText;    // 0x0040(0x0018)()
	struct FSlateColor                            CallFunc_Show_Loguin_Status_Text_outTextColor;     // 0x0058(0x0028)()
	class FText                                   CallFunc_BlancToSpace_Text;                        // 0x0080(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_545C[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x00A8(0x0020)()
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnlineStatusTag_C_Init_Login_Map_Info) == 0x000008, "Wrong alignment on OnlineStatusTag_C_Init_Login_Map_Info");
static_assert(sizeof(OnlineStatusTag_C_Init_Login_Map_Info) == 0x0000D0, "Wrong size on OnlineStatusTag_C_Init_Login_Map_Info");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, InStatus) == 0x000000, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::InStatus' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, InPlatformInfo) == 0x000008, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::InPlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, bOnlyIcon) == 0x000028, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::bOnlyIcon' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, InLastLogin) == 0x000030, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::InLastLogin' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, CallFunc_Show_Loguin_Status_Text_outStatusText) == 0x000040, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::CallFunc_Show_Loguin_Status_Text_outStatusText' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, CallFunc_Show_Loguin_Status_Text_outTextColor) == 0x000058, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::CallFunc_Show_Loguin_Status_Text_outTextColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, CallFunc_BlancToSpace_Text) == 0x000080, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::CallFunc_BlancToSpace_Text' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000098, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, CallFunc_GetSBPlayerState_ReturnValue) == 0x0000A0, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, CallFunc_GetPlatformInfo_ReturnValue) == 0x0000A8, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Init_Login_Map_Info, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000C8, "Member 'OnlineStatusTag_C_Init_Login_Map_Info::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.InitPartyMemberMapInfo
// 0x01A0 (0x01A0 - 0x0000)
struct OnlineStatusTag_C_InitPartyMemberMapInfo final
{
public:
	struct FPlayerProfileSummaryData              PlayerProfileSummaryData;                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                            OfflineColor;                                      // 0x0118(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            OnlineColor;                                       // 0x0140(0x0028)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetPlayerPotisionName_IsActiveMap;        // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_545D[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPlayerPotisionName_PositionName;       // 0x0170(0x0018)()
	class FText                                   CallFunc_BlancToSpace_Text;                        // 0x0188(0x0018)()
};
static_assert(alignof(OnlineStatusTag_C_InitPartyMemberMapInfo) == 0x000008, "Wrong alignment on OnlineStatusTag_C_InitPartyMemberMapInfo");
static_assert(sizeof(OnlineStatusTag_C_InitPartyMemberMapInfo) == 0x0001A0, "Wrong size on OnlineStatusTag_C_InitPartyMemberMapInfo");
static_assert(offsetof(OnlineStatusTag_C_InitPartyMemberMapInfo, PlayerProfileSummaryData) == 0x000000, "Member 'OnlineStatusTag_C_InitPartyMemberMapInfo::PlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPartyMemberMapInfo, OfflineColor) == 0x000118, "Member 'OnlineStatusTag_C_InitPartyMemberMapInfo::OfflineColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPartyMemberMapInfo, OnlineColor) == 0x000140, "Member 'OnlineStatusTag_C_InitPartyMemberMapInfo::OnlineColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPartyMemberMapInfo, CallFunc_GetPlayerPotisionName_IsActiveMap) == 0x000168, "Member 'OnlineStatusTag_C_InitPartyMemberMapInfo::CallFunc_GetPlayerPotisionName_IsActiveMap' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPartyMemberMapInfo, CallFunc_GetPlayerPotisionName_PositionName) == 0x000170, "Member 'OnlineStatusTag_C_InitPartyMemberMapInfo::CallFunc_GetPlayerPotisionName_PositionName' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPartyMemberMapInfo, CallFunc_BlancToSpace_Text) == 0x000188, "Member 'OnlineStatusTag_C_InitPartyMemberMapInfo::CallFunc_BlancToSpace_Text' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.InitCommunicateMode
// 0x0120 (0x0120 - 0x0000)
struct OnlineStatusTag_C_InitCommunicateMode final
{
public:
	struct FPlayerProfileSummaryData              PlayerProfileSummaryData;                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bOnlyIcon;                                         // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnlineStatusTag_C_InitCommunicateMode) == 0x000008, "Wrong alignment on OnlineStatusTag_C_InitCommunicateMode");
static_assert(sizeof(OnlineStatusTag_C_InitCommunicateMode) == 0x000120, "Wrong size on OnlineStatusTag_C_InitCommunicateMode");
static_assert(offsetof(OnlineStatusTag_C_InitCommunicateMode, PlayerProfileSummaryData) == 0x000000, "Member 'OnlineStatusTag_C_InitCommunicateMode::PlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitCommunicateMode, bOnlyIcon) == 0x000118, "Member 'OnlineStatusTag_C_InitCommunicateMode::bOnlyIcon' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.InitOnlineInfo
// 0x0080 (0x0080 - 0x0000)
struct OnlineStatusTag_C_InitOnlineInfo final
{
public:
	struct FSBPlatformInfo                        PlatformInfo;                                      // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIconOnly;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsOnline;                                         // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_545E[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0024(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x002C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0034(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_545F[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_BlancToSpace_Text;                        // 0x0040(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(OnlineStatusTag_C_InitOnlineInfo) == 0x000008, "Wrong alignment on OnlineStatusTag_C_InitOnlineInfo");
static_assert(sizeof(OnlineStatusTag_C_InitOnlineInfo) == 0x000080, "Wrong size on OnlineStatusTag_C_InitOnlineInfo");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, PlatformInfo) == 0x000000, "Member 'OnlineStatusTag_C_InitOnlineInfo::PlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, bIconOnly) == 0x000020, "Member 'OnlineStatusTag_C_InitOnlineInfo::bIconOnly' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, bIsOnline) == 0x000021, "Member 'OnlineStatusTag_C_InitOnlineInfo::bIsOnline' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, Temp_bool_Variable) == 0x000022, "Member 'OnlineStatusTag_C_InitOnlineInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, Temp_name_Variable) == 0x000024, "Member 'OnlineStatusTag_C_InitOnlineInfo::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, Temp_name_Variable_1) == 0x00002C, "Member 'OnlineStatusTag_C_InitOnlineInfo::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, K2Node_Select_Default) == 0x000034, "Member 'OnlineStatusTag_C_InitOnlineInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, CallFunc_BlancToSpace_Text) == 0x000040, "Member 'OnlineStatusTag_C_InitOnlineInfo::CallFunc_BlancToSpace_Text' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000058, "Member 'OnlineStatusTag_C_InitOnlineInfo::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitOnlineInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'OnlineStatusTag_C_InitOnlineInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.InitGuildMemberStatusInfo
// 0x0160 (0x0160 - 0x0000)
struct OnlineStatusTag_C_InitGuildMemberStatusInfo final
{
public:
	struct FGuildMemberData                       InGuildMemberData;                                 // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         LocalOnlineStatus;                                 // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalNowOnline;                                   // 0x00DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5460[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x00E8(0x0020)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5461[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Show_Loguin_Status_Text_outStatusText;    // 0x0110(0x0018)()
	struct FSlateColor                            CallFunc_Show_Loguin_Status_Text_outTextColor;     // 0x0128(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5462[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OnlineStatusTag_C_InitGuildMemberStatusInfo) == 0x000008, "Wrong alignment on OnlineStatusTag_C_InitGuildMemberStatusInfo");
static_assert(sizeof(OnlineStatusTag_C_InitGuildMemberStatusInfo) == 0x000160, "Wrong size on OnlineStatusTag_C_InitGuildMemberStatusInfo");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, InGuildMemberData) == 0x000000, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::InGuildMemberData' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, LocalOnlineStatus) == 0x0000D8, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::LocalOnlineStatus' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, bLocalNowOnline) == 0x0000DC, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::bLocalNowOnline' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, CallFunc_GetSBPlayerState_ReturnValue) == 0x0000E0, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, CallFunc_GetPlatformInfo_ReturnValue) == 0x0000E8, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000108, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000109, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, CallFunc_Show_Loguin_Status_Text_outStatusText) == 0x000110, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::CallFunc_Show_Loguin_Status_Text_outStatusText' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, CallFunc_Show_Loguin_Status_Text_outTextColor) == 0x000128, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::CallFunc_Show_Loguin_Status_Text_outTextColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, Temp_bool_Variable) == 0x000150, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitGuildMemberStatusInfo, K2Node_Select_Default) == 0x000158, "Member 'OnlineStatusTag_C_InitGuildMemberStatusInfo::K2Node_Select_Default' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.InitPlatformInfo
// 0x00D8 (0x00D8 - 0x0000)
struct OnlineStatusTag_C_InitPlatformInfo final
{
public:
	struct FSBPlatformInfo                        PlatformInfo;                                      // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bOnlyIcon;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsActive;                                         // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5463[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            OfflineColor;                                      // 0x0028(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            OnlineColor;                                       // 0x0050(0x0028)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5464[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& GamerTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckPlatform_ReturnValue;                // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5465[0x5];                                     // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        CallFunc_GetOwnPlatformInfo_OutPlatformInfo;       // 0x00B0(0x0020)()
	bool                                          CallFunc_GetOwnPlatformInfo_ReturnValue;           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnlineStatusTag_C_InitPlatformInfo) == 0x000008, "Wrong alignment on OnlineStatusTag_C_InitPlatformInfo");
static_assert(sizeof(OnlineStatusTag_C_InitPlatformInfo) == 0x0000D8, "Wrong size on OnlineStatusTag_C_InitPlatformInfo");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, PlatformInfo) == 0x000000, "Member 'OnlineStatusTag_C_InitPlatformInfo::PlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, bOnlyIcon) == 0x000020, "Member 'OnlineStatusTag_C_InitPlatformInfo::bOnlyIcon' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, bIsActive) == 0x000021, "Member 'OnlineStatusTag_C_InitPlatformInfo::bIsActive' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, OfflineColor) == 0x000028, "Member 'OnlineStatusTag_C_InitPlatformInfo::OfflineColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, OnlineColor) == 0x000050, "Member 'OnlineStatusTag_C_InitPlatformInfo::OnlineColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000090, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000091, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000094, "Member 'OnlineStatusTag_C_InitPlatformInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_CheckPlatform_ReturnValue) == 0x0000A4, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_CheckPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, Temp_byte_Variable) == 0x0000A5, "Member 'OnlineStatusTag_C_InitPlatformInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, Temp_byte_Variable_1) == 0x0000A6, "Member 'OnlineStatusTag_C_InitPlatformInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, Temp_bool_Variable) == 0x0000A7, "Member 'OnlineStatusTag_C_InitPlatformInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x0000A8, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, K2Node_Select_Default) == 0x0000A9, "Member 'OnlineStatusTag_C_InitPlatformInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, K2Node_SwitchEnum_CmpSuccess) == 0x0000AA, "Member 'OnlineStatusTag_C_InitPlatformInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_GetOwnPlatformInfo_OutPlatformInfo) == 0x0000B0, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_GetOwnPlatformInfo_OutPlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_GetOwnPlatformInfo_ReturnValue) == 0x0000D0, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_GetOwnPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000D1, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_BooleanAND_ReturnValue) == 0x0000D2, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitPlatformInfo, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D3, "Member 'OnlineStatusTag_C_InitPlatformInfo::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.InitForPlayerProfile
// 0x0120 (0x0120 - 0x0000)
struct OnlineStatusTag_C_InitForPlayerProfile final
{
public:
	bool                                          bInActive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bMySelf;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5466[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        PlatformInfo;                                      // 0x0008(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bLocalInActive;                                    // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5467[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalTargetPlatformId;                             // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBPlatformType                               LocalTargetPlatformType;                           // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocalSamePlatform;                                // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5468[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        LocalTargetPlatformInfo;                           // 0x0048(0x0020)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5469[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& GamerTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckPlatform_ReturnValue;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPlatform_ReturnValue_1;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPlatform_ReturnValue_2;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(const class FString& GamerTag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckPlatform_ReturnValue_3;              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0096(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0097(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0098(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546A[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_546B[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00D8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_546C[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        CallFunc_GetOwnPlatformInfo_OutPlatformInfo;       // 0x00F8(0x0020)()
	bool                                          CallFunc_GetOwnPlatformInfo_ReturnValue;           // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OnlineStatusTag_C_InitForPlayerProfile) == 0x000008, "Wrong alignment on OnlineStatusTag_C_InitForPlayerProfile");
static_assert(sizeof(OnlineStatusTag_C_InitForPlayerProfile) == 0x000120, "Wrong size on OnlineStatusTag_C_InitForPlayerProfile");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, bInActive) == 0x000000, "Member 'OnlineStatusTag_C_InitForPlayerProfile::bInActive' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, bMySelf) == 0x000001, "Member 'OnlineStatusTag_C_InitForPlayerProfile::bMySelf' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, PlatformInfo) == 0x000008, "Member 'OnlineStatusTag_C_InitForPlayerProfile::PlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, bLocalInActive) == 0x000028, "Member 'OnlineStatusTag_C_InitForPlayerProfile::bLocalInActive' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, LocalTargetPlatformId) == 0x000030, "Member 'OnlineStatusTag_C_InitForPlayerProfile::LocalTargetPlatformId' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, LocalTargetPlatformType) == 0x000040, "Member 'OnlineStatusTag_C_InitForPlayerProfile::LocalTargetPlatformType' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, bLocalSamePlatform) == 0x000041, "Member 'OnlineStatusTag_C_InitForPlayerProfile::bLocalSamePlatform' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, LocalTargetPlatformInfo) == 0x000048, "Member 'OnlineStatusTag_C_InitForPlayerProfile::LocalTargetPlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, Temp_byte_Variable) == 0x000068, "Member 'OnlineStatusTag_C_InitForPlayerProfile::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'OnlineStatusTag_C_InitForPlayerProfile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_CheckPlatform_ReturnValue) == 0x00007C, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_CheckPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, Temp_byte_Variable_1) == 0x00007D, "Member 'OnlineStatusTag_C_InitForPlayerProfile::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00007E, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00007F, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_CheckPlatform_ReturnValue_1) == 0x000080, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_CheckPlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_CheckPlatform_ReturnValue_2) == 0x000081, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_CheckPlatform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_BooleanAND_ReturnValue) == 0x000082, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_BooleanAND_ReturnValue_1) == 0x000083, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'OnlineStatusTag_C_InitForPlayerProfile::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_CheckPlatform_ReturnValue_3) == 0x000094, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_CheckPlatform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, Temp_bool_Variable) == 0x000095, "Member 'OnlineStatusTag_C_InitForPlayerProfile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000096, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000097, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, K2Node_Select_Default) == 0x0000B0, "Member 'OnlineStatusTag_C_InitForPlayerProfile::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B8, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'OnlineStatusTag_C_InitForPlayerProfile::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000D8, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000F0, "Member 'OnlineStatusTag_C_InitForPlayerProfile::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_GetOwnPlatformInfo_OutPlatformInfo) == 0x0000F8, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_GetOwnPlatformInfo_OutPlatformInfo' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_GetOwnPlatformInfo_ReturnValue) == 0x000118, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_GetOwnPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_InitForPlayerProfile, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000119, "Member 'OnlineStatusTag_C_InitForPlayerProfile::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.Show Loguin Status Text
// 0x01E0 (0x01E0 - 0x0000)
struct OnlineStatusTag_C_Show_Loguin_Status_Text final
{
public:
	int32                                         InOnlineStatus;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InDateTime;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   OutStatusText;                                     // 0x0018(0x0018)(Parm, OutParm)
	struct FSlateColor                            OutTextColor;                                      // 0x0030(0x0028)(Parm, OutParm)
	struct FSlateColor                            OfflineColor;                                      // 0x0058(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            OnlineColor;                                       // 0x0080(0x0028)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546E[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_546F[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5470[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0148(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0160(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0198(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x01B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C8(0x0018)()
};
static_assert(alignof(OnlineStatusTag_C_Show_Loguin_Status_Text) == 0x000008, "Wrong alignment on OnlineStatusTag_C_Show_Loguin_Status_Text");
static_assert(sizeof(OnlineStatusTag_C_Show_Loguin_Status_Text) == 0x0001E0, "Wrong size on OnlineStatusTag_C_Show_Loguin_Status_Text");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, InOnlineStatus) == 0x000000, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::InOnlineStatus' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, InDateTime) == 0x000008, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::InDateTime' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, OutStatusText) == 0x000018, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::OutStatusText' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, OutTextColor) == 0x000030, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::OutTextColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, OfflineColor) == 0x000058, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::OfflineColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, OnlineColor) == 0x000080, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::OnlineColor' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000C0, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_GetValidValue_ReturnValue) == 0x000108, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, K2Node_MakeArray_Array) == 0x000110, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, K2Node_SwitchEnum_CmpSuccess) == 0x000120, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000128, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000138, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000148, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000160, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000178, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000188, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000198, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0001B0, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_Show_Loguin_Status_Text, CallFunc_Format_ReturnValue) == 0x0001C8, "Member 'OnlineStatusTag_C_Show_Loguin_Status_Text::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function OnlineStatusTag.OnlineStatusTag_C.OnGetGamerTag
// 0x0028 (0x0028 - 0x0000)
struct OnlineStatusTag_C_OnGetGamerTag final
{
public:
	class FString                                 GamerTag;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(OnlineStatusTag_C_OnGetGamerTag) == 0x000008, "Wrong alignment on OnlineStatusTag_C_OnGetGamerTag");
static_assert(sizeof(OnlineStatusTag_C_OnGetGamerTag) == 0x000028, "Wrong size on OnlineStatusTag_C_OnGetGamerTag");
static_assert(offsetof(OnlineStatusTag_C_OnGetGamerTag, GamerTag) == 0x000000, "Member 'OnlineStatusTag_C_OnGetGamerTag::GamerTag' has a wrong offset!");
static_assert(offsetof(OnlineStatusTag_C_OnGetGamerTag, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'OnlineStatusTag_C_OnGetGamerTag::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

