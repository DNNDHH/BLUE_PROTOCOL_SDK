#pragma once

 

// Package: RankingMenu_Player

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function RankingMenu_Player.RankingMenu_Player_C.ExecuteUbergraph_RankingMenu_Player
// 0x04D0 (0x04D0 - 0x0000)
struct RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9057[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue_1;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9058[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9059[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0098(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_905A[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x00A0(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0498(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_905B[0x3];                                     // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x04A0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x04B0(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x04C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x04CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x04CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x04CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x04CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player) == 0x000008, "Wrong alignment on RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player");
static_assert(sizeof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player) == 0x0004D0, "Wrong size on RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, EntryPoint) == 0x000000, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::EntryPoint' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_Create_ReturnValue) == 0x000018, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_Create_ReturnValue_1) == 0x000030, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_CustomEvent_URL) == 0x000048, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_DownloadImage_ReturnValue) == 0x000058, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_GetConcernedList_ReturnValue) == 0x000080, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_CreateDelegate_OutputDelegate_2) == 0x000088, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_CustomEvent_bWasSuccessful) == 0x000098, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x0000A0, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, K2Node_CustomEvent_RetCode) == 0x000498, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_MakeLiteralByte_ReturnValue) == 0x00049C, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_GetSBRetMessage_ReturnValue) == 0x0004A0, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_Conv_StringToText_ReturnValue) == 0x0004B0, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0004C8, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_IsEmpty_ReturnValue) == 0x0004C9, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_Not_PreBool_ReturnValue) == 0x0004CA, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0004CB, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_Not_PreBool_ReturnValue_1) == 0x0004CC, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player, CallFunc_IsValid_ReturnValue_1) == 0x0004CD, "Member 'RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function RankingMenu_Player.RankingMenu_Player_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
// 0x0408 (0x0408 - 0x0000)
struct RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_905C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event) == 0x000008, "Wrong alignment on RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event");
static_assert(sizeof(RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event) == 0x000408, "Wrong size on RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event");
static_assert(offsetof(RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event, bWasSuccessful) == 0x000000, "Member 'RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event, RetCode) == 0x000400, "Member 'RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event::RetCode' has a wrong offset!");

// Function RankingMenu_Player.RankingMenu_Player_C.DownLoadFaceImage_Event
// 0x0010 (0x0010 - 0x0000)
struct RankingMenu_Player_C_DownLoadFaceImage_Event final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_Player_C_DownLoadFaceImage_Event) == 0x000008, "Wrong alignment on RankingMenu_Player_C_DownLoadFaceImage_Event");
static_assert(sizeof(RankingMenu_Player_C_DownLoadFaceImage_Event) == 0x000010, "Wrong size on RankingMenu_Player_C_DownLoadFaceImage_Event");
static_assert(offsetof(RankingMenu_Player_C_DownLoadFaceImage_Event, URL) == 0x000000, "Member 'RankingMenu_Player_C_DownLoadFaceImage_Event::URL' has a wrong offset!");

// Function RankingMenu_Player.RankingMenu_Player_C.SetRankingData
// 0x03B8 (0x03B8 - 0x0000)
struct RankingMenu_Player_C_SetRankingData final
{
public:
	int32                                         CategoryRank;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_905D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRankingData                           RankingData;                                       // 0x0008(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsTimeAttack;                                      // 0x0080(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_905E[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00A0(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_905F[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F0(0x0018)()
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9060[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9061[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9062[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Right_ReturnValue_1;                      // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x01B0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9063[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Right_ReturnValue_2;                      // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9064[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9065[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9066[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0248(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0260(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x027A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9067[0x5];                                     // 0x027B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0280(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9068[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9069[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x02B0(0x0078)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_906A[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0340(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_906B[0x5];                                     // 0x035B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0372(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_906C[0x5];                                     // 0x0373(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0378(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_906D[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0398(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_Player_C_SetRankingData) == 0x000008, "Wrong alignment on RankingMenu_Player_C_SetRankingData");
static_assert(sizeof(RankingMenu_Player_C_SetRankingData) == 0x0003B8, "Wrong size on RankingMenu_Player_C_SetRankingData");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CategoryRank) == 0x000000, "Member 'RankingMenu_Player_C_SetRankingData::CategoryRank' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, RankingData) == 0x000008, "Member 'RankingMenu_Player_C_SetRankingData::RankingData' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, IsTimeAttack) == 0x000080, "Member 'RankingMenu_Player_C_SetRankingData::IsTimeAttack' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_MakeLiteralByte_ReturnValue) == 0x000081, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToText_ReturnValue) == 0x000088, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000A0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x0000B8, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x0000B9, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000C0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetFaceImageURL_ReturnValue) == 0x000108, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToString_ReturnValue) == 0x000118, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Percent_IntInt_ReturnValue) == 0x000128, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_LeftChop_ReturnValue) == 0x000130, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Divide_IntInt_ReturnValue) == 0x000140, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Concat_StrStr_ReturnValue) == 0x000148, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000158, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Right_ReturnValue) == 0x000168, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000178, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000188, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Right_ReturnValue_1) == 0x000190, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Right_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0001A0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0001B0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001C8, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001D8, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Right_ReturnValue_2) == 0x0001E0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Right_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001F0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0001F8, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000208, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000210, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000220, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Greater_IntInt_ReturnValue) == 0x000230, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000238, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000248, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000260, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000278, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, Temp_bool_Variable) == 0x000279, "Member 'RankingMenu_Player_C_SetRankingData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, Temp_bool_Variable_1) == 0x00027A, "Member 'RankingMenu_Player_C_SetRankingData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_MakeLiteralText_ReturnValue) == 0x000280, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetMasterDataManager_IsValid) == 0x000298, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0002A0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetAchievementMasterData_IsExists) == 0x0002A8, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetAchievementMasterData_ReturnValue) == 0x0002B0, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000328, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetAchievementName_ReturnValue) == 0x000330, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000340, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_NotEqual_TextText_ReturnValue) == 0x000358, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000359, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, Temp_bool_Variable_2) == 0x00035A, "Member 'RankingMenu_Player_C_SetRankingData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetCharacterId_ReturnValue) == 0x000360, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000370, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, K2Node_Select_Default) == 0x000371, "Member 'RankingMenu_Player_C_SetRankingData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000372, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_GetRestrictText_ReturnValue) == 0x000378, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000390, "Member 'RankingMenu_Player_C_SetRankingData::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, K2Node_Select_Default_1) == 0x000398, "Member 'RankingMenu_Player_C_SetRankingData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetRankingData, K2Node_Select_Default_2) == 0x0003B0, "Member 'RankingMenu_Player_C_SetRankingData::K2Node_Select_Default_2' has a wrong offset!");

// Function RankingMenu_Player.RankingMenu_Player_C.Set My Rank Data
// 0x0360 (0x0360 - 0x0000)
struct RankingMenu_Player_C_Set_My_Rank_Data final
{
public:
	int32                                         CategoryRank;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_906E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRankingData                           RankingData;                                       // 0x0008(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsTimeAttack;                                      // 0x0080(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsOutOfRank;                                       // 0x0081(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRankingAggregation;                              // 0x0082(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_906F[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9070[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_LeftChop_ReturnValue;                     // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9071[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9072[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Right_ReturnValue_1;                      // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0190(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9073[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Right_ReturnValue_2;                      // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9074[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9075[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9076[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0228(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9077[0x6];                                     // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0248(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9078[0x6];                                     // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0268(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9079[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_907A[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x0298(0x0078)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_907B[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0328(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_907C[0x6];                                     // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x035B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_Player_C_Set_My_Rank_Data) == 0x000008, "Wrong alignment on RankingMenu_Player_C_Set_My_Rank_Data");
static_assert(sizeof(RankingMenu_Player_C_Set_My_Rank_Data) == 0x000360, "Wrong size on RankingMenu_Player_C_Set_My_Rank_Data");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CategoryRank) == 0x000000, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CategoryRank' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, RankingData) == 0x000008, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::RankingData' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, IsTimeAttack) == 0x000080, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::IsTimeAttack' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, IsOutOfRank) == 0x000081, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::IsOutOfRank' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, IsRankingAggregation) == 0x000082, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::IsRankingAggregation' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, Temp_bool_Variable) == 0x000083, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Not_PreBool_ReturnValue) == 0x000084, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000085, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_IntToText_ReturnValue) == 0x000088, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000A0, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_GetFaceImageURL_ReturnValue) == 0x0000E8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_IntToString_ReturnValue) == 0x0000F8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Percent_IntInt_ReturnValue) == 0x000108, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_LeftChop_ReturnValue) == 0x000110, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_LeftChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Divide_IntInt_ReturnValue) == 0x000120, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Concat_StrStr_ReturnValue) == 0x000128, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000138, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Right_ReturnValue) == 0x000148, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000158, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000168, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Right_ReturnValue_1) == 0x000170, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Right_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000180, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000190, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001A8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001B8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Right_ReturnValue_2) == 0x0001C0, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Right_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001D0, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0001D8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0001E8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Greater_IntInt_ReturnValue) == 0x0001F8, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000200, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000210, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000220, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000228, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_BooleanAND_ReturnValue) == 0x000240, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000241, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000248, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000260, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, Temp_bool_Variable_1) == 0x000261, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_MakeLiteralText_ReturnValue) == 0x000268, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_GetMasterDataManager_IsValid) == 0x000280, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_GetMasterDataManager_ReturnValue) == 0x000288, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_GetAchievementMasterData_IsExists) == 0x000290, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_GetAchievementMasterData_ReturnValue) == 0x000298, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_MakeLiteralByte_ReturnValue) == 0x000310, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_GetAchievementName_ReturnValue) == 0x000318, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000328, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_NotEqual_TextText_ReturnValue) == 0x000340, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000341, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_GetCharacterId_ReturnValue) == 0x000348, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000358, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000359, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, K2Node_Select_Default) == 0x00035A, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00035B, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_Set_My_Rank_Data, K2Node_Select_Default_1) == 0x00035C, "Member 'RankingMenu_Player_C_Set_My_Rank_Data::K2Node_Select_Default_1' has a wrong offset!");

// Function RankingMenu_Player.RankingMenu_Player_C.SetEmptyMyRank
// 0x01B0 (0x01B0 - 0x0000)
struct RankingMenu_Player_C_SetEmptyMyRank final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_907D[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_907E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_907F[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0050(0x0018)()
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9080[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievementId_ReturnValue;             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9081[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9082[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x00C0(0x0078)()
	class FString                                 CallFunc_GetShotID_Short_Id;                       // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0158(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0170(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9083[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0190(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_Player_C_SetEmptyMyRank) == 0x000008, "Wrong alignment on RankingMenu_Player_C_SetEmptyMyRank");
static_assert(sizeof(RankingMenu_Player_C_SetEmptyMyRank) == 0x0001B0, "Wrong size on RankingMenu_Player_C_SetEmptyMyRank");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, Temp_bool_Variable) == 0x000001, "Member 'RankingMenu_Player_C_SetEmptyMyRank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetFaceImageURL_ReturnValue) == 0x000018, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetClassType_ReturnValue) == 0x000028, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetClassLevel_ReturnValue) == 0x00002C, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetTotalPower_ReturnValue) == 0x000048, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000050, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetPlayerName_ReturnValue) == 0x000068, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetCharacterId_ReturnValue_1) == 0x000090, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000A0, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetAchievementId_ReturnValue) == 0x0000A4, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetAchievementId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetMasterDataManager_IsValid) == 0x0000A8, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000B0, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, K2Node_Select_Default) == 0x0000B8, "Member 'RankingMenu_Player_C_SetEmptyMyRank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetAchievementMasterData_IsExists) == 0x0000B9, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetAchievementMasterData_ReturnValue) == 0x0000C0, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetShotID_Short_Id) == 0x000138, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetShotID_Short_Id' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_GetAchievementName_ReturnValue) == 0x000148, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000158, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000170, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, Temp_bool_Variable_1) == 0x000188, "Member 'RankingMenu_Player_C_SetEmptyMyRank::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_MakeLiteralText_ReturnValue) == 0x000190, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0001A8, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, CallFunc_NotEqual_TextText_ReturnValue) == 0x0001A9, "Member 'RankingMenu_Player_C_SetEmptyMyRank::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_SetEmptyMyRank, K2Node_Select_Default_1) == 0x0001AA, "Member 'RankingMenu_Player_C_SetEmptyMyRank::K2Node_Select_Default_1' has a wrong offset!");

// Function RankingMenu_Player.RankingMenu_Player_C.GetShotID
// 0x0150 (0x0150 - 0x0000)
struct RankingMenu_Player_C_GetShotID final
{
public:
	class FString                                 Short_Id;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBUserOnlineAccountCharacter>  LocalCharacters;                                   // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9084[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBUserOnlineAccountCharacter          CallFunc_Array_Get_Item;                           // 0x0040(0x00D8)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9085[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9086[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters; // 0x0138(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue;   // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingMenu_Player_C_GetShotID) == 0x000008, "Wrong alignment on RankingMenu_Player_C_GetShotID");
static_assert(sizeof(RankingMenu_Player_C_GetShotID) == 0x000150, "Wrong size on RankingMenu_Player_C_GetShotID");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, Short_Id) == 0x000000, "Member 'RankingMenu_Player_C_GetShotID::Short_Id' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, LocalCharacters) == 0x000010, "Member 'RankingMenu_Player_C_GetShotID::LocalCharacters' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, Temp_int_Array_Index_Variable) == 0x000020, "Member 'RankingMenu_Player_C_GetShotID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'RankingMenu_Player_C_GetShotID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_GetCharacterId_ReturnValue) == 0x000030, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_Array_Get_Item) == 0x000040, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_Array_Length_ReturnValue) == 0x000118, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_Less_IntInt_ReturnValue) == 0x00011C, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_GetCharacterId_ReturnValue_1) == 0x000120, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000130, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_GetLogedInPlayerCharacters_OutCharacters) == 0x000138, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_GetLogedInPlayerCharacters_OutCharacters' has a wrong offset!");
static_assert(offsetof(RankingMenu_Player_C_GetShotID, CallFunc_GetLogedInPlayerCharacters_ReturnValue) == 0x000148, "Member 'RankingMenu_Player_C_GetShotID::CallFunc_GetLogedInPlayerCharacters_ReturnValue' has a wrong offset!");

}

