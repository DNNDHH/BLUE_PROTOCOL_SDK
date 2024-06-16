#pragma once

 

// Package: ChatLogOtherPlayerMessage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClickedDirectMessage__DelegateSignature
// 0x0040 (0x0040 - 0x0000)
struct ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature final
{
public:
	class FString                                 TagertPlayerId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   TagertName;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CharacterId;                                       // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              PrivilegeType;                                     // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature) == 0x000040, "Wrong size on ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature, TagertPlayerId) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature::TagertPlayerId' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature, TagertName) == 0x000010, "Member 'ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature::TagertName' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature, CharacterId) == 0x000028, "Member 'ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature::CharacterId' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature, PrivilegeType) == 0x000038, "Member 'ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature::PrivilegeType' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ExecuteUbergraph_ChatLogOtherPlayerMessage
// 0x0560 (0x0560 - 0x0000)
struct ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F89[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F8A[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F8B[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsStampMessage_RetStampID;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F8C[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_IsStampMessage_OutMessage;                // 0x0058(0x0018)()
	bool                                          CallFunc_IsStampMessage_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F8D[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00A0(0x0018)()
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F8E[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F0(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F8F[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0128(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F90[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0130(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0528(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F91[0x4];                                     // 0x052C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFloatStampIcon_C*               CallFunc_Create_ReturnValue_1;                     // 0x0530(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F92[0x6];                                     // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIsBlackListedByCharacterId_ReturnValue; // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F93[0x3];                                     // 0x0551(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0554(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0558(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x055C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage) == 0x000560, "Wrong size on ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, EntryPoint) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_CustomEvent_URL) == 0x000010, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_DownloadImage_ReturnValue) == 0x000030, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsValid_ReturnValue_2) == 0x00004C, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsValid_ReturnValue_3) == 0x00004D, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsStampMessage_RetStampID) == 0x000050, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsStampMessage_RetStampID' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsStampMessage_OutMessage) == 0x000058, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsStampMessage_OutMessage' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsStampMessage_ReturnValue) == 0x000070, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsStampMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000078, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetText_ReturnValue) == 0x0000A0, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsVisible_ReturnValue) == 0x0000B8, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C0, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0000D0, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E0, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F0, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetPlayerController_ReturnValue) == 0x000108, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000110, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsPhotoMode_ReturnValue) == 0x000119, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetConcernedList_ReturnValue) == 0x000120, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_CustomEvent_bWasSuccessful) == 0x000128, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000130, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, K2Node_CustomEvent_RetCode) == 0x000528, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_Create_ReturnValue_1) == 0x000530, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_IsValid_ReturnValue_4) == 0x000538, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetNetworkDataCache_IsValid) == 0x000539, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000540, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_GetDesiredSize_ReturnValue) == 0x000548, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_CheckIsBlackListedByCharacterId_ReturnValue) == 0x000550, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_CheckIsBlackListedByCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_BreakVector2D_X) == 0x000554, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_BreakVector2D_Y) == 0x000558, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00055C, "Member 'ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnGetPlayerProfile
// 0x0408 (0x0408 - 0x0000)
struct ChatLogOtherPlayerMessage_C_OnGetPlayerProfile final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F94[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_OnGetPlayerProfile) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_OnGetPlayerProfile");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_OnGetPlayerProfile) == 0x000408, "Wrong size on ChatLogOtherPlayerMessage_C_OnGetPlayerProfile");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnGetPlayerProfile, bWasSuccessful) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_OnGetPlayerProfile::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnGetPlayerProfile, PlayerProfileDetailMenuData) == 0x000008, "Member 'ChatLogOtherPlayerMessage_C_OnGetPlayerProfile::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnGetPlayerProfile, RetCode) == 0x000400, "Member 'ChatLogOtherPlayerMessage_C_OnGetPlayerProfile::RetCode' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.DonwloadFaceImage_Event
// 0x0010 (0x0010 - 0x0000)
struct ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event) == 0x000010, "Wrong size on ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event, URL) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event::URL' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Init
// 0x01B0 (0x01B0 - 0x0000)
struct ChatLogOtherPlayerMessage_C_Init final
{
public:
	struct FSBChatUIMessage                       InMessLog;                                         // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsEndInit;                                         // 0x0070(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCursorStampHit;                                  // 0x0071(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCloseArea;                                       // 0x0072(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F95[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Param_Name;                                        // 0x0078(0x0018)(Edit, BlueprintVisible)
	struct FLinearColor                           MessBGColor;                                       // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogType                                ChatType;                                          // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F96[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Timestamp;                                         // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x00B0(0x0018)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F97[0x1];                                     // 0x00CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F98[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChatLogTextSizeIndex_ReturnValue;      // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChatLogTextSize_ReturnValue;           // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F99[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsStampMessage_RetStampID;                // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_IsStampMessage_OutMessage;                // 0x0110(0x0018)()
	bool                                          CallFunc_IsStampMessage_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F9A[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0130(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F9B[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_Init) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_Init");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_Init) == 0x0001B0, "Wrong size on ChatLogOtherPlayerMessage_C_Init");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, InMessLog) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_Init::InMessLog' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, IsEndInit) == 0x000070, "Member 'ChatLogOtherPlayerMessage_C_Init::IsEndInit' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, IsCursorStampHit) == 0x000071, "Member 'ChatLogOtherPlayerMessage_C_Init::IsCursorStampHit' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, IsCloseArea) == 0x000072, "Member 'ChatLogOtherPlayerMessage_C_Init::IsCloseArea' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Param_Name) == 0x000078, "Member 'ChatLogOtherPlayerMessage_C_Init::Param_Name' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, MessBGColor) == 0x000090, "Member 'ChatLogOtherPlayerMessage_C_Init::MessBGColor' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, ChatType) == 0x0000A0, "Member 'ChatLogOtherPlayerMessage_C_Init::ChatType' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Timestamp) == 0x0000A8, "Member 'ChatLogOtherPlayerMessage_C_Init::Timestamp' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Message) == 0x0000B0, "Member 'ChatLogOtherPlayerMessage_C_Init::Message' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Temp_bool_Variable) == 0x0000C8, "Member 'ChatLogOtherPlayerMessage_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Temp_byte_Variable) == 0x0000C9, "Member 'ChatLogOtherPlayerMessage_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Temp_byte_Variable_1) == 0x0000CA, "Member 'ChatLogOtherPlayerMessage_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Temp_int_Variable) == 0x0000CC, "Member 'ChatLogOtherPlayerMessage_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Temp_struct_Variable) == 0x0000D0, "Member 'ChatLogOtherPlayerMessage_C_Init::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Temp_struct_Variable_1) == 0x0000D8, "Member 'ChatLogOtherPlayerMessage_C_Init::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, Temp_struct_Variable_2) == 0x0000E0, "Member 'ChatLogOtherPlayerMessage_C_Init::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_GetConfigSaveManager_IsValid) == 0x0000E8, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_GetConfigSaveManager_ReturnValue) == 0x0000F0, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_GetChatLogTextSizeIndex_ReturnValue) == 0x0000F8, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_GetChatLogTextSizeIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_GetChatLogTextSize_ReturnValue) == 0x0000FC, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_GetChatLogTextSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, K2Node_Select_Default) == 0x000100, "Member 'ChatLogOtherPlayerMessage_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, K2Node_SwitchEnum_CmpSuccess) == 0x000108, "Member 'ChatLogOtherPlayerMessage_C_Init::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_IsStampMessage_RetStampID) == 0x00010C, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_IsStampMessage_RetStampID' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_IsStampMessage_OutMessage) == 0x000110, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_IsStampMessage_OutMessage' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_IsStampMessage_ReturnValue) == 0x000128, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_IsStampMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, K2Node_SwitchEnum_CmpSuccess_1) == 0x000129, "Member 'ChatLogOtherPlayerMessage_C_Init::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, K2Node_MakeStruct_FormatArgumentData) == 0x000130, "Member 'ChatLogOtherPlayerMessage_C_Init::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, K2Node_MakeArray_Array) == 0x000170, "Member 'ChatLogOtherPlayerMessage_C_Init::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_Format_ReturnValue) == 0x000180, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, K2Node_Select_Default_1) == 0x000198, "Member 'ChatLogOtherPlayerMessage_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_Init, CallFunc_GetFaceImageURL_ReturnValue) == 0x0001A0, "Member 'ChatLogOtherPlayerMessage_C_Init::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ZeroPadding
// 0x0068 (0x0068 - 0x0000)
struct ChatLogOtherPlayerMessage_C_ZeroPadding final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F9C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RetValue;                                          // 0x0008(0x0018)(Parm, OutParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_ZeroPadding) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_ZeroPadding");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_ZeroPadding) == 0x000068, "Wrong size on ChatLogOtherPlayerMessage_C_ZeroPadding");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ZeroPadding, InValue) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_ZeroPadding::InValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ZeroPadding, RetValue) == 0x000008, "Member 'ChatLogOtherPlayerMessage_C_ZeroPadding::RetValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ZeroPadding, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'ChatLogOtherPlayerMessage_C_ZeroPadding::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ZeroPadding, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'ChatLogOtherPlayerMessage_C_ZeroPadding::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ZeroPadding, CallFunc_Right_ReturnValue) == 0x000040, "Member 'ChatLogOtherPlayerMessage_C_ZeroPadding::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_ZeroPadding, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'ChatLogOtherPlayerMessage_C_ZeroPadding::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetStamp
// 0x0050 (0x0050 - 0x0000)
struct ChatLogOtherPlayerMessage_C_SetStamp final
{
public:
	int32                                         InStampId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndInit;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F9D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFloatStampIcon_C*               CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_SetStamp) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_SetStamp");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_SetStamp) == 0x000050, "Wrong size on ChatLogOtherPlayerMessage_C_SetStamp");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetStamp, InStampId) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_SetStamp::InStampId' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetStamp, IsEndInit) == 0x000004, "Member 'ChatLogOtherPlayerMessage_C_SetStamp::IsEndInit' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetStamp, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ChatLogOtherPlayerMessage_C_SetStamp::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetStamp, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'ChatLogOtherPlayerMessage_C_SetStamp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetStamp, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'ChatLogOtherPlayerMessage_C_SetStamp::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetStamp, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'ChatLogOtherPlayerMessage_C_SetStamp::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetStamp, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'ChatLogOtherPlayerMessage_C_SetStamp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.GetFloatStampPoint
// 0x0050 (0x0050 - 0x0000)
struct ChatLogOtherPlayerMessage_C_GetFloatStampPoint final
{
public:
	struct FVector2D                              NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0008(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_GetFloatStampPoint) == 0x000004, "Wrong alignment on ChatLogOtherPlayerMessage_C_GetFloatStampPoint");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_GetFloatStampPoint) == 0x000050, "Wrong size on ChatLogOtherPlayerMessage_C_GetFloatStampPoint");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_GetFloatStampPoint, NewParam) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_GetFloatStampPoint::NewParam' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_GetFloatStampPoint, CallFunc_GetCachedGeometry_ReturnValue) == 0x000008, "Member 'ChatLogOtherPlayerMessage_C_GetFloatStampPoint::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_GetFloatStampPoint, CallFunc_LocalToViewport_PixelPosition) == 0x000040, "Member 'ChatLogOtherPlayerMessage_C_GetFloatStampPoint::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_GetFloatStampPoint, CallFunc_LocalToViewport_ViewportPosition) == 0x000048, "Member 'ChatLogOtherPlayerMessage_C_GetFloatStampPoint::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnMouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct ChatLogOtherPlayerMessage_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ChatLogOtherPlayerMessage_C_OnMouseButtonDown");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_OnMouseButtonDown) == 0x000220, "Wrong size on ChatLogOtherPlayerMessage_C_OnMouseButtonDown");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ChatLogOtherPlayerMessage_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ChatLogOtherPlayerMessage_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'ChatLogOtherPlayerMessage_C_OnMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_OnMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000218, "Member 'ChatLogOtherPlayerMessage_C_OnMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetClipboardCopy
// 0x0005 (0x0005 - 0x0000)
struct ChatLogOtherPlayerMessage_C_SetClipboardCopy final
{
public:
	bool                                          IsCopy;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogOtherPlayerMessage_C_SetClipboardCopy) == 0x000001, "Wrong alignment on ChatLogOtherPlayerMessage_C_SetClipboardCopy");
static_assert(sizeof(ChatLogOtherPlayerMessage_C_SetClipboardCopy) == 0x000005, "Wrong size on ChatLogOtherPlayerMessage_C_SetClipboardCopy");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetClipboardCopy, IsCopy) == 0x000000, "Member 'ChatLogOtherPlayerMessage_C_SetClipboardCopy::IsCopy' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetClipboardCopy, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'ChatLogOtherPlayerMessage_C_SetClipboardCopy::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetClipboardCopy, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'ChatLogOtherPlayerMessage_C_SetClipboardCopy::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetClipboardCopy, Temp_bool_Variable) == 0x000003, "Member 'ChatLogOtherPlayerMessage_C_SetClipboardCopy::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogOtherPlayerMessage_C_SetClipboardCopy, K2Node_Select_Default) == 0x000004, "Member 'ChatLogOtherPlayerMessage_C_SetClipboardCopy::K2Node_Select_Default' has a wrong offset!");

}

