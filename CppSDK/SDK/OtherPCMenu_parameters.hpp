#pragma once

 

// Package: OtherPCMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OtherPCMenu.OtherPCMenu_C.ExecuteUbergraph_OtherPCMenu
// 0x1408 (0x1408 - 0x0000)
struct OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C82[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetOwningPlayerState_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C83[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetOtherPlayerState_OutPlayerState;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C84[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildRepData                          CallFunc_GetRepData_ReturnValue;                   // 0x0030(0x0080)()
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPrivilegeCacheUGC_ReturnValue;         // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C85[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C86[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C87[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0118(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C88[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0138(0x0018)()
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C89[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0178(0x0018)()
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_1;                       // 0x01B0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8A[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x01B8(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C8B[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01D8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0218(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0228(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C8C[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0258(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_SendInvitation_RecipientPlayer_CastInput; // 0x0278(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8D[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0298(0x0018)()
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C8E[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x02C0(0x0018)()
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x02E0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C8F[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x02E8(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x06E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C90[0x4];                                     // 0x06E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput_1;          // 0x06E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_2;             // 0x06F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0708(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0718(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C91[0x7];                                     // 0x0731(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0740(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMounting_ReturnValue;                   // 0x0748(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0749(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C92[0x6];                                     // 0x074A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0750(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMounting_ReturnValue_1;                 // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0759(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C93[0x6];                                     // 0x075A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0760(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0768(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0770(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C94[0x7];                                     // 0x0779(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0780(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x07A8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x07D0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x07F8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x0820(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0848(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_6;                    // 0x0870(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_7;                    // 0x0898(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_8;                    // 0x08C0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_9;                    // 0x08E8(0x0028)()
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0910(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0920(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0930(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0938(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0950(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C95[0x7];                                     // 0x0951(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0958(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0960(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C96[0x7];                                     // 0x0961(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0968(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0970(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0971(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0972(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x0973(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x0974(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists_1;     // 0x0975(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C97[0x2];                                     // 0x0976(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue_1; // 0x0978(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0980(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0981(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanSendInvitationSelf_bResult;            // 0x0982(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0983(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C98[0x4];                                     // 0x0984(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_SendInvitation_RecipientPlayer_CastInput_1; // 0x0988(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_10;                   // 0x0998(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_11;                   // 0x09C0(0x0028)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x09E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x09F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x09F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0A08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C99[0x7];                                     // 0x0A09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0A10(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0A20(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0A38(0x0018)()
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0A50(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0A60(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue_1;          // 0x0A70(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0A80(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0A90(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0A98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0AA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C9A[0x7];                                     // 0x0AA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0AA8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0AB8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0AD0(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_1;         // 0x0AE8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0AF8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0B38(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0B50(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0B60(0x0018)()
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput_1;        // 0x0B78(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue_1;           // 0x0B88(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0B98(0x0018)()
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0BB0(0x0010)(ZeroConstructor, NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0BC0(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0C00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C9B[0x4];                                     // 0x0C04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0C08(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0C18(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0C30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0C31(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C9C[0x6];                                     // 0x0C32(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0C38(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0C40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0C48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0C49(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C9D[0x6];                                     // 0x0C4A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0C50(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon_1;       // 0x0C58(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0C60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C9E[0x7];                                     // 0x0C61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOtherPCEmoteMenu_C*                    CallFunc_Create_ReturnValue_1;                     // 0x0C68(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0C70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C9F[0x7];                                     // 0x0C71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x0C78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMounting_ReturnValue_2;                 // 0x0C80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0C81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0C82(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA0[0x5];                                     // 0x0C83(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0C88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput_2;          // 0x0C90(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_3;             // 0x0CA0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0CB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0CB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA1[0x3];                                     // 0x0CB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0CBC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4CA2[0x4];                                     // 0x0CCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_ProfileData;                    // 0x0CD0(0x03F8)()
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x10C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckProfileEnable_IsOk;                  // 0x10D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA3[0x7];                                     // 0x10D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput_3;          // 0x10E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_4;             // 0x10F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA4[0x3];                                     // 0x1101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x1104(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bCheckBlockStatus)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x1114(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4CA5[0x4];                                     // 0x1124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x1128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bBlackListed;                   // 0x1130(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA6[0x7];                                     // 0x1131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_SenderId;                       // 0x1138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_1;          // 0x1148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x1150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x1160(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x1178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA7[0x7];                                     // 0x1179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_3;       // 0x1180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x1188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA8[0x7];                                     // 0x1189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_4;       // 0x1190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x1198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x1199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x119A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               K2Node_CustomEvent_SendAdventureCardResult;        // 0x119B(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_ShowSendAdventureCardError_ReturnValue;   // 0x11A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x11A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CA9[0x3];                                     // 0x11A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_6;            // 0x11A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x11B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CAA[0x7];                                     // 0x11B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x11C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FSendAdventureCardResult& SendAdventureCardResult)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x11C8(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x11D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x11E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x11F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x1210(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x1228(0x0010)(ZeroConstructor, NoDestructor)
	struct FLikeSend                              K2Node_MakeStruct_LikeSend;                        // 0x1238(0x0020)()
	TArray<struct FLikeSend>                      K2Node_MakeArray_Array_3;                          // 0x1258(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x1268(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x1278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x1280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x1288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x1289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CAB[0x6];                                     // 0x128A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x1290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x1298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x1299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bCheckBlockStatus;              // 0x129A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x129B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDemoManager_IsValid;                   // 0x129C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CAC[0x3];                                     // 0x129D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x12A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FSendAdventureCardResult& SendAdventureCardResult)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x12A8(0x0010)(ZeroConstructor, NoDestructor)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_2;               // 0x12B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_3;               // 0x12C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_DungeonNormal*             K2Node_DynamicCast_AsSBGame_State_Dungeon_Normal;  // 0x12C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x12D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CAD[0x7];                                     // 0x12D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_DungeonNormal*             K2Node_DynamicCast_AsSBGame_State_Dungeon_Normal_1; // 0x12D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x12E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CAE[0x7];                                     // 0x12E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x12E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x12F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x12F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetDemoManager_IsValid_1;                 // 0x1308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CAF[0x7];                                     // 0x1309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue_1;             // 0x1310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x1318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB0[0x7];                                     // 0x1319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x1320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdatePlayerIcon_download;                // 0x1328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB1[0x3];                                     // 0x1329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bBlackListed, const class FString& SenderId)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x132C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x133C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4CB2[0x4];                                     // 0x134C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue_1;            // 0x1350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue_1;              // 0x1360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x1368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UpdatePlayerIcon_download_1;              // 0x1369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB3[0x2];                                     // 0x136A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FPlayerProfileMenuDetailData& ProfileData)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x136C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckPlatform_ReturnValue;                // 0x137C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCommunicateRestrict_ReturnValue;       // 0x137D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB4[0x2];                                     // 0x137E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x1380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPlatform_ReturnValue_1;              // 0x1390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB5[0x7];                                     // 0x1391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x1398(0x0018)()
	bool                                          CallFunc_HasCommunicateRestrict_ReturnValue_1;     // 0x13B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB6[0x7];                                     // 0x13B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x13B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x13C8(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;           // 0x13E0(0x0010)(ZeroConstructor, NoDestructor)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_2;                     // 0x13F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnbaleList)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x13F8(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu) == 0x000008, "Wrong alignment on OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu");
static_assert(sizeof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu) == 0x001408, "Wrong size on OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, EntryPoint) == 0x000000, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetOwningPlayerState_ReturnValue) == 0x000008, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetOwningPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetOtherPlayerState_OutPlayerState) == 0x000018, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetOtherPlayerState_OutPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetGuildComponent_ReturnValue) == 0x000028, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetRepData_ReturnValue) == 0x000030, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetRepData_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsGuildMember_ReturnValue) == 0x0000B0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, Temp_bool_Variable) == 0x0000B1, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_HasPrivilegeCacheUGC_ReturnValue) == 0x0000B2, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_HasPrivilegeCacheUGC_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000B8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x0000E0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000E8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_SwitchEnum_CmpSuccess) == 0x0000F8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000118, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000130, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000131, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000138, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000150, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetPartySystemText_ReturnValue) == 0x000160, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_2) == 0x000170, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000178, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterName_self_CastInput) == 0x000190, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterName_ReturnValue) == 0x0001A0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_Result_1) == 0x0001B0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0001B8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001D0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_FormatArgumentData) == 0x0001D8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeArray_Array) == 0x000218, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Format_ReturnValue) == 0x000228, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_3) == 0x000240, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_ReturnValue) == 0x000248, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_self_CastInput) == 0x000258, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_ReturnValue_1) == 0x000268, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_SendInvitation_RecipientPlayer_CastInput) == 0x000278, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_SendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000288, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000290, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetRestrictText_ReturnValue) == 0x000298, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0002B0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess) == 0x0002B8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_Select_Default) == 0x0002C0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetConcernedList_ReturnValue) == 0x0002D8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_bWasSuccessful_1) == 0x0002E0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x0002E8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_RetCode) == 0x0006E0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_self_CastInput_1) == 0x0006E8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_ReturnValue_2) == 0x0006F8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x000708, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000718, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000730, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000738, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Create_ReturnValue) == 0x000740, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsMounting_ReturnValue) == 0x000748, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsMounting_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000749, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000750, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsMounting_ReturnValue_1) == 0x000758, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsMounting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000759, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000760, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000768, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_Event_Animation) == 0x000770, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000778, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor) == 0x000780, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_1) == 0x0007A8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_2) == 0x0007D0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_3) == 0x0007F8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_4) == 0x000820, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_5) == 0x000848, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_6) == 0x000870, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_6' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_7) == 0x000898, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_7' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_8) == 0x0008C0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_8' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_9) == 0x0008E8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_9' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetFaceImageURL_ReturnValue) == 0x000910, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000920, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_DownloadImage_ReturnValue) == 0x000930, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000938, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_4) == 0x000950, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000958, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000960, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000968, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_Result) == 0x000970, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_5) == 0x000971, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000972, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsGathered_ReturnValue) == 0x000973, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsMatched_ReturnValue) == 0x000974, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCurrentMatchmakingState_bExists_1) == 0x000975, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCurrentMatchmakingState_bExists_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCurrentMatchmakingState_ReturnValue_1) == 0x000978, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCurrentMatchmakingState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_BooleanAND_ReturnValue) == 0x000980, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_BooleanOR_ReturnValue) == 0x000981, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_CanSendInvitationSelf_bResult) == 0x000982, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_CanSendInvitationSelf_bResult' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_6) == 0x000983, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_SendInvitation_RecipientPlayer_CastInput_1) == 0x000988, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_SendInvitation_RecipientPlayer_CastInput_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_10) == 0x000998, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_10' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_SlateColor_11) == 0x0009C0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_SlateColor_11' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x0009E8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetHUD_ReturnValue) == 0x0009F0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x0009F8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess_1) == 0x000A08, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000A10, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000A20, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000A38, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_MakeLiteralString_ReturnValue) == 0x000A50, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000A60, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_MakeLiteralString_ReturnValue_1) == 0x000A70, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_MakeLiteralString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000A80, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000A90, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000A98, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess_2) == 0x000AA0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000AA8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000AB8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000AD0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetPartySystemText_ReturnValue_1) == 0x000AE8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetPartySystemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x000AF8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000B38, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeArray_Array_1) == 0x000B50, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Format_ReturnValue_1) == 0x000B60, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterName_self_CastInput_1) == 0x000B78, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterName_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterName_ReturnValue_1) == 0x000B88, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000B98, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000BB0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_FormatArgumentData_2) == 0x000BC0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_PlaySE_ReturnValue) == 0x000C00, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeArray_Array_2) == 0x000C08, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Format_ReturnValue_2) == 0x000C18, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_7) == 0x000C30, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_8) == 0x000C31, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetGameState_ReturnValue) == 0x000C38, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000C40, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess_3) == 0x000C48, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_9) == 0x000C49, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetGameState_ReturnValue_1) == 0x000C50, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon_1) == 0x000C58, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess_4) == 0x000C60, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Create_ReturnValue_1) == 0x000C68, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_10) == 0x000C70, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x000C78, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsMounting_ReturnValue_2) == 0x000C80, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsMounting_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000C81, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x000C82, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000C88, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_self_CastInput_2) == 0x000C90, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_ReturnValue_3) == 0x000CA0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsSBPlayer_State) == 0x000CB0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess_5) == 0x000CB8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000CBC, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_ProfileData) == 0x000CD0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_ProfileData' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0010C8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_CheckProfileEnable_IsOk) == 0x0010D8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_CheckProfileEnable_IsOk' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_self_CastInput_3) == 0x0010E0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetCharacterId_ReturnValue_4) == 0x0010F0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetCharacterId_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_SwitchEnum_CmpSuccess_1) == 0x001100, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x001104, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x001114, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBGameInstance_ReturnValue) == 0x001128, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_bBlackListed) == 0x001130, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_bBlackListed' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_SenderId) == 0x001138, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_SenderId' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBGameInstance_ReturnValue_1) == 0x001148, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x001150, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_14) == 0x001160, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_11) == 0x001178, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_3) == 0x001180, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_12) == 0x001188, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_4) == 0x001190, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_13) == 0x001198, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_14) == 0x001199, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_bWasSuccessful) == 0x00119A, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_SendAdventureCardResult) == 0x00119B, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_SendAdventureCardResult' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_ShowSendAdventureCardError_ReturnValue) == 0x0011A3, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_ShowSendAdventureCardError_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_BooleanOR_ReturnValue_1) == 0x0011A4, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x0011A8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x0011B8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x0011C0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x0011C8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x0011D8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0011E8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_15) == 0x0011F8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_16) == 0x001210, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x001228, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeStruct_LikeSend) == 0x001238, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeStruct_LikeSend' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_MakeArray_Array_3) == 0x001258, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x001268, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetPlayerCharacter_ReturnValue) == 0x001278, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x001280, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_15) == 0x001288, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_16) == 0x001289, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x001290, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Not_PreBool_ReturnValue_4) == 0x001298, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Not_PreBool_ReturnValue_5) == 0x001299, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_bCheckBlockStatus) == 0x00129A, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_bCheckBlockStatus' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_17) == 0x00129B, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetDemoManager_IsValid) == 0x00129C, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetDemoManager_IsValid' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetDemoManager_ReturnValue) == 0x0012A0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_10) == 0x0012A8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetGameState_ReturnValue_2) == 0x0012B8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetGameState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetGameState_ReturnValue_3) == 0x0012C0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetGameState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon_Normal) == 0x0012C8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon_Normal' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess_6) == 0x0012D0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon_Normal_1) == 0x0012D8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon_Normal_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_DynamicCast_bSuccess_7) == 0x0012E0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_Sender) == 0x0012E8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CustomEvent_Param) == 0x0012F0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_11) == 0x0012F8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetDemoManager_IsValid_1) == 0x001308, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetDemoManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetDemoManager_ReturnValue_1) == 0x001310, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetDemoManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetUIManager_IsValid) == 0x001318, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetUIManager_ReturnValue) == 0x001320, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_UpdatePlayerIcon_download) == 0x001328, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_UpdatePlayerIcon_download' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_12) == 0x00132C, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_13) == 0x00133C, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetFaceImageURL_ReturnValue_1) == 0x001350, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetFaceImageURL_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_DownloadImage_ReturnValue_1) == 0x001360, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_DownloadImage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_IsValid_ReturnValue_18) == 0x001368, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_UpdatePlayerIcon_download_1) == 0x001369, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_UpdatePlayerIcon_download_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_14) == 0x00136C, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_CheckPlatform_ReturnValue) == 0x00137C, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_CheckPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_HasCommunicateRestrict_ReturnValue) == 0x00137D, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_HasCommunicateRestrict_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x001380, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_CheckPlatform_ReturnValue_1) == 0x001390, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_CheckPlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_17) == 0x001398, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_HasCommunicateRestrict_ReturnValue_1) == 0x0013B0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_HasCommunicateRestrict_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0013B8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Conv_StringToText_ReturnValue_18) == 0x0013C8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_15) == 0x0013E0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, CallFunc_Create_ReturnValue_2) == 0x0013F0, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu, K2Node_CreateDelegate_OutputDelegate_16) == 0x0013F8, "Member 'OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct OtherPCMenu_C_CustomEvent_1 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCMenu_C_CustomEvent_1) == 0x000008, "Wrong alignment on OtherPCMenu_C_CustomEvent_1");
static_assert(sizeof(OtherPCMenu_C_CustomEvent_1) == 0x000010, "Wrong size on OtherPCMenu_C_CustomEvent_1");
static_assert(offsetof(OtherPCMenu_C_CustomEvent_1, Sender) == 0x000000, "Member 'OtherPCMenu_C_CustomEvent_1::Sender' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CustomEvent_1, Param) == 0x000008, "Member 'OtherPCMenu_C_CustomEvent_1::Param' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.OnCheckBlockStatus_Event
// 0x0001 (0x0001 - 0x0000)
struct OtherPCMenu_C_OnCheckBlockStatus_Event final
{
public:
	bool                                          bCheckBlockStatus;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_OnCheckBlockStatus_Event) == 0x000001, "Wrong alignment on OtherPCMenu_C_OnCheckBlockStatus_Event");
static_assert(sizeof(OtherPCMenu_C_OnCheckBlockStatus_Event) == 0x000001, "Wrong size on OtherPCMenu_C_OnCheckBlockStatus_Event");
static_assert(offsetof(OtherPCMenu_C_OnCheckBlockStatus_Event, bCheckBlockStatus) == 0x000000, "Member 'OtherPCMenu_C_OnCheckBlockStatus_Event::bCheckBlockStatus' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.SendMess(SendAdv)
// 0x0009 (0x0009 - 0x0000)
struct OtherPCMenu_C_SendMess_SendAdv_ final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               SendAdventureCardResult;                           // 0x0001(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_SendMess_SendAdv_) == 0x000001, "Wrong alignment on OtherPCMenu_C_SendMess_SendAdv_");
static_assert(sizeof(OtherPCMenu_C_SendMess_SendAdv_) == 0x000009, "Wrong size on OtherPCMenu_C_SendMess_SendAdv_");
static_assert(offsetof(OtherPCMenu_C_SendMess_SendAdv_, bWasSuccessful) == 0x000000, "Member 'OtherPCMenu_C_SendMess_SendAdv_::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_SendMess_SendAdv_, SendAdventureCardResult) == 0x000001, "Member 'OtherPCMenu_C_SendMess_SendAdv_::SendAdventureCardResult' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.OnNotificationBlackListedDelegate_Event
// 0x0018 (0x0018 - 0x0000)
struct OtherPCMenu_C_OnNotificationBlackListedDelegate_Event final
{
public:
	bool                                          bBlackListed;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SenderId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCMenu_C_OnNotificationBlackListedDelegate_Event) == 0x000008, "Wrong alignment on OtherPCMenu_C_OnNotificationBlackListedDelegate_Event");
static_assert(sizeof(OtherPCMenu_C_OnNotificationBlackListedDelegate_Event) == 0x000018, "Wrong size on OtherPCMenu_C_OnNotificationBlackListedDelegate_Event");
static_assert(offsetof(OtherPCMenu_C_OnNotificationBlackListedDelegate_Event, bBlackListed) == 0x000000, "Member 'OtherPCMenu_C_OnNotificationBlackListedDelegate_Event::bBlackListed' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnNotificationBlackListedDelegate_Event, SenderId) == 0x000008, "Member 'OtherPCMenu_C_OnNotificationBlackListedDelegate_Event::SenderId' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.AddBlackList_Event
// 0x03F8 (0x03F8 - 0x0000)
struct OtherPCMenu_C_AddBlackList_Event final
{
public:
	struct FPlayerProfileMenuDetailData           Param_ProfileData;                                 // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(OtherPCMenu_C_AddBlackList_Event) == 0x000008, "Wrong alignment on OtherPCMenu_C_AddBlackList_Event");
static_assert(sizeof(OtherPCMenu_C_AddBlackList_Event) == 0x0003F8, "Wrong size on OtherPCMenu_C_AddBlackList_Event");
static_assert(offsetof(OtherPCMenu_C_AddBlackList_Event, Param_ProfileData) == 0x000000, "Member 'OtherPCMenu_C_AddBlackList_Event::Param_ProfileData' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.OnCancelMatching_Dialog_Event
// 0x0001 (0x0001 - 0x0000)
struct OtherPCMenu_C_OnCancelMatching_Dialog_Event final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCMenu_C_OnCancelMatching_Dialog_Event) == 0x000001, "Wrong alignment on OtherPCMenu_C_OnCancelMatching_Dialog_Event");
static_assert(sizeof(OtherPCMenu_C_OnCancelMatching_Dialog_Event) == 0x000001, "Wrong size on OtherPCMenu_C_OnCancelMatching_Dialog_Event");
static_assert(offsetof(OtherPCMenu_C_OnCancelMatching_Dialog_Event, Result) == 0x000000, "Member 'OtherPCMenu_C_OnCancelMatching_Dialog_Event::Result' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct OtherPCMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on OtherPCMenu_C_OnAnimationFinished");
static_assert(sizeof(OtherPCMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on OtherPCMenu_C_OnAnimationFinished");
static_assert(offsetof(OtherPCMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'OtherPCMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.OnGetPlayerProfileDetailMenuDelegate_Event
// 0x0408 (0x0408 - 0x0000)
struct OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CB8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event) == 0x000008, "Wrong alignment on OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event");
static_assert(sizeof(OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event) == 0x000408, "Wrong size on OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event");
static_assert(offsetof(OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event, bWasSuccessful) == 0x000000, "Member 'OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event, RetCode) == 0x000400, "Member 'OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event::RetCode' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct OtherPCMenu_C_CustomEvent_0 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCMenu_C_CustomEvent_0) == 0x000001, "Wrong alignment on OtherPCMenu_C_CustomEvent_0");
static_assert(sizeof(OtherPCMenu_C_CustomEvent_0) == 0x000001, "Wrong size on OtherPCMenu_C_CustomEvent_0");
static_assert(offsetof(OtherPCMenu_C_CustomEvent_0, Result) == 0x000000, "Member 'OtherPCMenu_C_CustomEvent_0::Result' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.Init
// 0x00D8 (0x00D8 - 0x0000)
struct OtherPCMenu_C_Init final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBClassType                                  InRole;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTensionTagType                             InTensionTagId;                                    // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CB9[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InComment;                                         // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InAchievementId;                                   // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsSendLIke;                                  // 0x003C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CBA[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OnlineStatus;                                      // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CBB[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         bl;                                                // 0x0048(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CBC[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_SetData_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CBD[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanPlayEmoteStatus_ReturnValue;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckBlackList_ReturnValue;               // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CBE[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0088(0x0020)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanSendInvitationSelf_bResult;            // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CBF[0x5];                                     // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_CanSendInvitation_RecipientPlayer_CastInput; // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanSendInvitation_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_Init) == 0x000008, "Wrong alignment on OtherPCMenu_C_Init");
static_assert(sizeof(OtherPCMenu_C_Init) == 0x0000D8, "Wrong size on OtherPCMenu_C_Init");
static_assert(offsetof(OtherPCMenu_C_Init, InName) == 0x000000, "Member 'OtherPCMenu_C_Init::InName' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, InRole) == 0x000018, "Member 'OtherPCMenu_C_Init::InRole' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, InTensionTagId) == 0x000019, "Member 'OtherPCMenu_C_Init::InTensionTagId' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, InComment) == 0x000020, "Member 'OtherPCMenu_C_Init::InComment' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, InAchievementId) == 0x000038, "Member 'OtherPCMenu_C_Init::InAchievementId' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, Param_IsSendLIke) == 0x00003C, "Member 'OtherPCMenu_C_Init::Param_IsSendLIke' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, OnlineStatus) == 0x000040, "Member 'OtherPCMenu_C_Init::OnlineStatus' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, bl) == 0x000048, "Member 'OtherPCMenu_C_Init::bl' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000058, "Member 'OtherPCMenu_C_Init::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00005C, "Member 'OtherPCMenu_C_Init::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'OtherPCMenu_C_Init::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_SetData_ReturnValue) == 0x000070, "Member 'OtherPCMenu_C_Init::CallFunc_SetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000078, "Member 'OtherPCMenu_C_Init::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_CanPlayEmoteStatus_ReturnValue) == 0x000080, "Member 'OtherPCMenu_C_Init::CallFunc_CanPlayEmoteStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_CheckBlackList_ReturnValue) == 0x000081, "Member 'OtherPCMenu_C_Init::CallFunc_CheckBlackList_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_GetPlatformInfo_ReturnValue) == 0x000088, "Member 'OtherPCMenu_C_Init::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_GetCharacterId_ReturnValue) == 0x0000A8, "Member 'OtherPCMenu_C_Init::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x0000B8, "Member 'OtherPCMenu_C_Init::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x0000B9, "Member 'OtherPCMenu_C_Init::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_CanSendInvitationSelf_bResult) == 0x0000BA, "Member 'OtherPCMenu_C_Init::CallFunc_CanSendInvitationSelf_bResult' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_CanSendInvitation_RecipientPlayer_CastInput) == 0x0000C0, "Member 'OtherPCMenu_C_Init::CallFunc_CanSendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_CanSendInvitation_ReturnValue) == 0x0000D0, "Member 'OtherPCMenu_C_Init::CallFunc_CanSendInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_BooleanAND_ReturnValue) == 0x0000D1, "Member 'OtherPCMenu_C_Init::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Init, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D2, "Member 'OtherPCMenu_C_Init::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.InitProfileDetail
// 0x0430 (0x0430 - 0x0000)
struct OtherPCMenu_C_InitProfileDetail final
{
public:
	struct FPlayerProfileMenuDetailData           Param_ProfileData;                                 // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x03FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x03FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC0[0x4];                                     // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0400(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0418(0x0018)()
};
static_assert(alignof(OtherPCMenu_C_InitProfileDetail) == 0x000008, "Wrong alignment on OtherPCMenu_C_InitProfileDetail");
static_assert(sizeof(OtherPCMenu_C_InitProfileDetail) == 0x000430, "Wrong size on OtherPCMenu_C_InitProfileDetail");
static_assert(offsetof(OtherPCMenu_C_InitProfileDetail, Param_ProfileData) == 0x000000, "Member 'OtherPCMenu_C_InitProfileDetail::Param_ProfileData' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_InitProfileDetail, Temp_bool_Variable) == 0x0003F8, "Member 'OtherPCMenu_C_InitProfileDetail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_InitProfileDetail, Temp_byte_Variable) == 0x0003F9, "Member 'OtherPCMenu_C_InitProfileDetail::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_InitProfileDetail, Temp_byte_Variable_1) == 0x0003FA, "Member 'OtherPCMenu_C_InitProfileDetail::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_InitProfileDetail, K2Node_Select_Default) == 0x0003FB, "Member 'OtherPCMenu_C_InitProfileDetail::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_InitProfileDetail, CallFunc_Conv_StringToText_ReturnValue) == 0x000400, "Member 'OtherPCMenu_C_InitProfileDetail::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_InitProfileDetail, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000418, "Member 'OtherPCMenu_C_InitProfileDetail::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.SetRootVisibility
// 0x0001 (0x0001 - 0x0000)
struct OtherPCMenu_C_SetRootVisibility final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_SetRootVisibility) == 0x000001, "Wrong alignment on OtherPCMenu_C_SetRootVisibility");
static_assert(sizeof(OtherPCMenu_C_SetRootVisibility) == 0x000001, "Wrong size on OtherPCMenu_C_SetRootVisibility");
static_assert(offsetof(OtherPCMenu_C_SetRootVisibility, InVisible) == 0x000000, "Member 'OtherPCMenu_C_SetRootVisibility::InVisible' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.GetSendAdventurerCardButtonLabelText
// 0x0078 (0x0078 - 0x0000)
struct OtherPCMenu_C_GetSendAdventurerCardButtonLabelText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC1[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
};
static_assert(alignof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText) == 0x000008, "Wrong alignment on OtherPCMenu_C_GetSendAdventurerCardButtonLabelText");
static_assert(sizeof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText) == 0x000078, "Wrong size on OtherPCMenu_C_GetSendAdventurerCardButtonLabelText");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, ReturnValue) == 0x000000, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, CallFunc_BooleanOR_ReturnValue) == 0x000030, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000050, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetSendAdventurerCardButtonLabelText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'OtherPCMenu_C_GetSendAdventurerCardButtonLabelText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.CheckProfileEnable
// 0x0002 (0x0002 - 0x0000)
struct OtherPCMenu_C_CheckProfileEnable final
{
public:
	bool                                          IsOk;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_CheckProfileEnable) == 0x000001, "Wrong alignment on OtherPCMenu_C_CheckProfileEnable");
static_assert(sizeof(OtherPCMenu_C_CheckProfileEnable) == 0x000002, "Wrong size on OtherPCMenu_C_CheckProfileEnable");
static_assert(offsetof(OtherPCMenu_C_CheckProfileEnable, IsOk) == 0x000000, "Member 'OtherPCMenu_C_CheckProfileEnable::IsOk' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CheckProfileEnable, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'OtherPCMenu_C_CheckProfileEnable::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.UpdatePartyIconVisible
// 0x0018 (0x0018 - 0x0000)
struct OtherPCMenu_C_UpdatePartyIconVisible final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC3[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasOnlineStatus_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCMenu_C_UpdatePartyIconVisible) == 0x000008, "Wrong alignment on OtherPCMenu_C_UpdatePartyIconVisible");
static_assert(sizeof(OtherPCMenu_C_UpdatePartyIconVisible) == 0x000018, "Wrong size on OtherPCMenu_C_UpdatePartyIconVisible");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, Temp_bool_Variable) == 0x000000, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, CallFunc_GetCurrentPartyMemberState_ReturnValue) == 0x000008, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::CallFunc_GetCurrentPartyMemberState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, CallFunc_HasOnlineStatus_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::CallFunc_HasOnlineStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, CallFunc_IsPartyLeader_ReturnValue) == 0x000012, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePartyIconVisible, K2Node_Select_Default) == 0x000013, "Member 'OtherPCMenu_C_UpdatePartyIconVisible::K2Node_Select_Default' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.UpdateBlackListState
// 0x0030 (0x0030 - 0x0000)
struct OtherPCMenu_C_UpdateBlackListState final
{
public:
	bool                                          Param_IsBlackList;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanPlayEmoteStatus_ReturnValue;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanSendInvitationSelf_bResult;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC5[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_CanSendInvitation_RecipientPlayer_CastInput; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanSendInvitation_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_UpdateBlackListState) == 0x000008, "Wrong alignment on OtherPCMenu_C_UpdateBlackListState");
static_assert(sizeof(OtherPCMenu_C_UpdateBlackListState) == 0x000030, "Wrong size on OtherPCMenu_C_UpdateBlackListState");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, Param_IsBlackList) == 0x000000, "Member 'OtherPCMenu_C_UpdateBlackListState::Param_IsBlackList' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, Temp_bool_Variable) == 0x000001, "Member 'OtherPCMenu_C_UpdateBlackListState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, Temp_bool_Variable_1) == 0x000002, "Member 'OtherPCMenu_C_UpdateBlackListState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, CallFunc_GetIsEnabled_ReturnValue) == 0x000003, "Member 'OtherPCMenu_C_UpdateBlackListState::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'OtherPCMenu_C_UpdateBlackListState::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, K2Node_Select_Default) == 0x000010, "Member 'OtherPCMenu_C_UpdateBlackListState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, CallFunc_CanPlayEmoteStatus_ReturnValue) == 0x000011, "Member 'OtherPCMenu_C_UpdateBlackListState::CallFunc_CanPlayEmoteStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, CallFunc_CanSendInvitationSelf_bResult) == 0x000012, "Member 'OtherPCMenu_C_UpdateBlackListState::CallFunc_CanSendInvitationSelf_bResult' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, CallFunc_CanSendInvitation_RecipientPlayer_CastInput) == 0x000018, "Member 'OtherPCMenu_C_UpdateBlackListState::CallFunc_CanSendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, CallFunc_CanSendInvitation_ReturnValue) == 0x000028, "Member 'OtherPCMenu_C_UpdateBlackListState::CallFunc_CanSendInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdateBlackListState, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'OtherPCMenu_C_UpdateBlackListState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.CanSendInvitationSelf
// 0x0130 (0x0130 - 0x0000)
struct OtherPCMenu_C_CanSendInvitationSelf final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPartyRecruitData                    CallFunc_GetRecruitPartyInfo_ReturnValue;          // 0x0020(0x00D8)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC8[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CC9[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTraveling_ReturnValue;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_CanSendInvitationSelf) == 0x000008, "Wrong alignment on OtherPCMenu_C_CanSendInvitationSelf");
static_assert(sizeof(OtherPCMenu_C_CanSendInvitationSelf) == 0x000130, "Wrong size on OtherPCMenu_C_CanSendInvitationSelf");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, bResult) == 0x000000, "Member 'OtherPCMenu_C_CanSendInvitationSelf::bResult' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_GetNetworkDataCache_IsValid) == 0x000010, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_GetRecruitPartyInfo_ReturnValue) == 0x000020, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_GetRecruitPartyInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000F8, "Member 'OtherPCMenu_C_CanSendInvitationSelf::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'OtherPCMenu_C_CanSendInvitationSelf::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_GetCharacterId_ReturnValue) == 0x000108, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000118, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_GetMatchedState_bExists) == 0x000119, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_GetMatchedState_ReturnValue) == 0x000120, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_IsConfirmed_ReturnValue) == 0x000128, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_CanSendInvitationSelf, CallFunc_IsTraveling_ReturnValue) == 0x000129, "Member 'OtherPCMenu_C_CanSendInvitationSelf::CallFunc_IsTraveling_ReturnValue' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.ShowMessage_IsBlackListed
// 0x0028 (0x0028 - 0x0000)
struct OtherPCMenu_C_ShowMessage_IsBlackListed final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(OtherPCMenu_C_ShowMessage_IsBlackListed) == 0x000008, "Wrong alignment on OtherPCMenu_C_ShowMessage_IsBlackListed");
static_assert(sizeof(OtherPCMenu_C_ShowMessage_IsBlackListed) == 0x000028, "Wrong size on OtherPCMenu_C_ShowMessage_IsBlackListed");
static_assert(offsetof(OtherPCMenu_C_ShowMessage_IsBlackListed, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'OtherPCMenu_C_ShowMessage_IsBlackListed::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ShowMessage_IsBlackListed, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_ShowMessage_IsBlackListed::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.ShowMessage_DisableProfile
// 0x0028 (0x0028 - 0x0000)
struct OtherPCMenu_C_ShowMessage_DisableProfile final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(OtherPCMenu_C_ShowMessage_DisableProfile) == 0x000008, "Wrong alignment on OtherPCMenu_C_ShowMessage_DisableProfile");
static_assert(sizeof(OtherPCMenu_C_ShowMessage_DisableProfile) == 0x000028, "Wrong size on OtherPCMenu_C_ShowMessage_DisableProfile");
static_assert(offsetof(OtherPCMenu_C_ShowMessage_DisableProfile, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'OtherPCMenu_C_ShowMessage_DisableProfile::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ShowMessage_DisableProfile, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_ShowMessage_DisableProfile::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.GetOtherPlayerState
// 0x0028 (0x0028 - 0x0000)
struct OtherPCMenu_C_GetOtherPlayerState final
{
public:
	class ASBPlayerState*                         OutPlayerState;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CCA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_GetOtherPlayerState) == 0x000008, "Wrong alignment on OtherPCMenu_C_GetOtherPlayerState");
static_assert(sizeof(OtherPCMenu_C_GetOtherPlayerState) == 0x000028, "Wrong size on OtherPCMenu_C_GetOtherPlayerState");
static_assert(offsetof(OtherPCMenu_C_GetOtherPlayerState, OutPlayerState) == 0x000000, "Member 'OtherPCMenu_C_GetOtherPlayerState::OutPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetOtherPlayerState, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'OtherPCMenu_C_GetOtherPlayerState::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetOtherPlayerState, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_GetOtherPlayerState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetOtherPlayerState, CallFunc_GetValidPlayerState_ReturnValue) == 0x000018, "Member 'OtherPCMenu_C_GetOtherPlayerState::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetOtherPlayerState, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'OtherPCMenu_C_GetOtherPlayerState::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetOtherPlayerState, CallFunc_IsValid_ReturnValue_2) == 0x000021, "Member 'OtherPCMenu_C_GetOtherPlayerState::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetOtherPlayerState, CallFunc_IsValid_ReturnValue_3) == 0x000022, "Member 'OtherPCMenu_C_GetOtherPlayerState::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.GetPlayerCharacter
// 0x0020 (0x0020 - 0x0000)
struct OtherPCMenu_C_GetPlayerCharacter final
{
public:
	class ASBPlayerCharacter*                     ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CCB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_GetPlayerCharacter) == 0x000008, "Wrong alignment on OtherPCMenu_C_GetPlayerCharacter");
static_assert(sizeof(OtherPCMenu_C_GetPlayerCharacter) == 0x000020, "Wrong size on OtherPCMenu_C_GetPlayerCharacter");
static_assert(offsetof(OtherPCMenu_C_GetPlayerCharacter, ReturnValue) == 0x000000, "Member 'OtherPCMenu_C_GetPlayerCharacter::ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetPlayerCharacter, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'OtherPCMenu_C_GetPlayerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetPlayerCharacter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'OtherPCMenu_C_GetPlayerCharacter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_GetPlayerCharacter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'OtherPCMenu_C_GetPlayerCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.SetPlayerProfile_LikeBtn
// 0x0001 (0x0001 - 0x0000)
struct OtherPCMenu_C_SetPlayerProfile_LikeBtn final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_SetPlayerProfile_LikeBtn) == 0x000001, "Wrong alignment on OtherPCMenu_C_SetPlayerProfile_LikeBtn");
static_assert(sizeof(OtherPCMenu_C_SetPlayerProfile_LikeBtn) == 0x000001, "Wrong size on OtherPCMenu_C_SetPlayerProfile_LikeBtn");
static_assert(offsetof(OtherPCMenu_C_SetPlayerProfile_LikeBtn, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'OtherPCMenu_C_SetPlayerProfile_LikeBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.SetPlatformIcon
// 0x0028 (0x0028 - 0x0000)
struct OtherPCMenu_C_SetPlatformIcon final
{
public:
	struct FSBPlatformInfo                        CallFunc_GetOwnPlatformInfo_OutPlatformInfo;       // 0x0000(0x0020)()
	bool                                          CallFunc_GetOwnPlatformInfo_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_SetPlatformIcon) == 0x000008, "Wrong alignment on OtherPCMenu_C_SetPlatformIcon");
static_assert(sizeof(OtherPCMenu_C_SetPlatformIcon) == 0x000028, "Wrong size on OtherPCMenu_C_SetPlatformIcon");
static_assert(offsetof(OtherPCMenu_C_SetPlatformIcon, CallFunc_GetOwnPlatformInfo_OutPlatformInfo) == 0x000000, "Member 'OtherPCMenu_C_SetPlatformIcon::CallFunc_GetOwnPlatformInfo_OutPlatformInfo' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_SetPlatformIcon, CallFunc_GetOwnPlatformInfo_ReturnValue) == 0x000020, "Member 'OtherPCMenu_C_SetPlatformIcon::CallFunc_GetOwnPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_SetPlatformIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000021, "Member 'OtherPCMenu_C_SetPlatformIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_SetPlatformIcon, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'OtherPCMenu_C_SetPlatformIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_SetPlatformIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x000023, "Member 'OtherPCMenu_C_SetPlatformIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.ShowSendAdventureCardError
// 0x000A (0x000A - 0x0000)
struct OtherPCMenu_C_ShowSendAdventureCardError final
{
public:
	bool                                          InWasSuccessful;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               InSendAdventureResult;                             // 0x0001(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_ShowSendAdventureCardError) == 0x000001, "Wrong alignment on OtherPCMenu_C_ShowSendAdventureCardError");
static_assert(sizeof(OtherPCMenu_C_ShowSendAdventureCardError) == 0x00000A, "Wrong size on OtherPCMenu_C_ShowSendAdventureCardError");
static_assert(offsetof(OtherPCMenu_C_ShowSendAdventureCardError, InWasSuccessful) == 0x000000, "Member 'OtherPCMenu_C_ShowSendAdventureCardError::InWasSuccessful' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ShowSendAdventureCardError, InSendAdventureResult) == 0x000001, "Member 'OtherPCMenu_C_ShowSendAdventureCardError::InSendAdventureResult' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_ShowSendAdventureCardError, ReturnValue) == 0x000009, "Member 'OtherPCMenu_C_ShowSendAdventureCardError::ReturnValue' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.Show Player Profile Error Message
// 0x0060 (0x0060 - 0x0000)
struct OtherPCMenu_C_Show_Player_Profile_Error_Message final
{
public:
	class FName                                   InTextNameId;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CCC[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
};
static_assert(alignof(OtherPCMenu_C_Show_Player_Profile_Error_Message) == 0x000008, "Wrong alignment on OtherPCMenu_C_Show_Player_Profile_Error_Message");
static_assert(sizeof(OtherPCMenu_C_Show_Player_Profile_Error_Message) == 0x000060, "Wrong size on OtherPCMenu_C_Show_Player_Profile_Error_Message");
static_assert(offsetof(OtherPCMenu_C_Show_Player_Profile_Error_Message, InTextNameId) == 0x000000, "Member 'OtherPCMenu_C_Show_Player_Profile_Error_Message::InTextNameId' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Show_Player_Profile_Error_Message, InTextID) == 0x000008, "Member 'OtherPCMenu_C_Show_Player_Profile_Error_Message::InTextID' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Show_Player_Profile_Error_Message, CallFunc_NotEqual_NameName_ReturnValue) == 0x00000C, "Member 'OtherPCMenu_C_Show_Player_Profile_Error_Message::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Show_Player_Profile_Error_Message, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_Show_Player_Profile_Error_Message::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Show_Player_Profile_Error_Message, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'OtherPCMenu_C_Show_Player_Profile_Error_Message::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Show_Player_Profile_Error_Message, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000038, "Member 'OtherPCMenu_C_Show_Player_Profile_Error_Message::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Show_Player_Profile_Error_Message, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'OtherPCMenu_C_Show_Player_Profile_Error_Message::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerIcon
// 0x0006 (0x0006 - 0x0000)
struct OtherPCMenu_C_UpdatePlayerIcon final
{
public:
	bool                                          Download;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPrivilegeCacheUGC_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_UpdatePlayerIcon) == 0x000001, "Wrong alignment on OtherPCMenu_C_UpdatePlayerIcon");
static_assert(sizeof(OtherPCMenu_C_UpdatePlayerIcon) == 0x000006, "Wrong size on OtherPCMenu_C_UpdatePlayerIcon");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerIcon, Download) == 0x000000, "Member 'OtherPCMenu_C_UpdatePlayerIcon::Download' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerIcon, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000001, "Member 'OtherPCMenu_C_UpdatePlayerIcon::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'OtherPCMenu_C_UpdatePlayerIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'OtherPCMenu_C_UpdatePlayerIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerIcon, CallFunc_HasPrivilegeCacheUGC_ReturnValue) == 0x000004, "Member 'OtherPCMenu_C_UpdatePlayerIcon::CallFunc_HasPrivilegeCacheUGC_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000005, "Member 'OtherPCMenu_C_UpdatePlayerIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerName
// 0x0090 (0x0090 - 0x0000)
struct OtherPCMenu_C_UpdatePlayerName final
{
public:
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CCD[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0058(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPrivilegeCacheUGC_ReturnValue;         // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CCE[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0078(0x0018)()
};
static_assert(alignof(OtherPCMenu_C_UpdatePlayerName) == 0x000008, "Wrong alignment on OtherPCMenu_C_UpdatePlayerName");
static_assert(sizeof(OtherPCMenu_C_UpdatePlayerName) == 0x000090, "Wrong size on OtherPCMenu_C_UpdatePlayerName");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000000, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000028, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, K2Node_SwitchEnum_CmpSuccess) == 0x000029, "Member 'OtherPCMenu_C_UpdatePlayerName::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000030, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_GetRestrictText_ReturnValue) == 0x000058, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, Temp_bool_Variable) == 0x000070, "Member 'OtherPCMenu_C_UpdatePlayerName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_HasPrivilegeCacheUGC_ReturnValue) == 0x000071, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_HasPrivilegeCacheUGC_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, CallFunc_Not_PreBool_ReturnValue_1) == 0x000072, "Member 'OtherPCMenu_C_UpdatePlayerName::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_UpdatePlayerName, K2Node_Select_Default) == 0x000078, "Member 'OtherPCMenu_C_UpdatePlayerName::K2Node_Select_Default' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.Update Player Comment
// 0x0098 (0x0098 - 0x0000)
struct OtherPCMenu_C_Update_Player_Comment final
{
public:
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CCF[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CD0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0060(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasPrivilegeCacheUGC_ReturnValue;         // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CD1[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0080(0x0018)()
};
static_assert(alignof(OtherPCMenu_C_Update_Player_Comment) == 0x000008, "Wrong alignment on OtherPCMenu_C_Update_Player_Comment");
static_assert(sizeof(OtherPCMenu_C_Update_Player_Comment) == 0x000098, "Wrong size on OtherPCMenu_C_Update_Player_Comment");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000000, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000028, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, K2Node_SwitchEnum_CmpSuccess) == 0x000029, "Member 'OtherPCMenu_C_Update_Player_Comment::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000030, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_GetRestrictText_ReturnValue) == 0x000060, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, Temp_bool_Variable) == 0x000078, "Member 'OtherPCMenu_C_Update_Player_Comment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_HasPrivilegeCacheUGC_ReturnValue) == 0x000079, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_HasPrivilegeCacheUGC_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, CallFunc_Not_PreBool_ReturnValue_1) == 0x00007A, "Member 'OtherPCMenu_C_Update_Player_Comment::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_Update_Player_Comment, K2Node_Select_Default) == 0x000080, "Member 'OtherPCMenu_C_Update_Player_Comment::K2Node_Select_Default' has a wrong offset!");

// Function OtherPCMenu.OtherPCMenu_C.OnClickedPhotoLikeBtn
// 0x0110 (0x0110 - 0x0000)
struct OtherPCMenu_C_OnClickedPhotoLikeBtn final
{
public:
	TArray<int32>                                 OutLikeCountList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                  OutLikeBtnEnbaleList;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TmpCount;                                          // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlayerProfilePhotoTrimmingInfo> TmpPhotoTrimmingInfo;                              // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CD3[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD4[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfilePhotoTrimmingInfo        CallFunc_Array_Get_Item_2;                         // 0x0058(0x0050)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD5[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfilePhotoTrimmingInfo        K2Node_SetFieldsInStruct_StructOut;                // 0x00B0(0x0050)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CD6[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCMenu_C_OnClickedPhotoLikeBtn) == 0x000008, "Wrong alignment on OtherPCMenu_C_OnClickedPhotoLikeBtn");
static_assert(sizeof(OtherPCMenu_C_OnClickedPhotoLikeBtn) == 0x000110, "Wrong size on OtherPCMenu_C_OnClickedPhotoLikeBtn");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, OutLikeCountList) == 0x000000, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::OutLikeCountList' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, OutLikeBtnEnbaleList) == 0x000010, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::OutLikeBtnEnbaleList' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, TmpCount) == 0x000020, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::TmpCount' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, TmpPhotoTrimmingInfo) == 0x000028, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::TmpPhotoTrimmingInfo' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, Temp_int_Array_Index_Variable) == 0x000040, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Array_Get_Item) == 0x000048, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Array_Get_Item_1) == 0x00004C, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, Temp_int_Variable) == 0x000050, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Array_Get_Item_2) == 0x000058, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, K2Node_SetFieldsInStruct_StructOut) == 0x0000B0, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Array_Add_ReturnValue) == 0x000104, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, CallFunc_Array_Add_ReturnValue_1) == 0x000108, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCMenu_C_OnClickedPhotoLikeBtn, K2Node_SwitchEnum_CmpSuccess) == 0x00010C, "Member 'OtherPCMenu_C_OnClickedPhotoLikeBtn::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

