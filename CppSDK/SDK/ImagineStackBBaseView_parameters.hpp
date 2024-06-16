#pragma once

 

// Package: ImagineStackBBaseView

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.ExecuteUbergraph_ImagineStackBBaseView
// 0x0740 (0x0740 - 0x0000)
struct ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetAppendedView_View;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_563E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineButtonView_C*                   K2Node_DynamicCast_AsImagine_Button_View;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_563F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FOwnItemInfo& SelectedPerk)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5640[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   K2Node_CustomEvent_UIDs;                           // 0x0048(0x0010)(ReferenceParm)
	bool                                          K2Node_CustomEvent_UseTicket;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5641[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBUseTicket                     K2Node_CustomEvent_StackBTicket;                   // 0x005C(0x0008)(NoDestructor)
	uint8                                         Pad_5642[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetAppendedView_View_1;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5643[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialButtonView_C*                  K2Node_DynamicCast_AsMaterial_Button_View;         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5644[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineInheritSelect_C*                CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           K2Node_CustomEvent_SelectedPerk;                   // 0x0090(0x0118)()
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetAppendedView_View_2;                   // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5645[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineAbilityButtonView_C*            K2Node_DynamicCast_AsImagine_Ability_Button_View;  // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5646[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x01CC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5647[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialButtonView_C*                  CallFunc_Create_ReturnValue_1;                     // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Ticket;                         // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5648[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetAppendedView_View_3;                   // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5649[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTicketSelectButtonView_C*              K2Node_DynamicCast_AsTicket_Select_Button_View;    // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_564A[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineAbilityButtonView_C*            CallFunc_Create_ReturnValue_2;                     // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_564B[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<struct FOwnItemInfo>& Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_564C[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_564D[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_GetMaterialUIDs_UIDs;                     // 0x0248(0x0010)(ReferenceParm)
	TArray<struct FSBStackBUseTicket>             CallFunc_GenerateTicketData_Tickets;               // 0x0258(0x0010)(ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0268(0x0028)()
	struct FOwnItemInfo                           K2Node_CustomEvent_ItemInfo;                       // 0x0290(0x0118)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x03A8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x03B8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x03C8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x03D8(0x0010)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x03E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidAutoStackBStep_ReturnValue;          // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidAutoStackBStep_ReturnValue_1;        // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidAutoStackBStep_ReturnValue_2;        // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_564E[0x5];                                     // 0x03F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectMaterial_C*                      CallFunc_Create_ReturnValue_3;                     // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0409(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_564F[0x6];                                     // 0x040A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue_1;         // 0x0410(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5650[0x4];                                     // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Imagine;                        // 0x0420(0x0118)(ConstParm)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x053A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStackBMax_ReturnValue;                  // 0x053B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5651[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0540(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5652[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0558(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5653[0x7];                                     // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagineButtonView_C*                   CallFunc_Create_ReturnValue_4;                     // 0x0578(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5654[0x3];                                     // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0584(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0594(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0595(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0596(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0597(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0598(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x05A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x05B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_9;            // 0x05C8(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_5;                     // 0x05D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x05E0(0x0018)()
	class UUserWidget*                            CallFunc_GetAppendedView_View_4;                   // 0x05F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImagineButtonView_C*                   K2Node_DynamicCast_AsImagine_Button_View_1;        // 0x0600(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5655[0x3];                                     // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FOwnItemInfo& ItemInfo)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x060C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_11;           // 0x061C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5656[0x4];                                     // 0x062C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0630(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0658(0x0028)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_6;                     // 0x0680(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, struct FOwnItemInfo& Imagine, bool bSuccess)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0688(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x06A0(0x0010)(ZeroConstructor, NoDestructor)
	class UImagineSelect_C*                       CallFunc_Create_ReturnValue_7;                     // 0x06B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5657[0x7];                                     // 0x06B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_2;           // 0x06C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable;                                // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  Temp_byte_Variable_1;                              // 0x06C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable_2;                              // 0x06CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x06CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x06CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFilter_Type                                  K2Node_Select_Default;                             // 0x06CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5658[0x2];                                     // 0x06CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x06D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;           // 0x06E0(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x06F0(0x0018)()
	class UTicketSelectButtonView_C*              CallFunc_Create_ReturnValue_8;                     // 0x0708(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Ticket)>                 K2Node_CreateDelegate_OutputDelegate_15;           // 0x0710(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0724(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x0728(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5659[0x4];                                     // 0x072C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTicketSelectImagine_C*                 CallFunc_Create_ReturnValue_9;                     // 0x0730(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_3;           // 0x0738(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView");
static_assert(sizeof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView) == 0x000740, "Wrong size on ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, EntryPoint) == 0x000000, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetAppendedView_View) == 0x000008, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetAppendedView_View' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_AsImagine_Button_View) == 0x000018, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_AsImagine_Button_View' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_UIDs) == 0x000048, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_UIDs' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_UseTicket) == 0x000058, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_UseTicket' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_StackBTicket) == 0x00005C, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_StackBTicket' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetAppendedView_View_1) == 0x000068, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetAppendedView_View_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_AsMaterial_Button_View) == 0x000078, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_AsMaterial_Button_View' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue) == 0x000088, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_SelectedPerk) == 0x000090, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_SelectedPerk' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue) == 0x0001A8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetAppendedView_View_2) == 0x0001B0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetAppendedView_View_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_2) == 0x0001B8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_AsImagine_Ability_Button_View) == 0x0001C0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_AsImagine_Ability_Button_View' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_bSuccess_2) == 0x0001C8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001CC, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_1) == 0x0001E0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_Ticket) == 0x0001E8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_Ticket' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetAppendedView_View_3) == 0x0001F0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetAppendedView_View_3' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_3) == 0x0001F8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_AsTicket_Select_Button_View) == 0x000200, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_AsTicket_Select_Button_View' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_bSuccess_3) == 0x000208, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_2) == 0x000210, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetSBPlayerController_ReturnValue) == 0x000218, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_4) == 0x000220, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_3) == 0x000224, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetStackBComponent_ReturnValue) == 0x000238, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_5) == 0x000240, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetMaterialUIDs_UIDs) == 0x000248, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetMaterialUIDs_UIDs' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GenerateTicketData_Tickets) == 0x000258, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GenerateTicketData_Tickets' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_MakeStruct_SlateColor) == 0x000268, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_ItemInfo) == 0x000290, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_ItemInfo' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003A8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_5) == 0x0003B8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_6) == 0x0003C8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_7) == 0x0003D8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue_1) == 0x0003E8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_ValidAutoStackBStep_ReturnValue) == 0x0003F0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_ValidAutoStackBStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_ValidAutoStackBStep_ReturnValue_1) == 0x0003F1, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_ValidAutoStackBStep_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_ValidAutoStackBStep_ReturnValue_2) == 0x0003F2, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_ValidAutoStackBStep_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_3) == 0x0003F8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000400, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_6) == 0x000408, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_7) == 0x000409, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetStackBComponent_ReturnValue_1) == 0x000410, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetStackBComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_RetCode) == 0x000418, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_Imagine) == 0x000420, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_Imagine' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_bSuccess) == 0x000538, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_bSuccess' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_8) == 0x000539, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Not_PreBool_ReturnValue) == 0x00053A, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsStackBMax_ReturnValue) == 0x00053B, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetSBRetMessage_ReturnValue) == 0x000540, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000550, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Conv_StringToText_ReturnValue) == 0x000558, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_9) == 0x000570, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_4) == 0x000578, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_10) == 0x000580, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_8) == 0x000584, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_Result_1) == 0x000594, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000595, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000596, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_IsValid_ReturnValue_11) == 0x000597, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue) == 0x000598, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0005A8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0005B8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_9) == 0x0005C8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_5) == 0x0005D8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0005E0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetAppendedView_View_4) == 0x0005F8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetAppendedView_View_4' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_AsImagine_Button_View_1) == 0x000600, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_AsImagine_Button_View_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_DynamicCast_bSuccess_4) == 0x000608, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_10) == 0x00060C, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_11) == 0x00061C, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_MakeStruct_SlateColor_1) == 0x000630, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_MakeStruct_SlateColor_2) == 0x000658, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_6) == 0x000680, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_12) == 0x000688, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_PlayAnimationForward_ReturnValue) == 0x000698, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_13) == 0x0006A0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_7) == 0x0006B0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0006B8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue_2) == 0x0006C0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, Temp_byte_Variable) == 0x0006C8, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, Temp_byte_Variable_1) == 0x0006C9, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, Temp_byte_Variable_2) == 0x0006CA, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CustomEvent_Result) == 0x0006CB, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0006CC, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_Select_Default) == 0x0006CD, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x0006D0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_14) == 0x0006E0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0006F0, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_8) == 0x000708, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, K2Node_CreateDelegate_OutputDelegate_15) == 0x000710, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_PlaySE_ReturnValue) == 0x000720, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_PlaySE_ReturnValue_1) == 0x000724, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_PlaySE_ReturnValue_2) == 0x000728, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_Create_ReturnValue_9) == 0x000730, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView, CallFunc_AddChildToCanvas_ReturnValue_3) == 0x000738, "Member 'ImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView::CallFunc_AddChildToCanvas_ReturnValue_3' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseEndDialog
// 0x0001 (0x0001 - 0x0000)
struct ImagineStackBBaseView_C_OnCloseEndDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_OnCloseEndDialog) == 0x000001, "Wrong alignment on ImagineStackBBaseView_C_OnCloseEndDialog");
static_assert(sizeof(ImagineStackBBaseView_C_OnCloseEndDialog) == 0x000001, "Wrong size on ImagineStackBBaseView_C_OnCloseEndDialog");
static_assert(offsetof(ImagineStackBBaseView_C_OnCloseEndDialog, Result) == 0x000000, "Member 'ImagineStackBBaseView_C_OnCloseEndDialog::Result' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnDialog Closed
// 0x0001 (0x0001 - 0x0000)
struct ImagineStackBBaseView_C_OnDialog_Closed final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_OnDialog_Closed) == 0x000001, "Wrong alignment on ImagineStackBBaseView_C_OnDialog_Closed");
static_assert(sizeof(ImagineStackBBaseView_C_OnDialog_Closed) == 0x000001, "Wrong size on ImagineStackBBaseView_C_OnDialog_Closed");
static_assert(offsetof(ImagineStackBBaseView_C_OnDialog_Closed, Result) == 0x000000, "Member 'ImagineStackBBaseView_C_OnDialog_Closed::Result' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnComplete Imagine Stack B
// 0x0128 (0x0128 - 0x0000)
struct ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Imagine;                                           // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bSuccess;                                          // 0x0120(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B");
static_assert(sizeof(ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B) == 0x000128, "Wrong size on ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B");
static_assert(offsetof(ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B, RetCode) == 0x000000, "Member 'ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B::RetCode' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B, Imagine) == 0x000008, "Member 'ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B::Imagine' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B, bSuccess) == 0x000120, "Member 'ImagineStackBBaseView_C_OnComplete_Imagine_Stack_B::bSuccess' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnTicketSelected
// 0x0004 (0x0004 - 0x0000)
struct ImagineStackBBaseView_C_OnTicketSelected final
{
public:
	int32                                         Ticket;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_OnTicketSelected) == 0x000004, "Wrong alignment on ImagineStackBBaseView_C_OnTicketSelected");
static_assert(sizeof(ImagineStackBBaseView_C_OnTicketSelected) == 0x000004, "Wrong size on ImagineStackBBaseView_C_OnTicketSelected");
static_assert(offsetof(ImagineStackBBaseView_C_OnTicketSelected, Ticket) == 0x000000, "Member 'ImagineStackBBaseView_C_OnTicketSelected::Ticket' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectedPerk
// 0x0118 (0x0118 - 0x0000)
struct ImagineStackBBaseView_C_OnSelectedPerk final
{
public:
	struct FOwnItemInfo                           SelectedPerk;                                      // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineStackBBaseView_C_OnSelectedPerk) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_OnSelectedPerk");
static_assert(sizeof(ImagineStackBBaseView_C_OnSelectedPerk) == 0x000118, "Wrong size on ImagineStackBBaseView_C_OnSelectedPerk");
static_assert(offsetof(ImagineStackBBaseView_C_OnSelectedPerk, SelectedPerk) == 0x000000, "Member 'ImagineStackBBaseView_C_OnSelectedPerk::SelectedPerk' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.onSelectedMaterials
// 0x0020 (0x0020 - 0x0000)
struct ImagineStackBBaseView_C_OnSelectedMaterials final
{
public:
	TArray<struct FOwnItemInfo>                   Uids;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          UseTicket;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_565B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBUseTicket                     StackBTicket;                                      // 0x0014(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(ImagineStackBBaseView_C_OnSelectedMaterials) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_OnSelectedMaterials");
static_assert(sizeof(ImagineStackBBaseView_C_OnSelectedMaterials) == 0x000020, "Wrong size on ImagineStackBBaseView_C_OnSelectedMaterials");
static_assert(offsetof(ImagineStackBBaseView_C_OnSelectedMaterials, Uids) == 0x000000, "Member 'ImagineStackBBaseView_C_OnSelectedMaterials::Uids' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_OnSelectedMaterials, UseTicket) == 0x000010, "Member 'ImagineStackBBaseView_C_OnSelectedMaterials::UseTicket' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_OnSelectedMaterials, StackBTicket) == 0x000014, "Member 'ImagineStackBBaseView_C_OnSelectedMaterials::StackBTicket' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectTargetImagine
// 0x0118 (0x0118 - 0x0000)
struct ImagineStackBBaseView_C_OnSelectTargetImagine final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineStackBBaseView_C_OnSelectTargetImagine) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_OnSelectTargetImagine");
static_assert(sizeof(ImagineStackBBaseView_C_OnSelectTargetImagine) == 0x000118, "Wrong size on ImagineStackBBaseView_C_OnSelectTargetImagine");
static_assert(offsetof(ImagineStackBBaseView_C_OnSelectTargetImagine, ItemInfo) == 0x000000, "Member 'ImagineStackBBaseView_C_OnSelectTargetImagine::ItemInfo' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeButtons
// 0x0038 (0x0038 - 0x0000)
struct ImagineStackBBaseView_C_InitializeButtons final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStackBStepButton_C*>            K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565C[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackBStepButton_C*                    CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineStackBBaseView_C_InitializeButtons) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_InitializeButtons");
static_assert(sizeof(ImagineStackBBaseView_C_InitializeButtons) == 0x000038, "Wrong size on ImagineStackBBaseView_C_InitializeButtons");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ImagineStackBBaseView_C_InitializeButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ImagineStackBBaseView_C_InitializeButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ImagineStackBBaseView_C_InitializeButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'ImagineStackBBaseView_C_InitializeButtons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, K2Node_MakeArray_Array) == 0x000010, "Member 'ImagineStackBBaseView_C_InitializeButtons::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ImagineStackBBaseView_C_InitializeButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, CallFunc_Array_Get_Item) == 0x000028, "Member 'ImagineStackBBaseView_C_InitializeButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ImagineStackBBaseView_C_InitializeButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeStep
// 0x0118 (0x0118 - 0x0000)
struct ImagineStackBBaseView_C_InitializeStep final
{
public:
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0000(0x0118)()
};
static_assert(alignof(ImagineStackBBaseView_C_InitializeStep) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_InitializeStep");
static_assert(sizeof(ImagineStackBBaseView_C_InitializeStep) == 0x000118, "Wrong size on ImagineStackBBaseView_C_InitializeStep");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeStep, K2Node_MakeStruct_OwnItemInfo) == 0x000000, "Member 'ImagineStackBBaseView_C_InitializeStep::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateExecuteView
// 0x0018 (0x0018 - 0x0000)
struct ImagineStackBBaseView_C_UpdateExecuteView final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_UpdateExecuteView) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_UpdateExecuteView");
static_assert(sizeof(ImagineStackBBaseView_C_UpdateExecuteView) == 0x000018, "Wrong size on ImagineStackBBaseView_C_UpdateExecuteView");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateExecuteView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'ImagineStackBBaseView_C_UpdateExecuteView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateExecuteView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'ImagineStackBBaseView_C_UpdateExecuteView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateExecuteView, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ImagineStackBBaseView_C_UpdateExecuteView::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateExecuteView, Temp_bool_Variable) == 0x000010, "Member 'ImagineStackBBaseView_C_UpdateExecuteView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateExecuteView, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'ImagineStackBBaseView_C_UpdateExecuteView::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateExecuteView, K2Node_Select_Default) == 0x000012, "Member 'ImagineStackBBaseView_C_UpdateExecuteView::K2Node_Select_Default' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateLiquidMemoryView
// 0x0018 (0x0018 - 0x0000)
struct ImagineStackBBaseView_C_UpdateLiquidMemoryView final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_565E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_UpdateLiquidMemoryView) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_UpdateLiquidMemoryView");
static_assert(sizeof(ImagineStackBBaseView_C_UpdateLiquidMemoryView) == 0x000018, "Wrong size on ImagineStackBBaseView_C_UpdateLiquidMemoryView");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateLiquidMemoryView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'ImagineStackBBaseView_C_UpdateLiquidMemoryView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateLiquidMemoryView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'ImagineStackBBaseView_C_UpdateLiquidMemoryView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateLiquidMemoryView, Temp_bool_Variable) == 0x000002, "Member 'ImagineStackBBaseView_C_UpdateLiquidMemoryView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateLiquidMemoryView, CallFunc_GetNetworkDataCache_IsValid) == 0x000003, "Member 'ImagineStackBBaseView_C_UpdateLiquidMemoryView::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateLiquidMemoryView, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'ImagineStackBBaseView_C_UpdateLiquidMemoryView::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateLiquidMemoryView, CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue) == 0x000010, "Member 'ImagineStackBBaseView_C_UpdateLiquidMemoryView::CallFunc_IsLiquidMemoryEfficacyActivated_CategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateLiquidMemoryView, K2Node_Select_Default) == 0x000011, "Member 'ImagineStackBBaseView_C_UpdateLiquidMemoryView::K2Node_Select_Default' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateRewardView
// 0x0128 (0x0128 - 0x0000)
struct ImagineStackBBaseView_C_UpdateRewardView final
{
public:
	ESBImagineCategoryType                        Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565F[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0008(0x0118)()
	ESBRewardBoostStackBItemType                  K2Node_Select_Default;                             // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_UpdateRewardView) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_UpdateRewardView");
static_assert(sizeof(ImagineStackBBaseView_C_UpdateRewardView) == 0x000128, "Wrong size on ImagineStackBBaseView_C_UpdateRewardView");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateRewardView, Temp_byte_Variable) == 0x000000, "Member 'ImagineStackBBaseView_C_UpdateRewardView::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateRewardView, Temp_byte_Variable_1) == 0x000001, "Member 'ImagineStackBBaseView_C_UpdateRewardView::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateRewardView, Temp_byte_Variable_2) == 0x000002, "Member 'ImagineStackBBaseView_C_UpdateRewardView::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateRewardView, K2Node_MakeStruct_OwnItemInfo) == 0x000008, "Member 'ImagineStackBBaseView_C_UpdateRewardView::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_UpdateRewardView, K2Node_Select_Default) == 0x000120, "Member 'ImagineStackBBaseView_C_UpdateRewardView::K2Node_Select_Default' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeHeader
// 0x0010 (0x0010 - 0x0000)
struct ImagineStackBBaseView_C_InitializeHeader final
{
public:
	ESBImagineCategoryType                        Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5660[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_InitializeHeader) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_InitializeHeader");
static_assert(sizeof(ImagineStackBBaseView_C_InitializeHeader) == 0x000010, "Wrong size on ImagineStackBBaseView_C_InitializeHeader");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeHeader, Temp_byte_Variable) == 0x000000, "Member 'ImagineStackBBaseView_C_InitializeHeader::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_InitializeHeader, K2Node_Select_Default) == 0x000008, "Member 'ImagineStackBBaseView_C_InitializeHeader::K2Node_Select_Default' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.ResetStepSendData
// 0x0120 (0x0120 - 0x0000)
struct ImagineStackBBaseView_C_ResetStepSendData final
{
public:
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0000(0x0118)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineStackBBaseView_C_ResetStepSendData) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_ResetStepSendData");
static_assert(sizeof(ImagineStackBBaseView_C_ResetStepSendData) == 0x000120, "Wrong size on ImagineStackBBaseView_C_ResetStepSendData");
static_assert(offsetof(ImagineStackBBaseView_C_ResetStepSendData, K2Node_MakeStruct_OwnItemInfo) == 0x000000, "Member 'ImagineStackBBaseView_C_ResetStepSendData::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_ResetStepSendData, K2Node_SwitchEnum_CmpSuccess) == 0x000118, "Member 'ImagineStackBBaseView_C_ResetStepSendData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.GetMaterialUIDs
// 0x0150 (0x0150 - 0x0000)
struct ImagineStackBBaseView_C_GetMaterialUIDs final
{
public:
	TArray<class FString>                         Uids;                                              // 0x0000(0x0010)(Parm, OutParm)
	TArray<class FString>                         LocalUID;                                          // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0030(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5661[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_GetMaterialUIDs) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_GetMaterialUIDs");
static_assert(sizeof(ImagineStackBBaseView_C_GetMaterialUIDs) == 0x000150, "Wrong size on ImagineStackBBaseView_C_GetMaterialUIDs");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, Uids) == 0x000000, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::Uids' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, LocalUID) == 0x000010, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::LocalUID' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, Temp_int_Array_Index_Variable) == 0x000020, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, CallFunc_Array_Get_Item) == 0x000030, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, CallFunc_Less_IntInt_ReturnValue) == 0x000148, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GetMaterialUIDs, CallFunc_Array_Add_ReturnValue) == 0x00014C, "Member 'ImagineStackBBaseView_C_GetMaterialUIDs::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function ImagineStackBBaseView.ImagineStackBBaseView_C.GenerateTicketData
// 0x0068 (0x0068 - 0x0000)
struct ImagineStackBBaseView_C_GenerateTicketData final
{
public:
	TArray<struct FSBStackBUseTicket>             Tickets;                                           // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FSBStackBUseTicket>             LocalTicketData;                                   // 0x0010(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5662[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5663[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBTicketData                    CallFunc_FindTicketData_ReturnValue;               // 0x003C(0x001C)(ConstParm, NoDestructor)
	struct FSBStackBUseTicket                     K2Node_MakeStruct_SBStackBUseTicket;               // 0x0058(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBBaseView_C_GenerateTicketData) == 0x000008, "Wrong alignment on ImagineStackBBaseView_C_GenerateTicketData");
static_assert(sizeof(ImagineStackBBaseView_C_GenerateTicketData) == 0x000068, "Wrong size on ImagineStackBBaseView_C_GenerateTicketData");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, Tickets) == 0x000000, "Member 'ImagineStackBBaseView_C_GenerateTicketData::Tickets' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, LocalTicketData) == 0x000010, "Member 'ImagineStackBBaseView_C_GenerateTicketData::LocalTicketData' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000020, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_GetStackBComponent_ReturnValue) == 0x000030, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_FindTicketData_ReturnValue) == 0x00003C, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_FindTicketData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, K2Node_MakeStruct_SBStackBUseTicket) == 0x000058, "Member 'ImagineStackBBaseView_C_GenerateTicketData::K2Node_MakeStruct_SBStackBUseTicket' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBBaseView_C_GenerateTicketData, CallFunc_Array_Add_ReturnValue_1) == 0x000064, "Member 'ImagineStackBBaseView_C_GenerateTicketData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

}

