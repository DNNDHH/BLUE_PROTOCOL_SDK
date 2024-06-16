#pragma once

 

// Package: BP_Fang_expedition

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionDataUpdate__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature");
static_assert(sizeof(BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature) == 0x000001, "Wrong size on BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature");
static_assert(offsetof(BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_OnExpeditionDataUpdate__DelegateSignature::WasSuccessful' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ExecuteUbergraph_BP_Fang_expedition
// 0x12B0 (0x12B0 - 0x0000)
struct BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65B1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_65B2[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B3[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B4[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailListAttachmentAcceptedResult_C*    CallFunc_Create_ReturnValue_1;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B5[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailRewardData                      CallFunc_GetExpreditonRewardData_RewardData;       // 0x00A8(0x0180)()
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNeedMailAcceptResult_ReturnValue;       // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B6[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0230(0x0010)(ZeroConstructor, NoDestructor)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0240(0x0010)(NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0250(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_5;            // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBFang_expeditionPlayData             CallFunc_FindPlayData_FindData;                    // 0x0270(0x0120)()
	bool                                          CallFunc_FindPlayData_Valid;                       // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_WasSuccessful_9;                // 0x0391(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B7[0x2];                                     // 0x0392(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_8;                    // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0398(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x03A8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B8[0x6];                                     // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WasSuccessful_8;                // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B9[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_7;                    // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65BA[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x03E8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_1; // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0400(0x0018)()
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData;                // 0x0418(0x0038)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0451(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65BB[0x6];                                     // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65BC[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_2; // 0x0470(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData_1;              // 0x0480(0x0038)()
	bool                                          K2Node_CustomEvent_WasSuccessful_7;                // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65BD[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_6;                    // 0x04BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x04C0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x04D0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65BE[0x6];                                     // 0x04EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_4;        // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65BF[0x3];                                     // 0x0501(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool WasSuccessful)>           K2Node_CreateDelegate_OutputDelegate_6;            // 0x0504(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_65C0[0x4];                                     // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_3; // 0x0518(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_5;        // 0x0528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C1[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_4; // 0x0538(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_6;        // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_6;        // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C2[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_7;        // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_5; // 0x0560(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_7;        // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C3[0x7];                                     // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_6; // 0x0578(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C4[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x0588(0x0058)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x05E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_8;        // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_8;        // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C5[0x7];                                     // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_7; // 0x0608(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData_2;              // 0x0610(0x0038)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_9;        // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_9;        // 0x0650(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0658(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C6[0x7];                                     // 0x0659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0660(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_8; // 0x0670(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0678(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData_3;              // 0x0688(0x0038)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x06C0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x06D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_10;       // 0x06E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x06F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_10;       // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C7[0x7];                                     // 0x0709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0710(0x0018)()
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_9; // 0x0728(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0730(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WasSuccessful_6;                // 0x0734(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C8[0x3];                                     // 0x0735(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_5;                    // 0x0738(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65C9[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0740(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0750(0x0018)()
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x0768(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0778(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65CA[0x3];                                     // 0x0791(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0794(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_4;                       // 0x07A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65CB[0x3];                                     // 0x07A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_11;       // 0x07A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_11;       // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x07B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_WasSuccessful_5;                // 0x07B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65CC[0x2];                                     // 0x07BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_4;                    // 0x07BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_10; // 0x07C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_5;            // 0x07C8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x07D8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x07F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65CD[0x7];                                     // 0x07F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_12;       // 0x07F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0800(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65CE[0x7];                                     // 0x0801(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_12;       // 0x0808(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65CF[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_11; // 0x0818(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData_4;              // 0x0820(0x0038)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0858(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0868(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_8;            // 0x0880(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_13;       // 0x0890(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_13;       // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x08A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_WasSuccessful_4;                // 0x08A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D0[0x2];                                     // 0x08A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_3;                    // 0x08A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_12; // 0x08A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_6;            // 0x08B0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x08C0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x08D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D1[0x7];                                     // 0x08D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_14;       // 0x08E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x08E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D2[0x7];                                     // 0x08E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_14;       // 0x08F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x08F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D3[0x7];                                     // 0x08F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_13; // 0x0900(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WasSuccessful_3;                // 0x0908(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D4[0x3];                                     // 0x0909(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_2;                    // 0x090C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_7;            // 0x0910(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0920(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x0938(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x0939(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x093A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x093B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_3;                       // 0x093C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x093D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D5[0x2];                                     // 0x093E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_15;       // 0x0940(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_15;       // 0x0948(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x0950(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D6[0x7];                                     // 0x0951(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayAreaId_Id;                         // 0x0958(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_14; // 0x0968(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0970(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x0980(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0981(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D7[0x6];                                     // 0x0982(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0988(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_16;       // 0x0990(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_16;       // 0x0998(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x09A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D8[0x7];                                     // 0x09A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_15; // 0x09A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x09B0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetPlayAreaId_Id_1;                       // 0x09C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_id;                             // 0x09D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_CustomEvent_TokenIds_1;                     // 0x09E0(0x0010)(ConstParm, ReferenceParm)
	struct FSBFang_expeditionAreaData             K2Node_CustomEvent_AreaData_1;                     // 0x09F0(0x00A8)()
	struct FSBFang_expeditionPlayData             CallFunc_FindPlayData_FindData_1;                  // 0x0A98(0x0120)()
	bool                                          CallFunc_FindPlayData_Valid_1;                     // 0x0BB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65D9[0x7];                                     // 0x0BB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             K2Node_CustomEvent_AreaData;                       // 0x0BC0(0x00A8)()
	TArray<int32>                                 K2Node_CustomEvent_TokenIds;                       // 0x0C68(0x0010)(ConstParm, ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0C78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0C79(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65DA[0x2];                                     // 0x0C7A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_11;           // 0x0C7C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0C8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65DB[0x3];                                     // 0x0C8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0C90(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0C98(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0C9C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65DC[0x3];                                     // 0x0C9D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTokenUseDialogMessage_Message;         // 0x0CA0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0CB0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0CC8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0CD8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0CF0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0D00(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0D10(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x0D28(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0D40(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0D48(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0D50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NeedExpeditionUseCheckDialog_NeedDialog;  // 0x0D51(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0D52(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65DD[0x5];                                     // 0x0D53(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0D58(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0D60(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseCheckDialogActive_ReturnValue;       // 0x0D70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65DE[0x7];                                     // 0x0D71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x0D78(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0D90(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0DA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65DF[0x7];                                     // 0x0DA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0DA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x0DB0(0x0018)()
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0DC8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x0DD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65E0[0x3];                                     // 0x0DD9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_12;           // 0x0DDC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_65E1[0x4];                                     // 0x0DEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0DF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0DF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E2[0x7];                                     // 0x0DF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0E00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0E08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E3[0x3];                                     // 0x0E09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0E0C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0E10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0E14(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0E15(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E4[0x2];                                     // 0x0E16(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_17;       // 0x0E18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_17;       // 0x0E20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x0E28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E5[0x7];                                     // 0x0E29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_16; // 0x0E30(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x0E38(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_18;       // 0x0E48(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WasSuccessful_2;                // 0x0E50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E6[0x3];                                     // 0x0E51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode_1;                    // 0x0E54(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_18;       // 0x0E58(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x0E60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E7[0x7];                                     // 0x0E61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_8;            // 0x0E68(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_17; // 0x0E78(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x0E80(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x0E98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x0E99(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E8[0x6];                                     // 0x0E9A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_19;       // 0x0EA0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_19;       // 0x0EA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_19;                    // 0x0EB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0EB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65E9[0x6];                                     // 0x0EB2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_18; // 0x0EB8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData_5;              // 0x0EC0(0x0038)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0EF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0EF9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65EA[0x6];                                     // 0x0EFA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0F00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0F08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0F09(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0F0A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NeedCheckExpeditionUpdate_NeedUpdate;     // 0x0F0B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NeedCheckExpeditionUpdateSingle_NeedUpdate; // 0x0F0C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_WasSuccessful_1;                // 0x0F0D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65EB[0x2];                                     // 0x0F0E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_20;       // 0x0F10(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_20;       // 0x0F18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_20;                    // 0x0F20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65EC[0x7];                                     // 0x0F21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_19; // 0x0F28(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData_6;              // 0x0F30(0x0038)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0F68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0F70(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x0F78(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0F80(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetExpeditionMiddleCategoryToField_Field; // 0x0F88(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_8;          // 0x0F98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65ED[0x3];                                     // 0x0F99(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0F9C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0FA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0FA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65EE[0x2];                                     // 0x0FA2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0FA4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0FA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0FB0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65EF[0x4];                                     // 0x0FB4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0FB8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_9;            // 0x0FC0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x0FD0(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0FE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F0[0x7];                                     // 0x0FE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0FF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_20; // 0x0FF8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData_7;              // 0x1000(0x0038)()
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x1038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x103C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F1[0x3];                                     // 0x103D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_21;       // 0x1040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WasSuccessful;                  // 0x1048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F2[0x3];                                     // 0x1049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x104C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_21;       // 0x1050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_21;                    // 0x1058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F3[0x7];                                     // 0x1059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_10;           // 0x1060(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_21; // 0x1070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x1078(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x1090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F4[0x7];                                     // 0x1091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_11;           // 0x1098(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x10A8(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x10C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65F5[0x4];                                     // 0x10C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x10C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x10D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x10D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNotifyCompletionExpeditionEventParam* K2Node_DynamicCast_AsSBNotify_Completion_Expedition_Event_Param; // 0x10E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_22;                    // 0x10E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F6[0x7];                                     // 0x10E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_22; // 0x10F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x10F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F7[0x7];                                     // 0x10F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x1100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x1118(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x1158(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x1170(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x1180(0x0040)(HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x11C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x11C8(0x0010)(ReferenceParm)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x11D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_23;                    // 0x11E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x11E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F8[0x6];                                     // 0x11EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x11F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_23;         // 0x1200(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x1218(0x0018)()
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x1230(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x1240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65F9[0x7];                                     // 0x1241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x1248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_24;         // 0x1258(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x1270(0x0018)()
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x1288(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x1298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FA[0x3];                                     // 0x1299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_16;           // 0x129C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition");
static_assert(sizeof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition) == 0x0012B0, "Wrong size on BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, EntryPoint) == 0x000000, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlaySE_ReturnValue) == 0x000020, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000068, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x000078, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Create_ReturnValue_1) == 0x000080, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_1) == 0x000088, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_AddChildToCanvas_ReturnValue) == 0x000090, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000098, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpreditonRewardData_RewardData) == 0x0000A8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpreditonRewardData_RewardData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlaySE_ReturnValue_1) == 0x000228, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_IsNeedMailAcceptResult_ReturnValue) == 0x00022C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_IsNeedMailAcceptResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_4) == 0x000230, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_MakeStruct_Anchors) == 0x000240, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_MakeStruct_Margin) == 0x000250, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_5) == 0x000260, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_FindPlayData_FindData) == 0x000270, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_FindPlayData_FindData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_FindPlayData_Valid) == 0x000390, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_FindPlayData_Valid' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_9) == 0x000391, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_8) == 0x000394, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue) == 0x000398, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue) == 0x0003A8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0003C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_BooleanAND_ReturnValue) == 0x0003C1, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_2) == 0x0003C8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_8) == 0x0003D0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_7) == 0x0003D4, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0003D8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_2) == 0x0003E0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0003E8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_1) == 0x0003F8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000400, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData) == 0x000418, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000450, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_BooleanAND_ReturnValue_1) == 0x000451, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_3) == 0x000458, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x000460, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_3) == 0x000468, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_2) == 0x000470, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlayAnimation_ReturnValue) == 0x000478, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData_1) == 0x000480, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_7) == 0x0004B8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_6) == 0x0004BC, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x0004C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0004D0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0004E8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_BooleanAND_ReturnValue_2) == 0x0004E9, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_4) == 0x0004F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_4) == 0x0004F8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_4) == 0x000500, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_6) == 0x000504, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_3) == 0x000518, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_5) == 0x000520, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_5) == 0x000528, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_5) == 0x000530, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_4) == 0x000538, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_6) == 0x000540, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_6) == 0x000548, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_6) == 0x000550, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_7) == 0x000558, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_5) == 0x000560, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_7) == 0x000568, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_7) == 0x000570, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_6) == 0x000578, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_FindTokenMaster_bIsValid) == 0x000580, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_FindTokenMaster_TokenMaster) == 0x000588, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetMasterTokenText_ReturnValue) == 0x0005E0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_8) == 0x0005F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_8) == 0x0005F8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_8) == 0x000600, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_7) == 0x000608, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData_2) == 0x000610, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_9) == 0x000648, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_9) == 0x000650, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_9) == 0x000658, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue) == 0x000660, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_8) == 0x000670, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Replace_ReturnValue) == 0x000678, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData_3) == 0x000688, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0006C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0006D8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_10) == 0x0006E8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Replace_ReturnValue_1) == 0x0006F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_10) == 0x000700, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_10) == 0x000708, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000710, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_9) == 0x000728, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlaySE_ReturnValue_2) == 0x000730, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_6) == 0x000734, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_5) == 0x000738, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00073C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000740, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000750, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x000768, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000778, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_MakeLiteralByte_ReturnValue) == 0x000790, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_7) == 0x000794, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Result_4) == 0x0007A4, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_11) == 0x0007A8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_11) == 0x0007B0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_11) == 0x0007B8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_5) == 0x0007B9, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_4) == 0x0007BC, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_10) == 0x0007C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_5) == 0x0007C8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0007D8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0007F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_12) == 0x0007F8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_BooleanAND_ReturnValue_3) == 0x000800, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_12) == 0x000808, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_12) == 0x000810, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_11) == 0x000818, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData_4) == 0x000820, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000858, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000868, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_8) == 0x000880, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_13) == 0x000890, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_13) == 0x000898, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_13) == 0x0008A0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_4) == 0x0008A1, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_3) == 0x0008A4, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_12) == 0x0008A8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_6) == 0x0008B0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_9) == 0x0008C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0008D8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_14) == 0x0008E0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_BooleanAND_ReturnValue_4) == 0x0008E8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_14) == 0x0008F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_14) == 0x0008F8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_13) == 0x000900, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_3) == 0x000908, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_2) == 0x00090C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_7) == 0x000910, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000920, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000938, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_BooleanAND_ReturnValue_5) == 0x000939, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00093A, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Greater_IntInt_ReturnValue) == 0x00093B, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Result_3) == 0x00093C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00093D, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_15) == 0x000940, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_15) == 0x000948, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_15) == 0x000950, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayAreaId_Id) == 0x000958, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayAreaId_Id' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_14) == 0x000968, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_9) == 0x000970, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Result_2) == 0x000980, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000981, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Create_ReturnValue_2) == 0x000988, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_16) == 0x000990, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_16) == 0x000998, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_16' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_16) == 0x0009A0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_15) == 0x0009A8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_10) == 0x0009B0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayAreaId_Id_1) == 0x0009C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayAreaId_Id_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_id) == 0x0009D0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_TokenIds_1) == 0x0009E0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_TokenIds_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_AreaData_1) == 0x0009F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_AreaData_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_FindPlayData_FindData_1) == 0x000A98, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_FindPlayData_FindData_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_FindPlayData_Valid_1) == 0x000BB8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_FindPlayData_Valid_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_AreaData) == 0x000BC0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_AreaData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_TokenIds) == 0x000C68, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_TokenIds' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000C78, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Result_1) == 0x000C79, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_11) == 0x000C7C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000C8C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Create_ReturnValue_3) == 0x000C90, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Array_Length_ReturnValue) == 0x000C98, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000C9C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTokenUseDialogMessage_Message) == 0x000CA0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTokenUseDialogMessage_Message' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000CB0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000CC8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000CD8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000CF0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000D00, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000D10, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_14) == 0x000D28, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlayAnimationForward_ReturnValue) == 0x000D40, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000D48, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_SwitchInteger_CmpSuccess) == 0x000D50, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_NeedExpeditionUseCheckDialog_NeedDialog) == 0x000D51, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_NeedExpeditionUseCheckDialog_NeedDialog' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetConfigSaveManager_IsValid) == 0x000D52, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000D58, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000D60, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_IsUseCheckDialogActive_ReturnValue) == 0x000D70, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_IsUseCheckDialogActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_15) == 0x000D78, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000D90, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000DA0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000DA8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_16) == 0x000DB0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerId_ReturnValue) == 0x000DC8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x000DD8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_12) == 0x000DDC, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlayAnimation_ReturnValue_1) == 0x000DF0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000DF8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlayAnimation_ReturnValue_2) == 0x000E00, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Not_PreBool_ReturnValue) == 0x000E08, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Index_1) == 0x000E0C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Index) == 0x000E10, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Result) == 0x000E14, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000E15, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_17) == 0x000E18, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_17) == 0x000E20, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_17' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_17) == 0x000E28, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_16) == 0x000E30, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_13) == 0x000E38, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_18) == 0x000E48, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_2) == 0x000E50, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode_1) == 0x000E54, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_18) == 0x000E58, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_18' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_18) == 0x000E60, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_8) == 0x000E68, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_17) == 0x000E78, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_17) == 0x000E80, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x000E98, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_BooleanAND_ReturnValue_6) == 0x000E99, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_19) == 0x000EA0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_19) == 0x000EA8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_19' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_19) == 0x000EB0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_19' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Not_PreBool_ReturnValue_1) == 0x000EB1, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_18) == 0x000EB8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData_5) == 0x000EC0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000EF8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Not_PreBool_ReturnValue_2) == 0x000EF9, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000F00, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Not_PreBool_ReturnValue_3) == 0x000F08, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000F09, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Not_PreBool_ReturnValue_4) == 0x000F0A, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_NeedCheckExpeditionUpdate_NeedUpdate) == 0x000F0B, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_NeedCheckExpeditionUpdate_NeedUpdate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_NeedCheckExpeditionUpdateSingle_NeedUpdate) == 0x000F0C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_NeedCheckExpeditionUpdateSingle_NeedUpdate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful_1) == 0x000F0D, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_20) == 0x000F10, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_20) == 0x000F18, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_20' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_20) == 0x000F20, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_20' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_19) == 0x000F28, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData_6) == 0x000F30, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlayAnimation_ReturnValue_3) == 0x000F68, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_K2_SetTimer_ReturnValue) == 0x000F70, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000F78, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Create_ReturnValue_4) == 0x000F80, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionMiddleCategoryToField_Field) == 0x000F88, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionMiddleCategoryToField_Field' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_IntInt_ReturnValue_8) == 0x000F98, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, Temp_int_Variable) == 0x000F9C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetVisibility_ReturnValue) == 0x000FA0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000FA1, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Array_Add_ReturnValue) == 0x000FA4, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBPlayerController_ReturnValue) == 0x000FA8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_InRetCode) == 0x000FB0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000FB8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_9) == 0x000FC0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_18) == 0x000FD0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000FE8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000FF0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_20) == 0x000FF8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetExpeditionData_OutData_7) == 0x001000, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetExpeditionData_OutData_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x001038, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00103C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetPlayerController_ReturnValue_21) == 0x001040, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetPlayerController_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_WasSuccessful) == 0x001048, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_ErrorCode) == 0x00104C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBPlayer_Controller_21) == 0x001050, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBPlayer_Controller_21' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_21) == 0x001058, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_21' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_10) == 0x001060, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_21) == 0x001070, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_19) == 0x001078, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x001090, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBRetMessage_ReturnValue_11) == 0x001098, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBRetMessage_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_20) == 0x0010A8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_PlaySE_ReturnValue_3) == 0x0010C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Sender) == 0x0010C8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CustomEvent_Param) == 0x0010D0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0010D8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBNotify_Completion_Expedition_Event_Param) == 0x0010E0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBNotify_Completion_Expedition_Event_Param' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_22) == 0x0010E8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_22' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetFang_expeditionComponent_ReturnValue_22) == 0x0010F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetFang_expeditionComponent_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_IsValid_ReturnValue_1) == 0x0010F8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_21) == 0x001100, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_MakeStruct_FormatArgumentData) == 0x001118, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_22) == 0x001158, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_MakeArray_Array) == 0x001170, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_MakeStruct_FormatArgumentData_1) == 0x001180, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetHUD_ReturnValue) == 0x0011C0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_MakeArray_Array_1) == 0x0011C8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x0011D8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_DynamicCast_bSuccess_23) == 0x0011E8, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_DynamicCast_bSuccess_23' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_IsValid_ReturnValue_2) == 0x0011E9, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x0011F0, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_23) == 0x001200, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Format_ReturnValue) == 0x001218, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_14) == 0x001230, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x001240, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x001248, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Conv_StringToText_ReturnValue_24) == 0x001258, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Conv_StringToText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Format_ReturnValue_1) == 0x001270, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_15) == 0x001288, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, CallFunc_Not_PreBool_ReturnValue_5) == 0x001298, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition, K2Node_CreateDelegate_OutputDelegate_16) == 0x00129C, "Member 'BP_Fang_expedition_C_ExecuteUbergraph_BP_Fang_expedition::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.Event_NotifyCompletionExpedition
// 0x0010 (0x0010 - 0x0000)
struct BP_Fang_expedition_C_Event_NotifyCompletionExpedition final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_Event_NotifyCompletionExpedition) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_Event_NotifyCompletionExpedition");
static_assert(sizeof(BP_Fang_expedition_C_Event_NotifyCompletionExpedition) == 0x000010, "Wrong size on BP_Fang_expedition_C_Event_NotifyCompletionExpedition");
static_assert(offsetof(BP_Fang_expedition_C_Event_NotifyCompletionExpedition, Sender) == 0x000000, "Member 'BP_Fang_expedition_C_Event_NotifyCompletionExpedition::Sender' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_Event_NotifyCompletionExpedition, Param) == 0x000008, "Member 'BP_Fang_expedition_C_Event_NotifyCompletionExpedition::Param' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_CustomEvent_0 final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_CustomEvent_0) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_CustomEvent_0");
static_assert(sizeof(BP_Fang_expedition_C_CustomEvent_0) == 0x000008, "Wrong size on BP_Fang_expedition_C_CustomEvent_0");
static_assert(offsetof(BP_Fang_expedition_C_CustomEvent_0, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_CustomEvent_0::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_CustomEvent_0, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_CustomEvent_0::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.Complete_GetRewardBoost
// 0x0004 (0x0004 - 0x0000)
struct BP_Fang_expedition_C_Complete_GetRewardBoost final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_Complete_GetRewardBoost) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_Complete_GetRewardBoost");
static_assert(sizeof(BP_Fang_expedition_C_Complete_GetRewardBoost) == 0x000004, "Wrong size on BP_Fang_expedition_C_Complete_GetRewardBoost");
static_assert(offsetof(BP_Fang_expedition_C_Complete_GetRewardBoost, InRetCode) == 0x000000, "Member 'BP_Fang_expedition_C_Complete_GetRewardBoost::InRetCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListDetailUpdateWork
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_PlayListDetailUpdateWork final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_PlayListDetailUpdateWork) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_PlayListDetailUpdateWork");
static_assert(sizeof(BP_Fang_expedition_C_PlayListDetailUpdateWork) == 0x000001, "Wrong size on BP_Fang_expedition_C_PlayListDetailUpdateWork");
static_assert(offsetof(BP_Fang_expedition_C_PlayListDetailUpdateWork, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_PlayListDetailUpdateWork::WasSuccessful' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.PlayListUpdate
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_PlayListUpdate final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_PlayListUpdate) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_PlayListUpdate");
static_assert(sizeof(BP_Fang_expedition_C_PlayListUpdate) == 0x000008, "Wrong size on BP_Fang_expedition_C_PlayListUpdate");
static_assert(offsetof(BP_Fang_expedition_C_PlayListUpdate, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_PlayListUpdate::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_PlayListUpdate, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_PlayListUpdate::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnDungeonOpenTicketDialogSelect
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect");
static_assert(sizeof(BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect) == 0x000001, "Wrong size on BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect");
static_assert(offsetof(BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect, Result) == 0x000000, "Member 'BP_Fang_expedition_C_OnDungeonOpenTicketDialogSelect::Result' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistFinishButton
// 0x0004 (0x0004 - 0x0000)
struct BP_Fang_expedition_C_OnPressPlaylistFinishButton final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnPressPlaylistFinishButton) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_OnPressPlaylistFinishButton");
static_assert(sizeof(BP_Fang_expedition_C_OnPressPlaylistFinishButton) == 0x000004, "Wrong size on BP_Fang_expedition_C_OnPressPlaylistFinishButton");
static_assert(offsetof(BP_Fang_expedition_C_OnPressPlaylistFinishButton, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnPressPlaylistFinishButton::Param_Index' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressPlaylistDetailButton
// 0x0004 (0x0004 - 0x0000)
struct BP_Fang_expedition_C_OnPressPlaylistDetailButton final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnPressPlaylistDetailButton) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_OnPressPlaylistDetailButton");
static_assert(sizeof(BP_Fang_expedition_C_OnPressPlaylistDetailButton) == 0x000004, "Wrong size on BP_Fang_expedition_C_OnPressPlaylistDetailButton");
static_assert(offsetof(BP_Fang_expedition_C_OnPressPlaylistDetailButton, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnPressPlaylistDetailButton::Param_Index' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.StartDialogSelect
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_StartDialogSelect final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_StartDialogSelect) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_StartDialogSelect");
static_assert(sizeof(BP_Fang_expedition_C_StartDialogSelect) == 0x000001, "Wrong size on BP_Fang_expedition_C_StartDialogSelect");
static_assert(offsetof(BP_Fang_expedition_C_StartDialogSelect, Result) == 0x000000, "Member 'BP_Fang_expedition_C_StartDialogSelect::Result' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartButtonWork
// 0x00B8 (0x00B8 - 0x0000)
struct BP_Fang_expedition_C_ExpeditionStartButtonWork final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 TokenIds;                                          // 0x00A8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_Fang_expedition_C_ExpeditionStartButtonWork) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_ExpeditionStartButtonWork");
static_assert(sizeof(BP_Fang_expedition_C_ExpeditionStartButtonWork) == 0x0000B8, "Wrong size on BP_Fang_expedition_C_ExpeditionStartButtonWork");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartButtonWork, AreaData) == 0x000000, "Member 'BP_Fang_expedition_C_ExpeditionStartButtonWork::AreaData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartButtonWork, TokenIds) == 0x0000A8, "Member 'BP_Fang_expedition_C_ExpeditionStartButtonWork::TokenIds' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.TicketSelectWindowOpen
// 0x00B8 (0x00B8 - 0x0000)
struct BP_Fang_expedition_C_TicketSelectWindowOpen final
{
public:
	TArray<int32>                                 TokenIds;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0010(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_Fang_expedition_C_TicketSelectWindowOpen) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_TicketSelectWindowOpen");
static_assert(sizeof(BP_Fang_expedition_C_TicketSelectWindowOpen) == 0x0000B8, "Wrong size on BP_Fang_expedition_C_TicketSelectWindowOpen");
static_assert(offsetof(BP_Fang_expedition_C_TicketSelectWindowOpen, TokenIds) == 0x000000, "Member 'BP_Fang_expedition_C_TicketSelectWindowOpen::TokenIds' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_TicketSelectWindowOpen, AreaData) == 0x000010, "Member 'BP_Fang_expedition_C_TicketSelectWindowOpen::AreaData' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionFinishButtonWork
// 0x0010 (0x0010 - 0x0000)
struct BP_Fang_expedition_C_ExpeditionFinishButtonWork final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_ExpeditionFinishButtonWork) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_ExpeditionFinishButtonWork");
static_assert(sizeof(BP_Fang_expedition_C_ExpeditionFinishButtonWork) == 0x000010, "Wrong size on BP_Fang_expedition_C_ExpeditionFinishButtonWork");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionFinishButtonWork, ID) == 0x000000, "Member 'BP_Fang_expedition_C_ExpeditionFinishButtonWork::ID' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateDialogSelect
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_ImmediateDialogSelect final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_ImmediateDialogSelect) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_ImmediateDialogSelect");
static_assert(sizeof(BP_Fang_expedition_C_ImmediateDialogSelect) == 0x000001, "Wrong size on BP_Fang_expedition_C_ImmediateDialogSelect");
static_assert(offsetof(BP_Fang_expedition_C_ImmediateDialogSelect, Result) == 0x000000, "Member 'BP_Fang_expedition_C_ImmediateDialogSelect::Result' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.CancelDialogSelect
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_CancelDialogSelect final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_CancelDialogSelect) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_CancelDialogSelect");
static_assert(sizeof(BP_Fang_expedition_C_CancelDialogSelect) == 0x000001, "Wrong size on BP_Fang_expedition_C_CancelDialogSelect");
static_assert(offsetof(BP_Fang_expedition_C_CancelDialogSelect, Result) == 0x000000, "Member 'BP_Fang_expedition_C_CancelDialogSelect::Result' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnCheckReward_Complete
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_OnCheckReward_Complete final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnCheckReward_Complete) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_OnCheckReward_Complete");
static_assert(sizeof(BP_Fang_expedition_C_OnCheckReward_Complete) == 0x000008, "Wrong size on BP_Fang_expedition_C_OnCheckReward_Complete");
static_assert(offsetof(BP_Fang_expedition_C_OnCheckReward_Complete, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_OnCheckReward_Complete::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnCheckReward_Complete, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_OnCheckReward_Complete::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.DataUpdateWork
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_DataUpdateWork final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_DataUpdateWork) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_DataUpdateWork");
static_assert(sizeof(BP_Fang_expedition_C_DataUpdateWork) == 0x000008, "Wrong size on BP_Fang_expedition_C_DataUpdateWork");
static_assert(offsetof(BP_Fang_expedition_C_DataUpdateWork, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_DataUpdateWork::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DataUpdateWork, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_DataUpdateWork::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorReload
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_ImmediateErrorReload final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_ImmediateErrorReload) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_ImmediateErrorReload");
static_assert(sizeof(BP_Fang_expedition_C_ImmediateErrorReload) == 0x000008, "Wrong size on BP_Fang_expedition_C_ImmediateErrorReload");
static_assert(offsetof(BP_Fang_expedition_C_ImmediateErrorReload, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_ImmediateErrorReload::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ImmediateErrorReload, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_ImmediateErrorReload::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorDialogWork
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_ImmediateErrorDialogWork final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_ImmediateErrorDialogWork) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_ImmediateErrorDialogWork");
static_assert(sizeof(BP_Fang_expedition_C_ImmediateErrorDialogWork) == 0x000001, "Wrong size on BP_Fang_expedition_C_ImmediateErrorDialogWork");
static_assert(offsetof(BP_Fang_expedition_C_ImmediateErrorDialogWork, Result) == 0x000000, "Member 'BP_Fang_expedition_C_ImmediateErrorDialogWork::Result' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ImmediateErrorWork
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_ImmediateErrorWork final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6600[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_ImmediateErrorWork) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_ImmediateErrorWork");
static_assert(sizeof(BP_Fang_expedition_C_ImmediateErrorWork) == 0x000008, "Wrong size on BP_Fang_expedition_C_ImmediateErrorWork");
static_assert(offsetof(BP_Fang_expedition_C_ImmediateErrorWork, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_ImmediateErrorWork::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ImmediateErrorWork, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_ImmediateErrorWork::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnOpenRareRequest_Complete
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_OnOpenRareRequest_Complete final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6601[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnOpenRareRequest_Complete) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_OnOpenRareRequest_Complete");
static_assert(sizeof(BP_Fang_expedition_C_OnOpenRareRequest_Complete) == 0x000008, "Wrong size on BP_Fang_expedition_C_OnOpenRareRequest_Complete");
static_assert(offsetof(BP_Fang_expedition_C_OnOpenRareRequest_Complete, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_OnOpenRareRequest_Complete::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnOpenRareRequest_Complete, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_OnOpenRareRequest_Complete::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnExpeditionStart_Complete
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_OnExpeditionStart_Complete final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6602[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnExpeditionStart_Complete) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_OnExpeditionStart_Complete");
static_assert(sizeof(BP_Fang_expedition_C_OnExpeditionStart_Complete) == 0x000008, "Wrong size on BP_Fang_expedition_C_OnExpeditionStart_Complete");
static_assert(offsetof(BP_Fang_expedition_C_OnExpeditionStart_Complete, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_OnExpeditionStart_Complete::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnExpeditionStart_Complete, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_OnExpeditionStart_Complete::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_GetReward
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_OnComplete_GetReward final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6603[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnComplete_GetReward) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_OnComplete_GetReward");
static_assert(sizeof(BP_Fang_expedition_C_OnComplete_GetReward) == 0x000008, "Wrong size on BP_Fang_expedition_C_OnComplete_GetReward");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_GetReward, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_OnComplete_GetReward::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_GetReward, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_OnComplete_GetReward::ErrorCode' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.BackButtonPress
// 0x0028 (0x0028 - 0x0000)
struct BP_Fang_expedition_C_BackButtonPress final
{
public:
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6604[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6605[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_BackButtonPress) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_BackButtonPress");
static_assert(sizeof(BP_Fang_expedition_C_BackButtonPress) == 0x000028, "Wrong size on BP_Fang_expedition_C_BackButtonPress");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, CallFunc_PlaySE_ReturnValue) == 0x000000, "Member 'BP_Fang_expedition_C_BackButtonPress::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000004, "Member 'BP_Fang_expedition_C_BackButtonPress::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, CallFunc_PlaySE_ReturnValue_1) == 0x000008, "Member 'BP_Fang_expedition_C_BackButtonPress::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, CallFunc_PlaySE_ReturnValue_2) == 0x00000C, "Member 'BP_Fang_expedition_C_BackButtonPress::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, CallFunc_GetVisibility_ReturnValue) == 0x000010, "Member 'BP_Fang_expedition_C_BackButtonPress::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_Fang_expedition_C_BackButtonPress::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'BP_Fang_expedition_C_BackButtonPress::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BackButtonPress, K2Node_SwitchInteger_CmpSuccess) == 0x000020, "Member 'BP_Fang_expedition_C_BackButtonPress::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.VisibilityChange
// 0x0038 (0x0038 - 0x0000)
struct BP_Fang_expedition_C_VisibilityChange final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimationSkip;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6606[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_VisibilityChange) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_VisibilityChange");
static_assert(sizeof(BP_Fang_expedition_C_VisibilityChange) == 0x000038, "Wrong size on BP_Fang_expedition_C_VisibilityChange");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, Type) == 0x000000, "Member 'BP_Fang_expedition_C_VisibilityChange::Type' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, AnimationSkip) == 0x000004, "Member 'BP_Fang_expedition_C_VisibilityChange::AnimationSkip' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, K2Node_SwitchInteger_CmpSuccess) == 0x000005, "Member 'BP_Fang_expedition_C_VisibilityChange::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_Fang_expedition_C_VisibilityChange::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'BP_Fang_expedition_C_VisibilityChange::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'BP_Fang_expedition_C_VisibilityChange::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'BP_Fang_expedition_C_VisibilityChange::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, CallFunc_PlayAnimation_ReturnValue_4) == 0x000028, "Member 'BP_Fang_expedition_C_VisibilityChange::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_VisibilityChange, CallFunc_PlayAnimation_ReturnValue_5) == 0x000030, "Member 'BP_Fang_expedition_C_VisibilityChange::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.InitializeAreaListData
// 0x0060 (0x0060 - 0x0000)
struct BP_Fang_expedition_C_InitializeAreaListData final
{
public:
	class USBPlayerExpeditionComponent*           Component;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData;                // 0x0010(0x0038)()
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6607[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_InitializeAreaListData) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_InitializeAreaListData");
static_assert(sizeof(BP_Fang_expedition_C_InitializeAreaListData) == 0x000060, "Wrong size on BP_Fang_expedition_C_InitializeAreaListData");
static_assert(offsetof(BP_Fang_expedition_C_InitializeAreaListData, Component) == 0x000000, "Member 'BP_Fang_expedition_C_InitializeAreaListData::Component' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_InitializeAreaListData, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_Fang_expedition_C_InitializeAreaListData::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_InitializeAreaListData, CallFunc_GetExpeditionData_OutData) == 0x000010, "Member 'BP_Fang_expedition_C_InitializeAreaListData::CallFunc_GetExpeditionData_OutData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_InitializeAreaListData, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000048, "Member 'BP_Fang_expedition_C_InitializeAreaListData::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_InitializeAreaListData, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Fang_expedition_C_InitializeAreaListData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_InitializeAreaListData, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x000058, "Member 'BP_Fang_expedition_C_InitializeAreaListData::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct BP_Fang_expedition_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6608[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_RandomPlayAnimation");
static_assert(sizeof(BP_Fang_expedition_C_RandomPlayAnimation) == 0x000018, "Wrong size on BP_Fang_expedition_C_RandomPlayAnimation");
static_assert(offsetof(BP_Fang_expedition_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'BP_Fang_expedition_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_Fang_expedition_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'BP_Fang_expedition_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct BP_Fang_expedition_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6609[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_RandomPlayAnimation2");
static_assert(sizeof(BP_Fang_expedition_C_RandomPlayAnimation2) == 0x000018, "Wrong size on BP_Fang_expedition_C_RandomPlayAnimation2");
static_assert(offsetof(BP_Fang_expedition_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'BP_Fang_expedition_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_Fang_expedition_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'BP_Fang_expedition_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.BindEvent
// 0x01C0 (0x01C0 - 0x0000)
struct BP_Fang_expedition_C_BindEvent final
{
public:
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& ID)>      K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionIconData& IconData)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionAreaData& AreaData)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& Field, int32 Index)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<int32>& SelectTokenIds)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<int32>& TokenIds, const struct FSBFang_expeditionAreaData& AreaData)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;           // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<class FString>& UniqueId)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& ID)>      K2Node_CreateDelegate_OutputDelegate_17;           // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_18;           // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)> K2Node_CreateDelegate_OutputDelegate_19;           // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_20;           // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_21;           // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_22;           // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_23;           // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_24;           // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_25;           // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_26;           // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_27;           // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_BindEvent) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_BindEvent");
static_assert(sizeof(BP_Fang_expedition_C_BindEvent) == 0x0001C0, "Wrong size on BP_Fang_expedition_C_BindEvent");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_8) == 0x000080, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_9) == 0x000090, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000A0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000B0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_12) == 0x0000C0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_13) == 0x0000D0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_14) == 0x0000E0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_15) == 0x0000F0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_16) == 0x000100, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_17) == 0x000110, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_18) == 0x000120, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_19) == 0x000130, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_20) == 0x000140, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_21) == 0x000150, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_22) == 0x000160, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_23) == 0x000170, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_24) == 0x000180, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_25) == 0x000190, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_26) == 0x0001A0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_BindEvent, K2Node_CreateDelegate_OutputDelegate_27) == 0x0001B0, "Member 'BP_Fang_expedition_C_BindEvent::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.UnBindEvent
// 0x01B0 (0x01B0 - 0x0000)
struct BP_Fang_expedition_C_UnBindEvent final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionIconData& IconData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionAreaData& AreaData)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& ID)>      K2Node_CreateDelegate_OutputDelegate_8;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& Field, int32 Index)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<int32>& SelectTokenIds)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<int32>& TokenIds, const struct FSBFang_expeditionAreaData& AreaData)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;           // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<class FString>& UniqueId)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& ID)>      K2Node_CreateDelegate_OutputDelegate_16;           // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_17;           // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue)> K2Node_CreateDelegate_OutputDelegate_18;           // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_19;           // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_20;           // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_21;           // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_22;           // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_23;           // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index, const struct FSBFang_expeditionPlayData& PlayData)> K2Node_CreateDelegate_OutputDelegate_24;           // 0x0180(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_25;           // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_26;           // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_UnBindEvent) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_UnBindEvent");
static_assert(sizeof(BP_Fang_expedition_C_UnBindEvent) == 0x0001B0, "Wrong size on BP_Fang_expedition_C_UnBindEvent");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_5) == 0x000050, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_8) == 0x000080, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_9) == 0x000090, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000A0, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000B0, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_12) == 0x0000C0, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_13) == 0x0000D0, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_14) == 0x0000E0, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_15) == 0x0000F0, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_16) == 0x000100, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_17) == 0x000110, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_18) == 0x000120, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_19) == 0x000130, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_20) == 0x000140, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_21) == 0x000150, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_22) == 0x000160, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_23) == 0x000170, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_24) == 0x000180, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_25) == 0x000190, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_UnBindEvent, K2Node_CreateDelegate_OutputDelegate_26) == 0x0001A0, "Member 'BP_Fang_expedition_C_UnBindEvent::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_Initialize final
{
public:
	class USBToken*                               CallFunc_SpawnObject_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_Initialize) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_Initialize");
static_assert(sizeof(BP_Fang_expedition_C_Initialize) == 0x000008, "Wrong size on BP_Fang_expedition_C_Initialize");
static_assert(offsetof(BP_Fang_expedition_C_Initialize, CallFunc_SpawnObject_ReturnValue) == 0x000000, "Member 'BP_Fang_expedition_C_Initialize::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Town
// 0x0058 (0x0058 - 0x0000)
struct BP_Fang_expedition_C_OnListSelect_Town final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_660A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CheckId;                                           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FindIndex;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_660B[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTownId_Id;                             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_660C[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindExpeditionAreaDataIndex_FindIndex;    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_660D[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnListSelect_Town) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnListSelect_Town");
static_assert(sizeof(BP_Fang_expedition_C_OnListSelect_Town) == 0x000058, "Wrong size on BP_Fang_expedition_C_OnListSelect_Town");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnListSelect_Town::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CheckId) == 0x000008, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CheckId' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, LoopEnd) == 0x000018, "Member 'BP_Fang_expedition_C_OnListSelect_Town::LoopEnd' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, FindIndex) == 0x00001C, "Member 'BP_Fang_expedition_C_OnListSelect_Town::FindIndex' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, Temp_int_Variable) == 0x000020, "Member 'BP_Fang_expedition_C_OnListSelect_Town::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, Temp_bool_Variable) == 0x000028, "Member 'BP_Fang_expedition_C_OnListSelect_Town::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00002A, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_GetTownId_Id) == 0x000030, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_GetTownId_Id' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000041, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_Array_LastIndex_ReturnValue) == 0x000044, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_FindExpeditionAreaDataIndex_FindIndex) == 0x000048, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_FindExpeditionAreaDataIndex_FindIndex' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00004C, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Town, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000054, "Member 'BP_Fang_expedition_C_OnListSelect_Town::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_Field
// 0x0028 (0x0028 - 0x0000)
struct BP_Fang_expedition_C_OnListSelect_Field final
{
public:
	class FString                                 Field;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_660E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnListSelect_Field) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnListSelect_Field");
static_assert(sizeof(BP_Fang_expedition_C_OnListSelect_Field) == 0x000028, "Wrong size on BP_Fang_expedition_C_OnListSelect_Field");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Field, Field) == 0x000000, "Member 'BP_Fang_expedition_C_OnListSelect_Field::Field' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Field, Param_Index) == 0x000010, "Member 'BP_Fang_expedition_C_OnListSelect_Field::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Field, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'BP_Fang_expedition_C_OnListSelect_Field::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_Field, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000020, "Member 'BP_Fang_expedition_C_OnListSelect_Field::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonPlay
// 0x0128 (0x0128 - 0x0000)
struct BP_Fang_expedition_C_OnListSelect_DungeonPlay final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_660F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0008(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_Fang_expedition_C_OnListSelect_DungeonPlay) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnListSelect_DungeonPlay");
static_assert(sizeof(BP_Fang_expedition_C_OnListSelect_DungeonPlay) == 0x000128, "Wrong size on BP_Fang_expedition_C_OnListSelect_DungeonPlay");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonPlay, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonPlay::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonPlay, PlayData) == 0x000008, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonPlay::PlayData' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonStandby
// 0x0028 (0x0028 - 0x0000)
struct BP_Fang_expedition_C_OnListSelect_DungeonStandby final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSet;                                             // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6610[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6611[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnListSelect_DungeonStandby) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnListSelect_DungeonStandby");
static_assert(sizeof(BP_Fang_expedition_C_OnListSelect_DungeonStandby) == 0x000028, "Wrong size on BP_Fang_expedition_C_OnListSelect_DungeonStandby");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, IsSet) == 0x000004, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::IsSet' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, LoopEnd) == 0x000008, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::LoopEnd' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, Temp_int_Variable) == 0x00000C, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000015, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000016, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000020, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000021, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000022, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000023, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonStandby, CallFunc_Array_LastIndex_ReturnValue) == 0x000024, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonStandby::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonTicket
// 0x0140 (0x0140 - 0x0000)
struct BP_Fang_expedition_C_OnListSelect_DungeonTicket final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6612[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6613[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x0078(0x0058)()
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6614[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue_1;             // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnListSelect_DungeonTicket) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnListSelect_DungeonTicket");
static_assert(sizeof(BP_Fang_expedition_C_OnListSelect_DungeonTicket) == 0x000140, "Wrong size on BP_Fang_expedition_C_OnListSelect_DungeonTicket");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000018, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_GetTokenAmount_ReturnValue) == 0x000038, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Conv_IntToString_ReturnValue) == 0x000040, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000050, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Replace_ReturnValue) == 0x000060, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_FindTokenMaster_bIsValid) == 0x000070, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_FindTokenMaster_TokenMaster) == 0x000078, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Replace_ReturnValue_1) == 0x0000D0, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_GetMasterTokenText_ReturnValue) == 0x0000E0, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Replace_ReturnValue_2) == 0x0000F0, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Replace_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Concat_StrStr_ReturnValue) == 0x000100, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Create_ReturnValue) == 0x000130, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_GetTokenAmount_ReturnValue_1) == 0x000138, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_GetTokenAmount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonTicket, CallFunc_Greater_IntInt_ReturnValue) == 0x00013C, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonTicket::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.SetPlayListVisibility
// 0x0018 (0x0018 - 0x0000)
struct BP_Fang_expedition_C_SetPlayListVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6615[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_SetPlayListVisibility) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_SetPlayListVisibility");
static_assert(sizeof(BP_Fang_expedition_C_SetPlayListVisibility) == 0x000018, "Wrong size on BP_Fang_expedition_C_SetPlayListVisibility");
static_assert(offsetof(BP_Fang_expedition_C_SetPlayListVisibility, Visible) == 0x000000, "Member 'BP_Fang_expedition_C_SetPlayListVisibility::Visible' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_SetPlayListVisibility, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'BP_Fang_expedition_C_SetPlayListVisibility::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_SetPlayListVisibility, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'BP_Fang_expedition_C_SetPlayListVisibility::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView
// 0x00F8 (0x00F8 - 0x0000)
struct BP_Fang_expedition_C_OnProbabilityListView final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         TimeIndex;                                         // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangValue;                                         // 0x00AC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6616[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x00D4(0x0010)(NoDestructor)
	uint8                                         Pad_6617[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue;                       // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnProbabilityListView) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnProbabilityListView");
static_assert(sizeof(BP_Fang_expedition_C_OnProbabilityListView) == 0x0000F8, "Wrong size on BP_Fang_expedition_C_OnProbabilityListView");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, AreaData) == 0x000000, "Member 'BP_Fang_expedition_C_OnProbabilityListView::AreaData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, TimeIndex) == 0x0000A8, "Member 'BP_Fang_expedition_C_OnProbabilityListView::TimeIndex' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, FangValue) == 0x0000AC, "Member 'BP_Fang_expedition_C_OnProbabilityListView::FangValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_Fang_expedition_C_OnProbabilityListView::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'BP_Fang_expedition_C_OnProbabilityListView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, K2Node_MakeStruct_Margin) == 0x0000C4, "Member 'BP_Fang_expedition_C_OnProbabilityListView::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, K2Node_MakeStruct_Anchors) == 0x0000D4, "Member 'BP_Fang_expedition_C_OnProbabilityListView::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, CallFunc_Create_ReturnValue) == 0x0000E8, "Member 'BP_Fang_expedition_C_OnProbabilityListView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView, CallFunc_AddChildToCanvas_ReturnValue) == 0x0000F0, "Member 'BP_Fang_expedition_C_OnProbabilityListView::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectOpen
// 0x00B0 (0x00B0 - 0x0000)
struct BP_Fang_expedition_C_FangSelectOpen final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6618[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             CallFunc_GetSelectedAreaData_Data;                 // 0x0008(0x00A8)()
};
static_assert(alignof(BP_Fang_expedition_C_FangSelectOpen) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_FangSelectOpen");
static_assert(sizeof(BP_Fang_expedition_C_FangSelectOpen) == 0x0000B0, "Wrong size on BP_Fang_expedition_C_FangSelectOpen");
static_assert(offsetof(BP_Fang_expedition_C_FangSelectOpen, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'BP_Fang_expedition_C_FangSelectOpen::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FangSelectOpen, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_Fang_expedition_C_FangSelectOpen::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FangSelectOpen, CallFunc_GetSelectedAreaData_Data) == 0x000008, "Member 'BP_Fang_expedition_C_FangSelectOpen::CallFunc_GetSelectedAreaData_Data' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnComplete_Immediate
// 0x01C8 (0x01C8 - 0x0000)
struct BP_Fang_expedition_C_OnComplete_Immediate final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6619[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DataIndex;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessage_C*                       NotifyMessage;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerExpeditionComponent*           Component;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0080(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661A[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_661B[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661C[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661D[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661E[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661F[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6620[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface_1; // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6621[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6622[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetNotifyMessage_ReturnValue;             // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6623[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessage_C*                       K2Node_DynamicCast_AsNotify_Message;               // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6624[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0154(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6625[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionData                 CallFunc_GetExpeditionData_OutData;                // 0x0168(0x0038)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6626[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue_1; // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnComplete_Immediate) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnComplete_Immediate");
static_assert(sizeof(BP_Fang_expedition_C_OnComplete_Immediate) == 0x0001C8, "Wrong size on BP_Fang_expedition_C_OnComplete_Immediate");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, WasSuccessful) == 0x000000, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::WasSuccessful' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, ErrorCode) == 0x000004, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::ErrorCode' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, DataIndex) == 0x000008, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::DataIndex' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, LoopEnd) == 0x00000C, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::LoopEnd' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, NotifyMessage) == 0x000010, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::NotifyMessage' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, Component) == 0x000018, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::Component' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000048, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000070, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000080, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000098, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000099, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetPlayerController_ReturnValue) == 0x0000B0, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, Temp_bool_Variable) == 0x0000B8, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000C0, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x0000D0, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_Not_PreBool_ReturnValue) == 0x0000D8, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, Temp_int_Variable) == 0x0000DC, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000E4, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x0000E8, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_bSuccess_1) == 0x0000F8, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_Array_LastIndex_ReturnValue) == 0x0000FC, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetPlayerController_ReturnValue_1) == 0x000100, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_AsSBNotify_Message_Interface_1) == 0x000108, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_AsSBNotify_Message_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_bSuccess_2) == 0x000118, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetHUD_ReturnValue) == 0x000120, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_AsSBBattle_HUD) == 0x000128, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_bSuccess_3) == 0x000130, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetNotifyMessage_ReturnValue) == 0x000138, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetNotifyMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000140, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_AsNotify_Message) == 0x000148, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_AsNotify_Message' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_bSuccess_4) == 0x000150, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_CreateDelegate_OutputDelegate_1) == 0x000154, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetExpeditionData_OutData) == 0x000168, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetExpeditionData_OutData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetPlayerController_ReturnValue_2) == 0x0001A0, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0001A8, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, K2Node_DynamicCast_bSuccess_5) == 0x0001B0, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_BooleanAND_ReturnValue) == 0x0001B1, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_GetFang_expeditionComponent_ReturnValue_1) == 0x0001B8, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_GetFang_expeditionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001C0, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnComplete_Immediate, CallFunc_BooleanAND_ReturnValue_1) == 0x0001C1, "Member 'BP_Fang_expedition_C_OnComplete_Immediate::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionRewardView
// 0x03F0 (0x03F0 - 0x0000)
struct BP_Fang_expedition_C_ExpeditionRewardView final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          LotterySkip;                                       // 0x0120(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6627[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 WorkRewardId;                                      // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6628[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMailData>                    RewardMailData;                                    // 0x0148(0x0010)(Edit, BlueprintVisible)
	class USBPlayerExpeditionComponent*           Component;                                         // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailAttachmentsAcceptWindow_C*         CallFunc_Create_ReturnValue;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6629[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0174(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_662A[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_662B[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterReward_IsExists;                // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_662C[0x2];                                     // 0x01C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x01C4(0x0014)(NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_662D[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMailAttachment                      K2Node_MakeStruct_SBMailAttachment;                // 0x01E8(0x0040)()
	struct FSBMailData                            K2Node_MakeStruct_SBMailData;                      // 0x0228(0x0190)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_662E[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_662F[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x03E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_ExpeditionRewardView) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_ExpeditionRewardView");
static_assert(sizeof(BP_Fang_expedition_C_ExpeditionRewardView) == 0x0003F0, "Wrong size on BP_Fang_expedition_C_ExpeditionRewardView");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, PlayData) == 0x000000, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::PlayData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, LotterySkip) == 0x000120, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::LotterySkip' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, MasterDataManager) == 0x000128, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::MasterDataManager' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, WorkRewardId) == 0x000130, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::WorkRewardId' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, LoopEnd) == 0x000140, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::LoopEnd' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, RewardMailData) == 0x000148, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::RewardMailData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, Component) == 0x000158, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::Component' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_Create_ReturnValue) == 0x000160, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_Conv_StringToName_ReturnValue) == 0x000168, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, K2Node_CreateDelegate_OutputDelegate) == 0x000174, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_AddChild_ReturnValue) == 0x000188, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, K2Node_CreateDelegate_OutputDelegate_1) == 0x000190, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001A0, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, Temp_int_Variable) == 0x0001B0, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001B4, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_Add_IntInt_ReturnValue) == 0x0001B8, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_Array_Length_ReturnValue) == 0x0001BC, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_Greater_IntInt_ReturnValue) == 0x0001C0, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_FindMasterReward_IsExists) == 0x0001C1, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_FindMasterReward_IsExists' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_FindMasterReward_ReturnValue) == 0x0001C4, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_GetMasterDataManager_IsValid) == 0x0001D8, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001E0, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, K2Node_MakeStruct_SBMailAttachment) == 0x0001E8, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::K2Node_MakeStruct_SBMailAttachment' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, K2Node_MakeStruct_SBMailData) == 0x000228, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::K2Node_MakeStruct_SBMailData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_Array_Add_ReturnValue) == 0x0003B8, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_Array_LastIndex_ReturnValue) == 0x0003BC, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_MakeLiteralByte_ReturnValue) == 0x0003C0, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_GetPlayerController_ReturnValue) == 0x0003C8, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0003D0, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, K2Node_DynamicCast_bSuccess) == 0x0003D8, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x0003E0, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionRewardView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0003E8, "Member 'BP_Fang_expedition_C_ExpeditionRewardView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.FindPlayData
// 0x0150 (0x0150 - 0x0000)
struct BP_Fang_expedition_C_FindPlayData final
{
public:
	class FString                                 ExpeditionId;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBFang_expeditionPlayData             FindData;                                          // 0x0010(0x0120)(Parm, OutParm)
	bool                                          Valid;                                             // 0x0130(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6630[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Find;                                              // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0147(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6631[0x2];                                     // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_FindPlayData) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_FindPlayData");
static_assert(sizeof(BP_Fang_expedition_C_FindPlayData) == 0x000150, "Wrong size on BP_Fang_expedition_C_FindPlayData");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, ExpeditionId) == 0x000000, "Member 'BP_Fang_expedition_C_FindPlayData::ExpeditionId' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, FindData) == 0x000010, "Member 'BP_Fang_expedition_C_FindPlayData::FindData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, Valid) == 0x000130, "Member 'BP_Fang_expedition_C_FindPlayData::Valid' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, Find) == 0x000134, "Member 'BP_Fang_expedition_C_FindPlayData::Find' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, LoopEnd) == 0x000138, "Member 'BP_Fang_expedition_C_FindPlayData::LoopEnd' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, Temp_int_Variable) == 0x00013C, "Member 'BP_Fang_expedition_C_FindPlayData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, CallFunc_Add_IntInt_ReturnValue) == 0x000140, "Member 'BP_Fang_expedition_C_FindPlayData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, Temp_bool_Variable) == 0x000144, "Member 'BP_Fang_expedition_C_FindPlayData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, CallFunc_Not_PreBool_ReturnValue) == 0x000145, "Member 'BP_Fang_expedition_C_FindPlayData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000146, "Member 'BP_Fang_expedition_C_FindPlayData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000147, "Member 'BP_Fang_expedition_C_FindPlayData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, CallFunc_BooleanAND_ReturnValue) == 0x000148, "Member 'BP_Fang_expedition_C_FindPlayData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000149, "Member 'BP_Fang_expedition_C_FindPlayData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FindPlayData, CallFunc_Array_LastIndex_ReturnValue) == 0x00014C, "Member 'BP_Fang_expedition_C_FindPlayData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnFangListSelectChange
// 0x0010 (0x0010 - 0x0000)
struct BP_Fang_expedition_C_OnFangListSelectChange final
{
public:
	TArray<class FString>                         UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_Fang_expedition_C_OnFangListSelectChange) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnFangListSelectChange");
static_assert(sizeof(BP_Fang_expedition_C_OnFangListSelectChange) == 0x000010, "Wrong size on BP_Fang_expedition_C_OnFangListSelectChange");
static_assert(offsetof(BP_Fang_expedition_C_OnFangListSelectChange, UniqueId) == 0x000000, "Member 'BP_Fang_expedition_C_OnFangListSelectChange::UniqueId' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnTokenWindowClose
// 0x0018 (0x0018 - 0x0000)
struct BP_Fang_expedition_C_OnTokenWindowClose final
{
public:
	TArray<int32>                                 TokenList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnTokenWindowClose) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnTokenWindowClose");
static_assert(sizeof(BP_Fang_expedition_C_OnTokenWindowClose) == 0x000018, "Wrong size on BP_Fang_expedition_C_OnTokenWindowClose");
static_assert(offsetof(BP_Fang_expedition_C_OnTokenWindowClose, TokenList) == 0x000000, "Member 'BP_Fang_expedition_C_OnTokenWindowClose::TokenList' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnTokenWindowClose, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'BP_Fang_expedition_C_OnTokenWindowClose::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionStartRequest
// 0x0080 (0x0080 - 0x0000)
struct BP_Fang_expedition_C_ExpeditionStartRequest final
{
public:
	class USBPlayerExpeditionComponent*           Component;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    PlayerController;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6632[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerExpeditionComponent*           CallFunc_GetFang_expeditionComponent_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0020(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6633[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool WasSuccessful, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetSelectedTimeIndex_Index;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6634[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_ExpeditionStartRequest) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_ExpeditionStartRequest");
static_assert(sizeof(BP_Fang_expedition_C_ExpeditionStartRequest) == 0x000080, "Wrong size on BP_Fang_expedition_C_ExpeditionStartRequest");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, Component) == 0x000000, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::Component' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, PlayerController) == 0x000008, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, Temp_int_Variable) == 0x000010, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, CallFunc_GetFang_expeditionComponent_ReturnValue) == 0x000018, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::CallFunc_GetFang_expeditionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, CallFunc_GetSBRetMessage_ReturnValue) == 0x000020, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, CallFunc_Array_Find_ReturnValue) == 0x000048, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00004C, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, CallFunc_GetSelectedTimeIndex_Index) == 0x000060, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::CallFunc_GetSelectedTimeIndex_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, CallFunc_GetPlayerController_ReturnValue) == 0x000068, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionStartRequest, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_Fang_expedition_C_ExpeditionStartRequest::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.DisplayTargetPlayDetail
// 0x0168 (0x0168 - 0x0000)
struct BP_Fang_expedition_C_DisplayTargetPlayDetail final
{
public:
	class FString                                 AreaId;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         FindIndex;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FindData;                                          // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6635[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             WorkPlayData;                                      // 0x0018(0x0120)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6636[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6637[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6638[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_DisplayTargetPlayDetail) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_DisplayTargetPlayDetail");
static_assert(sizeof(BP_Fang_expedition_C_DisplayTargetPlayDetail) == 0x000168, "Wrong size on BP_Fang_expedition_C_DisplayTargetPlayDetail");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, AreaId) == 0x000000, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::AreaId' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, FindIndex) == 0x000010, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::FindIndex' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, FindData) == 0x000014, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::FindData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, WorkPlayData) == 0x000018, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::WorkPlayData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, LoopEnd) == 0x000138, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::LoopEnd' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, Temp_bool_Variable) == 0x00013C, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_Not_PreBool_ReturnValue) == 0x00013D, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, Temp_int_Variable) == 0x000140, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000148, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, Temp_bool_Variable_1) == 0x000149, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_Not_PreBool_ReturnValue_1) == 0x00014A, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_BooleanAND_ReturnValue) == 0x00014B, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00014C, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, K2Node_SwitchInteger_CmpSuccess) == 0x00014D, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, Temp_int_Variable_1) == 0x000150, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_Add_IntInt_ReturnValue_1) == 0x000154, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000158, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_Array_LastIndex_ReturnValue) == 0x00015C, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, K2Node_SwitchInteger_CmpSuccess_1) == 0x000160, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000161, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_BooleanAND_ReturnValue_1) == 0x000162, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000163, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_DisplayTargetPlayDetail, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000164, "Member 'BP_Fang_expedition_C_DisplayTargetPlayDetail::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.FangSelectClose
// 0x0018 (0x0018 - 0x0000)
struct BP_Fang_expedition_C_FangSelectClose final
{
public:
	bool                                          AnimationSkip;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              BackupVisibility;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6639[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         EmptyArray;                                        // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(BP_Fang_expedition_C_FangSelectClose) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_FangSelectClose");
static_assert(sizeof(BP_Fang_expedition_C_FangSelectClose) == 0x000018, "Wrong size on BP_Fang_expedition_C_FangSelectClose");
static_assert(offsetof(BP_Fang_expedition_C_FangSelectClose, AnimationSkip) == 0x000000, "Member 'BP_Fang_expedition_C_FangSelectClose::AnimationSkip' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FangSelectClose, BackupVisibility) == 0x000001, "Member 'BP_Fang_expedition_C_FangSelectClose::BackupVisibility' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_FangSelectClose, EmptyArray) == 0x000008, "Member 'BP_Fang_expedition_C_FangSelectClose::EmptyArray' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ExpeditionPlayDetailOpen
// 0x0008 (0x0008 - 0x0000)
struct BP_Fang_expedition_C_ExpeditionPlayDetailOpen final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_ExpeditionPlayDetailOpen) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_ExpeditionPlayDetailOpen");
static_assert(sizeof(BP_Fang_expedition_C_ExpeditionPlayDetailOpen) == 0x000008, "Wrong size on BP_Fang_expedition_C_ExpeditionPlayDetailOpen");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionPlayDetailOpen, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_ExpeditionPlayDetailOpen::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ExpeditionPlayDetailOpen, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000004, "Member 'BP_Fang_expedition_C_ExpeditionPlayDetailOpen::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.GetTokenUseDialogMessage
// 0x0188 (0x0188 - 0x0000)
struct BP_Fang_expedition_C_GetTokenUseDialogMessage final
{
public:
	TArray<int32>                                 TokenIds;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 Message;                                           // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TokenMessage;                                      // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bAddReturn;                                        // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_663A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutMessage;                                        // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_663B[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindTokenMaster_bIsValid;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_663C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_FindTokenMaster_TokenMaster;              // 0x00B8(0x0058)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_663D[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_663E[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_663F[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_2;                    // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_GetTokenUseDialogMessage) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_GetTokenUseDialogMessage");
static_assert(sizeof(BP_Fang_expedition_C_GetTokenUseDialogMessage) == 0x000188, "Wrong size on BP_Fang_expedition_C_GetTokenUseDialogMessage");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, TokenIds) == 0x000000, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::TokenIds' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, Message) == 0x000010, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::Message' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, TokenMessage) == 0x000020, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::TokenMessage' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, bAddReturn) == 0x000030, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::bAddReturn' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, OutMessage) == 0x000038, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::OutMessage' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, Temp_int_Array_Index_Variable) == 0x000048, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_GetTextFromAsset_ReturnValue) == 0x000088, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000098, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Array_Length_ReturnValue) == 0x0000AC, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_FindTokenMaster_bIsValid) == 0x0000B0, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_FindTokenMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_FindTokenMaster_TokenMaster) == 0x0000B8, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_FindTokenMaster_TokenMaster' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_GetMasterTokenText_ReturnValue) == 0x000118, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_GetTokenAmount_ReturnValue) == 0x000128, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Replace_ReturnValue) == 0x000130, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Conv_IntToString_ReturnValue) == 0x000140, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Subtract_IntInt_ReturnValue) == 0x000150, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Replace_ReturnValue_1) == 0x000158, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000168, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_GetTokenUseDialogMessage, CallFunc_Replace_ReturnValue_2) == 0x000178, "Member 'BP_Fang_expedition_C_GetTokenUseDialogMessage::CallFunc_Replace_ReturnValue_2' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.SetupFieldMap
// 0x0020 (0x0020 - 0x0000)
struct BP_Fang_expedition_C_SetupFieldMap final
{
public:
	class FString                                 FieldId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_SetupFieldMap) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_SetupFieldMap");
static_assert(sizeof(BP_Fang_expedition_C_SetupFieldMap) == 0x000020, "Wrong size on BP_Fang_expedition_C_SetupFieldMap");
static_assert(offsetof(BP_Fang_expedition_C_SetupFieldMap, FieldId) == 0x000000, "Member 'BP_Fang_expedition_C_SetupFieldMap::FieldId' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_SetupFieldMap, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'BP_Fang_expedition_C_SetupFieldMap::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconClick
// 0x0018 (0x0018 - 0x0000)
struct BP_Fang_expedition_C_OnMapIconClick final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FindData;                                          // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnMapIconClick) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnMapIconClick");
static_assert(sizeof(BP_Fang_expedition_C_OnMapIconClick) == 0x000018, "Wrong size on BP_Fang_expedition_C_OnMapIconClick");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconClick, ID) == 0x000000, "Member 'BP_Fang_expedition_C_OnMapIconClick::ID' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconClick, Param_Index) == 0x000010, "Member 'BP_Fang_expedition_C_OnMapIconClick::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconClick, FindData) == 0x000014, "Member 'BP_Fang_expedition_C_OnMapIconClick::FindData' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnListSelect_DungeonArea
// 0x00B8 (0x00B8 - 0x0000)
struct BP_Fang_expedition_C_OnListSelect_DungeonArea final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6640[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0008(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnListSelect_DungeonArea) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnListSelect_DungeonArea");
static_assert(sizeof(BP_Fang_expedition_C_OnListSelect_DungeonArea) == 0x0000B8, "Wrong size on BP_Fang_expedition_C_OnListSelect_DungeonArea");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonArea, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonArea::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonArea, AreaData) == 0x000008, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonArea::AreaData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonArea, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonArea::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnListSelect_DungeonArea, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'BP_Fang_expedition_C_OnListSelect_DungeonArea::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnProbabilityListView_PlayData
// 0x0140 (0x0140 - 0x0000)
struct BP_Fang_expedition_C_OnProbabilityListView_PlayData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBFang_expeditionRewardData           RewardData;                                        // 0x0120(0x0020)(Edit, BlueprintVisible)
};
static_assert(alignof(BP_Fang_expedition_C_OnProbabilityListView_PlayData) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnProbabilityListView_PlayData");
static_assert(sizeof(BP_Fang_expedition_C_OnProbabilityListView_PlayData) == 0x000140, "Wrong size on BP_Fang_expedition_C_OnProbabilityListView_PlayData");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView_PlayData, PlayData) == 0x000000, "Member 'BP_Fang_expedition_C_OnProbabilityListView_PlayData::PlayData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnProbabilityListView_PlayData, RewardData) == 0x000120, "Member 'BP_Fang_expedition_C_OnProbabilityListView_PlayData::RewardData' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnMapIconGroupClick
// 0x0310 (0x0310 - 0x0000)
struct BP_Fang_expedition_C_OnMapIconGroupClick final
{
public:
	struct FSBFang_expeditionIconData             IconData;                                          // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          NewMark;                                           // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TimeMark;                                          // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFang_expeditionStatus                      IconStatus;                                        // 0x005A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6641[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 AreaIndexList;                                     // 0x0060(0x0010)(Edit, BlueprintVisible)
	class FString                                 TargetId;                                          // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         TargetAreaIdList;                                  // 0x0080(0x0010)(Edit, BlueprintVisible)
	struct FVector2D                              WorkPos;                                           // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Find;                                              // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6642[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         AreaNameList;                                      // 0x00A0(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6643[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6644[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6645[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6646[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionAreaData             CallFunc_Array_Get_Item;                           // 0x00F0(0x00A8)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6647[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6648[0x1];                                     // 0x01A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6649[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_664A[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_664B[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             CallFunc_Array_Get_Item_1;                         // 0x01C0(0x0120)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x02E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x02E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x02E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_BMax_ReturnValue;                         // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_664C[0x1];                                     // 0x02EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_664D[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_664E[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnMapIconGroupClick) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_OnMapIconGroupClick");
static_assert(sizeof(BP_Fang_expedition_C_OnMapIconGroupClick) == 0x000310, "Wrong size on BP_Fang_expedition_C_OnMapIconGroupClick");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, IconData) == 0x000000, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::IconData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, NewMark) == 0x000058, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::NewMark' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, TimeMark) == 0x000059, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::TimeMark' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, IconStatus) == 0x00005A, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::IconStatus' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, AreaIndexList) == 0x000060, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::AreaIndexList' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, TargetId) == 0x000070, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::TargetId' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, TargetAreaIdList) == 0x000080, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::TargetAreaIdList' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, WorkPos) == 0x000090, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::WorkPos' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Find) == 0x000098, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Find' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, LoopEnd) == 0x00009C, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::LoopEnd' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, AreaNameList) == 0x0000A0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::AreaNameList' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_bool_True_if_break_was_hit_Variable) == 0x0000B0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_int_Array_Index_Variable) == 0x0000B4, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Not_PreBool_ReturnValue) == 0x0000B8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_int_Array_Index_Variable_1) == 0x0000BC, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_int_Variable) == 0x0000C8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000CC, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_bool_True_if_break_was_hit_Variable_1) == 0x0000D0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000D1, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_int_Loop_Counter_Variable_1) == 0x0000D4, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000D8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_int_Array_Index_Variable_2) == 0x0000DC, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_PlayAnimation_ReturnValue) == 0x0000E0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Add_ReturnValue) == 0x0000EC, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Not_PreBool_ReturnValue_2) == 0x000198, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Length_ReturnValue) == 0x00019C, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001A0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001A1, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_BooleanOR_ReturnValue) == 0x0001A2, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, Temp_int_Loop_Counter_Variable_2) == 0x0001A4, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Less_IntInt_ReturnValue) == 0x0001A8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001AC, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_BooleanAND_ReturnValue) == 0x0001B0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Add_ReturnValue_1) == 0x0001B4, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001B8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Get_Item_1) == 0x0001C0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Length_ReturnValue_1) == 0x0002E0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002E4, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_BooleanAND_ReturnValue_1) == 0x0002E5, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0002E6, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_BooleanOR_ReturnValue_1) == 0x0002E7, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0002E8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_BMax_ReturnValue) == 0x0002E9, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_BMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_GetValidValue_ReturnValue) == 0x0002EA, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_LastIndex_ReturnValue) == 0x0002EC, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Length_ReturnValue_2) == 0x0002F0, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Get_Item_2) == 0x0002F8, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Less_IntInt_ReturnValue_2) == 0x000308, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnMapIconGroupClick, CallFunc_Array_Add_ReturnValue_2) == 0x00030C, "Member 'BP_Fang_expedition_C_OnMapIconGroupClick::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnDetailAreaListClick
// 0x0004 (0x0004 - 0x0000)
struct BP_Fang_expedition_C_OnDetailAreaListClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Fang_expedition_C_OnDetailAreaListClick) == 0x000004, "Wrong alignment on BP_Fang_expedition_C_OnDetailAreaListClick");
static_assert(sizeof(BP_Fang_expedition_C_OnDetailAreaListClick) == 0x000004, "Wrong size on BP_Fang_expedition_C_OnDetailAreaListClick");
static_assert(offsetof(BP_Fang_expedition_C_OnDetailAreaListClick, Param_Index) == 0x000000, "Member 'BP_Fang_expedition_C_OnDetailAreaListClick::Param_Index' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.OnPressDungeonListClose
// 0x0004 (0x0004 - 0x0000)
struct BP_Fang_expedition_C_OnPressDungeonListClose final
{
public:
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_OnPressDungeonListClose) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_OnPressDungeonListClose");
static_assert(sizeof(BP_Fang_expedition_C_OnPressDungeonListClose) == 0x000004, "Wrong size on BP_Fang_expedition_C_OnPressDungeonListClose");
static_assert(offsetof(BP_Fang_expedition_C_OnPressDungeonListClose, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000000, "Member 'BP_Fang_expedition_C_OnPressDungeonListClose::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnPressDungeonListClose, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000001, "Member 'BP_Fang_expedition_C_OnPressDungeonListClose::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnPressDungeonListClose, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000002, "Member 'BP_Fang_expedition_C_OnPressDungeonListClose::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_OnPressDungeonListClose, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000003, "Member 'BP_Fang_expedition_C_OnPressDungeonListClose::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.ReloadPlayDataDetail
// 0x0170 (0x0170 - 0x0000)
struct BP_Fang_expedition_C_ReloadPlayDataDetail final
{
public:
	bool                                          IsUpdate;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_664F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TargetId;                                          // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6650[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6651[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6652[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayAreaId_Id;                         // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBFang_expeditionPlayData             CallFunc_Array_Get_Item;                           // 0x0048(0x0120)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x016E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_ReloadPlayDataDetail) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_ReloadPlayDataDetail");
static_assert(sizeof(BP_Fang_expedition_C_ReloadPlayDataDetail) == 0x000170, "Wrong size on BP_Fang_expedition_C_ReloadPlayDataDetail");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, IsUpdate) == 0x000000, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::IsUpdate' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, TargetId) == 0x000008, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::TargetId' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_GetPlayAreaId_Id) == 0x000038, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_GetPlayAreaId_Id' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_Array_Length_ReturnValue) == 0x000168, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00016C, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_Less_IntInt_ReturnValue) == 0x00016D, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_ReloadPlayDataDetail, CallFunc_BooleanAND_ReturnValue) == 0x00016E, "Member 'BP_Fang_expedition_C_ReloadPlayDataDetail::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.MapIconClickWork
// 0x0228 (0x0228 - 0x0000)
struct BP_Fang_expedition_C_MapIconClickWork final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          AnimationSkip;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6653[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_Index;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FindData;                                          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6654[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6655[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6656[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6657[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6658[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionPlayData             CallFunc_Array_Get_Item;                           // 0x0048(0x0120)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x016E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6659[0x1];                                     // 0x016F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_665A[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             CallFunc_Array_Get_Item_1;                         // 0x0178(0x00A8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_MapIconClickWork) == 0x000008, "Wrong alignment on BP_Fang_expedition_C_MapIconClickWork");
static_assert(sizeof(BP_Fang_expedition_C_MapIconClickWork) == 0x000228, "Wrong size on BP_Fang_expedition_C_MapIconClickWork");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, ID) == 0x000000, "Member 'BP_Fang_expedition_C_MapIconClickWork::ID' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, AnimationSkip) == 0x000010, "Member 'BP_Fang_expedition_C_MapIconClickWork::AnimationSkip' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, Param_Index) == 0x000014, "Member 'BP_Fang_expedition_C_MapIconClickWork::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, FindData) == 0x000018, "Member 'BP_Fang_expedition_C_MapIconClickWork::FindData' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, Temp_bool_True_if_break_was_hit_Variable) == 0x000019, "Member 'BP_Fang_expedition_C_MapIconClickWork::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_Fang_expedition_C_MapIconClickWork::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, Temp_bool_True_if_break_was_hit_Variable_1) == 0x000024, "Member 'BP_Fang_expedition_C_MapIconClickWork::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_Fang_expedition_C_MapIconClickWork::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Not_PreBool_ReturnValue_1) == 0x00002C, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'BP_Fang_expedition_C_MapIconClickWork::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, Temp_int_Loop_Counter_Variable_1) == 0x00003C, "Member 'BP_Fang_expedition_C_MapIconClickWork::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Array_Length_ReturnValue_1) == 0x000168, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Less_IntInt_ReturnValue) == 0x00016C, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00016D, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_BooleanAND_ReturnValue) == 0x00016E, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Array_Length_ReturnValue_2) == 0x000170, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Array_Get_Item_1) == 0x000178, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_Less_IntInt_ReturnValue_1) == 0x000220, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_BooleanAND_ReturnValue_1) == 0x000221, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Fang_expedition_C_MapIconClickWork, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000222, "Member 'BP_Fang_expedition_C_MapIconClickWork::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_Fang_expedition.BP_Fang_expedition_C.SetLoading
// 0x0001 (0x0001 - 0x0000)
struct BP_Fang_expedition_C_SetLoading final
{
public:
	bool                                          Loading;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Fang_expedition_C_SetLoading) == 0x000001, "Wrong alignment on BP_Fang_expedition_C_SetLoading");
static_assert(sizeof(BP_Fang_expedition_C_SetLoading) == 0x000001, "Wrong size on BP_Fang_expedition_C_SetLoading");
static_assert(offsetof(BP_Fang_expedition_C_SetLoading, Loading) == 0x000000, "Member 'BP_Fang_expedition_C_SetLoading::Loading' has a wrong offset!");

}

