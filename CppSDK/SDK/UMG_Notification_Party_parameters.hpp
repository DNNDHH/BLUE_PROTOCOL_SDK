#pragma once

 

// Package: UMG_Notification_Party

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_NotificationPartyStatus_structs.hpp"


namespace SDK::Params
{

// Function UMG_Notification_Party.UMG_Notification_Party_C.ExecuteUbergraph_UMG_Notification_Party
// 0x0F60 (0x0F60 - 0x0000)
struct UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanInterruptNotification_Result;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CEF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Result_4;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CF0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF1[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0078(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x00A8(0x0018)()
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x00E0(0x0018)()
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF2[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF3[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0120(0x0018)()
	EYesNoDialogResult                            K2Node_CustomEvent_Result_3;                       // 0x0138(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF4[0x5];                                     // 0x013B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo;       // 0x0148(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue;         // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF5[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF6[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0194(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FPlayerProfileMenuDetailData& Data)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01A4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4CF7[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_retData;                        // 0x01B8(0x03F8)()
	TDelegate<void(const struct FPlayerProfileMenuDetailData& Data)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x05B0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF8[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x05D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x05D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CF9[0x6];                                     // 0x05DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x05E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo_1;     // 0x05E8(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue_1;       // 0x0620(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0621(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CFA[0x6];                                     // 0x0622(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0628(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0A20(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0A24(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanOpenNotificationPartyDialog_ReturnValue; // 0x0A25(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CFB[0x2];                                     // 0x0A26(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0A28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0A30(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0A38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CFC[0x7];                                     // 0x0A39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x0A40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0A48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanCreateInviteMessage_bResult;           // 0x0A49(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimplycityPartyOn_ReturnValue;          // 0x0A4A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0A4B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanAcceptInvite_bResult;                  // 0x0A4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0A4D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CFD[0x2];                                     // 0x0A4E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0A50(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_1;         // 0x0A68(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0A78(0x0018)()
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue;           // 0x0A90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CFE[0x7];                                     // 0x0A91(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberStateGeneral*             CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral; // 0x0A98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue_1;         // 0x0AA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAgreeToMigration_ReturnValue;          // 0x0AA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConvocation_ReturnValue;                // 0x0AA2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0AA3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CFF[0x4];                                     // 0x0AA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberStateGeneral*             CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral_1; // 0x0AA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAgreeToMigration_ReturnValue_1;        // 0x0AB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RunMigration_ReturnValue;                 // 0x0AB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExecuteMigration_ReturnValue;           // 0x0AB2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D00[0x5];                                     // 0x0AB3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0AB8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanOpenNotificationPartyDialog_ReturnValue_1; // 0x0AC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D01[0x7];                                     // 0x0AC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0AC8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0AD8(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x0AF0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D02[0x7];                                     // 0x0AF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_2;         // 0x0AF8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0B08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D03[0x7];                                     // 0x0B09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0B10(0x0018)()
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_1;          // 0x0B28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_1;            // 0x0B30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D04[0x7];                                     // 0x0B31(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo_2;     // 0x0B38(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue_2;       // 0x0B70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D05[0x7];                                     // 0x0B71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General_1; // 0x0B78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0B80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D06[0x7];                                     // 0x0B81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0B88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0B90(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0B98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0B99(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D07[0x6];                                     // 0x0B9A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0BA0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0BA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D08[0x7];                                     // 0x0BA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberState_ReturnValue;   // 0x0BB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General; // 0x0BB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0BC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D09[0x7];                                     // 0x0BC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_InviteReceived_CountText_Text_0_ReturnValue; // 0x0BC8(0x0018)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0BE0(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0C18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bCanceled;                      // 0x0C1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D0A[0x3];                                     // 0x0C1D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_MigrationResponseCode;          // 0x0C20(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0C24(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D0B[0x3];                                     // 0x0C25(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0C28(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0C38(0x0018)()
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x0C50(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanInterruptNotification_Result_1;        // 0x0C58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanInterruptNotification_Result_2;        // 0x0C59(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D0C[0x6];                                     // 0x0C5A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0C60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0C68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D0D[0x4];                                     // 0x0C6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0C70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDialog*                              CallFunc_Create_ReturnValue_1;                     // 0x0C78(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0C80(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_4;            // 0x0C90(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0CA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanInterruptNotification_Result_3;        // 0x0CA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0CA2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0CA3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D0E[0x4];                                     // 0x0CA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_3;         // 0x0CA8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_2;          // 0x0CB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_2;            // 0x0CC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D0F[0x7];                                     // 0x0CC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0CC8(0x0018)()
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General_2; // 0x0CE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0CE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D10[0x7];                                     // 0x0CE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0CF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_5;            // 0x0CF8(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0D08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0D10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D11[0x7];                                     // 0x0D11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0D18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Can_Open_Party_Member_Migration_Dialog_result; // 0x0D20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D12[0x7];                                     // 0x0D21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0D28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0D30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0D31(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D13[0x6];                                     // 0x0D32(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberState_ReturnValue_1; // 0x0D38(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General_1; // 0x0D40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0D48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanOpenNotificationPartyDialog_ReturnValue_2; // 0x0D49(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanInterruptNotification_Result_4;        // 0x0D4A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Can_Open_Party_Member_Migration_Dialog_result_1; // 0x0D4B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0D4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOwningPlayerPartyLeader_ReturnValue;    // 0x0D4D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D14[0x2];                                     // 0x0D4E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0D50(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0D58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D15[0x7];                                     // 0x0D59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0D60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0D68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0D69(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D16[0x6];                                     // 0x0D6A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x0D70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x0D78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0D80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D17[0x3];                                     // 0x0D81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0D84(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0D94(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4D18[0x4];                                     // 0x0DA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0DA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0DB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue;         // 0x0DB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_1;       // 0x0DB2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_2;       // 0x0DB3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0DB4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0DB5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D19[0x2];                                     // 0x0DB6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0DB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0DC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_NotificationPartyStatus                     K2Node_CustomEvent_Status;                         // 0x0DC1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1A[0x6];                                     // 0x0DC2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0DC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_3;       // 0x0DD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D1B[0x7];                                     // 0x0DD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0DD8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_4;       // 0x0DE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D1C[0x3];                                     // 0x0DE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Get_Status_Time_ReturnValue;              // 0x0DE4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Status_Time_ReturnValue_1;            // 0x0DE8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1D[0x4];                                     // 0x0DEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_3;          // 0x0DF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_3;            // 0x0DF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue;         // 0x0DF9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0DFA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D1E[0x5];                                     // 0x0DFB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0E00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Status_Time_ReturnValue_2;            // 0x0E08(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Result)>                 K2Node_CreateDelegate_OutputDelegate_8;            // 0x0E0C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4D1F[0x4];                                     // 0x0E1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0E20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_4;          // 0x0E28(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_4;            // 0x0E30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D20[0x3];                                     // 0x0E31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDefaultPartyMaxSize_ReturnValue;       // 0x0E34(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_5;          // 0x0E38(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_5;            // 0x0E40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D21[0x3];                                     // 0x0E41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRealPartySize_ReturnValue;             // 0x0E44(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0E48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D22[0x3];                                     // 0x0E49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Get_Change_Time_Tiem;                     // 0x0E4C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Change_Time_Tiem_1;                   // 0x0E50(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0E54(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0E55(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D23[0x2];                                     // 0x0E56(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0E58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0E5C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Change_Time_Tiem_2;                   // 0x0E60(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x0E64(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D24[0x3];                                     // 0x0E65(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x0E68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0E6C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0E6D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPress_Press;                            // 0x0E6E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue_1;       // 0x0E6F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPressStatus_Press;                      // 0x0E70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0E71(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPressStatus_Press_1;                    // 0x0E72(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0E73(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D25[0x4];                                     // 0x0E74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0E78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists_1;     // 0x0E80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D26[0x7];                                     // 0x0E81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue_1; // 0x0E88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x0E90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists_2;     // 0x0E91(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D27[0x6];                                     // 0x0E92(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue_2; // 0x0E98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x0EA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x0EA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D28[0x2];                                     // 0x0EA2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_9;            // 0x0EA4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4D29[0x4];                                     // 0x0EB4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x0EB8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0EC8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D2A[0x7];                                     // 0x0EC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0ED0(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0EE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D2B[0x7];                                     // 0x0EE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x0EF0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0EF8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_10;           // 0x0F00(0x0010)(ZeroConstructor, NoDestructor)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_6;          // 0x0F10(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_6;            // 0x0F18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_9;                // 0x0F19(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENotificationDialogStatus                     CallFunc_GetNotificationSimplycityPartyStatus_ReturnValue; // 0x0F1A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0F1B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0F1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasConvocation_ReturnValue;               // 0x0F1D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D2C[0x2];                                     // 0x0F1E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0F20(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0F30(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0F38(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_2;             // 0x0F40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x0F48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_5;       // 0x0F49(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_10;               // 0x0F4A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimplycityPartyStateChangeBase_bResult; // 0x0F4B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D2D[0x4];                                     // 0x0F4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MultipleSelectDialog_C*            CallFunc_Create_ReturnValue_4;                     // 0x0F50(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x0F58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanOpenNotificationSimplycityPartyDialog_ReturnValue; // 0x0F59(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x0F5A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party");
static_assert(sizeof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party) == 0x000F60, "Wrong size on UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, EntryPoint) == 0x000000, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanInterruptNotification_Result) == 0x000004, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanInterruptNotification_Result' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_Result_4) == 0x000008, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_SwitchInteger_CmpSuccess) == 0x000020, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000040, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000050, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000078, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000090, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0000A8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_MakeArray_Array) == 0x0000C0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPartySystemText_ReturnValue) == 0x0000D0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0000E0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentMatchmakingState_bExists) == 0x0000F8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000100, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsMatched_ReturnValue) == 0x000109, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanOR_ReturnValue) == 0x00010A, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000110, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000120, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_Result_3) == 0x000138, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000139, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_IsAccept) == 0x00013A, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetGameInstance_ReturnValue) == 0x000140, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPendingInviteInfo_OutInviteInfo) == 0x000148, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPendingInviteInfo_OutInviteInfo' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPendingInviteInfo_ReturnValue) == 0x000180, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPendingInviteInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBGame_Instance) == 0x000188, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate) == 0x000194, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001A4, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_retData) == 0x0001B8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_retData' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_2) == 0x0005B0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_1) == 0x0005C0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetOwningPlayer_ReturnValue) == 0x0005C8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0005D0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_1) == 0x0005D8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0005D9, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetConcernedList_ReturnValue) == 0x0005E0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPendingInviteInfo_OutInviteInfo_1) == 0x0005E8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPendingInviteInfo_OutInviteInfo_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPendingInviteInfo_ReturnValue_1) == 0x000620, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPendingInviteInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_bWasSuccessful) == 0x000621, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000628, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_RetCode) == 0x000A20, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_2) == 0x000A24, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanOpenNotificationPartyDialog_ReturnValue) == 0x000A25, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanOpenNotificationPartyDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPlayerManager_ReturnValue) == 0x000A28, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_OutPartyState) == 0x000A30, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_ReturnValue) == 0x000A38, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x000A40, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_2) == 0x000A48, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanCreateInviteMessage_bResult) == 0x000A49, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanCreateInviteMessage_bResult' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsSimplycityPartyOn_ReturnValue) == 0x000A4A, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsSimplycityPartyOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue) == 0x000A4B, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanAcceptInvite_bResult) == 0x000A4C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanAcceptInvite_bResult' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000A4D, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_FloatToText_ReturnValue) == 0x000A50, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPartySystemText_ReturnValue_1) == 0x000A68, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPartySystemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000A78, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsLocalPartyLeader_ReturnValue) == 0x000A90, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsLocalPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral) == 0x000A98, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsLocalPartyLeader_ReturnValue_1) == 0x000AA0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsLocalPartyLeader_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_HasAgreeToMigration_ReturnValue) == 0x000AA1, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_HasAgreeToMigration_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsConvocation_ReturnValue) == 0x000AA2, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsConvocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_3) == 0x000AA3, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral_1) == 0x000AA8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_HasAgreeToMigration_ReturnValue_1) == 0x000AB0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_HasAgreeToMigration_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_RunMigration_ReturnValue) == 0x000AB1, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_RunMigration_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsExecuteMigration_ReturnValue) == 0x000AB2, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsExecuteMigration_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Create_ReturnValue) == 0x000AB8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanOpenNotificationPartyDialog_ReturnValue_1) == 0x000AC0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanOpenNotificationPartyDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000AC8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000AD8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_Result_2) == 0x000AF0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPartySystemText_ReturnValue_2) == 0x000AF8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPartySystemText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000B08, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000B10, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_OutPartyState_1) == 0x000B28, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_OutPartyState_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_ReturnValue_1) == 0x000B30, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPendingInviteInfo_OutInviteInfo_2) == 0x000B38, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPendingInviteInfo_OutInviteInfo_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPendingInviteInfo_ReturnValue_2) == 0x000B70, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPendingInviteInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBParty_Game_State_General_1) == 0x000B78, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBParty_Game_State_General_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_3) == 0x000B80, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000B88, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000B90, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_4) == 0x000B98, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_4) == 0x000B99, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBPlayer_State) == 0x000BA0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_5) == 0x000BA8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentPartyMemberState_ReturnValue) == 0x000BB0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentPartyMemberState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBParty_Member_State_General) == 0x000BB8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBParty_Member_State_General' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_6) == 0x000BC0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Get_InviteReceived_CountText_Text_0_ReturnValue) == 0x000BC8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Get_InviteReceived_CountText_Text_0_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_Event_MyGeometry) == 0x000BE0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_Event_InDeltaTime) == 0x000C18, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_bCanceled) == 0x000C1C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_bCanceled' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_MigrationResponseCode) == 0x000C20, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_MigrationResponseCode' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_5) == 0x000C24, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000C28, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000C38, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPlayerManager_ReturnValue_1) == 0x000C50, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanInterruptNotification_Result_1) == 0x000C58, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanInterruptNotification_Result_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanInterruptNotification_Result_2) == 0x000C59, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanInterruptNotification_Result_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_PlayAnimation_ReturnValue_1) == 0x000C60, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_PlaySE_ReturnValue) == 0x000C68, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_PlayAnimation_ReturnValue_2) == 0x000C70, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Create_ReturnValue_1) == 0x000C78, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_3) == 0x000C80, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_4) == 0x000C90, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_6) == 0x000CA0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanInterruptNotification_Result_3) == 0x000CA1, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanInterruptNotification_Result_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_Result_1) == 0x000CA2, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000CA3, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPartySystemText_ReturnValue_3) == 0x000CA8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPartySystemText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_OutPartyState_2) == 0x000CB8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_OutPartyState_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_ReturnValue_2) == 0x000CC0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000CC8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBParty_Game_State_General_2) == 0x000CE0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBParty_Game_State_General_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_7) == 0x000CE8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000CF0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_5) == 0x000CF8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000D08, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_8) == 0x000D10, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000D18, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Can_Open_Party_Member_Migration_Dialog_result) == 0x000D20, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Can_Open_Party_Member_Migration_Dialog_result' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000D28, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_9) == 0x000D30, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue) == 0x000D31, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentPartyMemberState_ReturnValue_1) == 0x000D38, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentPartyMemberState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBParty_Member_State_General_1) == 0x000D40, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBParty_Member_State_General_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_10) == 0x000D48, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanOpenNotificationPartyDialog_ReturnValue_2) == 0x000D49, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanOpenNotificationPartyDialog_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanInterruptNotification_Result_4) == 0x000D4A, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanInterruptNotification_Result_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Can_Open_Party_Member_Migration_Dialog_result_1) == 0x000D4B, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Can_Open_Party_Member_Migration_Dialog_result_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue_1) == 0x000D4C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsOwningPlayerPartyLeader_ReturnValue) == 0x000D4D, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsOwningPlayerPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetGameInstance_ReturnValue_1) == 0x000D50, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_1) == 0x000D58, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000D60, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_11) == 0x000D68, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue_2) == 0x000D69, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetGameInstance_ReturnValue_2) == 0x000D70, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x000D78, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_12) == 0x000D80, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_6) == 0x000D84, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_7) == 0x000D94, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSBPlayerState_ReturnValue) == 0x000DA8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_7) == 0x000DB0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSimplycityPartyOn_ReturnValue) == 0x000DB1, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSimplycityPartyOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSimplycityPartyOn_ReturnValue_1) == 0x000DB2, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSimplycityPartyOn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSimplycityPartyOn_ReturnValue_2) == 0x000DB3, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSimplycityPartyOn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_2) == 0x000DB4, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_3) == 0x000DB5, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_PlayAnimation_ReturnValue_3) == 0x000DB8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_SwitchEnum_CmpSuccess) == 0x000DC0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_Status) == 0x000DC1, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_Status' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000DC8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSimplycityPartyOn_ReturnValue_3) == 0x000DD0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSimplycityPartyOn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000DD8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSimplycityPartyOn_ReturnValue_4) == 0x000DE0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSimplycityPartyOn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Get_Status_Time_ReturnValue) == 0x000DE4, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Get_Status_Time_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Get_Status_Time_ReturnValue_1) == 0x000DE8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Get_Status_Time_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_OutPartyState_3) == 0x000DF0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_OutPartyState_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_ReturnValue_3) == 0x000DF8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsCurrentPartyLeader_ReturnValue) == 0x000DF9, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsCurrentPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_4) == 0x000DFA, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_PlayAnimation_ReturnValue_4) == 0x000E00, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Get_Status_Time_ReturnValue_2) == 0x000E08, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Get_Status_Time_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_8) == 0x000E0C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000E20, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_OutPartyState_4) == 0x000E28, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_OutPartyState_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_ReturnValue_4) == 0x000E30, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetDefaultPartyMaxSize_ReturnValue) == 0x000E34, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetDefaultPartyMaxSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_OutPartyState_5) == 0x000E38, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_OutPartyState_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_ReturnValue_5) == 0x000E40, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetRealPartySize_ReturnValue) == 0x000E44, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetRealPartySize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000E48, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Get_Change_Time_Tiem) == 0x000E4C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Get_Change_Time_Tiem' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Get_Change_Time_Tiem_1) == 0x000E50, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Get_Change_Time_Tiem_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000E54, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000E55, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000E58, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000E5C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Get_Change_Time_Tiem_2) == 0x000E60, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Get_Change_Time_Tiem_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Greater_FloatFloat_ReturnValue_2) == 0x000E64, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Greater_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x000E68, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_5) == 0x000E6C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue_3) == 0x000E6D, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsPress_Press) == 0x000E6E, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsPress_Press' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsCurrentPartyLeader_ReturnValue_1) == 0x000E6F, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsCurrentPartyLeader_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsPressStatus_Press) == 0x000E70, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsPressStatus_Press' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_6) == 0x000E71, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsPressStatus_Press_1) == 0x000E72, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsPressStatus_Press_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue_4) == 0x000E73, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_PlayAnimationForward_ReturnValue) == 0x000E78, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentMatchmakingState_bExists_1) == 0x000E80, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentMatchmakingState_bExists_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentMatchmakingState_ReturnValue_1) == 0x000E88, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentMatchmakingState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue_5) == 0x000E90, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentMatchmakingState_bExists_2) == 0x000E91, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentMatchmakingState_bExists_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentMatchmakingState_ReturnValue_2) == 0x000E98, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentMatchmakingState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_7) == 0x000EA0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_8) == 0x000EA1, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_9) == 0x000EA4, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x000EB8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CustomEvent_Result) == 0x000EC8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000ED0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000EE8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x000EF0, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Create_ReturnValue_2) == 0x000EF8, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_10) == 0x000F00, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_OutPartyState_6) == 0x000F10, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_OutPartyState_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetCurrentParty_ReturnValue_6) == 0x000F18, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetCurrentParty_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_9) == 0x000F19, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetNotificationSimplycityPartyStatus_ReturnValue) == 0x000F1A, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetNotificationSimplycityPartyStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_SwitchEnum_CmpSuccess_1) == 0x000F1B, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsValid_ReturnValue_8) == 0x000F1C, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_HasConvocation_ReturnValue) == 0x000F1D, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_HasConvocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_CreateDelegate_OutputDelegate_11) == 0x000F20, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSBPlayerController_ReturnValue) == 0x000F30, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Create_ReturnValue_3) == 0x000F38, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_AsSBPlayer_State_2) == 0x000F40, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_AsSBPlayer_State_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, K2Node_DynamicCast_bSuccess_13) == 0x000F48, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_GetSimplycityPartyOn_ReturnValue_5) == 0x000F49, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_GetSimplycityPartyOn_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Not_PreBool_ReturnValue_10) == 0x000F4A, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Not_PreBool_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_IsSimplycityPartyStateChangeBase_bResult) == 0x000F4B, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_IsSimplycityPartyStateChangeBase_bResult' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_Create_ReturnValue_4) == 0x000F50, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue_6) == 0x000F58, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_CanOpenNotificationSimplycityPartyDialog_ReturnValue) == 0x000F59, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_CanOpenNotificationSimplycityPartyDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party, CallFunc_BooleanAND_ReturnValue_7) == 0x000F5A, "Member 'UMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.GetResultSimplycityPartyStateChangeDialog
// 0x0001 (0x0001 - 0x0000)
struct UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog");
static_assert(sizeof(UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog) == 0x000001, "Wrong size on UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog");
static_assert(offsetof(UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog, Result) == 0x000000, "Member 'UMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog::Result' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.PartyUpdate
// 0x0001 (0x0001 - 0x0000)
struct UMG_Notification_Party_C_PartyUpdate final
{
public:
	E_NotificationPartyStatus                     Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_PartyUpdate) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_PartyUpdate");
static_assert(sizeof(UMG_Notification_Party_C_PartyUpdate) == 0x000001, "Wrong size on UMG_Notification_Party_C_PartyUpdate");
static_assert(offsetof(UMG_Notification_Party_C_PartyUpdate, Status) == 0x000000, "Member 'UMG_Notification_Party_C_PartyUpdate::Status' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.OnChangeInvitePartyConvocationDelagateDialogResult
// 0x0001 (0x0001 - 0x0000)
struct UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult");
static_assert(sizeof(UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult) == 0x000001, "Wrong size on UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult");
static_assert(offsetof(UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult, Result) == 0x000000, "Member 'UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult::Result' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.OnChangeInvitePartyConvocationDelegate_Event
// 0x0008 (0x0008 - 0x0000)
struct UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event final
{
public:
	bool                                          bCanceled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D2E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MigrationResponseCode;                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event) == 0x000004, "Wrong alignment on UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event");
static_assert(sizeof(UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event) == 0x000008, "Wrong size on UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event");
static_assert(offsetof(UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event, bCanceled) == 0x000000, "Member 'UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event::bCanceled' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event, MigrationResponseCode) == 0x000004, "Member 'UMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event::MigrationResponseCode' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Tick
// 0x003C (0x003C - 0x0000)
struct UMG_Notification_Party_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_Tick) == 0x000004, "Wrong alignment on UMG_Notification_Party_C_Tick");
static_assert(sizeof(UMG_Notification_Party_C_Tick) == 0x00003C, "Wrong size on UMG_Notification_Party_C_Tick");
static_assert(offsetof(UMG_Notification_Party_C_Tick, MyGeometry) == 0x000000, "Member 'UMG_Notification_Party_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Tick, InDeltaTime) == 0x000038, "Member 'UMG_Notification_Party_C_Tick::InDeltaTime' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.PartyMigrationAnswer_Event
// 0x0001 (0x0001 - 0x0000)
struct UMG_Notification_Party_C_PartyMigrationAnswer_Event final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_PartyMigrationAnswer_Event) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_PartyMigrationAnswer_Event");
static_assert(sizeof(UMG_Notification_Party_C_PartyMigrationAnswer_Event) == 0x000001, "Wrong size on UMG_Notification_Party_C_PartyMigrationAnswer_Event");
static_assert(offsetof(UMG_Notification_Party_C_PartyMigrationAnswer_Event, Result) == 0x000000, "Member 'UMG_Notification_Party_C_PartyMigrationAnswer_Event::Result' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.OnResponsedGetPlayerProfile
// 0x0408 (0x0408 - 0x0000)
struct UMG_Notification_Party_C_OnResponsedGetPlayerProfile final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D2F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_OnResponsedGetPlayerProfile) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_OnResponsedGetPlayerProfile");
static_assert(sizeof(UMG_Notification_Party_C_OnResponsedGetPlayerProfile) == 0x000408, "Wrong size on UMG_Notification_Party_C_OnResponsedGetPlayerProfile");
static_assert(offsetof(UMG_Notification_Party_C_OnResponsedGetPlayerProfile, bWasSuccessful) == 0x000000, "Member 'UMG_Notification_Party_C_OnResponsedGetPlayerProfile::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_OnResponsedGetPlayerProfile, PlayerProfileDetailMenuData) == 0x000008, "Member 'UMG_Notification_Party_C_OnResponsedGetPlayerProfile::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_OnResponsedGetPlayerProfile, RetCode) == 0x000400, "Member 'UMG_Notification_Party_C_OnResponsedGetPlayerProfile::RetCode' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.OnDestruct_Event
// 0x03F8 (0x03F8 - 0x0000)
struct UMG_Notification_Party_C_OnDestruct_Event final
{
public:
	struct FPlayerProfileMenuDetailData           RetData;                                           // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_Notification_Party_C_OnDestruct_Event) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_OnDestruct_Event");
static_assert(sizeof(UMG_Notification_Party_C_OnDestruct_Event) == 0x0003F8, "Wrong size on UMG_Notification_Party_C_OnDestruct_Event");
static_assert(offsetof(UMG_Notification_Party_C_OnDestruct_Event, RetData) == 0x000000, "Member 'UMG_Notification_Party_C_OnDestruct_Event::RetData' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.OnPartyInviteResponse_Event
// 0x0001 (0x0001 - 0x0000)
struct UMG_Notification_Party_C_OnPartyInviteResponse_Event final
{
public:
	bool                                          IsAccept;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_OnPartyInviteResponse_Event) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_OnPartyInviteResponse_Event");
static_assert(sizeof(UMG_Notification_Party_C_OnPartyInviteResponse_Event) == 0x000001, "Wrong size on UMG_Notification_Party_C_OnPartyInviteResponse_Event");
static_assert(offsetof(UMG_Notification_Party_C_OnPartyInviteResponse_Event, IsAccept) == 0x000000, "Member 'UMG_Notification_Party_C_OnPartyInviteResponse_Event::IsAccept' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.OnCancelMatching_Dialog_Event
// 0x0001 (0x0001 - 0x0000)
struct UMG_Notification_Party_C_OnCancelMatching_Dialog_Event final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_OnCancelMatching_Dialog_Event) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_OnCancelMatching_Dialog_Event");
static_assert(sizeof(UMG_Notification_Party_C_OnCancelMatching_Dialog_Event) == 0x000001, "Wrong size on UMG_Notification_Party_C_OnCancelMatching_Dialog_Event");
static_assert(offsetof(UMG_Notification_Party_C_OnCancelMatching_Dialog_Event, Result) == 0x000000, "Member 'UMG_Notification_Party_C_OnCancelMatching_Dialog_Event::Result' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.GetResultMultipleDialog
// 0x0004 (0x0004 - 0x0000)
struct UMG_Notification_Party_C_GetResultMultipleDialog final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_GetResultMultipleDialog) == 0x000004, "Wrong alignment on UMG_Notification_Party_C_GetResultMultipleDialog");
static_assert(sizeof(UMG_Notification_Party_C_GetResultMultipleDialog) == 0x000004, "Wrong size on UMG_Notification_Party_C_GetResultMultipleDialog");
static_assert(offsetof(UMG_Notification_Party_C_GetResultMultipleDialog, Result) == 0x000000, "Member 'UMG_Notification_Party_C_GetResultMultipleDialog::Result' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Init
// 0x0058 (0x0058 - 0x0000)
struct UMG_Notification_Party_C_Init final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D30[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D31[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0040(0x0018)()
};
static_assert(alignof(UMG_Notification_Party_C_Init) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_Init");
static_assert(sizeof(UMG_Notification_Party_C_Init) == 0x000058, "Wrong size on UMG_Notification_Party_C_Init");
static_assert(offsetof(UMG_Notification_Party_C_Init, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'UMG_Notification_Party_C_Init::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Init, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_Init::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Init, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_Init::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Init, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'UMG_Notification_Party_C_Init::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Init, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_Notification_Party_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Init, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'UMG_Notification_Party_C_Init::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Init, CallFunc_GetText_ReturnValue_1) == 0x000040, "Member 'UMG_Notification_Party_C_Init::CallFunc_GetText_ReturnValue_1' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Get_InviteReceived_Visibility_0
// 0x0048 (0x0048 - 0x0000)
struct UMG_Notification_Party_C_Get_InviteReceived_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D32[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo;       // 0x0008(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_Get_InviteReceived_Visibility_0) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_Get_InviteReceived_Visibility_0");
static_assert(sizeof(UMG_Notification_Party_C_Get_InviteReceived_Visibility_0) == 0x000048, "Wrong size on UMG_Notification_Party_C_Get_InviteReceived_Visibility_0");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_Visibility_0, ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_Get_InviteReceived_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_Visibility_0, CallFunc_GetPendingInviteInfo_OutInviteInfo) == 0x000008, "Member 'UMG_Notification_Party_C_Get_InviteReceived_Visibility_0::CallFunc_GetPendingInviteInfo_OutInviteInfo' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_Visibility_0, CallFunc_GetPendingInviteInfo_ReturnValue) == 0x000040, "Member 'UMG_Notification_Party_C_Get_InviteReceived_Visibility_0::CallFunc_GetPendingInviteInfo_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Get_JumpConvocation_Visibility_0
// 0x0028 (0x0028 - 0x0000)
struct UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D33[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D34[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasConvocation_ReturnValue;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0");
static_assert(sizeof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0) == 0x000028, "Wrong size on UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0");
static_assert(offsetof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0, ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0, CallFunc_GetCurrentParty_OutPartyState) == 0x000008, "Member 'UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0, CallFunc_GetCurrentParty_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x000018, "Member 'UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0, CallFunc_IsLocalPartyLeader_ReturnValue) == 0x000021, "Member 'UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0::CallFunc_IsLocalPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0, CallFunc_HasConvocation_ReturnValue) == 0x000022, "Member 'UMG_Notification_Party_C_Get_JumpConvocation_Visibility_0::CallFunc_HasConvocation_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Get_InviteReceived_CountText_Text_0
// 0x0070 (0x0070 - 0x0000)
struct UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo;       // 0x0018(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D35[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0058(0x0018)()
};
static_assert(alignof(UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0");
static_assert(sizeof(UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0) == 0x000070, "Wrong size on UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0, ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0, CallFunc_GetPendingInviteInfo_OutInviteInfo) == 0x000018, "Member 'UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0::CallFunc_GetPendingInviteInfo_OutInviteInfo' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0, CallFunc_GetPendingInviteInfo_ReturnValue) == 0x000050, "Member 'UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0::CallFunc_GetPendingInviteInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000051, "Member 'UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0, CallFunc_Conv_FloatToText_ReturnValue) == 0x000058, "Member 'UMG_Notification_Party_C_Get_InviteReceived_CountText_Text_0::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.GetQuickAccessKeyText
// 0x00A0 (0x00A0 - 0x0000)
struct UMG_Notification_Party_C_GetQuickAccessKeyText final
{
public:
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBookMarkTypeKey_ReturnValue;           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(UMG_Notification_Party_C_GetQuickAccessKeyText) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_GetQuickAccessKeyText");
static_assert(sizeof(UMG_Notification_Party_C_GetQuickAccessKeyText) == 0x0000A0, "Wrong size on UMG_Notification_Party_C_GetQuickAccessKeyText");
static_assert(offsetof(UMG_Notification_Party_C_GetQuickAccessKeyText, CallFunc_MakeLiteralString_ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_GetQuickAccessKeyText::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetQuickAccessKeyText, CallFunc_GetBookMarkTypeKey_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_GetQuickAccessKeyText::CallFunc_GetBookMarkTypeKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetQuickAccessKeyText, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_Notification_Party_C_GetQuickAccessKeyText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetQuickAccessKeyText, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'UMG_Notification_Party_C_GetQuickAccessKeyText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetQuickAccessKeyText, K2Node_MakeArray_Array) == 0x000078, "Member 'UMG_Notification_Party_C_GetQuickAccessKeyText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetQuickAccessKeyText, CallFunc_Format_ReturnValue) == 0x000088, "Member 'UMG_Notification_Party_C_GetQuickAccessKeyText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.GetOperateMode
// 0x0018 (0x0018 - 0x0000)
struct UMG_Notification_Party_C_GetOperateMode final
{
public:
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D36[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_GetOperateMode) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_GetOperateMode");
static_assert(sizeof(UMG_Notification_Party_C_GetOperateMode) == 0x000018, "Wrong size on UMG_Notification_Party_C_GetOperateMode");
static_assert(offsetof(UMG_Notification_Party_C_GetOperateMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000000, "Member 'UMG_Notification_Party_C_GetOperateMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetOperateMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_GetOperateMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetOperateMode, CallFunc_GetOperateMode_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_GetOperateMode::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetOperateMode, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'UMG_Notification_Party_C_GetOperateMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.SetPartyText
// 0x0068 (0x0068 - 0x0000)
struct UMG_Notification_Party_C_SetPartyText final
{
public:
	class UTextBlock*                             OutText;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BaseText;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(UMG_Notification_Party_C_SetPartyText) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_SetPartyText");
static_assert(sizeof(UMG_Notification_Party_C_SetPartyText) == 0x000068, "Wrong size on UMG_Notification_Party_C_SetPartyText");
static_assert(offsetof(UMG_Notification_Party_C_SetPartyText, OutText) == 0x000000, "Member 'UMG_Notification_Party_C_SetPartyText::OutText' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_SetPartyText, BaseText) == 0x000008, "Member 'UMG_Notification_Party_C_SetPartyText::BaseText' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_SetPartyText, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'UMG_Notification_Party_C_SetPartyText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_SetPartyText, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000030, "Member 'UMG_Notification_Party_C_SetPartyText::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_SetPartyText, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'UMG_Notification_Party_C_SetPartyText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_SetPartyText, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'UMG_Notification_Party_C_SetPartyText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.CanAcceptInvite
// 0x0001 (0x0001 - 0x0000)
struct UMG_Notification_Party_C_CanAcceptInvite final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_CanAcceptInvite) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_CanAcceptInvite");
static_assert(sizeof(UMG_Notification_Party_C_CanAcceptInvite) == 0x000001, "Wrong size on UMG_Notification_Party_C_CanAcceptInvite");
static_assert(offsetof(UMG_Notification_Party_C_CanAcceptInvite, bResult) == 0x000000, "Member 'UMG_Notification_Party_C_CanAcceptInvite::bResult' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.CanCreateInviteMessage
// 0x0128 (0x0128 - 0x0000)
struct UMG_Notification_Party_C_CanCreateInviteMessage final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D37[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D38[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInviteInfo                          CallFunc_GetPendingInviteInfo_OutInviteInfo;       // 0x0050(0x0038)()
	bool                                          CallFunc_GetPendingInviteInfo_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D39[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0090(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
};
static_assert(alignof(UMG_Notification_Party_C_CanCreateInviteMessage) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_CanCreateInviteMessage");
static_assert(sizeof(UMG_Notification_Party_C_CanCreateInviteMessage) == 0x000128, "Wrong size on UMG_Notification_Party_C_CanCreateInviteMessage");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, bResult) == 0x000000, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::bResult' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_GetPartySystemText_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_GetRestrictText_ReturnValue) == 0x000018, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, Temp_bool_Variable) == 0x000048, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_GetPendingInviteInfo_OutInviteInfo) == 0x000050, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_GetPendingInviteInfo_OutInviteInfo' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_GetPendingInviteInfo_ReturnValue) == 0x000088, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_GetPendingInviteInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000089, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x00008A, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000090, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, K2Node_Select_Default) == 0x0000A8, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, K2Node_MakeStruct_FormatArgumentData) == 0x0000C0, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, K2Node_MakeArray_Array) == 0x000100, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_CanCreateInviteMessage, CallFunc_Format_ReturnValue) == 0x000110, "Member 'UMG_Notification_Party_C_CanCreateInviteMessage::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.PartyMigrationAnswerRemainTimeCounter
// 0x0004 (0x0004 - 0x0000)
struct UMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter final
{
public:
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter) == 0x000004, "Wrong alignment on UMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter");
static_assert(sizeof(UMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter) == 0x000004, "Wrong size on UMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter");
static_assert(offsetof(UMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.GetCurrentPartyMemberStateGeneral
// 0x0048 (0x0048 - 0x0000)
struct UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral final
{
public:
	class USBPartyMemberStateGeneral*             CurrentPartyMemberStateGeneral;                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D3A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D3B[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberState_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral");
static_assert(sizeof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral) == 0x000048, "Wrong size on UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, CurrentPartyMemberStateGeneral) == 0x000000, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::CurrentPartyMemberStateGeneral' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, K2Node_DynamicCast_AsSBPlayer_State) == 0x000020, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, CallFunc_GetCurrentPartyMemberState_ReturnValue) == 0x000030, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::CallFunc_GetCurrentPartyMemberState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, K2Node_DynamicCast_AsSBParty_Member_State_General) == 0x000038, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::K2Node_DynamicCast_AsSBParty_Member_State_General' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'UMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.IsOwningPlayerPartyLeader
// 0x0020 (0x0020 - 0x0000)
struct UMG_Notification_Party_C_IsOwningPlayerPartyLeader final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D3C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_IsOwningPlayerPartyLeader) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_IsOwningPlayerPartyLeader");
static_assert(sizeof(UMG_Notification_Party_C_IsOwningPlayerPartyLeader) == 0x000020, "Wrong size on UMG_Notification_Party_C_IsOwningPlayerPartyLeader");
static_assert(offsetof(UMG_Notification_Party_C_IsOwningPlayerPartyLeader, ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_IsOwningPlayerPartyLeader::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsOwningPlayerPartyLeader, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_IsOwningPlayerPartyLeader::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsOwningPlayerPartyLeader, K2Node_DynamicCast_AsSBPlayer_State) == 0x000010, "Member 'UMG_Notification_Party_C_IsOwningPlayerPartyLeader::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsOwningPlayerPartyLeader, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_Notification_Party_C_IsOwningPlayerPartyLeader::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsOwningPlayerPartyLeader, CallFunc_IsCurrentPartyLeader_ReturnValue) == 0x000019, "Member 'UMG_Notification_Party_C_IsOwningPlayerPartyLeader::CallFunc_IsCurrentPartyLeader_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.HideNotification
// 0x0008 (0x0008 - 0x0000)
struct UMG_Notification_Party_C_HideNotification final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_HideNotification) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_HideNotification");
static_assert(sizeof(UMG_Notification_Party_C_HideNotification) == 0x000008, "Wrong size on UMG_Notification_Party_C_HideNotification");
static_assert(offsetof(UMG_Notification_Party_C_HideNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_HideNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Can Open Party Member Migration Dialog
// 0x0038 (0x0038 - 0x0000)
struct UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCanOpenDialog;                                    // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D3D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberStateGeneral*             CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D3E[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConvocation_ReturnValue;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue;           // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasConvocation_ReturnValue;               // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAgreeToMigration_ReturnValue;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog");
static_assert(sizeof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog) == 0x000038, "Wrong size on UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, Result) == 0x000000, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::Result' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, bCanOpenDialog) == 0x000001, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::bCanOpenDialog' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral) == 0x000008, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_GetCurrentPartyMemberStateGeneral_CurrentPartyMemberStateGeneral' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_GetCurrentParty_OutPartyState) == 0x000010, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_GetCurrentParty_ReturnValue) == 0x000018, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x000020, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_IsConvocation_ReturnValue) == 0x000029, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_IsConvocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_IsLocalPartyLeader_ReturnValue) == 0x00002A, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_IsLocalPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_HasConvocation_ReturnValue) == 0x00002B, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_HasConvocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_Not_PreBool_ReturnValue) == 0x00002C, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_HasAgreeToMigration_ReturnValue) == 0x00002D, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_HasAgreeToMigration_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002E, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_BooleanAND_ReturnValue) == 0x00002F, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_BooleanAND_ReturnValue_1) == 0x000030, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog, CallFunc_BooleanAND_ReturnValue_2) == 0x000031, "Member 'UMG_Notification_Party_C_Can_Open_Party_Member_Migration_Dialog::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.ResetPartyDialogState
// 0x0002 (0x0002 - 0x0000)
struct UMG_Notification_Party_C_ResetPartyDialogState final
{
public:
	ENotificationDialogStatus                     CallFunc_GetNotificationPartyStatus_ReturnValue;   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_ResetPartyDialogState) == 0x000001, "Wrong alignment on UMG_Notification_Party_C_ResetPartyDialogState");
static_assert(sizeof(UMG_Notification_Party_C_ResetPartyDialogState) == 0x000002, "Wrong size on UMG_Notification_Party_C_ResetPartyDialogState");
static_assert(offsetof(UMG_Notification_Party_C_ResetPartyDialogState, CallFunc_GetNotificationPartyStatus_ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_ResetPartyDialogState::CallFunc_GetNotificationPartyStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_ResetPartyDialogState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'UMG_Notification_Party_C_ResetPartyDialogState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.NotificationConvocationMessage
// 0x0090 (0x0090 - 0x0000)
struct UMG_Notification_Party_C_NotificationConvocationMessage final
{
public:
	bool                                          CallFunc_IsOwningPlayerPartyLeader_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D3F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D40[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_1;         // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D41[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0078(0x0018)()
};
static_assert(alignof(UMG_Notification_Party_C_NotificationConvocationMessage) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_NotificationConvocationMessage");
static_assert(sizeof(UMG_Notification_Party_C_NotificationConvocationMessage) == 0x000090, "Wrong size on UMG_Notification_Party_C_NotificationConvocationMessage");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_IsOwningPlayerPartyLeader_ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_IsOwningPlayerPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_GetPartySystemText_ReturnValue) == 0x000018, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_Conv_IntToByte_ReturnValue) == 0x000058, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000059, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_GetValidValue_ReturnValue) == 0x00005A, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_GetPartySystemText_ReturnValue_1) == 0x000060, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_GetPartySystemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, K2Node_SwitchEnum_CmpSuccess) == 0x000070, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_NotificationConvocationMessage, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000078, "Member 'UMG_Notification_Party_C_NotificationConvocationMessage::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Get Status Time
// 0x0018 (0x0018 - 0x0000)
struct UMG_Notification_Party_C_Get_Status_Time final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D42[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_Get_Status_Time) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_Get_Status_Time");
static_assert(sizeof(UMG_Notification_Party_C_Get_Status_Time) == 0x000018, "Wrong size on UMG_Notification_Party_C_Get_Status_Time");
static_assert(offsetof(UMG_Notification_Party_C_Get_Status_Time, ReturnValue) == 0x000000, "Member 'UMG_Notification_Party_C_Get_Status_Time::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_Status_Time, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_Get_Status_Time::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_Status_Time, CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_Get_Status_Time::CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.Get Change Time
// 0x0010 (0x0010 - 0x0000)
struct UMG_Notification_Party_C_Get_Change_Time final
{
public:
	float                                         Tiem;                                              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D43[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_Notification_Party_C_Get_Change_Time) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_Get_Change_Time");
static_assert(sizeof(UMG_Notification_Party_C_Get_Change_Time) == 0x000010, "Wrong size on UMG_Notification_Party_C_Get_Change_Time");
static_assert(offsetof(UMG_Notification_Party_C_Get_Change_Time, Tiem) == 0x000000, "Member 'UMG_Notification_Party_C_Get_Change_Time::Tiem' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_Get_Change_Time, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_Get_Change_Time::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.IsPress
// 0x0020 (0x0020 - 0x0000)
struct UMG_Notification_Party_C_IsPress final
{
public:
	bool                                          Press;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D44[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSimplycityPartyKeyPress_ReturnValue;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D45[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_IsPress) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_IsPress");
static_assert(sizeof(UMG_Notification_Party_C_IsPress) == 0x000020, "Wrong size on UMG_Notification_Party_C_IsPress");
static_assert(offsetof(UMG_Notification_Party_C_IsPress, Press) == 0x000000, "Member 'UMG_Notification_Party_C_IsPress::Press' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPress, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_IsPress::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPress, CallFunc_IsSimplycityPartyKeyPress_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_IsPress::CallFunc_IsSimplycityPartyKeyPress_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPress, CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue) == 0x000014, "Member 'UMG_Notification_Party_C_IsPress::CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPress, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'UMG_Notification_Party_C_IsPress::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPress, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'UMG_Notification_Party_C_IsPress::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.IsPressStatus
// 0x0030 (0x0030 - 0x0000)
struct UMG_Notification_Party_C_IsPressStatus final
{
public:
	bool                                          Press;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRecruiting;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D46[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D47[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRecruiting_ReturnValue;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPress_Press;                            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_IsPressStatus) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_IsPressStatus");
static_assert(sizeof(UMG_Notification_Party_C_IsPressStatus) == 0x000030, "Wrong size on UMG_Notification_Party_C_IsPressStatus");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, Press) == 0x000000, "Member 'UMG_Notification_Party_C_IsPressStatus::Press' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, IsRecruiting) == 0x000001, "Member 'UMG_Notification_Party_C_IsPressStatus::IsRecruiting' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_GetCurrentParty_OutPartyState) == 0x000008, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_GetCurrentParty_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x000018, "Member 'UMG_Notification_Party_C_IsPressStatus::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_Notification_Party_C_IsPressStatus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_InDungeonGame_ReturnValue) == 0x000021, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_IsRecruiting_ReturnValue) == 0x000022, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_IsRecruiting_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_Not_PreBool_ReturnValue_1) == 0x000023, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_IsPress_Press) == 0x000024, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_IsPress_Press' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_Not_PreBool_ReturnValue_2) == 0x000025, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_BooleanAND_ReturnValue) == 0x000026, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_BooleanAND_ReturnValue_1) == 0x000027, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsPressStatus, CallFunc_BooleanAND_ReturnValue_2) == 0x000028, "Member 'UMG_Notification_Party_C_IsPressStatus::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.MatchStateObserver
// 0x0018 (0x0018 - 0x0000)
struct UMG_Notification_Party_C_MatchStateObserver final
{
public:
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D48[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_MatchStateObserver) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_MatchStateObserver");
static_assert(sizeof(UMG_Notification_Party_C_MatchStateObserver) == 0x000018, "Wrong size on UMG_Notification_Party_C_MatchStateObserver");
static_assert(offsetof(UMG_Notification_Party_C_MatchStateObserver, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000000, "Member 'UMG_Notification_Party_C_MatchStateObserver::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_MatchStateObserver, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_MatchStateObserver::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_MatchStateObserver, CallFunc_IsMatched_ReturnValue) == 0x000010, "Member 'UMG_Notification_Party_C_MatchStateObserver::CallFunc_IsMatched_ReturnValue' has a wrong offset!");

// Function UMG_Notification_Party.UMG_Notification_Party_C.IsSimplycityPartyStateChangeBase
// 0x0040 (0x0040 - 0x0000)
struct UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D49[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D4A[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimplycityPartyOn_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists_1;     // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D4B[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue_1; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase) == 0x000008, "Wrong alignment on UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase");
static_assert(sizeof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase) == 0x000040, "Wrong size on UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, bResult) == 0x000000, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::bResult' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000001, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_GetCurrentParty_OutPartyState) == 0x000010, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_GetCurrentParty_ReturnValue) == 0x000018, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_GetSimplycityPartyOn_ReturnValue) == 0x000019, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_GetSimplycityPartyOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x000020, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_IsSimplycityPartyOn_ReturnValue) == 0x00002A, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_IsSimplycityPartyOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002B, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_IsLocalPartyLeader_ReturnValue) == 0x00002C, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_IsLocalPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_GetCurrentMatchmakingState_bExists_1) == 0x00002D, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_GetCurrentMatchmakingState_bExists_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_GetCurrentMatchmakingState_ReturnValue_1) == 0x000030, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_GetCurrentMatchmakingState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_BooleanAND_ReturnValue_1) == 0x000038, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase, CallFunc_BooleanAND_ReturnValue_2) == 0x000039, "Member 'UMG_Notification_Party_C_IsSimplycityPartyStateChangeBase::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

}

