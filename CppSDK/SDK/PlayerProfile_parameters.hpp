#pragma once

 

// Package: PlayerProfile

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_ItemIconData_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerProfile.PlayerProfile_C.UpdateFollowData__DelegateSignature
// 0x0400 (0x0400 - 0x0000)
struct PlayerProfile_C_UpdateFollowData__DelegateSignature final
{
public:
	struct FPlayerProfileMenuDetailData           Param_DetailData;                                  // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsUnFollow;                                        // 0x03F8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_UpdateFollowData__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_UpdateFollowData__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_UpdateFollowData__DelegateSignature) == 0x000400, "Wrong size on PlayerProfile_C_UpdateFollowData__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_UpdateFollowData__DelegateSignature, Param_DetailData) == 0x000000, "Member 'PlayerProfile_C_UpdateFollowData__DelegateSignature::Param_DetailData' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollowData__DelegateSignature, IsUnFollow) == 0x0003F8, "Member 'PlayerProfile_C_UpdateFollowData__DelegateSignature::IsUnFollow' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.AddBlackList__DelegateSignature
// 0x03F8 (0x03F8 - 0x0000)
struct PlayerProfile_C_AddBlackList__DelegateSignature final
{
public:
	struct FPlayerProfileMenuDetailData           ProfileData;                                       // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PlayerProfile_C_AddBlackList__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_AddBlackList__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_AddBlackList__DelegateSignature) == 0x0003F8, "Wrong size on PlayerProfile_C_AddBlackList__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_AddBlackList__DelegateSignature, ProfileData) == 0x000000, "Member 'PlayerProfile_C_AddBlackList__DelegateSignature::ProfileData' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnDestruct__DelegateSignature
// 0x03F8 (0x03F8 - 0x0000)
struct PlayerProfile_C_OnDestruct__DelegateSignature final
{
public:
	struct FPlayerProfileMenuDetailData           Data;                                              // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PlayerProfile_C_OnDestruct__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_OnDestruct__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_OnDestruct__DelegateSignature) == 0x0003F8, "Wrong size on PlayerProfile_C_OnDestruct__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_OnDestruct__DelegateSignature, Data) == 0x000000, "Member 'PlayerProfile_C_OnDestruct__DelegateSignature::Data' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.RequestTransitionMenu__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PlayerProfile_C_RequestTransitionMenu__DelegateSignature final
{
public:
	class FString                                 MenuType;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_RequestTransitionMenu__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_RequestTransitionMenu__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_RequestTransitionMenu__DelegateSignature) == 0x000010, "Wrong size on PlayerProfile_C_RequestTransitionMenu__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_RequestTransitionMenu__DelegateSignature, MenuType) == 0x000000, "Member 'PlayerProfile_C_RequestTransitionMenu__DelegateSignature::MenuType' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnDestructForPlayerList__DelegateSignature
// 0x0400 (0x0400 - 0x0000)
struct PlayerProfile_C_OnDestructForPlayerList__DelegateSignature final
{
public:
	struct FPlayerProfileMenuDetailData           Data;                                              // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          AnyClose;                                          // 0x03F8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_OnDestructForPlayerList__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_OnDestructForPlayerList__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_OnDestructForPlayerList__DelegateSignature) == 0x000400, "Wrong size on PlayerProfile_C_OnDestructForPlayerList__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_OnDestructForPlayerList__DelegateSignature, Data) == 0x000000, "Member 'PlayerProfile_C_OnDestructForPlayerList__DelegateSignature::Data' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_OnDestructForPlayerList__DelegateSignature, AnyClose) == 0x0003F8, "Member 'PlayerProfile_C_OnDestructForPlayerList__DelegateSignature::AnyClose' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnClickedPhotoLikeBtn__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature final
{
public:
	TArray<int32>                                 OutLikeCountList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                  OutLikeBtnEnbaleList;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature) == 0x000020, "Wrong size on PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature, OutLikeCountList) == 0x000000, "Member 'PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature::OutLikeCountList' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature, OutLikeBtnEnbaleList) == 0x000010, "Member 'PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature::OutLikeBtnEnbaleList' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.ExecuteUbergraph_PlayerProfile
// 0x0E08 (0x0E08 - 0x0000)
struct PlayerProfile_C_ExecuteUbergraph_PlayerProfile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A53[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildDetails_C*                        CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A54[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             K2Node_CustomEvent_InGuildData;                    // 0x0018(0x00B8)(ConstParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A55[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCalledCommandGuildMenu_bResult;         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A56[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00EC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6A57[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0108(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A58[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A59[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_1;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             CallFunc_GetGuildDetailData_ReturnValue;           // 0x0128(0x00B8)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_2;          // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_3;          // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, struct FGuildData& InGuildData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0200(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0210(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x0220(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A5A[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue_1;                     // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0240(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0260(0x0018)()
	ESBKeyConfigAction                            K2Node_Event_QuickAccess;                          // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A5B[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_KeyconfigActionToBookmark_ReturnValue1;   // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_3;                       // 0x02A3(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A5C[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetOwningPlayerState_ReturnValue;         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02D0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02E8(0x0018)()
	class ASBPlayerState*                         CallFunc_GetOwningPlayerState_ReturnValue_1;       // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_4;               // 0x0308(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_3;               // 0x0309(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A5D[0x6];                                     // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A5E[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0338(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0368(0x0018)()
	EYesNoDialogResult                            K2Node_CustomEvent_Result_2;                       // 0x0380(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A5F[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0388(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A60[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x03A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03F8(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0420(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A61[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0438(0x0018)()
	class USBProfilePlayerState*                  CallFunc_GetProfilePlayerState_ReturnValue;        // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0458(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_CanSendInvitation_RecipientPlayer_CastInput; // 0x0478(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanSendInvitation_ReturnValue;            // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A62[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_SendInvitation_RecipientPlayer_CastInput; // 0x0490(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_1;                       // 0x04A0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x04A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A63[0x6];                                     // 0x04A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x04A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x04B0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A64[0x6];                                     // 0x04BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A65[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x04E0(0x0018)()
	bool                                          CallFunc_IsGathered_ReturnValue;                   // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMatched_ReturnValue;                    // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x04FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A66[0x5];                                     // 0x04FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBProfilePlayerState*                  CallFunc_GetProfilePlayerState_ReturnValue_1;      // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A67[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_CanSendInvitation_RecipientPlayer_CastInput_1; // 0x0510(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanSendInvitation_ReturnValue_1;          // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A68[0x7];                                     // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_SendInvitation_RecipientPlayer_CastInput_1; // 0x0528(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists_1;     // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A69[0x7];                                     // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue_1; // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0548(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0558(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0570(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0580(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0590(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x05A8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x05C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_8;           // 0x05D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x05E0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x05F8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_9;           // 0x0610(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0620(0x0018)()
	class UObject*                                Temp_object_Variable_1;                            // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0640(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0649(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x064A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A6A[0x5];                                     // 0x064B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x0650(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0668(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x06A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x06B8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_10;          // 0x06D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x06E0(0x0018)()
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x06F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0708(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A6B[0x7];                                     // 0x0719(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0720(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0728(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanSendPartyInvitation_ReturnValue;       // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInvited_bIsInvited;                     // 0x0731(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0732(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A6C[0x5];                                     // 0x0733(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_2;                            // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_2;                 // 0x0740(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0748(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0749(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x074A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A6D[0x1];                                     // 0x074B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x074C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A6E[0x7];                                     // 0x0751(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_2;                       // 0x0758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0760(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bBlackListed;                   // 0x0761(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A6F[0x6];                                     // 0x0762(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_SenderId;                       // 0x0768(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_11;          // 0x0778(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0788(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x0790(0x0018)()
	TDelegate<void(bool bCheckBlockStatus)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x07A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_2;               // 0x07B8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A70[0x7];                                     // 0x07B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x07C0(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x07D8(0x0018)()
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x07F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWarpComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x07F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_12;          // 0x0800(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0810(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A71[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x0818(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A72[0x3];                                     // 0x0831(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0834(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0844(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestTravelToOnlinePlayerSessionByFriendCharacterId_ReturnValue; // 0x0848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A73[0x7];                                     // 0x0849(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0850(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x0860(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0878(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0879(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A74[0x2];                                     // 0x087A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x087C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x088C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               K2Node_CustomEvent_SendAdventureCardResult;        // 0x088D(0x0008)(ConstParm, NoDestructor)
	bool                                          CallFunc_Show_Send_Adventure_Card_Error_ReturnValue; // 0x0895(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A75[0x2];                                     // 0x0896(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x08A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x08A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A76[0x7];                                     // 0x08A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x08B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x08B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A77[0x7];                                     // 0x08B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x08C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x08C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x08D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A78[0x7];                                     // 0x08D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_13;          // 0x08D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBReportComponent*                     CallFunc_GetReportComponent_ReturnValue;           // 0x08E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x08F0(0x0018)()
	bool                                          CallFunc_IsAbleToReport_ReturnValue;               // 0x0908(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A79[0x7];                                     // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0910(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0918(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A7A[0x7];                                     // 0x0919(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlayerProfileSummaryData>      K2Node_CustomEvent_CharacterName;                  // 0x0920(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_totalPageNum;                   // 0x0930(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_currentPageNum;                 // 0x0934(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_1;          // 0x0938(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0940(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A7B[0x3];                                     // 0x0941(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0944(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0948(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A7C[0x3];                                     // 0x0949(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x094C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_8;            // 0x0950(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0960(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0961(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0962(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0963(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A7D[0x4];                                     // 0x0964(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLikeSend                              K2Node_MakeStruct_LikeSend;                        // 0x0968(0x0020)()
	TArray<struct FLikeSend>                      K2Node_MakeArray_Array_2;                          // 0x0988(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0998(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x099C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A7E[0x3];                                     // 0x099D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x09A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_4;          // 0x09A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue;              // 0x09B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A7F[0x7];                                     // 0x09B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetThumbnailTexture_URL_Thumbnail;        // 0x09B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x09C8(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x09D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x09E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x09E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A80[0x7];                                     // 0x09E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x09F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x09F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, TArray<struct FPlayerProfileSummaryData>& CharacterName, int32 TotalPageNum, int32 CurrentPageNum)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x0A00(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful, struct FSendAdventureCardResult& SendAdventureCardResult)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0A10(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_12;           // 0x0A20(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, struct FGuildData& InGuildData)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x0A30(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Condition_1;                    // 0x0A40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Condition;                      // 0x0A41(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A81[0x2];                                     // 0x0A42(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_14;           // 0x0A44(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bBlackListed, const class FString& SenderId)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x0A54(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6A82[0x4];                                     // 0x0A64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0A68(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bCheckBlockStatus;              // 0x0A70(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A83[0x3];                                     // 0x0A71(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_16;           // 0x0A74(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetBlackListNum_ReturnValue;              // 0x0A84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBlockListMax_ReturnValue;              // 0x0A88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A84[0x4];                                     // 0x0A8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_14;          // 0x0A90(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0AA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A85[0x7];                                     // 0x0AA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x0AA8(0x0018)()
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0AC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A86[0x7];                                     // 0x0AC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0AC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemId_2;                     // 0x0AD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A87[0x4];                                     // 0x0AD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 K2Node_CustomEvent_InWG;                           // 0x0AD8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0AE0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAdventureCardDecorationMaster_bIsValid; // 0x0AE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A88[0x3];                                     // 0x0AE9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       CallFunc_FindAdventureCardDecorationMaster_ReturnValue; // 0x0AEC(0x0010)(NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0AFC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A89[0x3];                                     // 0x0AFD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0B00(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0B10(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0B18(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0BE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A8A[0x3];                                     // 0x0BE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_17;           // 0x0BE4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6A8B[0x4];                                     // 0x0BF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x0BF8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemId_1;                     // 0x0C00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0C04(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A8C[0x3];                                     // 0x0C05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_18;           // 0x0C08(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InItemId;                       // 0x0C18(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_19;           // 0x0C1C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6A8D[0x4];                                     // 0x0C2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetFrameData_TextureL;                    // 0x0C30(0x0028)(HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_20;           // 0x0C58(0x0010)(ZeroConstructor, NoDestructor)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_2;            // 0x0C68(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetFrameData_TextureL_1;                  // 0x0C70(0x0028)(HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outItemId;              // 0x0C98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A8E[0x4];                                     // 0x0C9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_outUniqueId;            // 0x0CA0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0CB0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_21;           // 0x0CB8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0CC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A8F[0x7];                                     // 0x0CC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0CD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_ComponentBoundEvent_outLikeCountList;       // 0x0CD8(0x0010)(ReferenceParm)
	TArray<bool>                                  K2Node_ComponentBoundEvent_outLikeBtnEnableList;   // 0x0CE8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0CF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A90[0x7];                                     // 0x0CF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0D00(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x0D10(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0D28(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x0D38(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0D50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A91[0x7];                                     // 0x0D51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0D58(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0D70(0x0040)(HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_22;           // 0x0DB0(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0DC0(0x0010)(ReferenceParm)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_3;            // 0x0DD0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0DD8(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_4;            // 0x0DF0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_5;            // 0x0DF8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_6;            // 0x0E00(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile) == 0x000008, "Wrong alignment on PlayerProfile_C_ExecuteUbergraph_PlayerProfile");
static_assert(sizeof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile) == 0x000E08, "Wrong size on PlayerProfile_C_ExecuteUbergraph_PlayerProfile");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, EntryPoint) == 0x000000, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Create_ReturnValue) == 0x000008, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_RetCode_3) == 0x000014, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_InGuildData) == 0x000018, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_InGuildData' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000D8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetGuildComponent_ReturnValue) == 0x0000E0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsCalledCommandGuildMenu_bResult) == 0x0000E8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsCalledCommandGuildMenu_bResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate) == 0x0000EC, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_PlayAnimationForward_ReturnValue) == 0x000100, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_RetCode_2) == 0x000108, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000110, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000118, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetGuildComponent_ReturnValue_1) == 0x000120, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetGuildComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetGuildDetailData_ReturnValue) == 0x000128, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetGuildDetailData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0001E0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetGuildComponent_ReturnValue_2) == 0x0001E8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetGuildComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x0001F0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetGuildComponent_ReturnValue_3) == 0x0001F8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetGuildComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_1) == 0x000200, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_2) == 0x000210, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_3) == 0x000220, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsEmpty_ReturnValue) == 0x000230, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Create_ReturnValue_1) == 0x000238, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_4) == 0x000240, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000250, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue) == 0x000260, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_Event_QuickAccess) == 0x000278, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_Event_QuickAccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_KeyconfigActionToBookmark_ReturnValue1) == 0x000280, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_KeyconfigActionToBookmark_ReturnValue1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, Temp_object_Variable) == 0x000290, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsTexture_2D) == 0x000298, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess) == 0x0002A0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_1) == 0x0002A1, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_2) == 0x0002A2, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Result_3) == 0x0002A3, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002A4, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetOwningPlayerState_ReturnValue) == 0x0002A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetOwningPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue) == 0x0002B0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0002C0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002D0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002E8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetOwningPlayerState_ReturnValue_1) == 0x000300, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetOwningPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_bWasSuccessful_4) == 0x000308, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_bWasSuccessful_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_bWasSuccessful_3) == 0x000309, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_bWasSuccessful_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000310, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000318, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess_1) == 0x000320, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000328, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000338, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetPartySystemText_ReturnValue) == 0x000350, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Loaded) == 0x000360, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000368, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Result_2) == 0x000380, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000388, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003A0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeStruct_FormatArgumentData) == 0x0003A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeArray_Array) == 0x0003E8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Format_ReturnValue) == 0x0003F8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetPlayerController_ReturnValue) == 0x000410, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetHUD_ReturnValue) == 0x000418, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000420, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess_2) == 0x000430, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000438, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetProfilePlayerState_ReturnValue) == 0x000450, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetProfilePlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetCharacterId_self_CastInput) == 0x000458, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetCharacterId_ReturnValue) == 0x000468, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_CanSendInvitation_RecipientPlayer_CastInput) == 0x000478, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_CanSendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_CanSendInvitation_ReturnValue) == 0x000488, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_CanSendInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_SendInvitation_RecipientPlayer_CastInput) == 0x000490, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_SendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Result_1) == 0x0004A0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0004A1, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_PlayAnimation_ReturnValue) == 0x0004A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_Event_Animation) == 0x0004B0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0004B8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetCurrentMatchmakingState_bExists) == 0x0004B9, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x0004C0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0004C8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_3) == 0x0004D8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0004E0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsGathered_ReturnValue) == 0x0004F8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsGathered_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsMatched_ReturnValue) == 0x0004F9, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsMatched_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_BooleanAND_ReturnValue) == 0x0004FA, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetProfilePlayerState_ReturnValue_1) == 0x000500, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetProfilePlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_BooleanOR_ReturnValue) == 0x000508, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_CanSendInvitation_RecipientPlayer_CastInput_1) == 0x000510, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_CanSendInvitation_RecipientPlayer_CastInput_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_CanSendInvitation_ReturnValue_1) == 0x000520, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_CanSendInvitation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_SendInvitation_RecipientPlayer_CastInput_1) == 0x000528, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_SendInvitation_RecipientPlayer_CastInput_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetCurrentMatchmakingState_bExists_1) == 0x000538, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetCurrentMatchmakingState_bExists_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetCurrentMatchmakingState_ReturnValue_1) == 0x000540, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetCurrentMatchmakingState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000548, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000558, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000570, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000580, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000590, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0005A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x0005C0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_8) == 0x0005D0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_11) == 0x0005E0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_12) == 0x0005F8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_9) == 0x000610, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000620, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, Temp_object_Variable_1) == 0x000638, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsTexture_2D_1) == 0x000640, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess_3) == 0x000648, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_4) == 0x000649, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_5) == 0x00064A, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_14) == 0x000650, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeStruct_FormatArgumentData_1) == 0x000668, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeArray_Array_1) == 0x0006A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Format_ReturnValue_1) == 0x0006B8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_10) == 0x0006D0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_15) == 0x0006E0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_MakeLiteralString_ReturnValue) == 0x0006F8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Concat_StrStr_ReturnValue) == 0x000708, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000718, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000720, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Loaded_1) == 0x000728, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_CanSendPartyInvitation_ReturnValue) == 0x000730, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_CanSendPartyInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsInvited_bIsInvited) == 0x000731, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsInvited_bIsInvited' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Not_PreBool_ReturnValue_1) == 0x000732, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, Temp_object_Variable_2) == 0x000738, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsTexture_2D_2) == 0x000740, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsTexture_2D_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess_4) == 0x000748, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_6) == 0x000749, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_7) == 0x00074A, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_RetCode_1) == 0x00074C, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000750, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Loaded_2) == 0x000758, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, Temp_bool_Variable) == 0x000760, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_bBlackListed) == 0x000761, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_bBlackListed' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_SenderId) == 0x000768, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_SenderId' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_11) == 0x000778, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBGameInstance_ReturnValue) == 0x000788, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_16) == 0x000790, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_5) == 0x0007A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_bWasSuccessful_2) == 0x0007B8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_bWasSuccessful_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_MakeLiteralText_ReturnValue) == 0x0007C0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0007D8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0007F0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetComponentByClass_ReturnValue) == 0x0007F8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_12) == 0x000800, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Result) == 0x000810, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_17) == 0x000818, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000830, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_6) == 0x000834, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_RetCode) == 0x000844, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_RequestTravelToOnlinePlayerSessionByFriendCharacterId_ReturnValue) == 0x000848, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_RequestTravelToOnlinePlayerSessionByFriendCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBRetMessage_ReturnValue) == 0x000850, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_18) == 0x000860, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000878, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, Temp_bool_Variable_1) == 0x000879, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_7) == 0x00087C, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_bWasSuccessful_1) == 0x00088C, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_SendAdventureCardResult) == 0x00088D, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_SendAdventureCardResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Show_Send_Adventure_Card_Error_ReturnValue) == 0x000895, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Show_Send_Adventure_Card_Error_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetPlayerController_ReturnValue_1) == 0x000898, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0008A0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess_5) == 0x0008A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetConcernedList_ReturnValue) == 0x0008B0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsValid_ReturnValue_8) == 0x0008B8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetPlayerController_ReturnValue_2) == 0x0008C0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0008C8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess_6) == 0x0008D0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_13) == 0x0008D8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetReportComponent_ReturnValue) == 0x0008E8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetReportComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_19) == 0x0008F0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsAbleToReport_ReturnValue) == 0x000908, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsAbleToReport_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBPlayerState_ReturnValue) == 0x000910, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_bWasSuccessful) == 0x000918, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_CharacterName) == 0x000920, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_CharacterName' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_totalPageNum) == 0x000930, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_totalPageNum' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_currentPageNum) == 0x000934, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_currentPageNum' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBGameInstance_ReturnValue_1) == 0x000938, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, Temp_bool_Variable_2) == 0x000940, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_PlaySE_ReturnValue) == 0x000944, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_Select_Default) == 0x000948, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_PlaySE_ReturnValue_1) == 0x00094C, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_8) == 0x000950, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000960, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Not_PreBool_ReturnValue_2) == 0x000961, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000962, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Not_PreBool_ReturnValue_3) == 0x000963, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeStruct_LikeSend) == 0x000968, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeStruct_LikeSend' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeArray_Array_2) == 0x000988, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_PlaySE_ReturnValue_2) == 0x000998, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00099C, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x0009A0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetGuildComponent_ReturnValue_4) == 0x0009A8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetGuildComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_IsGuildPromoter_ReturnValue) == 0x0009B0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_IsGuildPromoter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetThumbnailTexture_URL_Thumbnail) == 0x0009B8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetThumbnailTexture_URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_9) == 0x0009C8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetPlayerController_ReturnValue_3) == 0x0009D8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0009E0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_DynamicCast_bSuccess_7) == 0x0009E8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetConcernedList_ReturnValue_1) == 0x0009F0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0009F8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_10) == 0x000A00, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_11) == 0x000A10, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_12) == 0x000A20, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_13) == 0x000A30, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Condition_1) == 0x000A40, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Condition_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Condition) == 0x000A41, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Condition' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_14) == 0x000A44, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_15) == 0x000A54, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000A68, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_bCheckBlockStatus) == 0x000A70, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_bCheckBlockStatus' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_16) == 0x000A74, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetBlackListNum_ReturnValue) == 0x000A84, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetBlackListNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetBlockListMax_ReturnValue) == 0x000A88, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetBlockListMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAsset_ReturnValue_14) == 0x000A90, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAsset_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000AA0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_20) == 0x000AA8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetUIManager_IsValid) == 0x000AC0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetUIManager_ReturnValue) == 0x000AC8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_InItemId_2) == 0x000AD0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_InItemId_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_InWG) == 0x000AD8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_InWG' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_AddChild_ReturnValue) == 0x000AE0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_FindAdventureCardDecorationMaster_bIsValid) == 0x000AE8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_FindAdventureCardDecorationMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_FindAdventureCardDecorationMaster_ReturnValue) == 0x000AEC, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_FindAdventureCardDecorationMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000AFC, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_IntToString_ReturnValue) == 0x000B00, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToName_ReturnValue) == 0x000B10, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetDataTableRowFromName_OutRow) == 0x000B18, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000BE0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_17) == 0x000BE4, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x000BF8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_InItemId_1) == 0x000C00, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_InItemId_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000C04, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_18) == 0x000C08, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_InItemId) == 0x000C18, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_InItemId' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_19) == 0x000C1C, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetFrameData_TextureL) == 0x000C30, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetFrameData_TextureL' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_20) == 0x000C58, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_ShowYesNoDialog_ReturnValue_2) == 0x000C68, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_ShowYesNoDialog_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetFrameData_TextureL_1) == 0x000C70, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetFrameData_TextureL_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_ComponentBoundEvent_outItemId) == 0x000C98, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_ComponentBoundEvent_outItemId' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_ComponentBoundEvent_outUniqueId) == 0x000CA0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_ComponentBoundEvent_outUniqueId' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CustomEvent_Sender) == 0x000CB0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_21) == 0x000CB8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetUIManager_IsValid_1) == 0x000CC8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetUIManager_ReturnValue_1) == 0x000CD0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_ComponentBoundEvent_outLikeCountList) == 0x000CD8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_ComponentBoundEvent_outLikeCountList' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_ComponentBoundEvent_outLikeBtnEnableList) == 0x000CE8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_ComponentBoundEvent_outLikeBtnEnableList' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Not_PreBool_ReturnValue_4) == 0x000CF8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000D00, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_21) == 0x000D10, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000D28, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Conv_StringToText_ReturnValue_22) == 0x000D38, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Not_PreBool_ReturnValue_5) == 0x000D50, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_GetRestrictText_ReturnValue) == 0x000D58, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeStruct_FormatArgumentData_2) == 0x000D70, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_CreateDelegate_OutputDelegate_22) == 0x000DB0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, K2Node_MakeArray_Array_3) == 0x000DC0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_ShowYesNoDialog_ReturnValue_3) == 0x000DD0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_ShowYesNoDialog_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_Format_ReturnValue_2) == 0x000DD8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_ShowYesNoDialog_ReturnValue_4) == 0x000DF0, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_ShowYesNoDialog_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_ShowYesNoDialog_ReturnValue_5) == 0x000DF8, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_ShowYesNoDialog_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_ExecuteUbergraph_PlayerProfile, CallFunc_ShowYesNoDialog_ReturnValue_6) == 0x000E00, "Member 'PlayerProfile_C_ExecuteUbergraph_PlayerProfile::CallFunc_ShowYesNoDialog_ReturnValue_6' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature final
{
public:
	TArray<int32>                                 OutLikeCountList;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                  OutLikeBtnEnableList;                              // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature) == 0x000020, "Wrong size on PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature, OutLikeCountList) == 0x000000, "Member 'PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature::OutLikeCountList' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature, OutLikeBtnEnableList) == 0x000010, "Member 'PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature::OutLikeBtnEnableList' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.ProductDetailMenuCloseEvent
// 0x0008 (0x0008 - 0x0000)
struct PlayerProfile_C_ProductDetailMenuCloseEvent final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_ProductDetailMenuCloseEvent) == 0x000008, "Wrong alignment on PlayerProfile_C_ProductDetailMenuCloseEvent");
static_assert(sizeof(PlayerProfile_C_ProductDetailMenuCloseEvent) == 0x000008, "Wrong size on PlayerProfile_C_ProductDetailMenuCloseEvent");
static_assert(offsetof(PlayerProfile_C_ProductDetailMenuCloseEvent, Sender) == 0x000000, "Member 'PlayerProfile_C_ProductDetailMenuCloseEvent::Sender' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature final
{
public:
	int32                                         OutItemId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A92[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutUniqueId;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature) == 0x000008, "Wrong alignment on PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature");
static_assert(sizeof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature) == 0x000018, "Wrong size on PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature");
static_assert(offsetof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature, OutItemId) == 0x000000, "Member 'PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature::OutItemId' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature, OutUniqueId) == 0x000008, "Member 'PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature::OutUniqueId' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetAdventureCardFrame
// 0x0004 (0x0004 - 0x0000)
struct PlayerProfile_C_SetAdventureCardFrame final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_SetAdventureCardFrame) == 0x000004, "Wrong alignment on PlayerProfile_C_SetAdventureCardFrame");
static_assert(sizeof(PlayerProfile_C_SetAdventureCardFrame) == 0x000004, "Wrong size on PlayerProfile_C_SetAdventureCardFrame");
static_assert(offsetof(PlayerProfile_C_SetAdventureCardFrame, InItemID) == 0x000000, "Member 'PlayerProfile_C_SetAdventureCardFrame::InItemID' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetBgPattern
// 0x0004 (0x0004 - 0x0000)
struct PlayerProfile_C_SetBgPattern final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_SetBgPattern) == 0x000004, "Wrong alignment on PlayerProfile_C_SetBgPattern");
static_assert(sizeof(PlayerProfile_C_SetBgPattern) == 0x000004, "Wrong size on PlayerProfile_C_SetBgPattern");
static_assert(offsetof(PlayerProfile_C_SetBgPattern, InItemID) == 0x000000, "Member 'PlayerProfile_C_SetBgPattern::InItemID' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetDecoFrame
// 0x0010 (0x0010 - 0x0000)
struct PlayerProfile_C_SetDecoFrame final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A93[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 InWG;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_SetDecoFrame) == 0x000008, "Wrong alignment on PlayerProfile_C_SetDecoFrame");
static_assert(sizeof(PlayerProfile_C_SetDecoFrame) == 0x000010, "Wrong size on PlayerProfile_C_SetDecoFrame");
static_assert(offsetof(PlayerProfile_C_SetDecoFrame, InItemID) == 0x000000, "Member 'PlayerProfile_C_SetDecoFrame::InItemID' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetDecoFrame, InWG) == 0x000008, "Member 'PlayerProfile_C_SetDecoFrame::InWG' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnCheckBlockStatus
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_OnCheckBlockStatus final
{
public:
	bool                                          bCheckBlockStatus;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_OnCheckBlockStatus) == 0x000001, "Wrong alignment on PlayerProfile_C_OnCheckBlockStatus");
static_assert(sizeof(PlayerProfile_C_OnCheckBlockStatus) == 0x000001, "Wrong size on PlayerProfile_C_OnCheckBlockStatus");
static_assert(offsetof(PlayerProfile_C_OnCheckBlockStatus, bCheckBlockStatus) == 0x000000, "Member 'PlayerProfile_C_OnCheckBlockStatus::bCheckBlockStatus' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.RemoveBlackListEvent
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_RemoveBlackListEvent final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_RemoveBlackListEvent) == 0x000001, "Wrong alignment on PlayerProfile_C_RemoveBlackListEvent");
static_assert(sizeof(PlayerProfile_C_RemoveBlackListEvent) == 0x000001, "Wrong size on PlayerProfile_C_RemoveBlackListEvent");
static_assert(offsetof(PlayerProfile_C_RemoveBlackListEvent, Condition) == 0x000000, "Member 'PlayerProfile_C_RemoveBlackListEvent::Condition' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.AddBlackListEvent
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_AddBlackListEvent final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_AddBlackListEvent) == 0x000001, "Wrong alignment on PlayerProfile_C_AddBlackListEvent");
static_assert(sizeof(PlayerProfile_C_AddBlackListEvent) == 0x000001, "Wrong size on PlayerProfile_C_AddBlackListEvent");
static_assert(offsetof(PlayerProfile_C_AddBlackListEvent, Condition) == 0x000000, "Member 'PlayerProfile_C_AddBlackListEvent::Condition' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnGetBlackListDataEvent
// 0x0020 (0x0020 - 0x0000)
struct PlayerProfile_C_OnGetBlackListDataEvent final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A94[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlayerProfileSummaryData>      Param_CharacterName;                               // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TotalPageNum;                                      // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentPageNum;                                    // 0x001C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnGetBlackListDataEvent) == 0x000008, "Wrong alignment on PlayerProfile_C_OnGetBlackListDataEvent");
static_assert(sizeof(PlayerProfile_C_OnGetBlackListDataEvent) == 0x000020, "Wrong size on PlayerProfile_C_OnGetBlackListDataEvent");
static_assert(offsetof(PlayerProfile_C_OnGetBlackListDataEvent, bWasSuccessful) == 0x000000, "Member 'PlayerProfile_C_OnGetBlackListDataEvent::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_OnGetBlackListDataEvent, Param_CharacterName) == 0x000008, "Member 'PlayerProfile_C_OnGetBlackListDataEvent::Param_CharacterName' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_OnGetBlackListDataEvent, TotalPageNum) == 0x000018, "Member 'PlayerProfile_C_OnGetBlackListDataEvent::TotalPageNum' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_OnGetBlackListDataEvent, CurrentPageNum) == 0x00001C, "Member 'PlayerProfile_C_OnGetBlackListDataEvent::CurrentPageNum' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SendFriend
// 0x0009 (0x0009 - 0x0000)
struct PlayerProfile_C_SendFriend final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               SendAdventureCardResult;                           // 0x0001(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_SendFriend) == 0x000001, "Wrong alignment on PlayerProfile_C_SendFriend");
static_assert(sizeof(PlayerProfile_C_SendFriend) == 0x000009, "Wrong size on PlayerProfile_C_SendFriend");
static_assert(offsetof(PlayerProfile_C_SendFriend, bWasSuccessful) == 0x000000, "Member 'PlayerProfile_C_SendFriend::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SendFriend, SendAdventureCardResult) == 0x000001, "Member 'PlayerProfile_C_SendFriend::SendAdventureCardResult' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnInvited
// 0x0004 (0x0004 - 0x0000)
struct PlayerProfile_C_OnInvited final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnInvited) == 0x000004, "Wrong alignment on PlayerProfile_C_OnInvited");
static_assert(sizeof(PlayerProfile_C_OnInvited) == 0x000004, "Wrong size on PlayerProfile_C_OnInvited");
static_assert(offsetof(PlayerProfile_C_OnInvited, RetCode) == 0x000000, "Member 'PlayerProfile_C_OnInvited::RetCode' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnTeleport_Event
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_OnTeleport_Event final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnTeleport_Event) == 0x000001, "Wrong alignment on PlayerProfile_C_OnTeleport_Event");
static_assert(sizeof(PlayerProfile_C_OnTeleport_Event) == 0x000001, "Wrong size on PlayerProfile_C_OnTeleport_Event");
static_assert(offsetof(PlayerProfile_C_OnTeleport_Event, Result) == 0x000000, "Member 'PlayerProfile_C_OnTeleport_Event::Result' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnNotifyBlocked_Event
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_OnNotifyBlocked_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_OnNotifyBlocked_Event) == 0x000001, "Wrong alignment on PlayerProfile_C_OnNotifyBlocked_Event");
static_assert(sizeof(PlayerProfile_C_OnNotifyBlocked_Event) == 0x000001, "Wrong size on PlayerProfile_C_OnNotifyBlocked_Event");
static_assert(offsetof(PlayerProfile_C_OnNotifyBlocked_Event, bWasSuccessful) == 0x000000, "Member 'PlayerProfile_C_OnNotifyBlocked_Event::bWasSuccessful' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListedDelegate_Event
// 0x0018 (0x0018 - 0x0000)
struct PlayerProfile_C_OnNotificationBlackListedDelegate_Event final
{
public:
	bool                                          bBlackListed;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A95[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SenderId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnNotificationBlackListedDelegate_Event) == 0x000008, "Wrong alignment on PlayerProfile_C_OnNotificationBlackListedDelegate_Event");
static_assert(sizeof(PlayerProfile_C_OnNotificationBlackListedDelegate_Event) == 0x000018, "Wrong size on PlayerProfile_C_OnNotificationBlackListedDelegate_Event");
static_assert(offsetof(PlayerProfile_C_OnNotificationBlackListedDelegate_Event, bBlackListed) == 0x000000, "Member 'PlayerProfile_C_OnNotificationBlackListedDelegate_Event::bBlackListed' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_OnNotificationBlackListedDelegate_Event, SenderId) == 0x000008, "Member 'PlayerProfile_C_OnNotificationBlackListedDelegate_Event::SenderId' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnGuildDataArriverd
// 0x0004 (0x0004 - 0x0000)
struct PlayerProfile_C_OnGuildDataArriverd final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnGuildDataArriverd) == 0x000004, "Wrong alignment on PlayerProfile_C_OnGuildDataArriverd");
static_assert(sizeof(PlayerProfile_C_OnGuildDataArriverd) == 0x000004, "Wrong size on PlayerProfile_C_OnGuildDataArriverd");
static_assert(offsetof(PlayerProfile_C_OnGuildDataArriverd, RetCode) == 0x000000, "Member 'PlayerProfile_C_OnGuildDataArriverd::RetCode' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PlayerProfile_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnAnimationFinished) == 0x000008, "Wrong alignment on PlayerProfile_C_OnAnimationFinished");
static_assert(sizeof(PlayerProfile_C_OnAnimationFinished) == 0x000008, "Wrong size on PlayerProfile_C_OnAnimationFinished");
static_assert(offsetof(PlayerProfile_C_OnAnimationFinished, Animation) == 0x000000, "Member 'PlayerProfile_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Matched_Cancel_Invite_Dialog_Event
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event) == 0x000001, "Wrong alignment on PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event");
static_assert(sizeof(PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event) == 0x000001, "Wrong size on PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event");
static_assert(offsetof(PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event, Result) == 0x000000, "Member 'PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event::Result' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.PartyInvite_Dialog_Event
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_PartyInvite_Dialog_Event final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_PartyInvite_Dialog_Event) == 0x000001, "Wrong alignment on PlayerProfile_C_PartyInvite_Dialog_Event");
static_assert(sizeof(PlayerProfile_C_PartyInvite_Dialog_Event) == 0x000001, "Wrong size on PlayerProfile_C_PartyInvite_Dialog_Event");
static_assert(offsetof(PlayerProfile_C_PartyInvite_Dialog_Event, Result) == 0x000000, "Member 'PlayerProfile_C_PartyInvite_Dialog_Event::Result' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnRemoveBlackListPlayerDelegate_Event
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event) == 0x000001, "Wrong alignment on PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event");
static_assert(sizeof(PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event) == 0x000001, "Wrong size on PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event");
static_assert(offsetof(PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event, bWasSuccessful) == 0x000000, "Member 'PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event::bWasSuccessful' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnAddBlackListPlayerDelegate_Event
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_OnAddBlackListPlayerDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_OnAddBlackListPlayerDelegate_Event) == 0x000001, "Wrong alignment on PlayerProfile_C_OnAddBlackListPlayerDelegate_Event");
static_assert(sizeof(PlayerProfile_C_OnAddBlackListPlayerDelegate_Event) == 0x000001, "Wrong size on PlayerProfile_C_OnAddBlackListPlayerDelegate_Event");
static_assert(offsetof(PlayerProfile_C_OnAddBlackListPlayerDelegate_Event, bWasSuccessful) == 0x000000, "Member 'PlayerProfile_C_OnAddBlackListPlayerDelegate_Event::bWasSuccessful' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.BlackListDialogResult
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_BlackListDialogResult final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_BlackListDialogResult) == 0x000001, "Wrong alignment on PlayerProfile_C_BlackListDialogResult");
static_assert(sizeof(PlayerProfile_C_BlackListDialogResult) == 0x000001, "Wrong size on PlayerProfile_C_BlackListDialogResult");
static_assert(offsetof(PlayerProfile_C_BlackListDialogResult, Result) == 0x000000, "Member 'PlayerProfile_C_BlackListDialogResult::Result' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnPress_QuickAccess
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_OnPress_QuickAccess final
{
public:
	ESBKeyConfigAction                            QuickAccess;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnPress_QuickAccess) == 0x000001, "Wrong alignment on PlayerProfile_C_OnPress_QuickAccess");
static_assert(sizeof(PlayerProfile_C_OnPress_QuickAccess) == 0x000001, "Wrong size on PlayerProfile_C_OnPress_QuickAccess");
static_assert(offsetof(PlayerProfile_C_OnPress_QuickAccess, QuickAccess) == 0x000000, "Member 'PlayerProfile_C_OnPress_QuickAccess::QuickAccess' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnCompletedGuildEntry_Event
// 0x0004 (0x0004 - 0x0000)
struct PlayerProfile_C_OnCompletedGuildEntry_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnCompletedGuildEntry_Event) == 0x000004, "Wrong alignment on PlayerProfile_C_OnCompletedGuildEntry_Event");
static_assert(sizeof(PlayerProfile_C_OnCompletedGuildEntry_Event) == 0x000004, "Wrong size on PlayerProfile_C_OnCompletedGuildEntry_Event");
static_assert(offsetof(PlayerProfile_C_OnCompletedGuildEntry_Event, RetCode) == 0x000000, "Member 'PlayerProfile_C_OnCompletedGuildEntry_Event::RetCode' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnGetedGuildDetailData_Event
// 0x00C0 (0x00C0 - 0x0000)
struct PlayerProfile_C_OnGetedGuildDetailData_Event final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A96[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildData                             InGuildData;                                       // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerProfile_C_OnGetedGuildDetailData_Event) == 0x000008, "Wrong alignment on PlayerProfile_C_OnGetedGuildDetailData_Event");
static_assert(sizeof(PlayerProfile_C_OnGetedGuildDetailData_Event) == 0x0000C0, "Wrong size on PlayerProfile_C_OnGetedGuildDetailData_Event");
static_assert(offsetof(PlayerProfile_C_OnGetedGuildDetailData_Event, RetCode) == 0x000000, "Member 'PlayerProfile_C_OnGetedGuildDetailData_Event::RetCode' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_OnGetedGuildDetailData_Event, InGuildData) == 0x000008, "Member 'PlayerProfile_C_OnGetedGuildDetailData_Event::InGuildData' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4
// 0x0008 (0x0008 - 0x0000)
struct PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4) == 0x000008, "Wrong alignment on PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4");
static_assert(sizeof(PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4) == 0x000008, "Wrong size on PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4");
static_assert(offsetof(PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4, Loaded) == 0x000000, "Member 'PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4::Loaded' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67
// 0x0008 (0x0008 - 0x0000)
struct PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67) == 0x000008, "Wrong alignment on PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67");
static_assert(sizeof(PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67) == 0x000008, "Wrong size on PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67");
static_assert(offsetof(PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67, Loaded) == 0x000000, "Member 'PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67::Loaded' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.OnLoaded_112687964F2BE7FAB45CE180EB11CC13
// 0x0008 (0x0008 - 0x0000)
struct PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13) == 0x000008, "Wrong alignment on PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13");
static_assert(sizeof(PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13) == 0x000008, "Wrong size on PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13");
static_assert(offsetof(PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13, Loaded) == 0x000000, "Member 'PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13::Loaded' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.CloseMenu
// 0x0020 (0x0020 - 0x0000)
struct PlayerProfile_C_CloseMenu final
{
public:
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue;          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A97[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_CloseMenu) == 0x000008, "Wrong alignment on PlayerProfile_C_CloseMenu");
static_assert(sizeof(PlayerProfile_C_CloseMenu) == 0x000020, "Wrong size on PlayerProfile_C_CloseMenu");
static_assert(offsetof(PlayerProfile_C_CloseMenu, CallFunc_GetBookMarkTypeNone_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_CloseMenu::CallFunc_GetBookMarkTypeNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CloseMenu, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_CloseMenu::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CloseMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'PlayerProfile_C_CloseMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Init
// 0x0430 (0x0430 - 0x0000)
struct PlayerProfile_C_Init final
{
public:
	struct FPlayerProfileMenuDetailData           Param_DetailData;                                  // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsFavorite;                                        // 0x03F8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMe;                                              // 0x03F9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDungeon;                                         // 0x03FA(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSaveName;                                        // 0x03FB(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSearchMode;                                      // 0x03FC(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x03FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x03FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0403(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0405(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A98[0x2];                                     // 0x0406(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetAchievementName_IsResult;              // 0x041A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x041B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A99[0x3];                                     // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0429(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_Init) == 0x000008, "Wrong alignment on PlayerProfile_C_Init");
static_assert(sizeof(PlayerProfile_C_Init) == 0x000430, "Wrong size on PlayerProfile_C_Init");
static_assert(offsetof(PlayerProfile_C_Init, Param_DetailData) == 0x000000, "Member 'PlayerProfile_C_Init::Param_DetailData' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, IsFavorite) == 0x0003F8, "Member 'PlayerProfile_C_Init::IsFavorite' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, IsMe) == 0x0003F9, "Member 'PlayerProfile_C_Init::IsMe' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, IsDungeon) == 0x0003FA, "Member 'PlayerProfile_C_Init::IsDungeon' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, IsSaveName) == 0x0003FB, "Member 'PlayerProfile_C_Init::IsSaveName' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, IsSearchMode) == 0x0003FC, "Member 'PlayerProfile_C_Init::IsSearchMode' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, Temp_byte_Variable) == 0x0003FD, "Member 'PlayerProfile_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_Not_PreBool_ReturnValue) == 0x0003FE, "Member 'PlayerProfile_C_Init::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0003FF, "Member 'PlayerProfile_C_Init::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000400, "Member 'PlayerProfile_C_Init::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, Temp_byte_Variable_1) == 0x000401, "Member 'PlayerProfile_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, Temp_bool_Variable) == 0x000402, "Member 'PlayerProfile_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, Temp_byte_Variable_2) == 0x000403, "Member 'PlayerProfile_C_Init::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, Temp_byte_Variable_3) == 0x000404, "Member 'PlayerProfile_C_Init::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000405, "Member 'PlayerProfile_C_Init::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_GetCharacterId_ReturnValue) == 0x000408, "Member 'PlayerProfile_C_Init::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000418, "Member 'PlayerProfile_C_Init::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, K2Node_Select_Default) == 0x000419, "Member 'PlayerProfile_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_SetAchievementName_IsResult) == 0x00041A, "Member 'PlayerProfile_C_Init::CallFunc_SetAchievementName_IsResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, Temp_bool_Variable_1) == 0x00041B, "Member 'PlayerProfile_C_Init::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_GetUIManager_IsValid) == 0x00041C, "Member 'PlayerProfile_C_Init::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_GetUIManager_ReturnValue) == 0x000420, "Member 'PlayerProfile_C_Init::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, K2Node_Select_Default_1) == 0x000428, "Member 'PlayerProfile_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Init, CallFunc_IsValid_ReturnValue) == 0x000429, "Member 'PlayerProfile_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.UpdateFollow
// 0x0028 (0x0028 - 0x0000)
struct PlayerProfile_C_UpdateFollow final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAbleToTeleport_bResult;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayingMission_Result;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A9A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_UpdateFollow) == 0x000008, "Wrong alignment on PlayerProfile_C_UpdateFollow");
static_assert(sizeof(PlayerProfile_C_UpdateFollow) == 0x000028, "Wrong size on PlayerProfile_C_UpdateFollow");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, Temp_bool_Variable) == 0x000000, "Member 'PlayerProfile_C_UpdateFollow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, Temp_bool_Variable_1) == 0x000001, "Member 'PlayerProfile_C_UpdateFollow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, Temp_bool_Variable_2) == 0x000002, "Member 'PlayerProfile_C_UpdateFollow::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, Temp_byte_Variable) == 0x000003, "Member 'PlayerProfile_C_UpdateFollow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, Temp_byte_Variable_1) == 0x000004, "Member 'PlayerProfile_C_UpdateFollow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_IsAbleToTeleport_bResult) == 0x000005, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_IsAbleToTeleport_bResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_IsPlayingMission_Result) == 0x000006, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_IsPlayingMission_Result' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_Not_PreBool_ReturnValue) == 0x000007, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_Not_PreBool_ReturnValue_1) == 0x000008, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_GetIsEnabled_ReturnValue) == 0x000009, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_Not_PreBool_ReturnValue_2) == 0x00000A, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, K2Node_Select_Default) == 0x00000B, "Member 'PlayerProfile_C_UpdateFollow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, K2Node_Select_Default_1) == 0x00000C, "Member 'PlayerProfile_C_UpdateFollow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateFollow, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_UpdateFollow::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Get_AddBlackListTextLabel_Text_0
// 0x0018 (0x0018 - 0x0000)
struct PlayerProfile_C_Get_AddBlackListTextLabel_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PlayerProfile_C_Get_AddBlackListTextLabel_Text_0) == 0x000008, "Wrong alignment on PlayerProfile_C_Get_AddBlackListTextLabel_Text_0");
static_assert(sizeof(PlayerProfile_C_Get_AddBlackListTextLabel_Text_0) == 0x000018, "Wrong size on PlayerProfile_C_Get_AddBlackListTextLabel_Text_0");
static_assert(offsetof(PlayerProfile_C_Get_AddBlackListTextLabel_Text_0, ReturnValue) == 0x000000, "Member 'PlayerProfile_C_Get_AddBlackListTextLabel_Text_0::ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Get_BlackListButtonText_Text_0
// 0x0048 (0x0048 - 0x0000)
struct PlayerProfile_C_Get_BlackListButtonText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	int32                                         TextId;                                            // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A9B[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(PlayerProfile_C_Get_BlackListButtonText_Text_0) == 0x000008, "Wrong alignment on PlayerProfile_C_Get_BlackListButtonText_Text_0");
static_assert(sizeof(PlayerProfile_C_Get_BlackListButtonText_Text_0) == 0x000048, "Wrong size on PlayerProfile_C_Get_BlackListButtonText_Text_0");
static_assert(offsetof(PlayerProfile_C_Get_BlackListButtonText_Text_0, ReturnValue) == 0x000000, "Member 'PlayerProfile_C_Get_BlackListButtonText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Get_BlackListButtonText_Text_0, TextId) == 0x000018, "Member 'PlayerProfile_C_Get_BlackListButtonText_Text_0::TextId' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Get_BlackListButtonText_Text_0, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_Get_BlackListButtonText_Text_0::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Get_BlackListButtonText_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'PlayerProfile_C_Get_BlackListButtonText_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_Get_PartyInviteButton_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_Get_PartyInviteButton_Visibility_0) == 0x000001, "Wrong alignment on PlayerProfile_C_Get_PartyInviteButton_Visibility_0");
static_assert(sizeof(PlayerProfile_C_Get_PartyInviteButton_Visibility_0) == 0x000001, "Wrong size on PlayerProfile_C_Get_PartyInviteButton_Visibility_0");
static_assert(offsetof(PlayerProfile_C_Get_PartyInviteButton_Visibility_0, ReturnValue) == 0x000000, "Member 'PlayerProfile_C_Get_PartyInviteButton_Visibility_0::ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Get_DirectChatButton_Visibility_0
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_Get_DirectChatButton_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_Get_DirectChatButton_Visibility_0) == 0x000001, "Wrong alignment on PlayerProfile_C_Get_DirectChatButton_Visibility_0");
static_assert(sizeof(PlayerProfile_C_Get_DirectChatButton_Visibility_0) == 0x000001, "Wrong size on PlayerProfile_C_Get_DirectChatButton_Visibility_0");
static_assert(offsetof(PlayerProfile_C_Get_DirectChatButton_Visibility_0, ReturnValue) == 0x000000, "Member 'PlayerProfile_C_Get_DirectChatButton_Visibility_0::ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_bIsEnabled_0
// 0x0028 (0x0028 - 0x0000)
struct PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0 final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A9C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBProfilePlayerState*                  CallFunc_GetProfilePlayerState_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_CanSendInvitation_RecipientPlayer_CastInput; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanSendInvitation_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0) == 0x000008, "Wrong alignment on PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0");
static_assert(sizeof(PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0) == 0x000028, "Wrong size on PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0");
static_assert(offsetof(PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0, ReturnValue) == 0x000000, "Member 'PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0, CallFunc_GetProfilePlayerState_ReturnValue) == 0x000008, "Member 'PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0::CallFunc_GetProfilePlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0, CallFunc_CanSendInvitation_RecipientPlayer_CastInput) == 0x000010, "Member 'PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0::CallFunc_CanSendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0, CallFunc_CanSendInvitation_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0::CallFunc_CanSendInvitation_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetActivePartyInviteButton
// 0x0002 (0x0002 - 0x0000)
struct PlayerProfile_C_SetActivePartyInviteButton final
{
public:
	bool                                          CallFunc_CanSendPartyInvitation_ReturnValue;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_SetActivePartyInviteButton) == 0x000001, "Wrong alignment on PlayerProfile_C_SetActivePartyInviteButton");
static_assert(sizeof(PlayerProfile_C_SetActivePartyInviteButton) == 0x000002, "Wrong size on PlayerProfile_C_SetActivePartyInviteButton");
static_assert(offsetof(PlayerProfile_C_SetActivePartyInviteButton, CallFunc_CanSendPartyInvitation_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_SetActivePartyInviteButton::CallFunc_CanSendPartyInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetActivePartyInviteButton, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'PlayerProfile_C_SetActivePartyInviteButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetActiveDirectChatButton
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_SetActiveDirectChatButton final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_SetActiveDirectChatButton) == 0x000001, "Wrong alignment on PlayerProfile_C_SetActiveDirectChatButton");
static_assert(sizeof(PlayerProfile_C_SetActiveDirectChatButton) == 0x000001, "Wrong size on PlayerProfile_C_SetActiveDirectChatButton");
static_assert(offsetof(PlayerProfile_C_SetActiveDirectChatButton, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_SetActiveDirectChatButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.GetClassLevel
// 0x0020 (0x0020 - 0x0000)
struct PlayerProfile_C_GetClassLevel final
{
public:
	ESBClassType                                  Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A9D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Exp;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A9E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateClassLevel_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_GetClassLevel) == 0x000008, "Wrong alignment on PlayerProfile_C_GetClassLevel");
static_assert(sizeof(PlayerProfile_C_GetClassLevel) == 0x000020, "Wrong size on PlayerProfile_C_GetClassLevel");
static_assert(offsetof(PlayerProfile_C_GetClassLevel, Type) == 0x000000, "Member 'PlayerProfile_C_GetClassLevel::Type' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_GetClassLevel, Exp) == 0x000004, "Member 'PlayerProfile_C_GetClassLevel::Exp' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_GetClassLevel, Level) == 0x000008, "Member 'PlayerProfile_C_GetClassLevel::Level' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_GetClassLevel, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'PlayerProfile_C_GetClassLevel::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_GetClassLevel, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_GetClassLevel::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_GetClassLevel, CallFunc_CalculateClassLevel_ReturnValue) == 0x000018, "Member 'PlayerProfile_C_GetClassLevel::CallFunc_CalculateClassLevel_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.UpdateClassData
// 0x0480 (0x0480 - 0x0000)
struct PlayerProfile_C_UpdateClassData final
{
public:
	struct FPlayerProfileMenuDetailData           Data;                                              // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<ESBClassType>                          DispClassOrder;                                    // 0x03F8(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x040C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A9F[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0418(0x0010)(ReferenceParm)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AA0[0x3];                                     // 0x0429(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA1[0x3];                                     // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_Array_Get_Item_1;                         // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AA2[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA3[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0460(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA4[0x3];                                     // 0x0469(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileClassData                CallFunc_GetPlayerProfileClassData_ReturnValue;    // 0x046C(0x0008)(NoDestructor)
	int32                                         CallFunc_GetClassLevel_Level;                      // 0x0474(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_UpdateClassData) == 0x000008, "Wrong alignment on PlayerProfile_C_UpdateClassData");
static_assert(sizeof(PlayerProfile_C_UpdateClassData) == 0x000480, "Wrong size on PlayerProfile_C_UpdateClassData");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, Data) == 0x000000, "Member 'PlayerProfile_C_UpdateClassData::Data' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, DispClassOrder) == 0x0003F8, "Member 'PlayerProfile_C_UpdateClassData::DispClassOrder' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, Temp_int_Loop_Counter_Variable) == 0x000408, "Member 'PlayerProfile_C_UpdateClassData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Add_IntInt_ReturnValue) == 0x00040C, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, Temp_int_Array_Index_Variable) == 0x000410, "Member 'PlayerProfile_C_UpdateClassData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000418, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Array_Get_Item) == 0x000428, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Array_Length_ReturnValue) == 0x00042C, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Less_IntInt_ReturnValue) == 0x000430, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, Temp_int_Array_Index_Variable_1) == 0x000434, "Member 'PlayerProfile_C_UpdateClassData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, Temp_int_Loop_Counter_Variable_1) == 0x000438, "Member 'PlayerProfile_C_UpdateClassData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00043C, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_GetPlayerController_ReturnValue) == 0x000440, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Array_Get_Item_1) == 0x000448, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000450, "Member 'PlayerProfile_C_UpdateClassData::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, K2Node_DynamicCast_bSuccess) == 0x000458, "Member 'PlayerProfile_C_UpdateClassData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Array_Length_ReturnValue_1) == 0x00045C, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_GetConcernedList_ReturnValue) == 0x000460, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Less_IntInt_ReturnValue_1) == 0x000468, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_GetPlayerProfileClassData_ReturnValue) == 0x00046C, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_GetPlayerProfileClassData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_GetClassLevel_Level) == 0x000474, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_GetClassLevel_Level' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_Array_Add_ReturnValue) == 0x000478, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdateClassData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00047C, "Member 'PlayerProfile_C_UpdateClassData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.AddBlocker
// 0x0018 (0x0018 - 0x0000)
struct PlayerProfile_C_AddBlocker final
{
public:
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA5[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_AddBlocker) == 0x000008, "Wrong alignment on PlayerProfile_C_AddBlocker");
static_assert(sizeof(PlayerProfile_C_AddBlocker) == 0x000018, "Wrong size on PlayerProfile_C_AddBlocker");
static_assert(offsetof(PlayerProfile_C_AddBlocker, CallFunc_Create_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_AddBlocker::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_AddBlocker, CallFunc_GetUIManager_IsValid) == 0x000008, "Member 'PlayerProfile_C_AddBlocker::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_AddBlocker, CallFunc_GetUIManager_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_AddBlocker::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.RemoveBlocker
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_RemoveBlocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_RemoveBlocker) == 0x000001, "Wrong alignment on PlayerProfile_C_RemoveBlocker");
static_assert(sizeof(PlayerProfile_C_RemoveBlocker) == 0x000001, "Wrong size on PlayerProfile_C_RemoveBlocker");
static_assert(offsetof(PlayerProfile_C_RemoveBlocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_RemoveBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.CanSendPartyInvitation
// 0x0150 (0x0150 - 0x0000)
struct PlayerProfile_C_CanSendPartyInvitation final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPartyRecruitData                    CallFunc_GetRecruitPartyInfo_ReturnValue;          // 0x0020(0x00D8)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA8[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AA9[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBProfilePlayerState*                  CallFunc_GetProfilePlayerState_ReturnValue;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_CanSendInvitation_RecipientPlayer_CastInput; // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_CanSendInvitation_ReturnValue;            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AAA[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTraveling_ReturnValue;                  // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_CanSendPartyInvitation) == 0x000008, "Wrong alignment on PlayerProfile_C_CanSendPartyInvitation");
static_assert(sizeof(PlayerProfile_C_CanSendPartyInvitation) == 0x000150, "Wrong size on PlayerProfile_C_CanSendPartyInvitation");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, ReturnValue) == 0x000000, "Member 'PlayerProfile_C_CanSendPartyInvitation::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetNetworkDataCache_IsValid) == 0x000010, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetRecruitPartyInfo_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetRecruitPartyInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000F8, "Member 'PlayerProfile_C_CanSendPartyInvitation::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'PlayerProfile_C_CanSendPartyInvitation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetCharacterId_ReturnValue) == 0x000108, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000118, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetProfilePlayerState_ReturnValue) == 0x000120, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetProfilePlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_CanSendInvitation_RecipientPlayer_CastInput) == 0x000128, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_CanSendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_CanSendInvitation_ReturnValue) == 0x000138, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_CanSendInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetMatchedState_bExists) == 0x000139, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_GetMatchedState_ReturnValue) == 0x000140, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_IsConfirmed_ReturnValue) == 0x000148, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_CanSendPartyInvitation, CallFunc_IsTraveling_ReturnValue) == 0x000149, "Member 'PlayerProfile_C_CanSendPartyInvitation::CallFunc_IsTraveling_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.IsInvited
// 0x0120 (0x0120 - 0x0000)
struct PlayerProfile_C_IsInvited final
{
public:
	bool                                          bIsInvited;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AAB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AAC[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_Array_Get_Item;                           // 0x0038(0x00E0)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_IsInvited) == 0x000008, "Wrong alignment on PlayerProfile_C_IsInvited");
static_assert(sizeof(PlayerProfile_C_IsInvited) == 0x000120, "Wrong size on PlayerProfile_C_IsInvited");
static_assert(offsetof(PlayerProfile_C_IsInvited, bIsInvited) == 0x000000, "Member 'PlayerProfile_C_IsInvited::bIsInvited' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, Temp_int_Array_Index_Variable) == 0x000004, "Member 'PlayerProfile_C_IsInvited::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'PlayerProfile_C_IsInvited::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'PlayerProfile_C_IsInvited::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_GetSBPlayerController_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_IsInvited::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_GetGuildComponent_ReturnValue) == 0x000018, "Member 'PlayerProfile_C_IsInvited::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_GetGuildEntryList_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_IsInvited::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'PlayerProfile_C_IsInvited::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_Array_Get_Item) == 0x000038, "Member 'PlayerProfile_C_IsInvited::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_Less_IntInt_ReturnValue) == 0x000118, "Member 'PlayerProfile_C_IsInvited::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000119, "Member 'PlayerProfile_C_IsInvited::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x00011A, "Member 'PlayerProfile_C_IsInvited::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_BooleanAND_ReturnValue) == 0x00011B, "Member 'PlayerProfile_C_IsInvited::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsInvited, CallFunc_BooleanAND_ReturnValue_1) == 0x00011C, "Member 'PlayerProfile_C_IsInvited::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Set Equip LIstData
// 0x0028 (0x0028 - 0x0000)
struct PlayerProfile_C_Set_Equip_LIstData final
{
public:
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_Set_Equip_LIstData) == 0x000008, "Wrong alignment on PlayerProfile_C_Set_Equip_LIstData");
static_assert(sizeof(PlayerProfile_C_Set_Equip_LIstData) == 0x000028, "Wrong size on PlayerProfile_C_Set_Equip_LIstData");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_GetPlayerId_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000021, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000022, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_BooleanAND_ReturnValue) == 0x000023, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Set_Equip_LIstData, CallFunc_IsValid_ReturnValue_2) == 0x000025, "Member 'PlayerProfile_C_Set_Equip_LIstData::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetPlayerProfileMenuDetailData
// 0x03F8 (0x03F8 - 0x0000)
struct PlayerProfile_C_SetPlayerProfileMenuDetailData final
{
public:
	struct FPlayerProfileMenuDetailData           Param_DetailData;                                  // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PlayerProfile_C_SetPlayerProfileMenuDetailData) == 0x000008, "Wrong alignment on PlayerProfile_C_SetPlayerProfileMenuDetailData");
static_assert(sizeof(PlayerProfile_C_SetPlayerProfileMenuDetailData) == 0x0003F8, "Wrong size on PlayerProfile_C_SetPlayerProfileMenuDetailData");
static_assert(offsetof(PlayerProfile_C_SetPlayerProfileMenuDetailData, Param_DetailData) == 0x000000, "Member 'PlayerProfile_C_SetPlayerProfileMenuDetailData::Param_DetailData' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.InitProfileLikeInfo
// 0x0024 (0x0024 - 0x0000)
struct PlayerProfile_C_InitProfileLikeInfo final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AAD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AAE[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetData_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AAF[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_InitProfileLikeInfo) == 0x000004, "Wrong alignment on PlayerProfile_C_InitProfileLikeInfo");
static_assert(sizeof(PlayerProfile_C_InitProfileLikeInfo) == 0x000024, "Wrong size on PlayerProfile_C_InitProfileLikeInfo");
static_assert(offsetof(PlayerProfile_C_InitProfileLikeInfo, Temp_bool_Variable) == 0x000000, "Member 'PlayerProfile_C_InitProfileLikeInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfileLikeInfo, Temp_int_Variable) == 0x000004, "Member 'PlayerProfile_C_InitProfileLikeInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfileLikeInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'PlayerProfile_C_InitProfileLikeInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfileLikeInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000009, "Member 'PlayerProfile_C_InitProfileLikeInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfileLikeInfo, K2Node_Select_Default) == 0x00000C, "Member 'PlayerProfile_C_InitProfileLikeInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfileLikeInfo, CallFunc_SetData_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_InitProfileLikeInfo::CallFunc_SetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfileLikeInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'PlayerProfile_C_InitProfileLikeInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.InitTensionInfo
// 0x0004 (0x0004 - 0x0000)
struct PlayerProfile_C_InitTensionInfo final
{
public:
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_InitTensionInfo) == 0x000004, "Wrong alignment on PlayerProfile_C_InitTensionInfo");
static_assert(sizeof(PlayerProfile_C_InitTensionInfo) == 0x000004, "Wrong size on PlayerProfile_C_InitTensionInfo");
static_assert(offsetof(PlayerProfile_C_InitTensionInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_InitTensionInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.InitProfilePartyInfo
// 0x0038 (0x0038 - 0x0000)
struct PlayerProfile_C_InitProfilePartyInfo final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AB0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberStateFromId_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AB1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalPower_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanSendPartyInvitation_ReturnValue;       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AB2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBProfilePlayerState*                  CallFunc_GetProfilePlayerState_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasOnlineStatus_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_InitProfilePartyInfo) == 0x000008, "Wrong alignment on PlayerProfile_C_InitProfilePartyInfo");
static_assert(sizeof(PlayerProfile_C_InitProfilePartyInfo) == 0x000038, "Wrong size on PlayerProfile_C_InitProfilePartyInfo");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, Temp_bool_Variable) == 0x000000, "Member 'PlayerProfile_C_InitProfilePartyInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000003, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_GetCurrentPartyMemberStateFromId_ReturnValue) == 0x000008, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_GetCurrentPartyMemberStateFromId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, K2Node_DynamicCast_AsSBParty_Member_State_General) == 0x000010, "Member 'PlayerProfile_C_InitProfilePartyInfo::K2Node_DynamicCast_AsSBParty_Member_State_General' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerProfile_C_InitProfilePartyInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_GetTotalPower_ReturnValue) == 0x00001C, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_GetTotalPower_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_IsPartyLeader_ReturnValue) == 0x000021, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_CanSendPartyInvitation_ReturnValue) == 0x000022, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_CanSendPartyInvitation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, K2Node_Select_Default) == 0x000023, "Member 'PlayerProfile_C_InitProfilePartyInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_GetProfilePlayerState_ReturnValue) == 0x000028, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_GetProfilePlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitProfilePartyInfo, CallFunc_HasOnlineStatus_ReturnValue) == 0x000030, "Member 'PlayerProfile_C_InitProfilePartyInfo::CallFunc_HasOnlineStatus_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.InitTeleportBtnInfo
// 0x0230 (0x0230 - 0x0000)
struct PlayerProfile_C_InitTeleportBtnInfo final
{
public:
	bool                                          CallFunc_IsAbleToTeleport_bResult;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AB3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00B8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00E0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0148(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0160(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AB4[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AB5[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentGameContentIdFromMapLevelInfo_ReturnValue; // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AB6[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetSessionId_self_CastInput;              // 0x0210(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetSessionId_ReturnValue;                 // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_InitTeleportBtnInfo) == 0x000008, "Wrong alignment on PlayerProfile_C_InitTeleportBtnInfo");
static_assert(sizeof(PlayerProfile_C_InitTeleportBtnInfo) == 0x000230, "Wrong size on PlayerProfile_C_InitTeleportBtnInfo");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_IsAbleToTeleport_bResult) == 0x000000, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_IsAbleToTeleport_bResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000B8, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_MakeArray_Array) == 0x0000D0, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000E0, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Format_ReturnValue) == 0x000120, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Conv_TextToString_ReturnValue) == 0x000138, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000148, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_MakeStruct_FormatArgumentData_3) == 0x000160, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B0, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Format_ReturnValue_1) == 0x0001B8, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0001D0, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0001E0, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_GetCurrentGameContentIdFromMapLevelInfo_ReturnValue) == 0x0001E8, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_GetCurrentGameContentIdFromMapLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_GetSBPlayerController_ReturnValue) == 0x0001F8, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_DynamicCast_AsSBPlayer_State) == 0x000200, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, K2Node_DynamicCast_bSuccess) == 0x000208, "Member 'PlayerProfile_C_InitTeleportBtnInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_GetSessionId_self_CastInput) == 0x000210, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_GetSessionId_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_InitTeleportBtnInfo, CallFunc_GetSessionId_ReturnValue) == 0x000220, "Member 'PlayerProfile_C_InitTeleportBtnInfo::CallFunc_GetSessionId_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetBG
// 0x00F0 (0x00F0 - 0x0000)
struct PlayerProfile_C_SetBG final
{
public:
	class UImage*                                 _____;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AB7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Widget;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      InTexture;                                         // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        InWidgetSwitcher;                                  // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                TmpWidget;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TmpBaseSize;                                       // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TmpPosition;                                       // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 TmpImage;                                          // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0068(0x0088)()
};
static_assert(alignof(PlayerProfile_C_SetBG) == 0x000008, "Wrong alignment on PlayerProfile_C_SetBG");
static_assert(sizeof(PlayerProfile_C_SetBG) == 0x0000F0, "Wrong size on PlayerProfile_C_SetBG");
static_assert(offsetof(PlayerProfile_C_SetBG, _____) == 0x000000, "Member 'PlayerProfile_C_SetBG::_____' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, InScale) == 0x000008, "Member 'PlayerProfile_C_SetBG::InScale' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, InPosition) == 0x00000C, "Member 'PlayerProfile_C_SetBG::InPosition' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, Widget) == 0x000018, "Member 'PlayerProfile_C_SetBG::Widget' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, InTexture) == 0x000020, "Member 'PlayerProfile_C_SetBG::InTexture' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, InWidgetSwitcher) == 0x000028, "Member 'PlayerProfile_C_SetBG::InWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, TmpWidget) == 0x000030, "Member 'PlayerProfile_C_SetBG::TmpWidget' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, TmpBaseSize) == 0x000038, "Member 'PlayerProfile_C_SetBG::TmpBaseSize' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, TmpPosition) == 0x000040, "Member 'PlayerProfile_C_SetBG::TmpPosition' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, TmpImage) == 0x000048, "Member 'PlayerProfile_C_SetBG::TmpImage' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize) == 0x000050, "Member 'PlayerProfile_C_SetBG::CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000058, "Member 'PlayerProfile_C_SetBG::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'PlayerProfile_C_SetBG::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBG, K2Node_MakeStruct_SlateBrush) == 0x000068, "Member 'PlayerProfile_C_SetBG::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.IsCalledCommandGuildMenu
// 0x0040 (0x0040 - 0x0000)
struct PlayerProfile_C_IsCalledCommandGuildMenu final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AB8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildMemberInviteMenu_C*               K2Node_DynamicCast_AsGuild_Member_Invite_Menu;     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AB9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberMenu_C*                     K2Node_DynamicCast_AsGuild_Member_Menu;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ABA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberEntryMenu_C*                K2Node_DynamicCast_AsGuild_Member_Entry_Menu;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_IsCalledCommandGuildMenu) == 0x000008, "Wrong alignment on PlayerProfile_C_IsCalledCommandGuildMenu");
static_assert(sizeof(PlayerProfile_C_IsCalledCommandGuildMenu) == 0x000040, "Wrong size on PlayerProfile_C_IsCalledCommandGuildMenu");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, bResult) == 0x000000, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::bResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, CallFunc_GetParentWidget_Parent) == 0x000008, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, K2Node_DynamicCast_AsGuild_Member_Invite_Menu) == 0x000010, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::K2Node_DynamicCast_AsGuild_Member_Invite_Menu' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, K2Node_DynamicCast_AsGuild_Member_Menu) == 0x000020, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::K2Node_DynamicCast_AsGuild_Member_Menu' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, K2Node_DynamicCast_AsGuild_Member_Entry_Menu) == 0x000030, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::K2Node_DynamicCast_AsGuild_Member_Entry_Menu' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsCalledCommandGuildMenu, K2Node_DynamicCast_bSuccess_2) == 0x000038, "Member 'PlayerProfile_C_IsCalledCommandGuildMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Show Player Profile Error Message
// 0x0060 (0x0060 - 0x0000)
struct PlayerProfile_C_Show_Player_Profile_Error_Message final
{
public:
	class FName                                   InTextNameId;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ABB[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
};
static_assert(alignof(PlayerProfile_C_Show_Player_Profile_Error_Message) == 0x000008, "Wrong alignment on PlayerProfile_C_Show_Player_Profile_Error_Message");
static_assert(sizeof(PlayerProfile_C_Show_Player_Profile_Error_Message) == 0x000060, "Wrong size on PlayerProfile_C_Show_Player_Profile_Error_Message");
static_assert(offsetof(PlayerProfile_C_Show_Player_Profile_Error_Message, InTextNameId) == 0x000000, "Member 'PlayerProfile_C_Show_Player_Profile_Error_Message::InTextNameId' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Player_Profile_Error_Message, InTextID) == 0x000008, "Member 'PlayerProfile_C_Show_Player_Profile_Error_Message::InTextID' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Player_Profile_Error_Message, CallFunc_NotEqual_NameName_ReturnValue) == 0x00000C, "Member 'PlayerProfile_C_Show_Player_Profile_Error_Message::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Player_Profile_Error_Message, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_Show_Player_Profile_Error_Message::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Player_Profile_Error_Message, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_Show_Player_Profile_Error_Message::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Player_Profile_Error_Message, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000038, "Member 'PlayerProfile_C_Show_Player_Profile_Error_Message::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Player_Profile_Error_Message, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'PlayerProfile_C_Show_Player_Profile_Error_Message::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Show Send Adventure Card Error
// 0x000A (0x000A - 0x0000)
struct PlayerProfile_C_Show_Send_Adventure_Card_Error final
{
public:
	bool                                          InWasSuccessful;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSendAdventureCardResult               InSendAdventureResult;                             // 0x0001(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_Show_Send_Adventure_Card_Error) == 0x000001, "Wrong alignment on PlayerProfile_C_Show_Send_Adventure_Card_Error");
static_assert(sizeof(PlayerProfile_C_Show_Send_Adventure_Card_Error) == 0x00000A, "Wrong size on PlayerProfile_C_Show_Send_Adventure_Card_Error");
static_assert(offsetof(PlayerProfile_C_Show_Send_Adventure_Card_Error, InWasSuccessful) == 0x000000, "Member 'PlayerProfile_C_Show_Send_Adventure_Card_Error::InWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Send_Adventure_Card_Error, InSendAdventureResult) == 0x000001, "Member 'PlayerProfile_C_Show_Send_Adventure_Card_Error::InSendAdventureResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Show_Send_Adventure_Card_Error, ReturnValue) == 0x000009, "Member 'PlayerProfile_C_Show_Send_Adventure_Card_Error::ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetCommunicateBtn
// 0x0001 (0x0001 - 0x0000)
struct PlayerProfile_C_SetCommunicateBtn final
{
public:
	bool                                          Param_IsComunicateMode;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_SetCommunicateBtn) == 0x000001, "Wrong alignment on PlayerProfile_C_SetCommunicateBtn");
static_assert(sizeof(PlayerProfile_C_SetCommunicateBtn) == 0x000001, "Wrong size on PlayerProfile_C_SetCommunicateBtn");
static_assert(offsetof(PlayerProfile_C_SetCommunicateBtn, Param_IsComunicateMode) == 0x000000, "Member 'PlayerProfile_C_SetCommunicateBtn::Param_IsComunicateMode' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.BindBlackList
// 0x0050 (0x0050 - 0x0000)
struct PlayerProfile_C_BindBlackList final
{
public:
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerState*                         CallFunc_GetOwningPlayerState_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsRemoveBlackListDelegate_ReturnValue;    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAddBlackListDelegate_ReturnValue;       // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_BindBlackList) == 0x000008, "Wrong alignment on PlayerProfile_C_BindBlackList");
static_assert(sizeof(PlayerProfile_C_BindBlackList) == 0x000050, "Wrong size on PlayerProfile_C_BindBlackList");
static_assert(offsetof(PlayerProfile_C_BindBlackList, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'PlayerProfile_C_BindBlackList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BindBlackList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'PlayerProfile_C_BindBlackList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BindBlackList, CallFunc_GetOwningPlayerState_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_BindBlackList::CallFunc_GetOwningPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BindBlackList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'PlayerProfile_C_BindBlackList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BindBlackList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'PlayerProfile_C_BindBlackList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BindBlackList, CallFunc_IsRemoveBlackListDelegate_ReturnValue) == 0x000048, "Member 'PlayerProfile_C_BindBlackList::CallFunc_IsRemoveBlackListDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_BindBlackList, CallFunc_IsAddBlackListDelegate_ReturnValue) == 0x000049, "Member 'PlayerProfile_C_BindBlackList::CallFunc_IsAddBlackListDelegate_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.UnbindBlackList
// 0x0048 (0x0048 - 0x0000)
struct PlayerProfile_C_UnbindBlackList final
{
public:
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful)>          K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerState*                         CallFunc_GetOwningPlayerState_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_UnbindBlackList) == 0x000008, "Wrong alignment on PlayerProfile_C_UnbindBlackList");
static_assert(sizeof(PlayerProfile_C_UnbindBlackList) == 0x000048, "Wrong size on PlayerProfile_C_UnbindBlackList");
static_assert(offsetof(PlayerProfile_C_UnbindBlackList, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'PlayerProfile_C_UnbindBlackList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UnbindBlackList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'PlayerProfile_C_UnbindBlackList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UnbindBlackList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'PlayerProfile_C_UnbindBlackList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UnbindBlackList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'PlayerProfile_C_UnbindBlackList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UnbindBlackList, CallFunc_GetOwningPlayerState_ReturnValue) == 0x000040, "Member 'PlayerProfile_C_UnbindBlackList::CallFunc_GetOwningPlayerState_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetActiveGuildInviteButton
// 0x0002 (0x0002 - 0x0000)
struct PlayerProfile_C_SetActiveGuildInviteButton final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_SetActiveGuildInviteButton) == 0x000001, "Wrong alignment on PlayerProfile_C_SetActiveGuildInviteButton");
static_assert(sizeof(PlayerProfile_C_SetActiveGuildInviteButton) == 0x000002, "Wrong size on PlayerProfile_C_SetActiveGuildInviteButton");
static_assert(offsetof(PlayerProfile_C_SetActiveGuildInviteButton, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_SetActiveGuildInviteButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetActiveGuildInviteButton, CallFunc_Not_PreBool_ReturnValue_1) == 0x000001, "Member 'PlayerProfile_C_SetActiveGuildInviteButton::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.IsPlayingMission
// 0x01B0 (0x01B0 - 0x0000)
struct PlayerProfile_C_IsPlayingMission final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ABC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ABD[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue_1;            // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0090(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ABE[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue_2;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00D8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue_2;             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ABF[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue_2;            // 0x0120(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0138(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_IsPlayingMission) == 0x000008, "Wrong alignment on PlayerProfile_C_IsPlayingMission");
static_assert(sizeof(PlayerProfile_C_IsPlayingMission) == 0x0001B0, "Wrong size on PlayerProfile_C_IsPlayingMission");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, Result) == 0x000000, "Member 'PlayerProfile_C_IsPlayingMission::Result' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000008, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x00000C, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_And_IntInt_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_And_IntInt_ReturnValue_1) == 0x000014, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_And_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Conv_IntToBool_ReturnValue) == 0x000018, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Conv_IntToBool_ReturnValue_1) == 0x000019, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Conv_IntToBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Conv_BoolToText_ReturnValue) == 0x000020, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Conv_BoolToText_ReturnValue_1) == 0x000038, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Conv_BoolToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'PlayerProfile_C_IsPlayingMission::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, K2Node_MakeStruct_FormatArgumentData_1) == 0x000090, "Member 'PlayerProfile_C_IsPlayingMission::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Not_PreBool_ReturnValue) == 0x0000D0, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_And_IntInt_ReturnValue_2) == 0x0000D4, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_And_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000D8, "Member 'PlayerProfile_C_IsPlayingMission::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Conv_IntToBool_ReturnValue_2) == 0x000118, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Conv_IntToBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_BooleanOR_ReturnValue) == 0x000119, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Conv_BoolToText_ReturnValue_2) == 0x000120, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Conv_BoolToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, K2Node_MakeStruct_FormatArgumentData_3) == 0x000138, "Member 'PlayerProfile_C_IsPlayingMission::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, K2Node_MakeArray_Array) == 0x000178, "Member 'PlayerProfile_C_IsPlayingMission::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Format_ReturnValue) == 0x000188, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsPlayingMission, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A0, "Member 'PlayerProfile_C_IsPlayingMission::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.SetBtnGroup1Visibility
// 0x0005 (0x0005 - 0x0000)
struct PlayerProfile_C_SetBtnGroup1Visibility final
{
public:
	bool                                          bInIsVisible;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_SetBtnGroup1Visibility) == 0x000001, "Wrong alignment on PlayerProfile_C_SetBtnGroup1Visibility");
static_assert(sizeof(PlayerProfile_C_SetBtnGroup1Visibility) == 0x000005, "Wrong size on PlayerProfile_C_SetBtnGroup1Visibility");
static_assert(offsetof(PlayerProfile_C_SetBtnGroup1Visibility, bInIsVisible) == 0x000000, "Member 'PlayerProfile_C_SetBtnGroup1Visibility::bInIsVisible' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBtnGroup1Visibility, Temp_bool_Variable) == 0x000001, "Member 'PlayerProfile_C_SetBtnGroup1Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBtnGroup1Visibility, Temp_byte_Variable) == 0x000002, "Member 'PlayerProfile_C_SetBtnGroup1Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBtnGroup1Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'PlayerProfile_C_SetBtnGroup1Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_SetBtnGroup1Visibility, K2Node_Select_Default) == 0x000004, "Member 'PlayerProfile_C_SetBtnGroup1Visibility::K2Node_Select_Default' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.IsAbleToTeleport
// 0x0348 (0x0348 - 0x0000)
struct PlayerProfile_C_IsAbleToTeleport final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalResult;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC0[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetCurrentMapInfo_OutMapInfo;             // 0x0008(0x01E0)()
	bool                                          CallFunc_GetCurrentMapInfo_ReturnValue;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC1[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01F0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0208(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0248(0x0018)()
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0270(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02B0(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC2[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x02D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0310(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0320(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_IsAbleToTeleport) == 0x000008, "Wrong alignment on PlayerProfile_C_IsAbleToTeleport");
static_assert(sizeof(PlayerProfile_C_IsAbleToTeleport) == 0x000348, "Wrong size on PlayerProfile_C_IsAbleToTeleport");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, bResult) == 0x000000, "Member 'PlayerProfile_C_IsAbleToTeleport::bResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, bLocalResult) == 0x000001, "Member 'PlayerProfile_C_IsAbleToTeleport::bLocalResult' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_GetCurrentMapInfo_OutMapInfo) == 0x000008, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_GetCurrentMapInfo_OutMapInfo' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_GetCurrentMapInfo_ReturnValue) == 0x0001E8, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_GetCurrentMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_Not_PreBool_ReturnValue) == 0x0001E9, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_Conv_StringToText_ReturnValue) == 0x0001F0, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, K2Node_MakeStruct_FormatArgumentData) == 0x000208, "Member 'PlayerProfile_C_IsAbleToTeleport::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000248, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000260, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, K2Node_MakeStruct_FormatArgumentData_1) == 0x000270, "Member 'PlayerProfile_C_IsAbleToTeleport::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002B0, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, K2Node_SwitchEnum_CmpSuccess) == 0x0002C8, "Member 'PlayerProfile_C_IsAbleToTeleport::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, K2Node_MakeStruct_FormatArgumentData_2) == 0x0002D0, "Member 'PlayerProfile_C_IsAbleToTeleport::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, K2Node_MakeArray_Array) == 0x000310, "Member 'PlayerProfile_C_IsAbleToTeleport::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_Format_ReturnValue) == 0x000320, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_IsAbleToTeleport, CallFunc_Conv_TextToString_ReturnValue) == 0x000338, "Member 'PlayerProfile_C_IsAbleToTeleport::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.UpdatePlayerName
// 0x0048 (0x0048 - 0x0000)
struct PlayerProfile_C_UpdatePlayerName final
{
public:
	class FString                                 TmpCharacterName;                                  // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC3[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0018(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_UpdatePlayerName) == 0x000008, "Wrong alignment on PlayerProfile_C_UpdatePlayerName");
static_assert(sizeof(PlayerProfile_C_UpdatePlayerName) == 0x000048, "Wrong size on PlayerProfile_C_UpdatePlayerName");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerName, TmpCharacterName) == 0x000000, "Member 'PlayerProfile_C_UpdatePlayerName::TmpCharacterName' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerName, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_UpdatePlayerName::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerName, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000011, "Member 'PlayerProfile_C_UpdatePlayerName::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerName, K2Node_SwitchEnum_CmpSuccess) == 0x000012, "Member 'PlayerProfile_C_UpdatePlayerName::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerName, CallFunc_GetRestrictText_ReturnValue) == 0x000018, "Member 'PlayerProfile_C_UpdatePlayerName::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerName, CallFunc_Not_PreBool_ReturnValue_1) == 0x000030, "Member 'PlayerProfile_C_UpdatePlayerName::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerName, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'PlayerProfile_C_UpdatePlayerName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.Update Player Screenshot
// 0x0070 (0x0070 - 0x0000)
struct PlayerProfile_C_Update_Player_Screenshot final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC6[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerProfilePhotoTrimmingInfo        CallFunc_Array_Get_Item;                           // 0x0010(0x0050)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC7[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerProfile_C_Update_Player_Screenshot) == 0x000008, "Wrong alignment on PlayerProfile_C_Update_Player_Screenshot");
static_assert(sizeof(PlayerProfile_C_Update_Player_Screenshot) == 0x000070, "Wrong size on PlayerProfile_C_Update_Player_Screenshot");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_Not_PreBool_ReturnValue_1) == 0x000008, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'PlayerProfile_C_Update_Player_Screenshot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_Array_Get_Item) == 0x000010, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_IsEmpty_ReturnValue) == 0x000060, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, K2Node_SwitchEnum_CmpSuccess) == 0x000061, "Member 'PlayerProfile_C_Update_Player_Screenshot::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000062, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, K2Node_SwitchEnum_CmpSuccess_1) == 0x000063, "Member 'PlayerProfile_C_Update_Player_Screenshot::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'PlayerProfile_C_Update_Player_Screenshot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_Update_Player_Screenshot, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'PlayerProfile_C_Update_Player_Screenshot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function PlayerProfile.PlayerProfile_C.UpdatePlayerComment
// 0x0088 (0x0088 - 0x0000)
struct PlayerProfile_C_UpdatePlayerComment final
{
public:
	class FString                                 TmpComment;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AC8[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0030(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AC9[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ACA[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0068(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerProfile_C_UpdatePlayerComment) == 0x000008, "Wrong alignment on PlayerProfile_C_UpdatePlayerComment");
static_assert(sizeof(PlayerProfile_C_UpdatePlayerComment) == 0x000088, "Wrong size on PlayerProfile_C_UpdatePlayerComment");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, TmpComment) == 0x000000, "Member 'PlayerProfile_C_UpdatePlayerComment::TmpComment' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x000029, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_GetText_ReturnValue) == 0x000030, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'PlayerProfile_C_UpdatePlayerComment::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_Conv_TextToString_ReturnValue) == 0x000050, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_Len_ReturnValue) == 0x000060, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_Greater_IntInt_ReturnValue) == 0x000064, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_GetRestrictText_ReturnValue) == 0x000068, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerProfile_C_UpdatePlayerComment, CallFunc_Not_PreBool_ReturnValue_1) == 0x000080, "Member 'PlayerProfile_C_UpdatePlayerComment::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}

