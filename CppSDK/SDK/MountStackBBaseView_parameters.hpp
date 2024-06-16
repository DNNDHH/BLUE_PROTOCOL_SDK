#pragma once

 

// Package: MountStackBBaseView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MountStackBBaseView.MountStackBBaseView_C.ExecuteUbergraph_MountStackBBaseView
// 0x07A8 (0x07A8 - 0x0000)
struct MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6E8E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_ItemInfo;                       // 0x0018(0x0118)()
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMountButtonView_C*                     CallFunc_Create_ReturnValue;                       // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_UIDs;                           // 0x0140(0x0010)(ReferenceParm)
	bool                                          K2Node_CustomEvent_UseTicket;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E8F[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBUseTicket                     K2Node_CustomEvent_StackBTicket;                   // 0x0154(0x0008)(NoDestructor)
	uint8                                         Pad_6E90[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E91[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStackBUseTicket>             CallFunc_GetTickets_Tickets;                       // 0x0180(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E92[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetMaterialUIDs_UIDs;                     // 0x0198(0x0010)(ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01A8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x01D0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x01F8(0x0028)()
	class UUserWidget*                            CallFunc_GetAppendedView_View;                     // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<struct FOwnItemInfo>& Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0228(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E93[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMountButtonView_C*                     K2Node_DynamicCast_AsMount_Button_View;            // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E94[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetAppendedView_View_1;                   // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E95[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialButtonView_C*                  K2Node_DynamicCast_AsMaterial_Button_View;         // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E96[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialButtonView_C*                  CallFunc_Create_ReturnValue_1;                     // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetAppendedView_View_2;                   // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E97[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMountButtonView_C*                     K2Node_DynamicCast_AsMount_Button_View_1;          // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E98[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectMaterial_C*                      CallFunc_Create_ReturnValue_2;                     // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_OverwriteStackB_ReturnValue;              // 0x02A8(0x0118)()
	int32                                         CallFunc_GetStackBNum_ReturnValue_1;               // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_OverwriteStackB_ReturnValue_1;            // 0x03C8(0x0118)()
	bool                                          CallFunc_ValidAutoStackBStep_ReturnValue;          // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E99[0x3];                                     // 0x04E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_2;            // 0x04E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6E9A[0x4];                                     // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_3;                     // 0x04F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E9B[0x4];                                     // 0x050C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Imagine;                        // 0x0510(0x0118)(ConstParm)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0629(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E9C[0x6];                                     // 0x062A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0630(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E9D[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0648(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E9E[0x7];                                     // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue_1;         // 0x0668(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0671(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E9F[0x2];                                     // 0x0672(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_3;            // 0x0674(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0684(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EA0[0x3];                                     // 0x0685(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0688(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EA1[0x3];                                     // 0x0691(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FOwnItemInfo& ItemInfo)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0694(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x06A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EA2[0x3];                                     // 0x06A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, struct FOwnItemInfo& Imagine, bool bSuccess)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x06A8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x06B8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EA3[0x7];                                     // 0x06C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x06D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x06E0(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x06F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x06FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMountButtonView_C*                     CallFunc_Create_ReturnValue_5;                     // 0x0708(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMountSelect_C*                         CallFunc_Create_ReturnValue_6;                     // 0x0710(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStackBMax_ReturnValue;                  // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EA4[0x3];                                     // 0x0719(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x071C(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x072C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x072D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x072E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x072F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0730(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0740(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0750(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0760(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0770(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0788(0x0018)()
	bool                                          CallFunc_IsStackBMax_ReturnValue_1;                // 0x07A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView) == 0x000008, "Wrong alignment on MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView");
static_assert(sizeof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView) == 0x0007A8, "Wrong size on MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, EntryPoint) == 0x000000, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::EntryPoint' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_ItemInfo) == 0x000018, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_ItemInfo' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue) == 0x000130, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Create_ReturnValue) == 0x000138, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_UIDs) == 0x000140, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_UIDs' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_UseTicket) == 0x000150, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_UseTicket' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_StackBTicket) == 0x000154, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_StackBTicket' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue_1) == 0x000160, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetSBPlayerController_ReturnValue) == 0x000168, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetStackBComponent_ReturnValue) == 0x000178, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetTickets_Tickets) == 0x000180, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetTickets_Tickets' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_1) == 0x000190, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetMaterialUIDs_UIDs) == 0x000198, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetMaterialUIDs_UIDs' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_MakeStruct_SlateColor) == 0x0001A8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_MakeStruct_SlateColor_1) == 0x0001D0, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_MakeStruct_SlateColor_2) == 0x0001F8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetAppendedView_View) == 0x000220, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetAppendedView_View' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_1) == 0x000228, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_2) == 0x000238, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_DynamicCast_AsMount_Button_View) == 0x000240, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_DynamicCast_AsMount_Button_View' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetAppendedView_View_1) == 0x000250, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetAppendedView_View_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_3) == 0x000258, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_DynamicCast_AsMaterial_Button_View) == 0x000260, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_DynamicCast_AsMaterial_Button_View' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_DynamicCast_bSuccess_1) == 0x000268, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Create_ReturnValue_1) == 0x000270, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetAppendedView_View_2) == 0x000278, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetAppendedView_View_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_4) == 0x000280, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_DynamicCast_AsMount_Button_View_1) == 0x000288, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_DynamicCast_AsMount_Button_View_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_DynamicCast_bSuccess_2) == 0x000290, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Create_ReturnValue_2) == 0x000298, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetStackBNum_ReturnValue) == 0x0002A0, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Add_IntInt_ReturnValue) == 0x0002A4, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_OverwriteStackB_ReturnValue) == 0x0002A8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_OverwriteStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetStackBNum_ReturnValue_1) == 0x0003C0, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetStackBNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003C4, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_OverwriteStackB_ReturnValue_1) == 0x0003C8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_OverwriteStackB_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_ValidAutoStackBStep_ReturnValue) == 0x0004E0, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_ValidAutoStackBStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_2) == 0x0004E4, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Create_ReturnValue_3) == 0x0004F8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000500, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_RetCode) == 0x000508, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_Imagine) == 0x000510, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_Imagine' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_bSuccess) == 0x000628, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_bSuccess' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_5) == 0x000629, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetSBRetMessage_ReturnValue) == 0x000630, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000640, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Conv_StringToText_ReturnValue) == 0x000648, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_6) == 0x000660, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetStackBComponent_ReturnValue_1) == 0x000668, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetStackBComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_7) == 0x000670, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_8) == 0x000671, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_3) == 0x000674, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000684, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Create_ReturnValue_4) == 0x000688, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_Result_1) == 0x000690, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_4) == 0x000694, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0006A4, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_5) == 0x0006A8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_6) == 0x0006B8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsValid_ReturnValue_9) == 0x0006C8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue) == 0x0006D0, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0006E0, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_PlaySE_ReturnValue) == 0x0006F8, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_PlaySE_ReturnValue_1) == 0x0006FC, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_PlayAnimationForward_ReturnValue) == 0x000700, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Create_ReturnValue_5) == 0x000708, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Create_ReturnValue_6) == 0x000710, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsStackBMax_ReturnValue) == 0x000718, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_7) == 0x00071C, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CustomEvent_Result) == 0x00072C, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00072D, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00072E, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_BooleanOR_ReturnValue) == 0x00072F, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_8) == 0x000730, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, K2Node_CreateDelegate_OutputDelegate_9) == 0x000740, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000750, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000760, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000770, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000788, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView, CallFunc_IsStackBMax_ReturnValue_1) == 0x0007A0, "Member 'MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView::CallFunc_IsStackBMax_ReturnValue_1' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.OnResultDialogClose
// 0x0001 (0x0001 - 0x0000)
struct MountStackBBaseView_C_OnResultDialogClose final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountStackBBaseView_C_OnResultDialogClose) == 0x000001, "Wrong alignment on MountStackBBaseView_C_OnResultDialogClose");
static_assert(sizeof(MountStackBBaseView_C_OnResultDialogClose) == 0x000001, "Wrong size on MountStackBBaseView_C_OnResultDialogClose");
static_assert(offsetof(MountStackBBaseView_C_OnResultDialogClose, Result) == 0x000000, "Member 'MountStackBBaseView_C_OnResultDialogClose::Result' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.OnCloseDialog
// 0x0001 (0x0001 - 0x0000)
struct MountStackBBaseView_C_OnCloseDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountStackBBaseView_C_OnCloseDialog) == 0x000001, "Wrong alignment on MountStackBBaseView_C_OnCloseDialog");
static_assert(sizeof(MountStackBBaseView_C_OnCloseDialog) == 0x000001, "Wrong size on MountStackBBaseView_C_OnCloseDialog");
static_assert(offsetof(MountStackBBaseView_C_OnCloseDialog, Result) == 0x000000, "Member 'MountStackBBaseView_C_OnCloseDialog::Result' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.OnComplete StackB
// 0x0128 (0x0128 - 0x0000)
struct MountStackBBaseView_C_OnComplete_StackB final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EA5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Imagine;                                           // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bSuccess;                                          // 0x0120(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountStackBBaseView_C_OnComplete_StackB) == 0x000008, "Wrong alignment on MountStackBBaseView_C_OnComplete_StackB");
static_assert(sizeof(MountStackBBaseView_C_OnComplete_StackB) == 0x000128, "Wrong size on MountStackBBaseView_C_OnComplete_StackB");
static_assert(offsetof(MountStackBBaseView_C_OnComplete_StackB, RetCode) == 0x000000, "Member 'MountStackBBaseView_C_OnComplete_StackB::RetCode' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_OnComplete_StackB, Imagine) == 0x000008, "Member 'MountStackBBaseView_C_OnComplete_StackB::Imagine' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_OnComplete_StackB, bSuccess) == 0x000120, "Member 'MountStackBBaseView_C_OnComplete_StackB::bSuccess' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.OnSelectMaterial
// 0x0020 (0x0020 - 0x0000)
struct MountStackBBaseView_C_OnSelectMaterial final
{
public:
	TArray<struct FOwnItemInfo>                   Uids;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Param_UseTicket;                                   // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EA6[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBUseTicket                     StackBTicket;                                      // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(MountStackBBaseView_C_OnSelectMaterial) == 0x000008, "Wrong alignment on MountStackBBaseView_C_OnSelectMaterial");
static_assert(sizeof(MountStackBBaseView_C_OnSelectMaterial) == 0x000020, "Wrong size on MountStackBBaseView_C_OnSelectMaterial");
static_assert(offsetof(MountStackBBaseView_C_OnSelectMaterial, Uids) == 0x000000, "Member 'MountStackBBaseView_C_OnSelectMaterial::Uids' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_OnSelectMaterial, Param_UseTicket) == 0x000010, "Member 'MountStackBBaseView_C_OnSelectMaterial::Param_UseTicket' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_OnSelectMaterial, StackBTicket) == 0x000014, "Member 'MountStackBBaseView_C_OnSelectMaterial::StackBTicket' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.OnSelect Mount
// 0x0118 (0x0118 - 0x0000)
struct MountStackBBaseView_C_OnSelect_Mount final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MountStackBBaseView_C_OnSelect_Mount) == 0x000008, "Wrong alignment on MountStackBBaseView_C_OnSelect_Mount");
static_assert(sizeof(MountStackBBaseView_C_OnSelect_Mount) == 0x000118, "Wrong size on MountStackBBaseView_C_OnSelect_Mount");
static_assert(offsetof(MountStackBBaseView_C_OnSelect_Mount, ItemInfo) == 0x000000, "Member 'MountStackBBaseView_C_OnSelect_Mount::ItemInfo' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.InitializeButtons
// 0x0040 (0x0040 - 0x0000)
struct MountStackBBaseView_C_InitializeButtons final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EA7[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EA8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStackBStepButton_C*>            K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EA9[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackBStepButton_C*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountStackBBaseView_C_InitializeButtons) == 0x000008, "Wrong alignment on MountStackBBaseView_C_InitializeButtons");
static_assert(sizeof(MountStackBBaseView_C_InitializeButtons) == 0x000040, "Wrong size on MountStackBBaseView_C_InitializeButtons");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MountStackBBaseView_C_InitializeButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'MountStackBBaseView_C_InitializeButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'MountStackBBaseView_C_InitializeButtons::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'MountStackBBaseView_C_InitializeButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'MountStackBBaseView_C_InitializeButtons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, K2Node_MakeArray_Array) == 0x000018, "Member 'MountStackBBaseView_C_InitializeButtons::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'MountStackBBaseView_C_InitializeButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, CallFunc_Array_Get_Item) == 0x000030, "Member 'MountStackBBaseView_C_InitializeButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_InitializeButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'MountStackBBaseView_C_InitializeButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.UpdateLiquidMemory
// 0x0048 (0x0048 - 0x0000)
struct MountStackBBaseView_C_UpdateLiquidMemory final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EAA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EAB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue; // 0x0018(0x0028)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountStackBBaseView_C_UpdateLiquidMemory) == 0x000008, "Wrong alignment on MountStackBBaseView_C_UpdateLiquidMemory");
static_assert(sizeof(MountStackBBaseView_C_UpdateLiquidMemory) == 0x000048, "Wrong size on MountStackBBaseView_C_UpdateLiquidMemory");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, Temp_bool_Variable) == 0x000002, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, CallFunc_GetNetworkDataCache_IsValid) == 0x000003, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists) == 0x000010, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue) == 0x000018, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateLiquidMemory, K2Node_Select_Default) == 0x000041, "Member 'MountStackBBaseView_C_UpdateLiquidMemory::K2Node_Select_Default' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.UpdateStep
// 0x0018 (0x0018 - 0x0000)
struct MountStackBBaseView_C_UpdateStep final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EAC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountStackBBaseView_C_UpdateStep) == 0x000008, "Wrong alignment on MountStackBBaseView_C_UpdateStep");
static_assert(sizeof(MountStackBBaseView_C_UpdateStep) == 0x000018, "Wrong size on MountStackBBaseView_C_UpdateStep");
static_assert(offsetof(MountStackBBaseView_C_UpdateStep, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'MountStackBBaseView_C_UpdateStep::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateStep, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'MountStackBBaseView_C_UpdateStep::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateStep, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MountStackBBaseView_C_UpdateStep::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateStep, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'MountStackBBaseView_C_UpdateStep::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateStep, Temp_bool_Variable) == 0x000011, "Member 'MountStackBBaseView_C_UpdateStep::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateStep, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'MountStackBBaseView_C_UpdateStep::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_UpdateStep, K2Node_Select_Default) == 0x000013, "Member 'MountStackBBaseView_C_UpdateStep::K2Node_Select_Default' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterStep1
// 0x0018 (0x0018 - 0x0000)
struct MountStackBBaseView_C_RewindResultAfterStep1 final
{
public:
	class UUserWidget*                            CallFunc_GetAppendedView_View;                     // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMountButtonView_C*                     K2Node_DynamicCast_AsMount_Button_View;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountStackBBaseView_C_RewindResultAfterStep1) == 0x000008, "Wrong alignment on MountStackBBaseView_C_RewindResultAfterStep1");
static_assert(sizeof(MountStackBBaseView_C_RewindResultAfterStep1) == 0x000018, "Wrong size on MountStackBBaseView_C_RewindResultAfterStep1");
static_assert(offsetof(MountStackBBaseView_C_RewindResultAfterStep1, CallFunc_GetAppendedView_View) == 0x000000, "Member 'MountStackBBaseView_C_RewindResultAfterStep1::CallFunc_GetAppendedView_View' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_RewindResultAfterStep1, K2Node_DynamicCast_AsMount_Button_View) == 0x000008, "Member 'MountStackBBaseView_C_RewindResultAfterStep1::K2Node_DynamicCast_AsMount_Button_View' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_RewindResultAfterStep1, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'MountStackBBaseView_C_RewindResultAfterStep1::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterBeginStep
// 0x0118 (0x0118 - 0x0000)
struct MountStackBBaseView_C_RewindResultAfterBeginStep final
{
public:
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0000(0x0118)()
};
static_assert(alignof(MountStackBBaseView_C_RewindResultAfterBeginStep) == 0x000008, "Wrong alignment on MountStackBBaseView_C_RewindResultAfterBeginStep");
static_assert(sizeof(MountStackBBaseView_C_RewindResultAfterBeginStep) == 0x000118, "Wrong size on MountStackBBaseView_C_RewindResultAfterBeginStep");
static_assert(offsetof(MountStackBBaseView_C_RewindResultAfterBeginStep, K2Node_MakeStruct_OwnItemInfo) == 0x000000, "Member 'MountStackBBaseView_C_RewindResultAfterBeginStep::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.GetTickets
// 0x0028 (0x0028 - 0x0000)
struct MountStackBBaseView_C_GetTickets final
{
public:
	TArray<struct FSBStackBUseTicket>             Tickets;                                           // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FSBStackBUseTicket>             TicketData;                                        // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountStackBBaseView_C_GetTickets) == 0x000008, "Wrong alignment on MountStackBBaseView_C_GetTickets");
static_assert(sizeof(MountStackBBaseView_C_GetTickets) == 0x000028, "Wrong size on MountStackBBaseView_C_GetTickets");
static_assert(offsetof(MountStackBBaseView_C_GetTickets, Tickets) == 0x000000, "Member 'MountStackBBaseView_C_GetTickets::Tickets' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetTickets, TicketData) == 0x000010, "Member 'MountStackBBaseView_C_GetTickets::TicketData' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetTickets, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'MountStackBBaseView_C_GetTickets::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetTickets, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'MountStackBBaseView_C_GetTickets::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MountStackBBaseView.MountStackBBaseView_C.GetMaterialUIDs
// 0x0150 (0x0150 - 0x0000)
struct MountStackBBaseView_C_GetMaterialUIDs final
{
public:
	TArray<class FString>                         Uids;                                              // 0x0000(0x0010)(Parm, OutParm)
	TArray<class FString>                         LocalUIDs;                                         // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0030(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EAD[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MountStackBBaseView_C_GetMaterialUIDs) == 0x000008, "Wrong alignment on MountStackBBaseView_C_GetMaterialUIDs");
static_assert(sizeof(MountStackBBaseView_C_GetMaterialUIDs) == 0x000150, "Wrong size on MountStackBBaseView_C_GetMaterialUIDs");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, Uids) == 0x000000, "Member 'MountStackBBaseView_C_GetMaterialUIDs::Uids' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, LocalUIDs) == 0x000010, "Member 'MountStackBBaseView_C_GetMaterialUIDs::LocalUIDs' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, Temp_int_Array_Index_Variable) == 0x000020, "Member 'MountStackBBaseView_C_GetMaterialUIDs::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'MountStackBBaseView_C_GetMaterialUIDs::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MountStackBBaseView_C_GetMaterialUIDs::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'MountStackBBaseView_C_GetMaterialUIDs::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, CallFunc_Array_Get_Item) == 0x000030, "Member 'MountStackBBaseView_C_GetMaterialUIDs::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, CallFunc_Less_IntInt_ReturnValue) == 0x000148, "Member 'MountStackBBaseView_C_GetMaterialUIDs::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBBaseView_C_GetMaterialUIDs, CallFunc_Array_Add_ReturnValue) == 0x00014C, "Member 'MountStackBBaseView_C_GetMaterialUIDs::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

