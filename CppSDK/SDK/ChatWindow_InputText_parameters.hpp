#pragma once

 

// Package: ChatWindow_InputText

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ChatWindow_InputText.ChatWindow_InputText_C.ExecuteUbergraph_ChatWindow_InputText
// 0x0148 (0x0148 - 0x0000)
struct ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4983[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	bool                                          CallFunc_RoundText_IsRound;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4984[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_RoundText_outText;                        // 0x0028(0x0018)()
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0040(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RoundText_IsRound_1;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4985[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_RoundText_outText_1;                      // 0x0060(0x0018)()
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0078(0x0018)(ConstParm)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4986[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_InText;                         // 0x00A8(0x0018)()
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4987[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SpecialCommandProcess_OutChatMessage;     // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBChatLogType                                CallFunc_SpecialCommandProcess_ChatLogType;        // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4988[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4989[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText");
static_assert(sizeof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText) == 0x000148, "Wrong size on ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, EntryPoint) == 0x000000, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_RoundText_IsRound) == 0x000020, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_RoundText_IsRound' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_RoundText_outText) == 0x000028, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_RoundText_outText' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, K2Node_ComponentBoundEvent_Text_1) == 0x000040, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, K2Node_ComponentBoundEvent_CommitMethod) == 0x000058, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_RoundText_IsRound_1) == 0x000059, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_RoundText_IsRound_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_RoundText_outText_1) == 0x000060, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_RoundText_outText_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, K2Node_ComponentBoundEvent_Text) == 0x000078, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_IsHovered_ReturnValue) == 0x000090, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_GetPlayerController_ReturnValue) == 0x000098, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_GetHUD_ReturnValue) == 0x0000A0, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, K2Node_CustomEvent_InText) == 0x0000A8, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x0000C0, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D8, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_SpecialCommandProcess_OutChatMessage) == 0x0000E8, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_SpecialCommandProcess_OutChatMessage' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_SpecialCommandProcess_ChatLogType) == 0x0000F8, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_SpecialCommandProcess_ChatLogType' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000100, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_Replace_ReturnValue) == 0x000110, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000120, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText, CallFunc_TextIsEmpty_ReturnValue) == 0x000140, "Member 'ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.SendMessage
// 0x0018 (0x0018 - 0x0000)
struct ChatWindow_InputText_C_SendMessage final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ChatWindow_InputText_C_SendMessage) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_SendMessage");
static_assert(sizeof(ChatWindow_InputText_C_SendMessage) == 0x000018, "Wrong size on ChatWindow_InputText_C_SendMessage");
static_assert(offsetof(ChatWindow_InputText_C_SendMessage, InText) == 0x000000, "Member 'ChatWindow_InputText_C_SendMessage::InText' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature");
static_assert(sizeof(ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature) == 0x000018, "Wrong size on ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature");
static_assert(offsetof(ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
static_assert(sizeof(ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
static_assert(offsetof(ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewKeyDown
// 0x0338 (0x0338 - 0x0000)
struct ChatWindow_InputText_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_498A[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0148(0x0018)()
	bool                                          CallFunc_RoundText_IsRound;                        // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_498B[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_RoundText_outText;                        // 0x0168(0x0018)()
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_498C[0x5];                                     // 0x0183(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_498D[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_498E[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerControllerEx_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasUserFocus_ReturnValue;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_498F[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01C8(0x00B8)()
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0280(0x00B8)()
};
static_assert(alignof(ChatWindow_InputText_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_OnPreviewKeyDown");
static_assert(sizeof(ChatWindow_InputText_C_OnPreviewKeyDown) == 0x000338, "Wrong size on ChatWindow_InputText_C_OnPreviewKeyDown");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, InKeyEvent) == 0x000038, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, ReturnValue) == 0x000070, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000140, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_GetText_ReturnValue) == 0x000148, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_RoundText_IsRound) == 0x000160, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_RoundText_IsRound' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_RoundText_outText) == 0x000168, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_RoundText_outText' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000180, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x000181, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue_3) == 0x000182, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_GetPlayerController_ReturnValue) == 0x000188, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_BooleanOR_ReturnValue) == 0x000190, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_GetHUD_ReturnValue) == 0x000198, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x0001A0, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, K2Node_DynamicCast_bSuccess) == 0x0001B0, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_GetPlayerControllerEx_ReturnValue) == 0x0001B8, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_GetPlayerControllerEx_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_HasUserFocus_ReturnValue) == 0x0001C0, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_HasUserFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_Handled_ReturnValue) == 0x0001C8, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000280, "Member 'ChatWindow_InputText_C_OnPreviewKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.OnKeyUp
// 0x0208 (0x0208 - 0x0000)
struct ChatWindow_InputText_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4990[0x5];                                     // 0x0143(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0148(0x00B8)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWindow_InputText_C_OnKeyUp) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_OnKeyUp");
static_assert(sizeof(ChatWindow_InputText_C_OnKeyUp) == 0x000208, "Wrong size on ChatWindow_InputText_C_OnKeyUp");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'ChatWindow_InputText_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'ChatWindow_InputText_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'ChatWindow_InputText_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'ChatWindow_InputText_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000140, "Member 'ChatWindow_InputText_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_1) == 0x000141, "Member 'ChatWindow_InputText_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue_2) == 0x000142, "Member 'ChatWindow_InputText_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000148, "Member 'ChatWindow_InputText_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnKeyUp, CallFunc_BooleanOR_ReturnValue) == 0x000200, "Member 'ChatWindow_InputText_C_OnKeyUp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.RoundText
// 0x0128 (0x0128 - 0x0000)
struct ChatWindow_InputText_C_RoundText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsRound;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4991[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutText;                                           // 0x0020(0x0018)(Parm, OutParm)
	int32                                         ReplacementNum;                                    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StrMax;                                            // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBreak;                                            // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bRound;                                            // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4992[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OutTxt;                                            // 0x0048(0x0018)(Edit, BlueprintVisible)
	int32                                         StartStrNum;                                       // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4993[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   WorkTxt;                                           // 0x0068(0x0018)(Edit, BlueprintVisible)
	int32                                         LineNum;                                           // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartStrIndex;                                     // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LineMax;                                           // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4994[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_ReplaceInline_ReturnValue;                // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4995[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4996[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4997[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
};
static_assert(alignof(ChatWindow_InputText_C_RoundText) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_RoundText");
static_assert(sizeof(ChatWindow_InputText_C_RoundText) == 0x000128, "Wrong size on ChatWindow_InputText_C_RoundText");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, InText) == 0x000000, "Member 'ChatWindow_InputText_C_RoundText::InText' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, IsRound) == 0x000018, "Member 'ChatWindow_InputText_C_RoundText::IsRound' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, OutText) == 0x000020, "Member 'ChatWindow_InputText_C_RoundText::OutText' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, ReplacementNum) == 0x000038, "Member 'ChatWindow_InputText_C_RoundText::ReplacementNum' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, StrMax) == 0x00003C, "Member 'ChatWindow_InputText_C_RoundText::StrMax' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, bBreak) == 0x000040, "Member 'ChatWindow_InputText_C_RoundText::bBreak' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, bRound) == 0x000041, "Member 'ChatWindow_InputText_C_RoundText::bRound' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, OutTxt) == 0x000048, "Member 'ChatWindow_InputText_C_RoundText::OutTxt' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, StartStrNum) == 0x000060, "Member 'ChatWindow_InputText_C_RoundText::StartStrNum' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, WorkTxt) == 0x000068, "Member 'ChatWindow_InputText_C_RoundText::WorkTxt' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, LineNum) == 0x000080, "Member 'ChatWindow_InputText_C_RoundText::LineNum' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, StartStrIndex) == 0x000084, "Member 'ChatWindow_InputText_C_RoundText::StartStrIndex' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, LineMax) == 0x000088, "Member 'ChatWindow_InputText_C_RoundText::LineMax' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Conv_TextToString_ReturnValue) == 0x000090, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Replace_ReturnValue) == 0x0000A0, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_ReplaceInline_ReturnValue) == 0x0000B0, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_ReplaceInline_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D0, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000D8, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Len_ReturnValue) == 0x0000E8, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000EC, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0000F0, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Left_ReturnValue) == 0x000100, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_RoundText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'ChatWindow_InputText_C_RoundText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.SetUserFocusAtITextInput
// 0x0010 (0x0010 - 0x0000)
struct ChatWindow_InputText_C_SetUserFocusAtITextInput final
{
public:
	bool                                          MessageReset;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4998[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatWindow_InputText_C_SetUserFocusAtITextInput) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_SetUserFocusAtITextInput");
static_assert(sizeof(ChatWindow_InputText_C_SetUserFocusAtITextInput) == 0x000010, "Wrong size on ChatWindow_InputText_C_SetUserFocusAtITextInput");
static_assert(offsetof(ChatWindow_InputText_C_SetUserFocusAtITextInput, MessageReset) == 0x000000, "Member 'ChatWindow_InputText_C_SetUserFocusAtITextInput::MessageReset' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_SetUserFocusAtITextInput, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'ChatWindow_InputText_C_SetUserFocusAtITextInput::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateTextCount
// 0x0058 (0x0058 - 0x0000)
struct ChatWindow_InputText_C_UpdateTextCount final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4999[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
};
static_assert(alignof(ChatWindow_InputText_C_UpdateTextCount) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_UpdateTextCount");
static_assert(sizeof(ChatWindow_InputText_C_UpdateTextCount) == 0x000058, "Wrong size on ChatWindow_InputText_C_UpdateTextCount");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, Temp_bool_Variable) == 0x000000, "Member 'ChatWindow_InputText_C_UpdateTextCount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, Temp_int_Variable) == 0x000004, "Member 'ChatWindow_InputText_C_UpdateTextCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'ChatWindow_InputText_C_UpdateTextCount::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'ChatWindow_InputText_C_UpdateTextCount::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, CallFunc_Len_ReturnValue) == 0x000030, "Member 'ChatWindow_InputText_C_UpdateTextCount::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'ChatWindow_InputText_C_UpdateTextCount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'ChatWindow_InputText_C_UpdateTextCount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, K2Node_Select_Default) == 0x00003C, "Member 'ChatWindow_InputText_C_UpdateTextCount::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_UpdateTextCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'ChatWindow_InputText_C_UpdateTextCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.IsTextInputFocus
// 0x0018 (0x0018 - 0x0000)
struct ChatWindow_InputText_C_IsTextInputFocus final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerControllerEx_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasUserFocus_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWindow_InputText_C_IsTextInputFocus) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_IsTextInputFocus");
static_assert(sizeof(ChatWindow_InputText_C_IsTextInputFocus) == 0x000018, "Wrong size on ChatWindow_InputText_C_IsTextInputFocus");
static_assert(offsetof(ChatWindow_InputText_C_IsTextInputFocus, Result) == 0x000000, "Member 'ChatWindow_InputText_C_IsTextInputFocus::Result' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_IsTextInputFocus, CallFunc_GetPlayerControllerEx_ReturnValue) == 0x000008, "Member 'ChatWindow_InputText_C_IsTextInputFocus::CallFunc_GetPlayerControllerEx_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_IsTextInputFocus, CallFunc_HasUserFocus_ReturnValue) == 0x000010, "Member 'ChatWindow_InputText_C_IsTextInputFocus::CallFunc_HasUserFocus_ReturnValue' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewMouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct ChatWindow_InputText_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499C[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
};
static_assert(alignof(ChatWindow_InputText_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_OnPreviewMouseButtonDown");
static_assert(sizeof(ChatWindow_InputText_C_OnPreviewMouseButtonDown) == 0x000220, "Wrong size on ChatWindow_InputText_C_OnPreviewMouseButtonDown");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'ChatWindow_InputText_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'ChatWindow_InputText_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ChatWindow_InputText_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewMouseButtonDown, CallFunc_IsHovered_ReturnValue) == 0x000160, "Member 'ChatWindow_InputText_C_OnPreviewMouseButtonDown::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_OnPreviewMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000168, "Member 'ChatWindow_InputText_C_OnPreviewMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function ChatWindow_InputText.ChatWindow_InputText_C.GetPlayerControllerEx
// 0x0028 (0x0028 - 0x0000)
struct ChatWindow_InputText_C_GetPlayerControllerEx final
{
public:
	class APlayerController*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerPhotoModeComponent*            CallFunc_GetPhotoModeComponent_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPhotoModeController*                 CallFunc_GetPhotoModeController_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPhotoMode_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatWindow_InputText_C_GetPlayerControllerEx) == 0x000008, "Wrong alignment on ChatWindow_InputText_C_GetPlayerControllerEx");
static_assert(sizeof(ChatWindow_InputText_C_GetPlayerControllerEx) == 0x000028, "Wrong size on ChatWindow_InputText_C_GetPlayerControllerEx");
static_assert(offsetof(ChatWindow_InputText_C_GetPlayerControllerEx, ReturnValue) == 0x000000, "Member 'ChatWindow_InputText_C_GetPlayerControllerEx::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_GetPlayerControllerEx, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'ChatWindow_InputText_C_GetPlayerControllerEx::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_GetPlayerControllerEx, CallFunc_GetPhotoModeComponent_ReturnValue) == 0x000010, "Member 'ChatWindow_InputText_C_GetPlayerControllerEx::CallFunc_GetPhotoModeComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_GetPlayerControllerEx, CallFunc_GetPhotoModeController_ReturnValue) == 0x000018, "Member 'ChatWindow_InputText_C_GetPlayerControllerEx::CallFunc_GetPhotoModeController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWindow_InputText_C_GetPlayerControllerEx, CallFunc_IsPhotoMode_ReturnValue) == 0x000020, "Member 'ChatWindow_InputText_C_GetPlayerControllerEx::CallFunc_IsPhotoMode_ReturnValue' has a wrong offset!");

}

