#pragma once

 

// Package: PlayerReport

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PlayerReport.PlayerReport_C.ExecuteUbergraph_PlayerReport
// 0x0430 (0x0430 - 0x0000)
struct PlayerReport_C_ExecuteUbergraph_PlayerReport final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9020[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9021[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0038(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0060(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9022[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0100(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0128(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0150(0x0018)()
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9023[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9024[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x01A8(0x0018)()
	EYesNoDialogResult                            K2Node_CustomEvent_Result_1;                       // 0x01C0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9025[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9026[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x01E8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9027[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x01F0(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9028[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0220(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9029[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBReportComponent*                     CallFunc_GetReportComponent_ReturnValue;           // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x026C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_902A[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0270(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_902B[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FReportData                            K2Node_MakeStruct_ReportData;                      // 0x0278(0x0038)()
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x02B0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x02C0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_902C[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_902D[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBReportComponent*                     CallFunc_GetReportComponent_ReturnValue_1;         // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0300(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_8;           // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0320(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_902E[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBReportComponent*                     CallFunc_GetReportComponent_ReturnValue_2;         // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0358(0x0018)()
	TDelegate<void(bool bWasSuccessful, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0370(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0390(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_3;            // 0x03B8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_902F[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x03D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x03E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;                   // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9030[0x5];                                     // 0x03F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x03F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0408(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9031[0x3];                                     // 0x0419(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x041C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerReport_C_ExecuteUbergraph_PlayerReport) == 0x000008, "Wrong alignment on PlayerReport_C_ExecuteUbergraph_PlayerReport");
static_assert(sizeof(PlayerReport_C_ExecuteUbergraph_PlayerReport) == 0x000430, "Wrong size on PlayerReport_C_ExecuteUbergraph_PlayerReport");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, EntryPoint) == 0x000000, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CustomEvent_URL) == 0x000018, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_DownloadImage_ReturnValue) == 0x000028, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_ComponentBoundEvent_Text_1) == 0x000038, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_TextToString_ReturnValue) == 0x000050, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_ComponentBoundEvent_Text) == 0x000060, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_ComponentBoundEvent_CommitMethod) == 0x000078, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000080, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000090, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000C8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0000F0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000100, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000118, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000128, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000140, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000150, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_ComponentBoundEvent_SelectedItem) == 0x000168, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_ComponentBoundEvent_SelectionType) == 0x000178, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000180, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetSelectedIndex_ReturnValue) == 0x000190, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000198, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0001A8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CustomEvent_Result_1) == 0x0001C0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_ShowYesNoDialog_ReturnValue) == 0x0001C8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_SwitchEnum_CmpSuccess) == 0x0001D0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetVisibility_ReturnValue) == 0x0001D1, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x0001D8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CustomEvent_Result) == 0x0001E8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0001F0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_SwitchEnum_CmpSuccess_1) == 0x000208, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x000210, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000220, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetPlayerController_ReturnValue) == 0x000238, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000240, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetReportComponent_ReturnValue) == 0x000250, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetReportComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_TextToString_ReturnValue_2) == 0x000258, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Subtract_IntInt_ReturnValue) == 0x000268, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CustomEvent_bWasSuccessful) == 0x00026C, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CustomEvent_RetCode) == 0x000270, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_MakeStruct_ReportData) == 0x000278, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_MakeStruct_ReportData' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetSBRetMessage_ReturnValue) == 0x0002B0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_8) == 0x0002C0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002D8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetPlayerController_ReturnValue_1) == 0x0002E0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0002E8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_DynamicCast_bSuccess_1) == 0x0002F0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetReportComponent_ReturnValue_1) == 0x0002F8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetReportComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CreateDelegate_OutputDelegate_1) == 0x000300, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetTextFromAsset_ReturnValue_8) == 0x000310, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetTextFromAsset_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000320, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetPlayerController_ReturnValue_2) == 0x000338, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000340, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_DynamicCast_bSuccess_2) == 0x000348, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetReportComponent_ReturnValue_2) == 0x000350, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetReportComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_IntToText_ReturnValue) == 0x000358, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CreateDelegate_OutputDelegate_2) == 0x000370, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetSubstring_ReturnValue) == 0x000380, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000390, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Conv_TextToString_ReturnValue_3) == 0x0003A8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CreateDelegate_OutputDelegate_3) == 0x0003B8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Len_ReturnValue) == 0x0003C8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x0003D0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_PlayAnimation_ReturnValue) == 0x0003D8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_PlayAnimation_ReturnValue_1) == 0x0003E0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_Event_Animation) == 0x0003E8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0003F0, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0003F1, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CustomEvent_InVisibility) == 0x0003F2, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2) == 0x0003F8, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CreateDelegate_OutputDelegate_4) == 0x000408, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000418, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, K2Node_CreateDelegate_OutputDelegate_5) == 0x00041C, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_ExecuteUbergraph_PlayerReport, CallFunc_Not_PreBool_ReturnValue) == 0x00042C, "Member 'PlayerReport_C_ExecuteUbergraph_PlayerReport::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.OnVisibilityChanged_Event_0
// 0x0001 (0x0001 - 0x0000)
struct PlayerReport_C_OnVisibilityChanged_Event_0 final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_OnVisibilityChanged_Event_0) == 0x000001, "Wrong alignment on PlayerReport_C_OnVisibilityChanged_Event_0");
static_assert(sizeof(PlayerReport_C_OnVisibilityChanged_Event_0) == 0x000001, "Wrong size on PlayerReport_C_OnVisibilityChanged_Event_0");
static_assert(offsetof(PlayerReport_C_OnVisibilityChanged_Event_0, InVisibility) == 0x000000, "Member 'PlayerReport_C_OnVisibilityChanged_Event_0::InVisibility' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PlayerReport_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_OnAnimationFinished) == 0x000008, "Wrong alignment on PlayerReport_C_OnAnimationFinished");
static_assert(sizeof(PlayerReport_C_OnAnimationFinished) == 0x000008, "Wrong size on PlayerReport_C_OnAnimationFinished");
static_assert(offsetof(PlayerReport_C_OnAnimationFinished, Animation) == 0x000000, "Member 'PlayerReport_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.OnRequestReportSendDelegate_Event
// 0x0008 (0x0008 - 0x0000)
struct PlayerReport_C_OnRequestReportSendDelegate_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9032[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_OnRequestReportSendDelegate_Event) == 0x000004, "Wrong alignment on PlayerReport_C_OnRequestReportSendDelegate_Event");
static_assert(sizeof(PlayerReport_C_OnRequestReportSendDelegate_Event) == 0x000008, "Wrong size on PlayerReport_C_OnRequestReportSendDelegate_Event");
static_assert(offsetof(PlayerReport_C_OnRequestReportSendDelegate_Event, bWasSuccessful) == 0x000000, "Member 'PlayerReport_C_OnRequestReportSendDelegate_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_OnRequestReportSendDelegate_Event, RetCode) == 0x000004, "Member 'PlayerReport_C_OnRequestReportSendDelegate_Event::RetCode' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.OnCloseReportDialog
// 0x0001 (0x0001 - 0x0000)
struct PlayerReport_C_OnCloseReportDialog final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_OnCloseReportDialog) == 0x000001, "Wrong alignment on PlayerReport_C_OnCloseReportDialog");
static_assert(sizeof(PlayerReport_C_OnCloseReportDialog) == 0x000001, "Wrong size on PlayerReport_C_OnCloseReportDialog");
static_assert(offsetof(PlayerReport_C_OnCloseReportDialog, Result) == 0x000000, "Member 'PlayerReport_C_OnCloseReportDialog::Result' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.OnDecideReportDialog
// 0x0001 (0x0001 - 0x0000)
struct PlayerReport_C_OnDecideReportDialog final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_OnDecideReportDialog) == 0x000001, "Wrong alignment on PlayerReport_C_OnDecideReportDialog");
static_assert(sizeof(PlayerReport_C_OnDecideReportDialog) == 0x000001, "Wrong size on PlayerReport_C_OnDecideReportDialog");
static_assert(offsetof(PlayerReport_C_OnDecideReportDialog, Result) == 0x000000, "Member 'PlayerReport_C_OnDecideReportDialog::Result' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'PlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'PlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.DownLoadFaceImage_Event
// 0x0010 (0x0010 - 0x0000)
struct PlayerReport_C_DownLoadFaceImage_Event final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_DownLoadFaceImage_Event) == 0x000008, "Wrong alignment on PlayerReport_C_DownLoadFaceImage_Event");
static_assert(sizeof(PlayerReport_C_DownLoadFaceImage_Event) == 0x000010, "Wrong size on PlayerReport_C_DownLoadFaceImage_Event");
static_assert(offsetof(PlayerReport_C_DownLoadFaceImage_Event, URL) == 0x000000, "Member 'PlayerReport_C_DownLoadFaceImage_Event::URL' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.Init
// 0x0440 (0x0440 - 0x0000)
struct PlayerReport_C_Init final
{
public:
	struct FPlayerProfileMenuDetailData           TargetPlayerDetailData;                            // 0x0000(0x03F8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x03F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0408(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0420(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_Init) == 0x000008, "Wrong alignment on PlayerReport_C_Init");
static_assert(sizeof(PlayerReport_C_Init) == 0x000440, "Wrong size on PlayerReport_C_Init");
static_assert(offsetof(PlayerReport_C_Init, TargetPlayerDetailData) == 0x000000, "Member 'PlayerReport_C_Init::TargetPlayerDetailData' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Init, CallFunc_GetFaceImageURL_ReturnValue) == 0x0003F8, "Member 'PlayerReport_C_Init::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Init, CallFunc_Conv_StringToText_ReturnValue) == 0x000408, "Member 'PlayerReport_C_Init::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Init, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000420, "Member 'PlayerReport_C_Init::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Init, CallFunc_PlayAnimation_ReturnValue) == 0x000438, "Member 'PlayerReport_C_Init::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.InitCategoryList
// 0x0028 (0x0028 - 0x0000)
struct PlayerReport_C_InitCategoryList final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTextNumFromAsset_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9033[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_InitCategoryList) == 0x000008, "Wrong alignment on PlayerReport_C_InitCategoryList");
static_assert(sizeof(PlayerReport_C_InitCategoryList) == 0x000028, "Wrong size on PlayerReport_C_InitCategoryList");
static_assert(offsetof(PlayerReport_C_InitCategoryList, Temp_int_Variable) == 0x000000, "Member 'PlayerReport_C_InitCategoryList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_InitCategoryList, CallFunc_GetTextNumFromAsset_ReturnValue) == 0x000004, "Member 'PlayerReport_C_InitCategoryList::CallFunc_GetTextNumFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_InitCategoryList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'PlayerReport_C_InitCategoryList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_InitCategoryList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'PlayerReport_C_InitCategoryList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_InitCategoryList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'PlayerReport_C_InitCategoryList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_InitCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'PlayerReport_C_InitCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.Get_multiline_tb_report_input_body_HintText
// 0x0060 (0x0060 - 0x0000)
struct PlayerReport_C_Get_multiline_tb_report_input_body_HintText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(PlayerReport_C_Get_multiline_tb_report_input_body_HintText) == 0x000008, "Wrong alignment on PlayerReport_C_Get_multiline_tb_report_input_body_HintText");
static_assert(sizeof(PlayerReport_C_Get_multiline_tb_report_input_body_HintText) == 0x000060, "Wrong size on PlayerReport_C_Get_multiline_tb_report_input_body_HintText");
static_assert(offsetof(PlayerReport_C_Get_multiline_tb_report_input_body_HintText, ReturnValue) == 0x000000, "Member 'PlayerReport_C_Get_multiline_tb_report_input_body_HintText::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Get_multiline_tb_report_input_body_HintText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'PlayerReport_C_Get_multiline_tb_report_input_body_HintText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Get_multiline_tb_report_input_body_HintText, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000028, "Member 'PlayerReport_C_Get_multiline_tb_report_input_body_HintText::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Get_multiline_tb_report_input_body_HintText, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'PlayerReport_C_Get_multiline_tb_report_input_body_HintText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_Get_multiline_tb_report_input_body_HintText, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'PlayerReport_C_Get_multiline_tb_report_input_body_HintText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.CheckReportMessage
// 0x0040 (0x0040 - 0x0000)
struct PlayerReport_C_CheckReportMessage final
{
public:
	TScriptInterface<class IBI_seqTrack_C>        K2Node_DynamicCast_AsBI_Seq_Track;                 // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9034[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_getText_NewParam1;                        // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9035[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_CheckReportMessage) == 0x000008, "Wrong alignment on PlayerReport_C_CheckReportMessage");
static_assert(sizeof(PlayerReport_C_CheckReportMessage) == 0x000040, "Wrong size on PlayerReport_C_CheckReportMessage");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, K2Node_DynamicCast_AsBI_Seq_Track) == 0x000000, "Member 'PlayerReport_C_CheckReportMessage::K2Node_DynamicCast_AsBI_Seq_Track' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PlayerReport_C_CheckReportMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, CallFunc_getText_NewParam1) == 0x000018, "Member 'PlayerReport_C_CheckReportMessage::CallFunc_getText_NewParam1' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, CallFunc_Len_ReturnValue) == 0x000028, "Member 'PlayerReport_C_CheckReportMessage::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'PlayerReport_C_CheckReportMessage::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002D, "Member 'PlayerReport_C_CheckReportMessage::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00002E, "Member 'PlayerReport_C_CheckReportMessage::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_CheckReportMessage, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'PlayerReport_C_CheckReportMessage::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.UpdateReportConfirmState
// 0x0003 (0x0003 - 0x0000)
struct PlayerReport_C_UpdateReportConfirmState final
{
public:
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerReport_C_UpdateReportConfirmState) == 0x000001, "Wrong alignment on PlayerReport_C_UpdateReportConfirmState");
static_assert(sizeof(PlayerReport_C_UpdateReportConfirmState) == 0x000003, "Wrong size on PlayerReport_C_UpdateReportConfirmState");
static_assert(offsetof(PlayerReport_C_UpdateReportConfirmState, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000000, "Member 'PlayerReport_C_UpdateReportConfirmState::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_UpdateReportConfirmState, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000001, "Member 'PlayerReport_C_UpdateReportConfirmState::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_UpdateReportConfirmState, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000002, "Member 'PlayerReport_C_UpdateReportConfirmState::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_0
// 0x0018 (0x0018 - 0x0000)
struct PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0) == 0x000008, "Wrong alignment on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0");
static_assert(sizeof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0) == 0x000018, "Wrong size on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0, Item) == 0x000000, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_0::ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_1
// 0x0018 (0x0018 - 0x0000)
struct PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1) == 0x000008, "Wrong alignment on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1");
static_assert(sizeof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1) == 0x000018, "Wrong size on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1, Item) == 0x000000, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1::Item' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1, ReturnValue) == 0x000010, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_1::ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_2
// 0x0018 (0x0018 - 0x0000)
struct PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2) == 0x000008, "Wrong alignment on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2");
static_assert(sizeof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2) == 0x000018, "Wrong size on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2, Item) == 0x000000, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2::Item' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2, ReturnValue) == 0x000010, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_2::ReturnValue' has a wrong offset!");

// Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_3
// 0x0038 (0x0038 - 0x0000)
struct PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3) == 0x000008, "Wrong alignment on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3");
static_assert(sizeof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3) == 0x000038, "Wrong size on PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3, Item) == 0x000000, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3::Item' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3, ReturnValue) == 0x000010, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3, CallFunc_Create_ReturnValue) == 0x000018, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'PlayerReport_C_On_sb_cb_category_list_GenerateWidget_3::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

