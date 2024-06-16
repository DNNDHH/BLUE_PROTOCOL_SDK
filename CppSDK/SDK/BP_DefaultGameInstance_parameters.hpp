#pragma once

 

// Package: BP_DefaultGameInstance

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteUbergraph_BP_DefaultGameInstance
// 0x1100 (0x1100 - 0x0000)
struct BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DAB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DAC[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBMatching_Menu;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DAD[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingMenu*                        CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DAE[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPartyGameState*                      K2Node_Event_PartyState_7;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	class FString                                 K2Node_Event_SenderId_1;                           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_SenderName_1;                         // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_SenderCharacterId;                    // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              K2Node_Event_type_2;                               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DAF[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_SenderId;                             // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_SenderName;                           // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsAccepted;                          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB0[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_CharacterId_1;                        // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ResultCode;                           // 0x0110(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPrivilegeType                              K2Node_Event_type_1;                               // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DB1[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0118(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB2[0x1];                                     // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0138(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB3[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetXboxPrivacyText_Text;                  // 0x0158(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0170(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_1;         // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01D0(0x0018)()
	class USBPartyMemberState*                    K2Node_Event_JoinedMember;                         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bExistingMember;                      // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsRejoin_1;                          // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB4[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F8(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_2;         // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text; // 0x0220(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0238(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0250(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0290(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x02D0(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x02E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02F0(0x0018)()
	class USBPartyMemberState*                    K2Node_Event_LeavingMember;                        // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsKicked_1;                          // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB5[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_3;         // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0328(0x0018)()
	bool                                          CallFunc_IsNeedRejoin_ReturnValue;                 // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB6[0x6];                                     // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_1; // 0x0348(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0360(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x03A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x03E0(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x03F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0400(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0418(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_5;                          // 0x0458(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_4;         // 0x0468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    K2Node_Event_PromoteMember;                        // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0480(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0498(0x0018)()
	class FText                                   CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_2; // 0x04B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x04C8(0x0040)(HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetParty_ReturnValue;                     // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_6;                          // 0x0510(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsSolo_ReturnValue;                       // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x0521(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB7[0x6];                                     // 0x0522(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_5;         // 0x0528(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_6;         // 0x0538(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0548(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0560(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0578(0x0018)()
	bool                                          K2Node_Event_bWasSuccessful_1;                     // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DB8[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NotApprovedReason;                    // 0x0594(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPartySystemTextType                        K2Node_Event_InType;                               // 0x0598(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DB9[0x7];                                     // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_RecipientName;                        // 0x05A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasSuccessful;                       // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DBA[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_CharacterId;                          // 0x05B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              K2Node_Event_type;                                 // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DBB[0x7];                                     // 0x05C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x05D0(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_7;         // 0x05E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetXboxPrivacyText_Text_1;                // 0x05F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0610(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0628(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0668(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DBC[0x7];                                     // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_7;                          // 0x0670(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_5;                     // 0x0680(0x0018)()
	class USBPartyGameState*                      K2Node_Event_PartyState_6;                         // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsKicked;                            // 0x06A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DBD[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_8;         // 0x06A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_9;         // 0x06B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x06C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x06E0(0x0018)()
	class USBPartyGameState*                      K2Node_Event_PartyState_5;                         // 0x06F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsRejoin;                            // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DBE[0x7];                                     // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_10;        // 0x0708(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0718(0x0018)()
	ESBPartyType                                  CallFunc_GetPartyType_ReturnValue;                 // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue;           // 0x0731(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0732(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0733(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0734(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DBF[0x3];                                     // 0x0735(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_11;        // 0x0738(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x0748(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0760(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      K2Node_Event_PartyState_4;                         // 0x0768(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCanceled;                            // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC0[0x3];                                     // 0x0771(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MigrationResponseCode_1;              // 0x0774(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0778(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0780(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC1[0x7];                                     // 0x0781(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0788(0x0018)()
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput;          // 0x07A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue;             // 0x07B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x07C0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x0800(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x0818(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_8;                          // 0x0858(0x0010)(ReferenceParm)
	class USBPartyGameState*                      K2Node_Event_PartyState_3;                         // 0x0868(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bFromLeader;                          // 0x0870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC2[0x7];                                     // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_6;                     // 0x0878(0x0018)()
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue_1;         // 0x0890(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC3[0x7];                                     // 0x0891(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x08A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x08A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC4[0x7];                                     // 0x08A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x08B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x08C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x08D0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x08E8(0x0018)()
	class USBPartyGameState*                      K2Node_Event_PartyState_2;                         // 0x0900(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsReleased;                          // 0x0908(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC5[0x7];                                     // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_10;           // 0x0910(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_IsFadeingScreen_ReturnValue;              // 0x0950(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC6[0x7];                                     // 0x0951(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_9;                          // 0x0958(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_7;                     // 0x0968(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0980(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_11;           // 0x0990(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_10;                         // 0x09D0(0x0010)(ReferenceParm)
	class USBPartyGameState*                      K2Node_Event_PartyState_1;                         // 0x09E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bExecuted_1;                          // 0x09E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DC7[0x7];                                     // 0x09E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x09F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x09F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue_2;         // 0x09F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExistNonMigrationMember_ReturnValue;    // 0x09FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExecuteMigration_ReturnValue;           // 0x09FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bExecuted;                            // 0x09FC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPartySystemTextType                        K2Node_Event_MessageType;                          // 0x09FD(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DC8[0x2];                                     // 0x09FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MigrationResponseCode;                // 0x0A00(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DC9[0x4];                                     // 0x0A04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue_1;            // 0x0A08(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_12;           // 0x0A20(0x0040)(HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0A60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0A68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DCA[0x7];                                     // 0x0A69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_11;                         // 0x0A70(0x0010)(ReferenceParm)
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General_1; // 0x0A80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0A88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DCB[0x7];                                     // 0x0A89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_8;                     // 0x0A90(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0AA8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPartyMemberState*                    CallFunc_GetPartyLeaderMember_ReturnValue;         // 0x0AB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0AC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0AC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWarpComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0AD0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0AD8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0AE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DCC[0x7];                                     // 0x0AE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_RequestTravelToOnlinePlayerSessionByWarpType_TargetPlayer_CastInput; // 0x0AE8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_RequestTravelToOnlinePlayerSessionByWarpType_ReturnValue; // 0x0AF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DCD[0x7];                                     // 0x0AF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberState_ReturnValue;   // 0x0B00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General; // 0x0B08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0B10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue;         // 0x0B11(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAgreeToMigration_ReturnValue;          // 0x0B12(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DCE[0x1];                                     // 0x0B13(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode;                              // 0x0B14(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_12;        // 0x0B18(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0B28(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DCF[0x4];                                     // 0x0B2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x0B30(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0B48(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_1;          // 0x0B50(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_1;            // 0x0B58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD0[0x7];                                     // 0x0B59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_2;             // 0x0B60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0B68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD1[0x7];                                     // 0x0B69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General_2; // 0x0B70(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0B78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD2[0x7];                                     // 0x0B79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberState_ReturnValue_1; // 0x0B80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyMemberStateGeneral*             K2Node_DynamicCast_AsSBParty_Member_State_General_1; // 0x0B88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0B90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue_1;       // 0x0B91(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAgreeToMigration_ReturnValue_1;        // 0x0B92(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD3[0x5];                                     // 0x0B93(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_2;          // 0x0B98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_2;            // 0x0BA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD4[0x7];                                     // 0x0BA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General_3; // 0x0BA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0BB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD5[0x7];                                     // 0x0BB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0BB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_3;             // 0x0BC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0BC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD6[0x7];                                     // 0x0BC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0BD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue;         // 0x0BD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD7[0x7];                                     // 0x0BD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_4;             // 0x0BE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0BE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD8[0x7];                                     // 0x0BE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_13;        // 0x0BF0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x0C00(0x0018)()
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_1;       // 0x0C18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMatchingFailureType                        K2Node_Event_FailureType_2;                        // 0x0C19(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_PenaltyForMe;                         // 0x0C1A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DD9[0x1];                                     // 0x0C1B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MinuteToEndPenalty;                   // 0x0C1C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0C20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0C21(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0C22(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0C23(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0C24(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanInterruptNotification_Result;          // 0x0C25(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0C26(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0C27(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0C28(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_14;        // 0x0C30(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x0C40(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_15;        // 0x0C58(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x0C68(0x0018)()
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_3;          // 0x0C80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_3;            // 0x0C88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DDA[0x7];                                     // 0x0C89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General_4; // 0x0C90(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x0C98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DDB[0x7];                                     // 0x0C99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_16;        // 0x0CA0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsExecuteMigration_ReturnValue_1;         // 0x0CB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DDC[0x7];                                     // 0x0CB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x0CB8(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0CD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DDD[0x7];                                     // 0x0CD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_17;        // 0x0CD8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_18;        // 0x0CE8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_23;         // 0x0CF8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_24;         // 0x0D10(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_9;                     // 0x0D28(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_10;                    // 0x0D40(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_19;        // 0x0D58(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_25;         // 0x0D68(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_20;        // 0x0D80(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_26;         // 0x0D90(0x0018)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0DA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DDE[0x7];                                     // 0x0DA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_11;                    // 0x0DB0(0x0018)()
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0DC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0DC9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0DCA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DDF[0x5];                                     // 0x0DCB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_21;        // 0x0DD0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0DE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DE0[0x7];                                     // 0x0DE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_27;         // 0x0DE8(0x0018)()
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0E00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0E01(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0E02(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE1[0x5];                                     // 0x0E03(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_22;        // 0x0E08(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x0E18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_28;         // 0x0E20(0x0018)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_5;             // 0x0E38(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x0E40(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE2[0x7];                                     // 0x0E41(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_23;        // 0x0E48(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue_2;       // 0x0E58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE3[0x7];                                     // 0x0E59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_29;         // 0x0E60(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0E78(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPartyGameState*                      K2Node_Event_PartyState;                           // 0x0E88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_30;         // 0x0E90(0x0018)()
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General_5; // 0x0EA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x0EB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimplycityPartyOn_ReturnValue;          // 0x0EB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue_3;         // 0x0EB2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0EB3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE4[0x4];                                     // 0x0EB4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_24;        // 0x0EB8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0EC8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_31;         // 0x0ED8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_32;         // 0x0EF0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_13;           // 0x0F08(0x0040)(HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_5;      // 0x0F48(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_12;                         // 0x0F50(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_12;                    // 0x0F60(0x0018)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_6;             // 0x0F78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x0F80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_2;       // 0x0F81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE5[0x6];                                     // 0x0F82(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_7;             // 0x0F88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x0F90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue_3;       // 0x0F91(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE6[0x6];                                     // 0x0F92(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0F98(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_33;         // 0x0FA8(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0FC0(0x0010)(ZeroConstructor, NoDestructor)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState_4;          // 0x0FD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue_4;            // 0x0FD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0FD9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE7[0x6];                                     // 0x0FDA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetPartyLeaderMember_ReturnValue_1;       // 0x0FE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0FE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE8[0x7];                                     // 0x0FE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterName_self_CastInput_1;        // 0x0FF0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterName_ReturnValue_1;           // 0x1000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_34;         // 0x1010(0x0018)()
	class FText                                   CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_3; // 0x1028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_14;           // 0x1040(0x0040)(HasGetValueTypeHash)
	ENetworkFailure                               K2Node_Event_FailureType_1;                        // 0x1080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsServer;                            // 0x1081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE9[0x6];                                     // 0x1082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_13;                         // 0x1088(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_13;                    // 0x1098(0x0018)()
	ETravelFailure                                K2Node_Event_FailureType;                          // 0x10B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DEA[0x3];                                     // 0x10B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NetworkCafeTotalTimePlayedToday_1;    // 0x10B4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x10B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMatchingGameState*                   K2Node_Event_MatchedGame;                          // 0x10C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x10C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetGameContentId_ReturnValue;             // 0x10D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface_1; // 0x10D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x10E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x10E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DEB[0x2];                                     // 0x10EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NetworkCafeTotalTimePlayedToday;      // 0x10EC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x10F0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance");
static_assert(sizeof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance) == 0x001100, "Wrong size on BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, EntryPoint) == 0x000000, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000018, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_DoesImplementInterface_ReturnValue) == 0x000029, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, Temp_class_Variable) == 0x000030, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_CustomEvent_Loaded) == 0x000038, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_ClassDynamicCast_AsSBMatching_Menu) == 0x000040, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_ClassDynamicCast_AsSBMatching_Menu' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_ClassDynamicCast_bSuccess) == 0x000048, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Create_ReturnValue) == 0x000050, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_CustomEvent_Result) == 0x000058, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000060, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState_7) == 0x000070, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_SenderId_1) == 0x000090, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_SenderId_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_SenderName_1) == 0x0000A0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_SenderName_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_SenderCharacterId) == 0x0000B0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_SenderCharacterId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_type_2) == 0x0000C0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_type_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue) == 0x0000C8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_SenderId) == 0x0000D8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_SenderId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_SenderName) == 0x0000E8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_SenderName' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bIsAccepted) == 0x0000F8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bIsAccepted' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_CharacterId_1) == 0x000100, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_CharacterId_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_ResultCode) == 0x000110, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_ResultCode' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_type_1) == 0x000114, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_type_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000118, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000130, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Not_PreBool_ReturnValue) == 0x000131, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Not_PreBool_ReturnValue_1) == 0x000132, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Len_ReturnValue) == 0x000134, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000138, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000150, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetXboxPrivacyText_Text) == 0x000158, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetXboxPrivacyText_Text' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData) == 0x000170, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_1) == 0x0001B0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array) == 0x0001C0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001D0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_JoinedMember) == 0x0001E8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_JoinedMember' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bExistingMember) == 0x0001F0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bExistingMember' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bIsRejoin_1) == 0x0001F1, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bIsRejoin_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue) == 0x0001F8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_2) == 0x000210, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text) == 0x000220, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000238, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_1) == 0x000250, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_2) == 0x000290, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_1) == 0x0002D0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_2) == 0x0002E0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_1) == 0x0002F0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_LeavingMember) == 0x000308, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_LeavingMember' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bIsKicked_1) == 0x000310, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bIsKicked_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_3) == 0x000318, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000328, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsNeedRejoin_ReturnValue) == 0x000340, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsNeedRejoin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Not_PreBool_ReturnValue_2) == 0x000341, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_1) == 0x000348, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_3) == 0x000360, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_4) == 0x0003A0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_3) == 0x0003E0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_4) == 0x0003F0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_2) == 0x000400, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_5) == 0x000418, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_5) == 0x000458, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_4) == 0x000468, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PromoteMember) == 0x000478, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PromoteMember' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000480, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_3) == 0x000498, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_2) == 0x0004B0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_6) == 0x0004C8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetParty_ReturnValue) == 0x000508, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_6) == 0x000510, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsSolo_ReturnValue) == 0x000520, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsSolo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsLocalPlayer_ReturnValue) == 0x000521, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_5) == 0x000528, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_6) == 0x000538, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000548, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000560, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_4) == 0x000578, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bWasSuccessful_1) == 0x000590, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_NotApprovedReason) == 0x000594, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_NotApprovedReason' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_InType) == 0x000598, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_RecipientName) == 0x0005A0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_RecipientName' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bWasSuccessful) == 0x0005B0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_CharacterId) == 0x0005B8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_CharacterId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_type) == 0x0005C8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_9) == 0x0005D0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_7) == 0x0005E8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetXboxPrivacyText_Text_1) == 0x0005F8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetXboxPrivacyText_Text_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000610, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_7) == 0x000628, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Not_PreBool_ReturnValue_3) == 0x000668, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_7) == 0x000670, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_5) == 0x000680, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState_6) == 0x000698, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bIsKicked) == 0x0006A0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bIsKicked' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_8) == 0x0006A8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_9) == 0x0006B8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_11) == 0x0006C8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_12) == 0x0006E0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState_5) == 0x0006F8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bIsRejoin) == 0x000700, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bIsRejoin' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_10) == 0x000708, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000718, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartyType_ReturnValue) == 0x000730, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsLocalPartyLeader_ReturnValue) == 0x000731, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsLocalPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000732, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Not_PreBool_ReturnValue_4) == 0x000733, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_BooleanAND_ReturnValue) == 0x000734, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_11) == 0x000738, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_14) == 0x000748, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPlayerController_ReturnValue_1) == 0x000760, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState_4) == 0x000768, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bCanceled) == 0x000770, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bCanceled' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_MigrationResponseCode_1) == 0x000774, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_MigrationResponseCode_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State) == 0x000778, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_1) == 0x000780, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_BoolToText_ReturnValue) == 0x000788, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCharacterName_self_CastInput) == 0x0007A0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCharacterName_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCharacterName_ReturnValue) == 0x0007B0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCharacterName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_8) == 0x0007C0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_15) == 0x000800, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_9) == 0x000818, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_8) == 0x000858, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_8' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState_3) == 0x000868, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bFromLeader) == 0x000870, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bFromLeader' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_6) == 0x000878, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsLocalPartyLeader_ReturnValue_1) == 0x000890, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsLocalPartyLeader_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPlayerController_ReturnValue_2) == 0x000898, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0008A0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_2) == 0x0008A8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetTextFromAsset_ReturnValue) == 0x0008B0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0008C0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_16) == 0x0008D0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_17) == 0x0008E8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState_2) == 0x000900, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bIsReleased) == 0x000908, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bIsReleased' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_10) == 0x000910, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_10' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsFadeingScreen_ReturnValue) == 0x000950, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsFadeingScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_9) == 0x000958, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_9' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_7) == 0x000968, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_TextToString_ReturnValue) == 0x000980, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_11) == 0x000990, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_11' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_10) == 0x0009D0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_10' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState_1) == 0x0009E0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bExecuted_1) == 0x0009E8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bExecuted_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x0009F0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_3) == 0x0009F8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsLocalPartyLeader_ReturnValue_2) == 0x0009F9, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsLocalPartyLeader_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsExistNonMigrationMember_ReturnValue) == 0x0009FA, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsExistNonMigrationMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsExecuteMigration_ReturnValue) == 0x0009FB, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsExecuteMigration_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bExecuted) == 0x0009FC, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bExecuted' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_MessageType) == 0x0009FD, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_MessageType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_MigrationResponseCode) == 0x000A00, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_MigrationResponseCode' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_BoolToText_ReturnValue_1) == 0x000A08, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_BoolToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_12) == 0x000A20, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_12' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_OutPartyState) == 0x000A60, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_ReturnValue) == 0x000A68, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_11) == 0x000A70, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_11' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Game_State_General_1) == 0x000A80, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Game_State_General_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_4) == 0x000A88, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_8) == 0x000A90, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000AA8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartyLeaderMember_ReturnValue) == 0x000AB8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartyLeaderMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSBPlayerController_ReturnValue) == 0x000AC0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000AC8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetComponentByClass_ReturnValue) == 0x000AD0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000AD8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_5) == 0x000AE0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_RequestTravelToOnlinePlayerSessionByWarpType_TargetPlayer_CastInput) == 0x000AE8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_RequestTravelToOnlinePlayerSessionByWarpType_TargetPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_RequestTravelToOnlinePlayerSessionByWarpType_ReturnValue) == 0x000AF8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_RequestTravelToOnlinePlayerSessionByWarpType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentPartyMemberState_ReturnValue) == 0x000B00, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentPartyMemberState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Member_State_General) == 0x000B08, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Member_State_General' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_6) == 0x000B10, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsCurrentPartyLeader_ReturnValue) == 0x000B11, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsCurrentPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_HasAgreeToMigration_ReturnValue) == 0x000B12, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_HasAgreeToMigration_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_RetCode) == 0x000B14, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_12) == 0x000B18, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_PlaySE_ReturnValue) == 0x000B28, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_18) == 0x000B30, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000B48, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_OutPartyState_1) == 0x000B50, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_OutPartyState_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_ReturnValue_1) == 0x000B58, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State_2) == 0x000B60, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_7) == 0x000B68, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Game_State_General_2) == 0x000B70, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Game_State_General_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_8) == 0x000B78, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentPartyMemberState_ReturnValue_1) == 0x000B80, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentPartyMemberState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Member_State_General_1) == 0x000B88, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Member_State_General_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_9) == 0x000B90, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsCurrentPartyLeader_ReturnValue_1) == 0x000B91, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsCurrentPartyLeader_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_HasAgreeToMigration_ReturnValue_1) == 0x000B92, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_HasAgreeToMigration_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_OutPartyState_2) == 0x000B98, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_OutPartyState_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_ReturnValue_2) == 0x000BA0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Game_State_General_3) == 0x000BA8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Game_State_General_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_10) == 0x000BB0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000BB8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State_3) == 0x000BC0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_11) == 0x000BC8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000BD0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSimplycityPartyOn_ReturnValue) == 0x000BD8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSimplycityPartyOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State_4) == 0x000BE0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_12) == 0x000BE8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_13) == 0x000BF0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_19) == 0x000C00, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSimplycityPartyOn_ReturnValue_1) == 0x000C18, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSimplycityPartyOn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_FailureType_2) == 0x000C19, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_FailureType_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PenaltyForMe) == 0x000C1A, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PenaltyForMe' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_MinuteToEndPenalty) == 0x000C1C, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_MinuteToEndPenalty' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000C20, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000C21, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000C22, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000C23, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_BooleanOR_ReturnValue) == 0x000C24, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_CanInterruptNotification_Result) == 0x000C25, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_CanInterruptNotification_Result' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_BooleanOR_ReturnValue_1) == 0x000C26, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_BooleanOR_ReturnValue_2) == 0x000C27, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Create_ReturnValue_1) == 0x000C28, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_14) == 0x000C30, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_20) == 0x000C40, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_15) == 0x000C58, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_21) == 0x000C68, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_OutPartyState_3) == 0x000C80, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_OutPartyState_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_ReturnValue_3) == 0x000C88, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Game_State_General_4) == 0x000C90, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Game_State_General_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_13) == 0x000C98, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_16) == 0x000CA0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsExecuteMigration_ReturnValue_1) == 0x000CB0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsExecuteMigration_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_22) == 0x000CB8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Not_PreBool_ReturnValue_5) == 0x000CD0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_17) == 0x000CD8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_18) == 0x000CE8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_23) == 0x000CF8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_24) == 0x000D10, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_9) == 0x000D28, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_10) == 0x000D40, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_19) == 0x000D58, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_25) == 0x000D68, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_20) == 0x000D80, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_26) == 0x000D90, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_IntToByte_ReturnValue) == 0x000DA8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_11) == 0x000DB0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetValidValue_ReturnValue) == 0x000DC8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000DC9, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_SwitchEnum_CmpSuccess) == 0x000DCA, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_21) == 0x000DD0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000DE0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_27) == 0x000DE8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetValidValue_ReturnValue_1) == 0x000E00, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000E01, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_SwitchEnum_CmpSuccess_1) == 0x000E02, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_22) == 0x000E08, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x000E18, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_28) == 0x000E20, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State_5) == 0x000E38, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_14) == 0x000E40, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_23) == 0x000E48, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsCurrentPartyLeader_ReturnValue_2) == 0x000E58, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsCurrentPartyLeader_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_29) == 0x000E60, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000E78, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_PartyState) == 0x000E88, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_PartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_30) == 0x000E90, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBParty_Game_State_General_5) == 0x000EA8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBParty_Game_State_General_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_15) == 0x000EB0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsSimplycityPartyOn_ReturnValue) == 0x000EB1, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsSimplycityPartyOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsLocalPartyLeader_ReturnValue_3) == 0x000EB2, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsLocalPartyLeader_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Not_PreBool_ReturnValue_6) == 0x000EB3, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartySystemText_ReturnValue_24) == 0x000EB8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartySystemText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000EC8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_31) == 0x000ED8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_32) == 0x000EF0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_13) == 0x000F08, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_13' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSBPlayerController_ReturnValue_5) == 0x000F48, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSBPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_12) == 0x000F50, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_12' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_12) == 0x000F60, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State_6) == 0x000F78, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_16) == 0x000F80, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSimplycityPartyOn_ReturnValue_2) == 0x000F81, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSimplycityPartyOn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBPlayer_State_7) == 0x000F88, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBPlayer_State_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_17) == 0x000F90, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetSimplycityPartyOn_ReturnValue_3) == 0x000F91, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetSimplycityPartyOn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000F98, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_33) == 0x000FA8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_CreateDelegate_OutputDelegate) == 0x000FC0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_OutPartyState_4) == 0x000FD0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_OutPartyState_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCurrentParty_ReturnValue_4) == 0x000FD8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCurrentParty_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsValid_ReturnValue) == 0x000FD9, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPartyLeaderMember_ReturnValue_1) == 0x000FE0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPartyLeaderMember_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_IsValid_ReturnValue_1) == 0x000FE8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCharacterName_self_CastInput_1) == 0x000FF0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCharacterName_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetCharacterName_ReturnValue_1) == 0x001000, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetCharacterName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Conv_StringToText_ReturnValue_34) == 0x001010, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Conv_StringToText_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_3) == 0x001028, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetXboxPrivacyText_ByPartyMemberState_Text_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeStruct_FormatArgumentData_14) == 0x001040, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeStruct_FormatArgumentData_14' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_FailureType_1) == 0x001080, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_FailureType_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_bIsServer) == 0x001081, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_bIsServer' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_MakeArray_Array_13) == 0x001088, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_MakeArray_Array_13' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_Format_ReturnValue_13) == 0x001098, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_Format_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_FailureType) == 0x0010B0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_FailureType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_NetworkCafeTotalTimePlayedToday_1) == 0x0010B4, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_NetworkCafeTotalTimePlayedToday_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetPlayerController_ReturnValue_3) == 0x0010B8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_MatchedGame) == 0x0010C0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_MatchedGame' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetHUD_ReturnValue_1) == 0x0010C8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_GetGameContentId_ReturnValue) == 0x0010D0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_GetGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_AsSBNotify_Message_Interface_1) == 0x0010D8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_AsSBNotify_Message_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_DynamicCast_bSuccess_18) == 0x0010E8, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x0010E9, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_Event_NetworkCafeTotalTimePlayedToday) == 0x0010EC, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_Event_NetworkCafeTotalTimePlayedToday' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance, K2Node_CreateDelegate_OutputDelegate_1) == 0x0010F0, "Member 'BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafeRewardNotification
// 0x0004 (0x0004 - 0x0000)
struct BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification final
{
public:
	int32                                         NetworkCafeTotalTimePlayedToday;                   // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification) == 0x000004, "Wrong alignment on BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification");
static_assert(sizeof(BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification) == 0x000004, "Wrong size on BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification");
static_assert(offsetof(BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification, NetworkCafeTotalTimePlayedToday) == 0x000000, "Member 'BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification::NetworkCafeTotalTimePlayedToday' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchedGame
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_ReceiveMatchedGame final
{
public:
	class USBMatchingGameState*                   MatchedGame;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceiveMatchedGame) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceiveMatchedGame");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceiveMatchedGame) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_ReceiveMatchedGame");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveMatchedGame, MatchedGame) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceiveMatchedGame::MatchedGame' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafePlayingTimeNotification
// 0x0004 (0x0004 - 0x0000)
struct BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification final
{
public:
	int32                                         NetworkCafeTotalTimePlayedToday;                   // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification) == 0x000004, "Wrong alignment on BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification");
static_assert(sizeof(BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification) == 0x000004, "Wrong size on BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification");
static_assert(offsetof(BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification, NetworkCafeTotalTimePlayedToday) == 0x000000, "Member 'BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification::NetworkCafeTotalTimePlayedToday' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleTravelError
// 0x0001 (0x0001 - 0x0000)
struct BP_DefaultGameInstance_C_HandleTravelError final
{
public:
	ETravelFailure                                FailureType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_HandleTravelError) == 0x000001, "Wrong alignment on BP_DefaultGameInstance_C_HandleTravelError");
static_assert(sizeof(BP_DefaultGameInstance_C_HandleTravelError) == 0x000001, "Wrong size on BP_DefaultGameInstance_C_HandleTravelError");
static_assert(offsetof(BP_DefaultGameInstance_C_HandleTravelError, FailureType) == 0x000000, "Member 'BP_DefaultGameInstance_C_HandleTravelError::FailureType' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkError
// 0x0002 (0x0002 - 0x0000)
struct BP_DefaultGameInstance_C_HandleNetworkError final
{
public:
	ENetworkFailure                               FailureType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsServer;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_HandleNetworkError) == 0x000001, "Wrong alignment on BP_DefaultGameInstance_C_HandleNetworkError");
static_assert(sizeof(BP_DefaultGameInstance_C_HandleNetworkError) == 0x000002, "Wrong size on BP_DefaultGameInstance_C_HandleNetworkError");
static_assert(offsetof(BP_DefaultGameInstance_C_HandleNetworkError, FailureType) == 0x000000, "Member 'BP_DefaultGameInstance_C_HandleNetworkError::FailureType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_HandleNetworkError, bIsServer) == 0x000001, "Member 'BP_DefaultGameInstance_C_HandleNetworkError::bIsServer' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChange
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartySimplycityChange final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartySimplycityChange) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartySimplycityChange");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartySimplycityChange) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_ReceivePartySimplycityChange");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartySimplycityChange, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartySimplycityChange::PartyState' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchingFailed
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_ReceiveMatchingFailed final
{
public:
	ESBMatchingFailureType                        FailureType;                                       // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PenaltyForMe;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DEC[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinuteToEndPenalty;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceiveMatchingFailed) == 0x000004, "Wrong alignment on BP_DefaultGameInstance_C_ReceiveMatchingFailed");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceiveMatchingFailed) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_ReceiveMatchingFailed");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveMatchingFailed, FailureType) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceiveMatchingFailed::FailureType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveMatchingFailed, PenaltyForMe) == 0x000001, "Member 'BP_DefaultGameInstance_C_ReceiveMatchingFailed::PenaltyForMe' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveMatchingFailed, MinuteToEndPenalty) == 0x000004, "Member 'BP_DefaultGameInstance_C_ReceiveMatchingFailed::MinuteToEndPenalty' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.MigrationHandleTravelError
// 0x0004 (0x0004 - 0x0000)
struct BP_DefaultGameInstance_C_MigrationHandleTravelError final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_MigrationHandleTravelError) == 0x000004, "Wrong alignment on BP_DefaultGameInstance_C_MigrationHandleTravelError");
static_assert(sizeof(BP_DefaultGameInstance_C_MigrationHandleTravelError) == 0x000004, "Wrong size on BP_DefaultGameInstance_C_MigrationHandleTravelError");
static_assert(offsetof(BP_DefaultGameInstance_C_MigrationHandleTravelError, RetCode) == 0x000000, "Member 'BP_DefaultGameInstance_C_MigrationHandleTravelError::RetCode' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigration
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_ExecuteMigration final
{
public:
	bool                                          bExecuted;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPartySystemTextType                        MessageType;                                       // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DED[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MigrationResponseCode;                             // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ExecuteMigration) == 0x000004, "Wrong alignment on BP_DefaultGameInstance_C_ExecuteMigration");
static_assert(sizeof(BP_DefaultGameInstance_C_ExecuteMigration) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_ExecuteMigration");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteMigration, bExecuted) == 0x000000, "Member 'BP_DefaultGameInstance_C_ExecuteMigration::bExecuted' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteMigration, MessageType) == 0x000001, "Member 'BP_DefaultGameInstance_C_ExecuteMigration::MessageType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ExecuteMigration, MigrationResponseCode) == 0x000004, "Member 'BP_DefaultGameInstance_C_ExecuteMigration::MigrationResponseCode' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMigration
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyMigration final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bExecuted;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyMigration) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyMigration");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyMigration) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyMigration");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMigration, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyMigration::PartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMigration, bExecuted) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyMigration::bExecuted' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeft
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyMemberLeft final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsReleased;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyMemberLeft) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyMemberLeft");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyMemberLeft) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyMemberLeft");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMemberLeft, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyMemberLeft::PartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMemberLeft, bIsReleased) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyMemberLeft::bIsReleased' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRetireGame
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyRetireGame final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromLeader;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyRetireGame) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyRetireGame");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyRetireGame) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyRetireGame");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyRetireGame, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyRetireGame::PartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyRetireGame, bFromLeader) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyRetireGame::bFromLeader' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyConvocation
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyConvocation final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanceled;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DEE[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MigrationResponseCode;                             // 0x000C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyConvocation) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyConvocation");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyConvocation) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyConvocation");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyConvocation, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyConvocation::PartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyConvocation, bCanceled) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyConvocation::bCanceled' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyConvocation, MigrationResponseCode) == 0x00000C, "Member 'BP_DefaultGameInstance_C_ReceivePartyConvocation::MigrationResponseCode' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyJoined
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyJoined final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsRejoin;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyJoined) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyJoined");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyJoined) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyJoined");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyJoined, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyJoined::PartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyJoined, bIsRejoin) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyJoined::bIsRejoin' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyLeft
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyLeft final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsKicked;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyLeft) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyLeft");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyLeft) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyLeft");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyLeft, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyLeft::PartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyLeft, bIsKicked) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyLeft::bIsKicked' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveSendInvitationComplete
// 0x0038 (0x0038 - 0x0000)
struct BP_DefaultGameInstance_C_ReceiveSendInvitationComplete final
{
public:
	ESBPartySystemTextType                        InType;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DEF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 RecipientName;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bWasSuccessful;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              Type;                                              // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceiveSendInvitationComplete) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceiveSendInvitationComplete");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceiveSendInvitationComplete) == 0x000038, "Wrong size on BP_DefaultGameInstance_C_ReceiveSendInvitationComplete");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveSendInvitationComplete, InType) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceiveSendInvitationComplete::InType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveSendInvitationComplete, RecipientName) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceiveSendInvitationComplete::RecipientName' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveSendInvitationComplete, bWasSuccessful) == 0x000018, "Member 'BP_DefaultGameInstance_C_ReceiveSendInvitationComplete::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveSendInvitationComplete, CharacterId) == 0x000020, "Member 'BP_DefaultGameInstance_C_ReceiveSendInvitationComplete::CharacterId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveSendInvitationComplete, Type) == 0x000030, "Member 'BP_DefaultGameInstance_C_ReceiveSendInvitationComplete::Type' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveJoinInviteParty
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_ReceiveJoinInviteParty final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NotApprovedReason;                                 // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceiveJoinInviteParty) == 0x000004, "Wrong alignment on BP_DefaultGameInstance_C_ReceiveJoinInviteParty");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceiveJoinInviteParty) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_ReceiveJoinInviteParty");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveJoinInviteParty, bWasSuccessful) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceiveJoinInviteParty::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceiveJoinInviteParty, NotApprovedReason) == 0x000004, "Member 'BP_DefaultGameInstance_C_ReceiveJoinInviteParty::NotApprovedReason' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePromotePartyMember
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePromotePartyMember final
{
public:
	class USBPartyMemberState*                    PromoteMember;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePromotePartyMember) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePromotePartyMember");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePromotePartyMember) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_ReceivePromotePartyMember");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePromotePartyMember, PromoteMember) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePromotePartyMember::PromoteMember' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeaving
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyMemberLeaving final
{
public:
	class USBPartyMemberState*                    LeavingMember;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsKicked;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyMemberLeaving) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyMemberLeaving");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyMemberLeaving) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyMemberLeaving");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMemberLeaving, LeavingMember) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyMemberLeaving::LeavingMember' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMemberLeaving, bIsKicked) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyMemberLeaving::bIsKicked' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberJoined
// 0x0010 (0x0010 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyMemberJoined final
{
public:
	class USBPartyMemberState*                    JoinedMember;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bExistingMember;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsRejoin;                                         // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyMemberJoined) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyMemberJoined");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyMemberJoined) == 0x000010, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyMemberJoined");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMemberJoined, JoinedMember) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyMemberJoined::JoinedMember' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMemberJoined, bExistingMember) == 0x000008, "Member 'BP_DefaultGameInstance_C_ReceivePartyMemberJoined::bExistingMember' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyMemberJoined, bIsRejoin) == 0x000009, "Member 'BP_DefaultGameInstance_C_ReceivePartyMemberJoined::bIsRejoin' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteResponseReceived
// 0x0040 (0x0040 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived final
{
public:
	class FString                                 SenderId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SenderName;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bIsAccepted;                                       // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF2[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ResultCode;                                        // 0x0038(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPrivilegeType                              Type;                                              // 0x003C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived) == 0x000040, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived, SenderId) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived::SenderId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived, SenderName) == 0x000010, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived::SenderName' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived, bIsAccepted) == 0x000020, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived::bIsAccepted' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived, CharacterId) == 0x000028, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived::CharacterId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived, ResultCode) == 0x000038, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived::ResultCode' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived, Type) == 0x00003C, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived::Type' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteReceived
// 0x0038 (0x0038 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyInviteReceived final
{
public:
	class FString                                 SenderId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SenderName;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 SenderCharacterId;                                 // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              Type;                                              // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyInviteReceived) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyInviteReceived");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyInviteReceived) == 0x000038, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyInviteReceived");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteReceived, SenderId) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteReceived::SenderId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteReceived, SenderName) == 0x000010, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteReceived::SenderName' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteReceived, SenderCharacterId) == 0x000020, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteReceived::SenderCharacterId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyInviteReceived, Type) == 0x000030, "Member 'BP_DefaultGameInstance_C_ReceivePartyInviteReceived::Type' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRequestMatchmaking
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking final
{
public:
	class USBPartyGameState*                      PartyState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking");
static_assert(sizeof(BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking");
static_assert(offsetof(BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking, PartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking::PartyState' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.AdventureBoardError_Event
// 0x0001 (0x0001 - 0x0000)
struct BP_DefaultGameInstance_C_AdventureBoardError_Event final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_AdventureBoardError_Event) == 0x000001, "Wrong alignment on BP_DefaultGameInstance_C_AdventureBoardError_Event");
static_assert(sizeof(BP_DefaultGameInstance_C_AdventureBoardError_Event) == 0x000001, "Wrong size on BP_DefaultGameInstance_C_AdventureBoardError_Event");
static_assert(offsetof(BP_DefaultGameInstance_C_AdventureBoardError_Event, Result) == 0x000000, "Member 'BP_DefaultGameInstance_C_AdventureBoardError_Event::Result' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnLoaded_88632A3A4D923436604E88879DC1917B
// 0x0008 (0x0008 - 0x0000)
struct BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B");
static_assert(sizeof(BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B) == 0x000008, "Wrong size on BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B");
static_assert(offsetof(BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B, Loaded) == 0x000000, "Member 'BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B::Loaded' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowMatchingFailedMessage
// 0x0108 (0x0108 - 0x0000)
struct BP_DefaultGameInstance_C_ShowMatchingFailedMessage final
{
public:
	ESBMatchingFailureType                        Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PenaltyForMe;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF3[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinuteToEndPenalty;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF4[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0060(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0064(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMatchingFailureType                        Temp_byte_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DF5[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x006C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0070(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0074(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0078(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x007C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0080(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0084(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0088(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x008C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x0090(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0094(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0098(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x009C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x00A0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x00A4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x00A8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x00AC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x00B0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x00B4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x00B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_21;                              // 0x00BC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_22;                              // 0x00C0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x00C4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
};
static_assert(alignof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ShowMatchingFailedMessage");
static_assert(sizeof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage) == 0x000108, "Wrong size on BP_DefaultGameInstance_C_ShowMatchingFailedMessage");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Type) == 0x000000, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Type' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, PenaltyForMe) == 0x000001, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::PenaltyForMe' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, MinuteToEndPenalty) == 0x000004, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::MinuteToEndPenalty' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_bool_Variable) == 0x000008, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, K2Node_MakeArray_Array) == 0x000050, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable) == 0x000060, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_1) == 0x000064, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_byte_Variable) == 0x000068, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, K2Node_Select_Default) == 0x00006C, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_2) == 0x000070, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_3) == 0x000074, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_4) == 0x000078, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_5) == 0x00007C, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_6) == 0x000080, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_7) == 0x000084, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_8) == 0x000088, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_9) == 0x00008C, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_10) == 0x000090, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_11) == 0x000094, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_12) == 0x000098, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_13) == 0x00009C, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_14) == 0x0000A0, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_15) == 0x0000A4, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_16) == 0x0000A8, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_17) == 0x0000AC, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_18) == 0x0000B0, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_19) == 0x0000B4, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_20) == 0x0000B8, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_21) == 0x0000BC, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, Temp_int_Variable_22) == 0x0000C0, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, K2Node_Select_Default_1) == 0x0000C4, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C8, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowMatchingFailedMessage, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'BP_DefaultGameInstance_C_ShowMatchingFailedMessage::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowSimpleMessageLite
// 0x0018 (0x0018 - 0x0000)
struct BP_DefaultGameInstance_C_ShowSimpleMessageLite final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_DefaultGameInstance_C_ShowSimpleMessageLite) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ShowSimpleMessageLite");
static_assert(sizeof(BP_DefaultGameInstance_C_ShowSimpleMessageLite) == 0x000018, "Wrong size on BP_DefaultGameInstance_C_ShowSimpleMessageLite");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowSimpleMessageLite, InMessage) == 0x000000, "Member 'BP_DefaultGameInstance_C_ShowSimpleMessageLite::InMessage' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyMigrationMessage
// 0x0150 (0x0150 - 0x0000)
struct BP_DefaultGameInstance_C_ShowPartyMigrationMessage final
{
public:
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF6[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_IsCurrentPartyLeader_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DF7[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF8[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_1;         // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0088(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DF9[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_2;         // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0138(0x0018)()
};
static_assert(alignof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ShowPartyMigrationMessage");
static_assert(sizeof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage) == 0x000150, "Wrong size on BP_DefaultGameInstance_C_ShowPartyMigrationMessage");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetSBPlayerController_ReturnValue) == 0x000000, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_IsCurrentPartyLeader_ReturnValue) == 0x000040, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_IsCurrentPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_Conv_IntToByte_ReturnValue) == 0x000041, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000042, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetValidValue_ReturnValue) == 0x000043, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetPartySystemText_ReturnValue) == 0x000048, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetPartySystemText_ReturnValue_1) == 0x000078, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetPartySystemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000088, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetCurrentParty_OutPartyState) == 0x0000E0, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetCurrentParty_ReturnValue) == 0x0000E8, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, K2Node_MakeArray_Array) == 0x0000F0, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_Format_ReturnValue) == 0x000100, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_GetPartySystemText_ReturnValue_2) == 0x000118, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_GetPartySystemText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x000128, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyMigrationMessage, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000138, "Member 'BP_DefaultGameInstance_C_ShowPartyMigrationMessage::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyResponseCommonErrorMessage
// 0x00B0 (0x00B0 - 0x0000)
struct BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage final
{
public:
	int32                                         MsgCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DFA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPartySystemText_ReturnValue;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DFB[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_1;         // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_2;         // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0070(0x0018)()
	class FString                                 CallFunc_GetPartySystemText_ReturnValue_3;         // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0098(0x0018)()
};
static_assert(alignof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage");
static_assert(sizeof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage) == 0x0000B0, "Wrong size on BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, MsgCode) == 0x000000, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::MsgCode' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_GetPartySystemText_ReturnValue) == 0x000008, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_GetPartySystemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_GetPartySystemText_ReturnValue_1) == 0x000038, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_GetPartySystemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_GetPartySystemText_ReturnValue_2) == 0x000060, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_GetPartySystemText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000070, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_GetPartySystemText_ReturnValue_3) == 0x000088, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_GetPartySystemText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000098, "Member 'BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText
// 0x00A0 (0x00A0 - 0x0000)
struct BP_DefaultGameInstance_C_GetXboxPrivacyText final
{
public:
	ESBPrivilegeType                              InPrivilegeType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DFC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InCharacterId;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InPlatformUserId;                                  // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBRestrictTextLength                         InRestrictText;                                    // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DFD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0048(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DFE[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0068(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DFF[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0088(0x0018)()
};
static_assert(alignof(BP_DefaultGameInstance_C_GetXboxPrivacyText) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_GetXboxPrivacyText");
static_assert(sizeof(BP_DefaultGameInstance_C_GetXboxPrivacyText) == 0x0000A0, "Wrong size on BP_DefaultGameInstance_C_GetXboxPrivacyText");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, InPrivilegeType) == 0x000000, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::InPrivilegeType' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, InCharacterId) == 0x000008, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::InCharacterId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, InPlatformUserId) == 0x000018, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::InPlatformUserId' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, InText) == 0x000028, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::InText' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, InRestrictText) == 0x000040, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::InRestrictText' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, Text) == 0x000048, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::Text' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, Temp_bool_Variable) == 0x000060, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, CallFunc_GetRestrictText_ReturnValue) == 0x000068, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000080, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000081, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText, K2Node_Select_Default) == 0x000088, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText::K2Node_Select_Default' has a wrong offset!");

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText_ByPartyMemberState
// 0x00A8 (0x00A8 - 0x0000)
struct BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState final
{
public:
	class USBPartyMemberState*                    InPartyState;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBRestrictTextLength                         InRestrictText;                                    // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E00[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0028(0x0018)(Parm, OutParm)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetPlatformInfo_self_CastInput;           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0050(0x0020)()
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetXboxPrivacyText_Text;                  // 0x0090(0x0018)()
};
static_assert(alignof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState) == 0x000008, "Wrong alignment on BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState");
static_assert(sizeof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState) == 0x0000A8, "Wrong size on BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, InPartyState) == 0x000000, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::InPartyState' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, InText) == 0x000008, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::InText' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, InRestrictText) == 0x000020, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::InRestrictText' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, Text) == 0x000028, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::Text' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, CallFunc_GetPlatformInfo_self_CastInput) == 0x000040, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::CallFunc_GetPlatformInfo_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, CallFunc_GetPlatformInfo_ReturnValue) == 0x000050, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, CallFunc_GetCharacterId_self_CastInput) == 0x000070, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, CallFunc_GetCharacterId_ReturnValue) == 0x000080, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState, CallFunc_GetXboxPrivacyText_Text) == 0x000090, "Member 'BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState::CallFunc_GetXboxPrivacyText_Text' has a wrong offset!");

}

