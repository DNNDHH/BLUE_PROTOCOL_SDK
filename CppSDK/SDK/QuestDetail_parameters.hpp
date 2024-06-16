#pragma once

 

// Package: QuestDetail

#include "Basic.hpp"

#include "QuestDetail_ActionButtonType_structs.hpp"
#include "QuestThumbnailData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail.QuestDetail_C.OnFinish__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_C_OnFinish__DelegateSignature final
{
public:
	EQuestDetail_FinishStatus                     FinishStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_886A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_QuestIndex;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_OnFinish__DelegateSignature) == 0x000004, "Wrong alignment on QuestDetail_C_OnFinish__DelegateSignature");
static_assert(sizeof(QuestDetail_C_OnFinish__DelegateSignature) == 0x000008, "Wrong size on QuestDetail_C_OnFinish__DelegateSignature");
static_assert(offsetof(QuestDetail_C_OnFinish__DelegateSignature, FinishStatus) == 0x000000, "Member 'QuestDetail_C_OnFinish__DelegateSignature::FinishStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_OnFinish__DelegateSignature, Param_QuestIndex) == 0x000004, "Member 'QuestDetail_C_OnFinish__DelegateSignature::Param_QuestIndex' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.ExecuteUbergraph_QuestDetail
// 0x02B0 (0x02B0 - 0x0000)
struct QuestDetail_C_ExecuteUbergraph_QuestDetail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_886B[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 QuestIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestReceiveRewardWindow_C*            CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bReported)>               K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_886C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       K2Node_CustomEvent_ErrorCode;                      // 0x0061(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_886D[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0064(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_AcceptedQuestInfo;              // 0x0068(0x0060)(ConstParm)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_886E[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAcceptQuestErrorCodeText_ReturnValue;  // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_AcceptQuest_ReturnValue;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_886F[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8870[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, EAcceptedQuestErrorCode ErrorCode, int32 RetCode, struct FAcceptedQuestInfo& AcceptedQuestInfo)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0190(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8871[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8872[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_1;          // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8873[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_CancelQuest_ReturnValue;          // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8874[0x6];                                     // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8875[0x6];                                     // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_2;          // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsCollectTriggerCondition_ReturnValue; // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8876[0x2];                                     // 0x0202(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0204(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0218(0x0018)()
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bReported;                      // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8877[0x5];                                     // 0x023B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_ActionButtonType                 K2Node_CustomEvent_InType;                         // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8878[0x1];                                     // 0x024B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InQuestIndex_3;                 // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetThumbnailId_ThumbnailId;               // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestThumbnailData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0258(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8879[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_3;            // 0x0284(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InQuestIndex_2;                 // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnableRouteGuideSw_2;         // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_887A[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InQuestIndex_1;                 // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnableRouteGuideSw_1;         // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_887B[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InQuestIndex;                   // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnableRouteGuideSw;           // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsClosed;                       // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_887C[0x2];                                     // 0x02AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_ExecuteUbergraph_QuestDetail) == 0x000008, "Wrong alignment on QuestDetail_C_ExecuteUbergraph_QuestDetail");
static_assert(sizeof(QuestDetail_C_ExecuteUbergraph_QuestDetail) == 0x0002B0, "Wrong size on QuestDetail_C_ExecuteUbergraph_QuestDetail");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, EntryPoint) == 0x000000, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, Temp_bool_Variable) == 0x000004, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, Temp_bool_Variable_1) == 0x000005, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, Temp_int_Variable) == 0x000018, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, Temp_int_Variable_1) == 0x00001C, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Create_ReturnValue) == 0x000020, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_Loaded) == 0x000038, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, Temp_object_Variable) == 0x000040, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_AsTexture_2D) == 0x000048, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_Result_1) == 0x000060, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_ErrorCode) == 0x000061, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_RetCode) == 0x000064, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_AcceptedQuestInfo) == 0x000068, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000C8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Conv_IntToString_ReturnValue) == 0x0000D8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetQuestComponent_ReturnValue) == 0x0000E8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000F0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetAcceptQuestErrorCodeText_ReturnValue) == 0x000100, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetAcceptQuestErrorCodeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Concat_StrStr_ReturnValue) == 0x000110, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000120, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Request_AcceptQuest_ReturnValue) == 0x000130, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Request_AcceptQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000138, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000148, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000158, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_IsDebug_ReturnValue) == 0x000168, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_Select_Default) == 0x000170, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CreateDelegate_OutputDelegate_2) == 0x000180, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Conv_StringToText_ReturnValue) == 0x000190, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001A8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetPlayerController_ReturnValue_1) == 0x0001B0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0001B8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_bSuccess_2) == 0x0001C0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetQuestComponent_ReturnValue_1) == 0x0001C8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_Result) == 0x0001D0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_QuestIndex) == 0x0001D4, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Request_CancelQuest_ReturnValue) == 0x0001D8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Request_CancelQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0001D9, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetPlayerController_ReturnValue_2) == 0x0001E0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0001E8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_DynamicCast_bSuccess_3) == 0x0001F0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0001F1, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetQuestComponent_ReturnValue_2) == 0x0001F8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetQuestComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000200, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_ContainsCollectTriggerCondition_ReturnValue) == 0x000201, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_ContainsCollectTriggerCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_Select_Default_1) == 0x000204, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetTextFromAsset_ReturnValue) == 0x000208, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000218, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000230, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000238, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_bReported) == 0x000239, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_bReported' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetUIManager_IsValid) == 0x00023A, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetUIManager_ReturnValue) == 0x000240, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_InType) == 0x000248, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_InType' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000249, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_SwitchEnum_CmpSuccess) == 0x00024A, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_InQuestIndex_3) == 0x00024C, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_InQuestIndex_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetThumbnailId_ThumbnailId) == 0x000250, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetThumbnailId_ThumbnailId' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetDataTableRowFromName_OutRow) == 0x000258, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000280, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CreateDelegate_OutputDelegate_3) == 0x000284, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_InQuestIndex_2) == 0x000294, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_InQuestIndex_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_IsEnableRouteGuideSw_2) == 0x000298, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_IsEnableRouteGuideSw_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_InQuestIndex_1) == 0x00029C, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_InQuestIndex_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_IsEnableRouteGuideSw_1) == 0x0002A0, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_IsEnableRouteGuideSw_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_InQuestIndex) == 0x0002A4, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_IsEnableRouteGuideSw) == 0x0002A8, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_IsEnableRouteGuideSw' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, K2Node_CustomEvent_IsClosed) == 0x0002A9, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::K2Node_CustomEvent_IsClosed' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ExecuteUbergraph_QuestDetail, CallFunc_PlaySE_ReturnValue) == 0x0002AC, "Member 'QuestDetail_C_ExecuteUbergraph_QuestDetail::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.ChangeQuestInfoForQuestList
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_C_ChangeQuestInfoForQuestList final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableRouteGuideSw;                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsClosed;                                          // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_ChangeQuestInfoForQuestList) == 0x000004, "Wrong alignment on QuestDetail_C_ChangeQuestInfoForQuestList");
static_assert(sizeof(QuestDetail_C_ChangeQuestInfoForQuestList) == 0x000008, "Wrong size on QuestDetail_C_ChangeQuestInfoForQuestList");
static_assert(offsetof(QuestDetail_C_ChangeQuestInfoForQuestList, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_ChangeQuestInfoForQuestList::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ChangeQuestInfoForQuestList, IsEnableRouteGuideSw) == 0x000004, "Member 'QuestDetail_C_ChangeQuestInfoForQuestList::IsEnableRouteGuideSw' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ChangeQuestInfoForQuestList, IsClosed) == 0x000005, "Member 'QuestDetail_C_ChangeQuestInfoForQuestList::IsClosed' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.ChangeQuestInfo
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_C_ChangeQuestInfo final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableRouteGuideSw;                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_ChangeQuestInfo) == 0x000004, "Wrong alignment on QuestDetail_C_ChangeQuestInfo");
static_assert(sizeof(QuestDetail_C_ChangeQuestInfo) == 0x000008, "Wrong size on QuestDetail_C_ChangeQuestInfo");
static_assert(offsetof(QuestDetail_C_ChangeQuestInfo, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_ChangeQuestInfo::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_ChangeQuestInfo, IsEnableRouteGuideSw) == 0x000004, "Member 'QuestDetail_C_ChangeQuestInfo::IsEnableRouteGuideSw' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetQuestInfo
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_C_SetQuestInfo final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableRouteGuideSw;                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_SetQuestInfo) == 0x000004, "Wrong alignment on QuestDetail_C_SetQuestInfo");
static_assert(sizeof(QuestDetail_C_SetQuestInfo) == 0x000008, "Wrong size on QuestDetail_C_SetQuestInfo");
static_assert(offsetof(QuestDetail_C_SetQuestInfo, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_SetQuestInfo::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo, IsEnableRouteGuideSw) == 0x000004, "Member 'QuestDetail_C_SetQuestInfo::IsEnableRouteGuideSw' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetThumbnail
// 0x0004 (0x0004 - 0x0000)
struct QuestDetail_C_SetThumbnail final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_SetThumbnail) == 0x000004, "Wrong alignment on QuestDetail_C_SetThumbnail");
static_assert(sizeof(QuestDetail_C_SetThumbnail) == 0x000004, "Wrong size on QuestDetail_C_SetThumbnail");
static_assert(offsetof(QuestDetail_C_SetThumbnail, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_SetThumbnail::InQuestIndex' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.OnActionButtonClicked
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_C_OnActionButtonClicked final
{
public:
	EQuestDetail_ActionButtonType                 InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_OnActionButtonClicked) == 0x000001, "Wrong alignment on QuestDetail_C_OnActionButtonClicked");
static_assert(sizeof(QuestDetail_C_OnActionButtonClicked) == 0x000001, "Wrong size on QuestDetail_C_OnActionButtonClicked");
static_assert(offsetof(QuestDetail_C_OnActionButtonClicked, InType) == 0x000000, "Member 'QuestDetail_C_OnActionButtonClicked::InType' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.OnFinish_Event_0
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_C_OnFinish_Event_0 final
{
public:
	bool                                          bReported;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_OnFinish_Event_0) == 0x000001, "Wrong alignment on QuestDetail_C_OnFinish_Event_0");
static_assert(sizeof(QuestDetail_C_OnFinish_Event_0) == 0x000001, "Wrong size on QuestDetail_C_OnFinish_Event_0");
static_assert(offsetof(QuestDetail_C_OnFinish_Event_0, bReported) == 0x000000, "Member 'QuestDetail_C_OnFinish_Event_0::bReported' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_C_CustomEvent final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_887D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_QuestIndex;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_CustomEvent) == 0x000004, "Wrong alignment on QuestDetail_C_CustomEvent");
static_assert(sizeof(QuestDetail_C_CustomEvent) == 0x000008, "Wrong size on QuestDetail_C_CustomEvent");
static_assert(offsetof(QuestDetail_C_CustomEvent, Result) == 0x000000, "Member 'QuestDetail_C_CustomEvent::Result' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_CustomEvent, Param_QuestIndex) == 0x000004, "Member 'QuestDetail_C_CustomEvent::Param_QuestIndex' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.OnAcceptQuestDelegate_Event_0
// 0x0068 (0x0068 - 0x0000)
struct QuestDetail_C_OnAcceptQuestDelegate_Event_0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       ErrorCode;                                         // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_887E[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     AcceptedQuestInfo;                                 // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(QuestDetail_C_OnAcceptQuestDelegate_Event_0) == 0x000008, "Wrong alignment on QuestDetail_C_OnAcceptQuestDelegate_Event_0");
static_assert(sizeof(QuestDetail_C_OnAcceptQuestDelegate_Event_0) == 0x000068, "Wrong size on QuestDetail_C_OnAcceptQuestDelegate_Event_0");
static_assert(offsetof(QuestDetail_C_OnAcceptQuestDelegate_Event_0, Result) == 0x000000, "Member 'QuestDetail_C_OnAcceptQuestDelegate_Event_0::Result' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_OnAcceptQuestDelegate_Event_0, ErrorCode) == 0x000001, "Member 'QuestDetail_C_OnAcceptQuestDelegate_Event_0::ErrorCode' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_OnAcceptQuestDelegate_Event_0, RetCode) == 0x000004, "Member 'QuestDetail_C_OnAcceptQuestDelegate_Event_0::RetCode' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_OnAcceptQuestDelegate_Event_0, AcceptedQuestInfo) == 0x000008, "Member 'QuestDetail_C_OnAcceptQuestDelegate_Event_0::AcceptedQuestInfo' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.OnLoaded_430FBD6944474F8D28745AB2C5A082A2
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2) == 0x000008, "Wrong alignment on QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2");
static_assert(sizeof(QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2) == 0x000008, "Wrong size on QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2");
static_assert(offsetof(QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2, Loaded) == 0x000000, "Member 'QuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2::Loaded' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetQuestInfo_Internal
// 0x03B0 (0x03B0 - 0x0000)
struct QuestDetail_C_SetQuestInfo_Internal final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableRouteGuideSw;                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableRouteGuideSw;                               // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  QuestStatus;                                       // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_887F[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBQuestProgressItemUIInfo>     ProgressItemList;                                  // 0x0008(0x0010)(Edit, BlueprintVisible)
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0018(0x0118)(Edit, BlueprintVisible)
	EQuestCategory2                               Temp_byte_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8880[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x014F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0153(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8881[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8882[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBQuestPreconditionUIInfo>     CallFunc_Get_Quest_Precondition_Infos_OutUiInfo;   // 0x0168(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x017C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8883[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_2;                              // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8884[0x5];                                     // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_CheckQuestRevivalCondition_OutRevivalDate; // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckQuestRevivalCondition_ReturnValue;   // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   Temp_name_Variable_3;                              // 0x01A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8885[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_4;                              // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8886[0x3];                                     // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetQuestAcceptableCount_OutNum;           // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestAcceptableCount_OutMaxNum;        // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestAcceptableCount_ReturnValue;      // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8887[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetQuestDeadlineOfUnlockCondition_OutDeadline; // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestDeadlineOfUnlockCondition_ReturnValue; // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory2                               Temp_byte_Variable_7;                              // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue_1;                // 0x01DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_8;                              // 0x01DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x01DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestDescAndSynopsis_ReturnValue;      // 0x01E0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01F0(0x0018)()
	struct FSBQuestPreconditionUIInfo             CallFunc_GetNextMainQuestPreconditionUIInfo_OutPrecondition; // 0x0208(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyList_bIsEmpty;                     // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0225(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0226(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0227(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8888[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0230(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8889[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestConditionDetailByTextId_ReturnValue; // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestNameByTextId_ReturnValue;         // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0370(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0388(0x0018)()
	class FName                                   K2Node_Select_Default_4;                           // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_SetQuestInfo_Internal) == 0x000008, "Wrong alignment on QuestDetail_C_SetQuestInfo_Internal");
static_assert(sizeof(QuestDetail_C_SetQuestInfo_Internal) == 0x0003B0, "Wrong size on QuestDetail_C_SetQuestInfo_Internal");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_SetQuestInfo_Internal::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, IsEnableRouteGuideSw) == 0x000004, "Member 'QuestDetail_C_SetQuestInfo_Internal::IsEnableRouteGuideSw' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, bEnableRouteGuideSw) == 0x000005, "Member 'QuestDetail_C_SetQuestInfo_Internal::bEnableRouteGuideSw' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, QuestStatus) == 0x000006, "Member 'QuestDetail_C_SetQuestInfo_Internal::QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, ProgressItemList) == 0x000008, "Member 'QuestDetail_C_SetQuestInfo_Internal::ProgressItemList' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, QuestMasterData) == 0x000018, "Member 'QuestDetail_C_SetQuestInfo_Internal::QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable) == 0x000130, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_int_Variable) == 0x000134, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_int_Variable_1) == 0x000138, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_int_Variable_2) == 0x00013C, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_int_Variable_3) == 0x000140, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_int_Variable_4) == 0x000144, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_int_Variable_5) == 0x000148, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_bool_Variable) == 0x00014C, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_1) == 0x00014D, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_2) == 0x00014E, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_bool_Variable_1) == 0x00014F, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_3) == 0x000150, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_4) == 0x000151, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_bool_Variable_2) == 0x000152, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_5) == 0x000153, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_6) == 0x000154, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_name_Variable) == 0x000158, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, K2Node_SwitchEnum_CmpSuccess) == 0x000160, "Member 'QuestDetail_C_SetQuestInfo_Internal::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_Get_Quest_Precondition_Infos_OutUiInfo) == 0x000168, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_Get_Quest_Precondition_Infos_OutUiInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_name_Variable_1) == 0x00017C, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000184, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_name_Variable_2) == 0x000188, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000190, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000191, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_BooleanOR_ReturnValue) == 0x000192, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_CheckQuestRevivalCondition_OutRevivalDate) == 0x000198, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_CheckQuestRevivalCondition_OutRevivalDate' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_CheckQuestRevivalCondition_ReturnValue) == 0x0001A0, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_CheckQuestRevivalCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_Not_PreBool_ReturnValue) == 0x0001A1, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_SetDateTime_ReturnValue) == 0x0001A2, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_BooleanAND_ReturnValue) == 0x0001A3, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_name_Variable_3) == 0x0001A4, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_BooleanAND_ReturnValue_1) == 0x0001AC, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_name_Variable_4) == 0x0001B0, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_name_Variable_5) == 0x0001B8, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001C0, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestAcceptableCount_OutNum) == 0x0001C4, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestAcceptableCount_OutNum' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestAcceptableCount_OutMaxNum) == 0x0001C8, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestAcceptableCount_OutMaxNum' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestAcceptableCount_ReturnValue) == 0x0001CC, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestAcceptableCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestDeadlineOfUnlockCondition_OutDeadline) == 0x0001D0, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestDeadlineOfUnlockCondition_OutDeadline' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestDeadlineOfUnlockCondition_ReturnValue) == 0x0001D8, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestDeadlineOfUnlockCondition_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_BooleanAND_ReturnValue_2) == 0x0001D9, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, K2Node_Select_Default) == 0x0001DA, "Member 'QuestDetail_C_SetQuestInfo_Internal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, K2Node_Select_Default_1) == 0x0001DB, "Member 'QuestDetail_C_SetQuestInfo_Internal::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_7) == 0x0001DC, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_SetDateTime_ReturnValue_1) == 0x0001DD, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_SetDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_8) == 0x0001DE, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_byte_Variable_9) == 0x0001DF, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestDescAndSynopsis_ReturnValue) == 0x0001E0, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestDescAndSynopsis_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_Conv_StringToText_ReturnValue) == 0x0001F0, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetNextMainQuestPreconditionUIInfo_OutPrecondition) == 0x000208, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetNextMainQuestPreconditionUIInfo_OutPrecondition' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, Temp_bool_Variable_3) == 0x000220, "Member 'QuestDetail_C_SetQuestInfo_Internal::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, K2Node_Select_Default_2) == 0x000221, "Member 'QuestDetail_C_SetQuestInfo_Internal::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_IsEmptyList_bIsEmpty) == 0x000222, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_IsEmptyList_bIsEmpty' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, K2Node_Select_Default_3) == 0x000223, "Member 'QuestDetail_C_SetQuestInfo_Internal::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000224, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000225, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_BooleanOR_ReturnValue_1) == 0x000226, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000227, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestStatus_QuestStatus) == 0x000228, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000230, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_FindQuestMasterData_Exist) == 0x000348, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestConditionDetailByTextId_ReturnValue) == 0x000350, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestConditionDetailByTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_GetQuestNameByTextId_ReturnValue) == 0x000360, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_GetQuestNameByTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000370, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000388, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, K2Node_Select_Default_4) == 0x0003A0, "Member 'QuestDetail_C_SetQuestInfo_Internal::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, K2Node_Select_Default_5) == 0x0003A8, "Member 'QuestDetail_C_SetQuestInfo_Internal::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestInfo_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0003AC, "Member 'QuestDetail_C_SetQuestInfo_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetButton
// 0x0258 (0x0258 - 0x0000)
struct QuestDetail_C_SetButton final
{
public:
	EQuestStatus                                  InQuestStatus;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_888A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       InQuestMasterData;                                 // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0120(0x0118)(Edit, BlueprintVisible)
	EQuestDetail_ActionButtonType                 Temp_byte_Variable;                                // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestDetail_ActionButtonType                 Temp_byte_Variable_1;                              // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888B[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllowAcceptQuestByProceedingNum_ReturnValue; // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestDetail_ActionButtonType                 K2Node_Select_Default;                             // 0x024B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPrecondition_bResult;                // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPrecondition_bResult_1;              // 0x024D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x024E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x024F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0253(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_SetButton) == 0x000008, "Wrong alignment on QuestDetail_C_SetButton");
static_assert(sizeof(QuestDetail_C_SetButton) == 0x000258, "Wrong size on QuestDetail_C_SetButton");
static_assert(offsetof(QuestDetail_C_SetButton, InQuestStatus) == 0x000000, "Member 'QuestDetail_C_SetButton::InQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, InQuestMasterData) == 0x000008, "Member 'QuestDetail_C_SetButton::InQuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, QuestMasterData) == 0x000120, "Member 'QuestDetail_C_SetButton::QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, Temp_byte_Variable) == 0x000238, "Member 'QuestDetail_C_SetButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, K2Node_SwitchEnum_CmpSuccess) == 0x000239, "Member 'QuestDetail_C_SetButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, Temp_byte_Variable_1) == 0x00023A, "Member 'QuestDetail_C_SetButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_GetNetworkDataCache_IsValid) == 0x00023B, "Member 'QuestDetail_C_SetButton::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000240, "Member 'QuestDetail_C_SetButton::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, Temp_bool_Variable) == 0x000248, "Member 'QuestDetail_C_SetButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_IsAllowAcceptQuestByProceedingNum_ReturnValue) == 0x000249, "Member 'QuestDetail_C_SetButton::CallFunc_IsAllowAcceptQuestByProceedingNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_Not_PreBool_ReturnValue) == 0x00024A, "Member 'QuestDetail_C_SetButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, K2Node_Select_Default) == 0x00024B, "Member 'QuestDetail_C_SetButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_CheckPrecondition_bResult) == 0x00024C, "Member 'QuestDetail_C_SetButton::CallFunc_CheckPrecondition_bResult' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_CheckPrecondition_bResult_1) == 0x00024D, "Member 'QuestDetail_C_SetButton::CallFunc_CheckPrecondition_bResult_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_BooleanAND_ReturnValue) == 0x00024E, "Member 'QuestDetail_C_SetButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_BooleanAND_ReturnValue_1) == 0x00024F, "Member 'QuestDetail_C_SetButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000250, "Member 'QuestDetail_C_SetButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000251, "Member 'QuestDetail_C_SetButton::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_BooleanOR_ReturnValue) == 0x000252, "Member 'QuestDetail_C_SetButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_BooleanAND_ReturnValue_2) == 0x000253, "Member 'QuestDetail_C_SetButton::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_Not_PreBool_ReturnValue_1) == 0x000254, "Member 'QuestDetail_C_SetButton::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButton, CallFunc_BooleanOR_ReturnValue_1) == 0x000255, "Member 'QuestDetail_C_SetButton::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetButtonState
// 0x0054 (0x0054 - 0x0000)
struct QuestDetail_C_SetButtonState final
{
public:
	EQuestDetail_ActionButtonType                 ButtonType1;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_ActionButtonType                 ButtonType2;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bButtonEnable1;                                    // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888C[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888D[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestDetail_ActionButtonType                 Temp_byte_Variable_4;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_888E[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_2;                           // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_SetButtonState) == 0x000004, "Wrong alignment on QuestDetail_C_SetButtonState");
static_assert(sizeof(QuestDetail_C_SetButtonState) == 0x000054, "Wrong size on QuestDetail_C_SetButtonState");
static_assert(offsetof(QuestDetail_C_SetButtonState, ButtonType1) == 0x000000, "Member 'QuestDetail_C_SetButtonState::ButtonType1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, ButtonType2) == 0x000001, "Member 'QuestDetail_C_SetButtonState::ButtonType2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, bButtonEnable1) == 0x000002, "Member 'QuestDetail_C_SetButtonState::bButtonEnable1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_name_Variable) == 0x000004, "Member 'QuestDetail_C_SetButtonState::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000C, "Member 'QuestDetail_C_SetButtonState::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00000D, "Member 'QuestDetail_C_SetButtonState::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_name_Variable_1) == 0x000010, "Member 'QuestDetail_C_SetButtonState::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_name_Variable_2) == 0x000018, "Member 'QuestDetail_C_SetButtonState::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_name_Variable_3) == 0x000020, "Member 'QuestDetail_C_SetButtonState::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_name_Variable_4) == 0x000028, "Member 'QuestDetail_C_SetButtonState::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_name_Variable_5) == 0x000030, "Member 'QuestDetail_C_SetButtonState::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_name_Variable_6) == 0x000038, "Member 'QuestDetail_C_SetButtonState::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_bool_Variable) == 0x000040, "Member 'QuestDetail_C_SetButtonState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_byte_Variable) == 0x000041, "Member 'QuestDetail_C_SetButtonState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_byte_Variable_1) == 0x000042, "Member 'QuestDetail_C_SetButtonState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_bool_Variable_1) == 0x000043, "Member 'QuestDetail_C_SetButtonState::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, K2Node_Select_Default) == 0x000044, "Member 'QuestDetail_C_SetButtonState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_byte_Variable_2) == 0x000045, "Member 'QuestDetail_C_SetButtonState::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_byte_Variable_3) == 0x000046, "Member 'QuestDetail_C_SetButtonState::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, K2Node_Select_Default_1) == 0x000047, "Member 'QuestDetail_C_SetButtonState::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'QuestDetail_C_SetButtonState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, Temp_byte_Variable_4) == 0x000049, "Member 'QuestDetail_C_SetButtonState::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonState, K2Node_Select_Default_2) == 0x00004C, "Member 'QuestDetail_C_SetButtonState::K2Node_Select_Default_2' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetButtonVisibility
// 0x0005 (0x0005 - 0x0000)
struct QuestDetail_C_SetButtonVisibility final
{
public:
	ESlateVisibility                              InButton1;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              InButton2;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_SetButtonVisibility) == 0x000001, "Wrong alignment on QuestDetail_C_SetButtonVisibility");
static_assert(sizeof(QuestDetail_C_SetButtonVisibility) == 0x000005, "Wrong size on QuestDetail_C_SetButtonVisibility");
static_assert(offsetof(QuestDetail_C_SetButtonVisibility, InButton1) == 0x000000, "Member 'QuestDetail_C_SetButtonVisibility::InButton1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonVisibility, InButton2) == 0x000001, "Member 'QuestDetail_C_SetButtonVisibility::InButton2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'QuestDetail_C_SetButtonVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'QuestDetail_C_SetButtonVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetButtonVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'QuestDetail_C_SetButtonVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.GetThumbnailId
// 0x0160 (0x0160 - 0x0000)
struct QuestDetail_C_GetThumbnailId final
{
public:
	int32                                         Param_QuestIndex;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ThumbnailId;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCategory3                               Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_888F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0010(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8890[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0134(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8891[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_2;                              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_GetThumbnailId) == 0x000008, "Wrong alignment on QuestDetail_C_GetThumbnailId");
static_assert(sizeof(QuestDetail_C_GetThumbnailId) == 0x000160, "Wrong size on QuestDetail_C_GetThumbnailId");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, Param_QuestIndex) == 0x000000, "Member 'QuestDetail_C_GetThumbnailId::Param_QuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, ThumbnailId) == 0x000004, "Member 'QuestDetail_C_GetThumbnailId::ThumbnailId' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, Temp_byte_Variable) == 0x00000C, "Member 'QuestDetail_C_GetThumbnailId::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000010, "Member 'QuestDetail_C_GetThumbnailId::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, CallFunc_FindQuestMasterData_Exist) == 0x000128, "Member 'QuestDetail_C_GetThumbnailId::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, Temp_name_Variable) == 0x00012C, "Member 'QuestDetail_C_GetThumbnailId::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, Temp_name_Variable_1) == 0x000134, "Member 'QuestDetail_C_GetThumbnailId::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, CallFunc_NotEqual_NameName_ReturnValue) == 0x00013C, "Member 'QuestDetail_C_GetThumbnailId::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00013D, "Member 'QuestDetail_C_GetThumbnailId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, Temp_name_Variable_2) == 0x000140, "Member 'QuestDetail_C_GetThumbnailId::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, Temp_name_Variable_3) == 0x000148, "Member 'QuestDetail_C_GetThumbnailId::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, Temp_name_Variable_4) == 0x000150, "Member 'QuestDetail_C_GetThumbnailId::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_GetThumbnailId, K2Node_Select_Default) == 0x000158, "Member 'QuestDetail_C_GetThumbnailId::K2Node_Select_Default' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.CreateBlocker
// 0x0008 (0x0008 - 0x0000)
struct QuestDetail_C_CreateBlocker final
{
public:
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_CreateBlocker) == 0x000008, "Wrong alignment on QuestDetail_C_CreateBlocker");
static_assert(sizeof(QuestDetail_C_CreateBlocker) == 0x000008, "Wrong size on QuestDetail_C_CreateBlocker");
static_assert(offsetof(QuestDetail_C_CreateBlocker, CallFunc_Create_ReturnValue) == 0x000000, "Member 'QuestDetail_C_CreateBlocker::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.DestroyBlocker
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_C_DestroyBlocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_DestroyBlocker) == 0x000001, "Wrong alignment on QuestDetail_C_DestroyBlocker");
static_assert(sizeof(QuestDetail_C_DestroyBlocker) == 0x000001, "Wrong size on QuestDetail_C_DestroyBlocker");
static_assert(offsetof(QuestDetail_C_DestroyBlocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'QuestDetail_C_DestroyBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.PlayActionButtonClickSound
// 0x0050 (0x0050 - 0x0000)
struct QuestDetail_C_PlayActionButtonClickSound final
{
public:
	EQuestDetail_ActionButtonType                 InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_ActionButtonType                 Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8892[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_6;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_PlayActionButtonClickSound) == 0x000008, "Wrong alignment on QuestDetail_C_PlayActionButtonClickSound");
static_assert(sizeof(QuestDetail_C_PlayActionButtonClickSound) == 0x000050, "Wrong size on QuestDetail_C_PlayActionButtonClickSound");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, InType) == 0x000000, "Member 'QuestDetail_C_PlayActionButtonClickSound::InType' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_byte_Variable) == 0x000001, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_object_Variable) == 0x000008, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_object_Variable_1) == 0x000010, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_object_Variable_2) == 0x000018, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_object_Variable_3) == 0x000020, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_object_Variable_4) == 0x000028, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_object_Variable_5) == 0x000030, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, Temp_object_Variable_6) == 0x000038, "Member 'QuestDetail_C_PlayActionButtonClickSound::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, K2Node_Select_Default) == 0x000040, "Member 'QuestDetail_C_PlayActionButtonClickSound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_PlayActionButtonClickSound, CallFunc_PlaySE_ReturnValue) == 0x000048, "Member 'QuestDetail_C_PlayActionButtonClickSound::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.CheckPrecondition
// 0x0018 (0x0018 - 0x0000)
struct QuestDetail_C_CheckPrecondition final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8893[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPreconditionByIndex_ReturnValue;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_CheckPrecondition) == 0x000008, "Wrong alignment on QuestDetail_C_CheckPrecondition");
static_assert(sizeof(QuestDetail_C_CheckPrecondition) == 0x000018, "Wrong size on QuestDetail_C_CheckPrecondition");
static_assert(offsetof(QuestDetail_C_CheckPrecondition, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_CheckPrecondition::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_CheckPrecondition, bResult) == 0x000004, "Member 'QuestDetail_C_CheckPrecondition::bResult' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_CheckPrecondition, CallFunc_GetNetworkDataCache_IsValid) == 0x000005, "Member 'QuestDetail_C_CheckPrecondition::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_CheckPrecondition, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'QuestDetail_C_CheckPrecondition::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_CheckPrecondition, CallFunc_CheckPreconditionByIndex_ReturnValue) == 0x000010, "Member 'QuestDetail_C_CheckPrecondition::CallFunc_CheckPreconditionByIndex_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetPreviewMode
// 0x0248 (0x0248 - 0x0000)
struct QuestDetail_C_SetPreviewMode final
{
public:
	bool                                          Param_bPreviewMode;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  QuestStatus;                                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8894[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0008(0x0118)(Edit, BlueprintVisible)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8895[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x0128(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_SetPreviewMode) == 0x000008, "Wrong alignment on QuestDetail_C_SetPreviewMode");
static_assert(sizeof(QuestDetail_C_SetPreviewMode) == 0x000248, "Wrong size on QuestDetail_C_SetPreviewMode");
static_assert(offsetof(QuestDetail_C_SetPreviewMode, Param_bPreviewMode) == 0x000000, "Member 'QuestDetail_C_SetPreviewMode::Param_bPreviewMode' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetPreviewMode, QuestStatus) == 0x000001, "Member 'QuestDetail_C_SetPreviewMode::QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetPreviewMode, QuestMasterData) == 0x000008, "Member 'QuestDetail_C_SetPreviewMode::QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetPreviewMode, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000120, "Member 'QuestDetail_C_SetPreviewMode::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetPreviewMode, CallFunc_GetQuestStatus_QuestStatus) == 0x000121, "Member 'QuestDetail_C_SetPreviewMode::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetPreviewMode, CallFunc_FindQuestMasterData_QuestMasterData) == 0x000128, "Member 'QuestDetail_C_SetPreviewMode::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetPreviewMode, CallFunc_FindQuestMasterData_Exist) == 0x000240, "Member 'QuestDetail_C_SetPreviewMode::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.TermRequesTiming
// 0x0010 (0x0010 - 0x0000)
struct QuestDetail_C_TermRequesTiming final
{
public:
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8896[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_TermRequesTiming) == 0x000008, "Wrong alignment on QuestDetail_C_TermRequesTiming");
static_assert(sizeof(QuestDetail_C_TermRequesTiming) == 0x000010, "Wrong size on QuestDetail_C_TermRequesTiming");
static_assert(offsetof(QuestDetail_C_TermRequesTiming, CallFunc_GetUIManager_IsValid) == 0x000000, "Member 'QuestDetail_C_TermRequesTiming::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_TermRequesTiming, CallFunc_GetUIManager_ReturnValue) == 0x000008, "Member 'QuestDetail_C_TermRequesTiming::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetQuestStatusText
// 0x0178 (0x0178 - 0x0000)
struct QuestDetail_C_SetQuestStatusText final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  InQuestStatus;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8897[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	EQuestStatus                                  CallFunc_GetQuestDisplayStatus_OutQuestStatus;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8898[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0060(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0088(0x0028)()
	EQuestStatus                                  Temp_byte_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8899[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00B4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00BC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00C0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00C4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x00C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_889A[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x00D0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x00F8(0x0028)()
	int32                                         K2Node_Select_Default;                             // 0x0120(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  Temp_byte_Variable_1;                              // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_889B[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0150(0x0028)()
};
static_assert(alignof(QuestDetail_C_SetQuestStatusText) == 0x000008, "Wrong alignment on QuestDetail_C_SetQuestStatusText");
static_assert(sizeof(QuestDetail_C_SetQuestStatusText) == 0x000178, "Wrong size on QuestDetail_C_SetQuestStatusText");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_SetQuestStatusText::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, InQuestStatus) == 0x000004, "Member 'QuestDetail_C_SetQuestStatusText::InQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, CallFunc_GetQuestDisplayStatus_OutQuestStatus) == 0x000030, "Member 'QuestDetail_C_SetQuestStatusText::CallFunc_GetQuestDisplayStatus_OutQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_MakeStruct_SlateColor_2) == 0x000060, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_MakeStruct_SlateColor_3) == 0x000088, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_byte_Variable) == 0x0000B0, "Member 'QuestDetail_C_SetQuestStatusText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_int_Variable) == 0x0000B4, "Member 'QuestDetail_C_SetQuestStatusText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_int_Variable_1) == 0x0000B8, "Member 'QuestDetail_C_SetQuestStatusText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_int_Variable_2) == 0x0000BC, "Member 'QuestDetail_C_SetQuestStatusText::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_int_Variable_3) == 0x0000C0, "Member 'QuestDetail_C_SetQuestStatusText::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_int_Variable_4) == 0x0000C4, "Member 'QuestDetail_C_SetQuestStatusText::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_int_Variable_5) == 0x0000C8, "Member 'QuestDetail_C_SetQuestStatusText::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_MakeStruct_SlateColor_4) == 0x0000D0, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_MakeStruct_SlateColor_5) == 0x0000F8, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_Select_Default) == 0x000120, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, Temp_byte_Variable_1) == 0x000124, "Member 'QuestDetail_C_SetQuestStatusText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000128, "Member 'QuestDetail_C_SetQuestStatusText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'QuestDetail_C_SetQuestStatusText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetQuestStatusText, K2Node_Select_Default_1) == 0x000150, "Member 'QuestDetail_C_SetQuestStatusText::K2Node_Select_Default_1' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.Set Repeat Count Text
// 0x0070 (0x0070 - 0x0000)
struct QuestDetail_C_Set_Repeat_Count_Text final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestAcceptableCount_OutNum;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuestAcceptableCount_OutMaxNum;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetQuestAcceptableCount_ReturnValue;      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_889C[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_889D[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_889E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
};
static_assert(alignof(QuestDetail_C_Set_Repeat_Count_Text) == 0x000008, "Wrong alignment on QuestDetail_C_Set_Repeat_Count_Text");
static_assert(sizeof(QuestDetail_C_Set_Repeat_Count_Text) == 0x000070, "Wrong size on QuestDetail_C_Set_Repeat_Count_Text");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_Set_Repeat_Count_Text::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_GetQuestAcceptableCount_OutNum) == 0x000004, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_GetQuestAcceptableCount_OutNum' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_GetQuestAcceptableCount_OutMaxNum) == 0x000008, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_GetQuestAcceptableCount_OutMaxNum' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_GetQuestAcceptableCount_ReturnValue) == 0x00000C, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_GetQuestAcceptableCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_Clamp_ReturnValue) == 0x000010, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_Clamp_ReturnValue_1) == 0x000040, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000048, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Set_Repeat_Count_Text, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'QuestDetail_C_Set_Repeat_Count_Text::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.Get Quest Precondition Infos
// 0x0040 (0x0040 - 0x0000)
struct QuestDetail_C_Get_Quest_Precondition_Infos final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  InQuestStatus;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_889F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBQuestPreconditionUIInfo>     OutUiInfo;                                         // 0x0008(0x0010)(Parm, OutParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestMultipleCompletable_bRet;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A0[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBQuestPreconditionUIInfo>     CallFunc_GetQuestPreconditionUIInfo_OutPreconditionList; // 0x0020(0x0010)(ReferenceParm)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88A1[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_Get_Quest_Precondition_Infos) == 0x000008, "Wrong alignment on QuestDetail_C_Get_Quest_Precondition_Infos");
static_assert(sizeof(QuestDetail_C_Get_Quest_Precondition_Infos) == 0x000040, "Wrong size on QuestDetail_C_Get_Quest_Precondition_Infos");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, InQuestIndex) == 0x000000, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::InQuestIndex' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, InQuestStatus) == 0x000004, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::InQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, OutUiInfo) == 0x000008, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::OutUiInfo' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, CallFunc_IsQuestMultipleCompletable_bRet) == 0x00001A, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::CallFunc_IsQuestMultipleCompletable_bRet' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, CallFunc_GetQuestPreconditionUIInfo_OutPreconditionList) == 0x000020, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::CallFunc_GetQuestPreconditionUIInfo_OutPreconditionList' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_Get_Quest_Precondition_Infos, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'QuestDetail_C_Get_Quest_Precondition_Infos::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetPreviewModeEx
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_C_SetPreviewModeEx final
{
public:
	bool                                          InShowButton;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_SetPreviewModeEx) == 0x000001, "Wrong alignment on QuestDetail_C_SetPreviewModeEx");
static_assert(sizeof(QuestDetail_C_SetPreviewModeEx) == 0x000001, "Wrong size on QuestDetail_C_SetPreviewModeEx");
static_assert(offsetof(QuestDetail_C_SetPreviewModeEx, InShowButton) == 0x000000, "Member 'QuestDetail_C_SetPreviewModeEx::InShowButton' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetNextMainQuestMode
// 0x0001 (0x0001 - 0x0000)
struct QuestDetail_C_SetNextMainQuestMode final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDetail_C_SetNextMainQuestMode) == 0x000001, "Wrong alignment on QuestDetail_C_SetNextMainQuestMode");
static_assert(sizeof(QuestDetail_C_SetNextMainQuestMode) == 0x000001, "Wrong size on QuestDetail_C_SetNextMainQuestMode");
static_assert(offsetof(QuestDetail_C_SetNextMainQuestMode, Flag) == 0x000000, "Member 'QuestDetail_C_SetNextMainQuestMode::Flag' has a wrong offset!");

// Function QuestDetail.QuestDetail_C.SetActionButtonLabelCmn16
// 0x0038 (0x0038 - 0x0000)
struct QuestDetail_C_SetActionButtonLabelCmn16 final
{
public:
	class UCmnBtn16_C*                            CmnBtn16;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_ActionButtonType                 InType;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88A2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TextId;                                            // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_C_SetActionButtonLabelCmn16) == 0x000008, "Wrong alignment on QuestDetail_C_SetActionButtonLabelCmn16");
static_assert(sizeof(QuestDetail_C_SetActionButtonLabelCmn16) == 0x000038, "Wrong size on QuestDetail_C_SetActionButtonLabelCmn16");
static_assert(offsetof(QuestDetail_C_SetActionButtonLabelCmn16, CmnBtn16) == 0x000000, "Member 'QuestDetail_C_SetActionButtonLabelCmn16::CmnBtn16' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetActionButtonLabelCmn16, InType) == 0x000008, "Member 'QuestDetail_C_SetActionButtonLabelCmn16::InType' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetActionButtonLabelCmn16, TextId) == 0x000010, "Member 'QuestDetail_C_SetActionButtonLabelCmn16::TextId' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetActionButtonLabelCmn16, K2Node_MakeArray_Array) == 0x000020, "Member 'QuestDetail_C_SetActionButtonLabelCmn16::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetActionButtonLabelCmn16, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000030, "Member 'QuestDetail_C_SetActionButtonLabelCmn16::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_C_SetActionButtonLabelCmn16, CallFunc_Array_Get_Item) == 0x000034, "Member 'QuestDetail_C_SetActionButtonLabelCmn16::CallFunc_Array_Get_Item' has a wrong offset!");

}

