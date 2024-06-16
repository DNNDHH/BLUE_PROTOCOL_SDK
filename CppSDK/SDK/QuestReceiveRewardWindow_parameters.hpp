#pragma once

 

// Package: QuestReceiveRewardWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "EAcceptWindowType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnFinish__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct QuestReceiveRewardWindow_C_OnFinish__DelegateSignature final
{
public:
	bool                                          bReported;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_OnFinish__DelegateSignature) == 0x000001, "Wrong alignment on QuestReceiveRewardWindow_C_OnFinish__DelegateSignature");
static_assert(sizeof(QuestReceiveRewardWindow_C_OnFinish__DelegateSignature) == 0x000001, "Wrong size on QuestReceiveRewardWindow_C_OnFinish__DelegateSignature");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnFinish__DelegateSignature, bReported) == 0x000000, "Member 'QuestReceiveRewardWindow_C_OnFinish__DelegateSignature::bReported' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.ExecuteUbergraph_QuestReceiveRewardWindow
// 0x0368 (0x0368 - 0x0000)
struct QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1666[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, int32 QuestIndex, EQuestCompleteResult CompleteResult, struct FSBMailRewardData& MailRewardData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FSBMailData>                    CallFunc_GetQuestRewardInfoMailData_OutMailDatas;  // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetQuestRewardInfoMailData_ReturnValue;   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1667[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1668[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectRewardIndex_OutRewardIndex;      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1669[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_166A[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCompleteResult                          K2Node_CustomEvent_CompleteResult;                 // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_166B[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailRewardData                      K2Node_CustomEvent_MailRewardData;                 // 0x00A0(0x0180)(ConstParm)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptWindowType                             Temp_byte_Variable;                                // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAcceptWindowType                             Temp_byte_Variable_1;                              // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_166C[0x1];                                     // 0x022B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x022C(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_166D[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_166E[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_166F[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_1;          // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsLimitDiscard;                // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsLimitSell;                   // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_CompleteQuest_ReturnValue;        // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1670[0x1];                                     // 0x026B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x026C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsPurchaseTokenVanishment_ReturnValue;    // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1671[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailListAttachmentAcceptedResult_C*    CallFunc_Create_ReturnValue_1;                     // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAcceptWindowType                             Temp_byte_Variable_2;                              // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Quest_Board_Quest_bIsQuestBoard;       // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Quest_Board_Quest_bIsQuestBoard_1;     // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestRewardHaveAnyOverflow_ReturnValue; // 0x028B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptWindowType                             K2Node_Select_Default;                             // 0x028D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x028E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1672[0x1];                                     // 0x028F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAcceptWindowType                             Temp_byte_Variable_3;                              // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptWindowType                             K2Node_Select_Default_1;                           // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidTokenOverflowQuest_ReturnValue;      // 0x029B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_6;            // 0x029C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1673[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02C0(0x0018)()
	bool                                          K2Node_CustomEvent_IsCheck;                        // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1674[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_CustomEvent_Widget;                         // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bReported;                      // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bEnableBlocker;                 // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1675[0x5];                                     // 0x02EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailAttachmentsAcceptWindow_C*         CallFunc_Create_ReturnValue_2;                     // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0308(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1676[0x3];                                     // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0318(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1677[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1678[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0340(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow");
static_assert(sizeof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow) == 0x000368, "Wrong size on QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, EntryPoint) == 0x000000, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Create_ReturnValue) == 0x000028, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CreateDelegate_OutputDelegate_3) == 0x000040, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetQuestRewardInfoMailData_OutMailDatas) == 0x000050, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetQuestRewardInfoMailData_OutMailDatas' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetQuestRewardInfoMailData_ReturnValue) == 0x000060, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetQuestRewardInfoMailData_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetUIManager_IsValid) == 0x000061, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetUIManager_ReturnValue) == 0x000068, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_PlaySE_ReturnValue) == 0x000070, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetPlayerController_ReturnValue) == 0x000078, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetSelectRewardIndex_OutRewardIndex) == 0x000080, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetSelectRewardIndex_OutRewardIndex' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000088, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_RetCode) == 0x000094, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_QuestIndex) == 0x000098, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_CompleteResult) == 0x00009C, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_CompleteResult' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_MailRewardData) == 0x0000A0, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_MailRewardData' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetQuestComponent_ReturnValue) == 0x000220, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000228, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, Temp_byte_Variable) == 0x000229, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, Temp_byte_Variable_1) == 0x00022A, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CreateDelegate_OutputDelegate_4) == 0x00022C, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_Result_1) == 0x00023C, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetPlayerController_ReturnValue_1) == 0x000240, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, Temp_bool_Variable) == 0x000248, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000250, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_DynamicCast_bSuccess_1) == 0x000258, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetQuestComponent_ReturnValue_1) == 0x000260, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_bIsLimitDiscard) == 0x000268, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_bIsLimitDiscard' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_bIsLimitSell) == 0x000269, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_bIsLimitSell' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Request_CompleteQuest_ReturnValue) == 0x00026A, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Request_CompleteQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CreateDelegate_OutputDelegate_5) == 0x00026C, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_IsPurchaseTokenVanishment_ReturnValue) == 0x00027C, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_IsPurchaseTokenVanishment_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Create_ReturnValue_1) == 0x000280, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, Temp_byte_Variable_2) == 0x000288, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Is_Quest_Board_Quest_bIsQuestBoard) == 0x000289, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Is_Quest_Board_Quest_bIsQuestBoard' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Is_Quest_Board_Quest_bIsQuestBoard_1) == 0x00028A, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Is_Quest_Board_Quest_bIsQuestBoard_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_IsQuestRewardHaveAnyOverflow_ReturnValue) == 0x00028B, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_IsQuestRewardHaveAnyOverflow_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_BooleanOR_ReturnValue) == 0x00028C, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_Select_Default) == 0x00028D, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetUIManager_IsValid_1) == 0x00028E, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetUIManager_ReturnValue_1) == 0x000290, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, Temp_byte_Variable_3) == 0x000298, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, Temp_bool_Variable_1) == 0x000299, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_Select_Default_1) == 0x00029A, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_ValidTokenOverflowQuest_ReturnValue) == 0x00029B, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_ValidTokenOverflowQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CreateDelegate_OutputDelegate_6) == 0x00029C, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0002B0, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x0002C0, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_IsCheck) == 0x0002D8, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_IsCheck' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_Widget) == 0x0002E0, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_bReported) == 0x0002E8, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_bReported' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_bEnableBlocker) == 0x0002E9, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_bEnableBlocker' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_IsValid_ReturnValue) == 0x0002EA, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Create_ReturnValue_2) == 0x0002F0, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_PlayAnimation_ReturnValue) == 0x0002F8, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x000300, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_Event_Animation) == 0x000308, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000310, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_PlaySE_ReturnValue_1) == 0x000314, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, K2Node_CustomEvent_Result) == 0x000318, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Create_ReturnValue_3) == 0x000320, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000328, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000330, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000340, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000358, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow, CallFunc_Create_ReturnValue_4) == 0x000360, "Member 'QuestReceiveRewardWindow_C_ExecuteUbergraph_QuestReceiveRewardWindow::CallFunc_Create_ReturnValue_4' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnCancelConfirmEnd
// 0x0001 (0x0001 - 0x0000)
struct QuestReceiveRewardWindow_C_OnCancelConfirmEnd final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestReceiveRewardWindow_C_OnCancelConfirmEnd) == 0x000001, "Wrong alignment on QuestReceiveRewardWindow_C_OnCancelConfirmEnd");
static_assert(sizeof(QuestReceiveRewardWindow_C_OnCancelConfirmEnd) == 0x000001, "Wrong size on QuestReceiveRewardWindow_C_OnCancelConfirmEnd");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnCancelConfirmEnd, Result) == 0x000000, "Member 'QuestReceiveRewardWindow_C_OnCancelConfirmEnd::Result' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct QuestReceiveRewardWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestReceiveRewardWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_OnAnimationFinished");
static_assert(sizeof(QuestReceiveRewardWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on QuestReceiveRewardWindow_C_OnAnimationFinished");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'QuestReceiveRewardWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Close
// 0x0002 (0x0002 - 0x0000)
struct QuestReceiveRewardWindow_C_Close final
{
public:
	bool                                          bReported;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableBlocker;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_Close) == 0x000001, "Wrong alignment on QuestReceiveRewardWindow_C_Close");
static_assert(sizeof(QuestReceiveRewardWindow_C_Close) == 0x000002, "Wrong size on QuestReceiveRewardWindow_C_Close");
static_assert(offsetof(QuestReceiveRewardWindow_C_Close, bReported) == 0x000000, "Member 'QuestReceiveRewardWindow_C_Close::bReported' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Close, bEnableBlocker) == 0x000001, "Member 'QuestReceiveRewardWindow_C_Close::bEnableBlocker' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnToggleCheck_Event_0
// 0x0010 (0x0010 - 0x0000)
struct QuestReceiveRewardWindow_C_OnToggleCheck_Event_0 final
{
public:
	bool                                          IsCheck;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1679[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestReceiveRewardWindow_C_OnToggleCheck_Event_0) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_OnToggleCheck_Event_0");
static_assert(sizeof(QuestReceiveRewardWindow_C_OnToggleCheck_Event_0) == 0x000010, "Wrong size on QuestReceiveRewardWindow_C_OnToggleCheck_Event_0");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnToggleCheck_Event_0, IsCheck) == 0x000000, "Member 'QuestReceiveRewardWindow_C_OnToggleCheck_Event_0::IsCheck' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnToggleCheck_Event_0, Widget) == 0x000008, "Member 'QuestReceiveRewardWindow_C_OnToggleCheck_Event_0::Widget' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Event_AcceptedQuestReport
// 0x0002 (0x0002 - 0x0000)
struct QuestReceiveRewardWindow_C_Event_AcceptedQuestReport final
{
public:
	bool                                          bIsLimitDiscard;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsLimitSell;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_Event_AcceptedQuestReport) == 0x000001, "Wrong alignment on QuestReceiveRewardWindow_C_Event_AcceptedQuestReport");
static_assert(sizeof(QuestReceiveRewardWindow_C_Event_AcceptedQuestReport) == 0x000002, "Wrong size on QuestReceiveRewardWindow_C_Event_AcceptedQuestReport");
static_assert(offsetof(QuestReceiveRewardWindow_C_Event_AcceptedQuestReport, bIsLimitDiscard) == 0x000000, "Member 'QuestReceiveRewardWindow_C_Event_AcceptedQuestReport::bIsLimitDiscard' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Event_AcceptedQuestReport, bIsLimitSell) == 0x000001, "Member 'QuestReceiveRewardWindow_C_Event_AcceptedQuestReport::bIsLimitSell' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct QuestReceiveRewardWindow_C_CustomEvent_1 final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestReceiveRewardWindow_C_CustomEvent_1) == 0x000001, "Wrong alignment on QuestReceiveRewardWindow_C_CustomEvent_1");
static_assert(sizeof(QuestReceiveRewardWindow_C_CustomEvent_1) == 0x000001, "Wrong size on QuestReceiveRewardWindow_C_CustomEvent_1");
static_assert(offsetof(QuestReceiveRewardWindow_C_CustomEvent_1, Result) == 0x000000, "Member 'QuestReceiveRewardWindow_C_CustomEvent_1::Result' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Event_OnCompleteQuest_Completed
// 0x0190 (0x0190 - 0x0000)
struct QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_QuestIndex;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCompleteResult                          CompleteResult;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_167A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailRewardData                      MailRewardData;                                    // 0x0010(0x0180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed");
static_assert(sizeof(QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed) == 0x000190, "Wrong size on QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed");
static_assert(offsetof(QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed, RetCode) == 0x000000, "Member 'QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed::RetCode' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed, Param_QuestIndex) == 0x000004, "Member 'QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed::Param_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed, CompleteResult) == 0x000008, "Member 'QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed::CompleteResult' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed, MailRewardData) == 0x000010, "Member 'QuestReceiveRewardWindow_C_Event_OnCompleteQuest_Completed::MailRewardData' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.SetQuestInfo
// 0x0288 (0x0288 - 0x0000)
struct QuestReceiveRewardWindow_C_SetQuestInfo final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalQuestIndex;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0008(0x0118)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isClassLevelLimit_ReturnValue;            // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClassLevelCounterStop_ReturnValue;      // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Property, class UQuestRewardIcon_C* ClickedObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0138(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_167B[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestNameByTextId_ReturnValue;         // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasSelectReward_bRet;                     // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_167C[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0270(0x0018)()
};
static_assert(alignof(QuestReceiveRewardWindow_C_SetQuestInfo) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_SetQuestInfo");
static_assert(sizeof(QuestReceiveRewardWindow_C_SetQuestInfo) == 0x000288, "Wrong size on QuestReceiveRewardWindow_C_SetQuestInfo");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, InQuestIndex) == 0x000000, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, LocalQuestIndex) == 0x000004, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::LocalQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, QuestMasterData) == 0x000008, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, Temp_byte_Variable) == 0x000120, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, Temp_byte_Variable_1) == 0x000121, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_isClassLevelLimit_ReturnValue) == 0x000122, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_isClassLevelLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_IsClassLevelCounterStop_ReturnValue) == 0x000123, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_IsClassLevelCounterStop_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, Temp_bool_Variable) == 0x000124, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000125, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_BooleanAND_ReturnValue) == 0x000126, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, K2Node_Select_Default) == 0x000127, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000138, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_FindQuestMasterData_Exist) == 0x000250, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_GetQuestNameByTextId_ReturnValue) == 0x000258, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_GetQuestNameByTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_HasSelectReward_bRet) == 0x000268, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_HasSelectReward_bRet' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_SetQuestInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000270, "Member 'QuestReceiveRewardWindow_C_SetQuestInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.HasSelectReward
// 0x0040 (0x0040 - 0x0000)
struct QuestReceiveRewardWindow_C_HasSelectReward final
{
public:
	TArray<struct FRewardInfo>                    InRewards;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bRet;                                              // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_167D[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRewardInfo                            CallFunc_Array_Get_Item;                           // 0x0020(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_167E[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestReceiveRewardWindow_C_HasSelectReward) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_HasSelectReward");
static_assert(sizeof(QuestReceiveRewardWindow_C_HasSelectReward) == 0x000040, "Wrong size on QuestReceiveRewardWindow_C_HasSelectReward");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, InRewards) == 0x000000, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::InRewards' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, bRet) == 0x000010, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::bRet' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, Temp_int_Array_Index_Variable) == 0x000018, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, CallFunc_Array_Get_Item) == 0x000020, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_HasSelectReward, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'QuestReceiveRewardWindow_C_HasSelectReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.OnChangeSelectReward
// 0x0018 (0x0018 - 0x0000)
struct QuestReceiveRewardWindow_C_OnChangeSelectReward final
{
public:
	bool                                          bInCheck;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_167F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     bInWidget;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_OnChangeSelectReward) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_OnChangeSelectReward");
static_assert(sizeof(QuestReceiveRewardWindow_C_OnChangeSelectReward) == 0x000018, "Wrong size on QuestReceiveRewardWindow_C_OnChangeSelectReward");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnChangeSelectReward, bInCheck) == 0x000000, "Member 'QuestReceiveRewardWindow_C_OnChangeSelectReward::bInCheck' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnChangeSelectReward, bInWidget) == 0x000008, "Member 'QuestReceiveRewardWindow_C_OnChangeSelectReward::bInWidget' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_OnChangeSelectReward, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'QuestReceiveRewardWindow_C_OnChangeSelectReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.GetThumbnailId
// 0x0160 (0x0160 - 0x0000)
struct QuestReceiveRewardWindow_C_GetThumbnailId final
{
public:
	int32                                         Param_QuestIndex;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ThumbnailId;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory3                               Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1680[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0010(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1681[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0134(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1682[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_2;                              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestReceiveRewardWindow_C_GetThumbnailId) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_GetThumbnailId");
static_assert(sizeof(QuestReceiveRewardWindow_C_GetThumbnailId) == 0x000160, "Wrong size on QuestReceiveRewardWindow_C_GetThumbnailId");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, Param_QuestIndex) == 0x000000, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::Param_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, ThumbnailId) == 0x000004, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::ThumbnailId' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, Temp_byte_Variable) == 0x00000C, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000010, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, CallFunc_FindQuestMasterData_Exist) == 0x000128, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, Temp_name_Variable) == 0x00012C, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, Temp_name_Variable_1) == 0x000134, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, CallFunc_NotEqual_NameName_ReturnValue) == 0x00013C, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, Temp_name_Variable_2) == 0x000140, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, Temp_name_Variable_3) == 0x000148, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, Temp_name_Variable_4) == 0x000150, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetThumbnailId, K2Node_Select_Default) == 0x000158, "Member 'QuestReceiveRewardWindow_C_GetThumbnailId::K2Node_Select_Default' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.DestroyBlocker
// 0x0001 (0x0001 - 0x0000)
struct QuestReceiveRewardWindow_C_DestroyBlocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_DestroyBlocker) == 0x000001, "Wrong alignment on QuestReceiveRewardWindow_C_DestroyBlocker");
static_assert(sizeof(QuestReceiveRewardWindow_C_DestroyBlocker) == 0x000001, "Wrong size on QuestReceiveRewardWindow_C_DestroyBlocker");
static_assert(offsetof(QuestReceiveRewardWindow_C_DestroyBlocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'QuestReceiveRewardWindow_C_DestroyBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.Is Quest Board Quest
// 0x0128 (0x0128 - 0x0000)
struct QuestReceiveRewardWindow_C_Is_Quest_Board_Quest final
{
public:
	bool                                          bIsQuestBoard;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1683[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0008(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest) == 0x000008, "Wrong alignment on QuestReceiveRewardWindow_C_Is_Quest_Board_Quest");
static_assert(sizeof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest) == 0x000128, "Wrong size on QuestReceiveRewardWindow_C_Is_Quest_Board_Quest");
static_assert(offsetof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest, bIsQuestBoard) == 0x000000, "Member 'QuestReceiveRewardWindow_C_Is_Quest_Board_Quest::bIsQuestBoard' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000008, "Member 'QuestReceiveRewardWindow_C_Is_Quest_Board_Quest::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest, CallFunc_FindQuestMasterData_Exist) == 0x000120, "Member 'QuestReceiveRewardWindow_C_Is_Quest_Board_Quest::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000121, "Member 'QuestReceiveRewardWindow_C_Is_Quest_Board_Quest::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000122, "Member 'QuestReceiveRewardWindow_C_Is_Quest_Board_Quest::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_Is_Quest_Board_Quest, CallFunc_BooleanOR_ReturnValue) == 0x000123, "Member 'QuestReceiveRewardWindow_C_Is_Quest_Board_Quest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.GetSelectRewardIndex
// 0x000C (0x000C - 0x0000)
struct QuestReceiveRewardWindow_C_GetSelectRewardIndex final
{
public:
	int32                                         OutRewardIndex;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRewardID_RewardId;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_GetSelectRewardIndex) == 0x000004, "Wrong alignment on QuestReceiveRewardWindow_C_GetSelectRewardIndex");
static_assert(sizeof(QuestReceiveRewardWindow_C_GetSelectRewardIndex) == 0x00000C, "Wrong size on QuestReceiveRewardWindow_C_GetSelectRewardIndex");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetSelectRewardIndex, OutRewardIndex) == 0x000000, "Member 'QuestReceiveRewardWindow_C_GetSelectRewardIndex::OutRewardIndex' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetSelectRewardIndex, CallFunc_GetRewardID_RewardId) == 0x000004, "Member 'QuestReceiveRewardWindow_C_GetSelectRewardIndex::CallFunc_GetRewardID_RewardId' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_GetSelectRewardIndex, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'QuestReceiveRewardWindow_C_GetSelectRewardIndex::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function QuestReceiveRewardWindow.QuestReceiveRewardWindow_C.ShouldAddCommonRewardList
// 0x001C (0x001C - 0x0000)
struct QuestReceiveRewardWindow_C_ShouldAddCommonRewardList final
{
public:
	struct FRewardInfo                            RewardInfo;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bResult;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestReceiveRewardWindow_C_ShouldAddCommonRewardList) == 0x000004, "Wrong alignment on QuestReceiveRewardWindow_C_ShouldAddCommonRewardList");
static_assert(sizeof(QuestReceiveRewardWindow_C_ShouldAddCommonRewardList) == 0x00001C, "Wrong size on QuestReceiveRewardWindow_C_ShouldAddCommonRewardList");
static_assert(offsetof(QuestReceiveRewardWindow_C_ShouldAddCommonRewardList, RewardInfo) == 0x000000, "Member 'QuestReceiveRewardWindow_C_ShouldAddCommonRewardList::RewardInfo' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ShouldAddCommonRewardList, bResult) == 0x000018, "Member 'QuestReceiveRewardWindow_C_ShouldAddCommonRewardList::bResult' has a wrong offset!");
static_assert(offsetof(QuestReceiveRewardWindow_C_ShouldAddCommonRewardList, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'QuestReceiveRewardWindow_C_ShouldAddCommonRewardList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

