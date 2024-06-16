#pragma once

 

// Package: GashaShopSubWindow

#include "Basic.hpp"

#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function GashaShopSubWindow.GashaShopSubWindow_C.OnExecution__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct GashaShopSubWindow_C_OnExecution__DelegateSignature final
{
public:
	struct FSBGashaTickets                        TicketData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         TicketPlayCount;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_C_OnExecution__DelegateSignature) == 0x000004, "Wrong alignment on GashaShopSubWindow_C_OnExecution__DelegateSignature");
static_assert(sizeof(GashaShopSubWindow_C_OnExecution__DelegateSignature) == 0x00000C, "Wrong size on GashaShopSubWindow_C_OnExecution__DelegateSignature");
static_assert(offsetof(GashaShopSubWindow_C_OnExecution__DelegateSignature, TicketData) == 0x000000, "Member 'GashaShopSubWindow_C_OnExecution__DelegateSignature::TicketData' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_OnExecution__DelegateSignature, TicketPlayCount) == 0x000008, "Member 'GashaShopSubWindow_C_OnExecution__DelegateSignature::TicketPlayCount' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.OnChangeSkipBtn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature final
{
public:
	bool                                          Param_IsSkip;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature) == 0x000001, "Wrong alignment on GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature");
static_assert(sizeof(GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature) == 0x000001, "Wrong size on GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature");
static_assert(offsetof(GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature, Param_IsSkip) == 0x000000, "Member 'GashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature::Param_IsSkip' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.ExecuteUbergraph_GashaShopSubWindow
// 0x0358 (0x0358 - 0x0000)
struct GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9109[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaInfo                           K2Node_ComponentBoundEvent_GashaInfo;              // 0x0008(0x01C8)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_910A[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepMax_ReturnValue;       // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepNow_ReturnValue;       // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentStepUp_ReturnValue;              // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_910B[0x5];                                     // 0x0213(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0230(0x0018)()
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_910C[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_910D[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0268(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0290(0x0028)()
	struct FSBGashaTickets                        K2Node_CustomEvent_TicketData;                     // 0x02B8(0x0008)(NoDestructor)
	int32                                         K2Node_CustomEvent_InAmount;                       // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x02C4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_910E[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x02D8(0x0010)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_910F[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9110[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9111[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9112[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_2;                 // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow) == 0x000008, "Wrong alignment on GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow");
static_assert(sizeof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow) == 0x000358, "Wrong size on GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, EntryPoint) == 0x000000, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_ComponentBoundEvent_GashaInfo) == 0x000008, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_ComponentBoundEvent_GashaInfo' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetPlayerController_ReturnValue) == 0x0001D0, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001D8, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetGashaComponent_ReturnValue) == 0x000200, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetCurrentGashaStepMax_ReturnValue) == 0x000208, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetCurrentGashaStepMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetCurrentGashaStepNow_ReturnValue) == 0x00020C, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetCurrentGashaStepNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_IsCurrentStepUp_ReturnValue) == 0x000210, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_IsCurrentStepUp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000211, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_SwitchInteger_CmpSuccess) == 0x000212, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000218, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000220, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000230, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000248, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_SwitchEnum_CmpSuccess) == 0x000250, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x000258, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000260, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_MakeStruct_SlateColor) == 0x000268, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_MakeStruct_SlateColor_1) == 0x000290, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_CustomEvent_TicketData) == 0x0002B8, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_CustomEvent_TicketData' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_CustomEvent_InAmount) == 0x0002C0, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_CustomEvent_InAmount' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_CreateDelegate_OutputDelegate) == 0x0002C4, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_SwitchInteger_CmpSuccess_1) == 0x0002D4, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x0002D8, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0002E8, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_PlaySE_ReturnValue) == 0x0002F0, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, Temp_bool_Variable) == 0x0002F4, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetGameConfigValueString_OutValue) == 0x0002F8, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000308, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_Concat_StrStr_ReturnValue) == 0x000310, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_Select_Default) == 0x000320, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000328, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000338, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000340, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow, K2Node_SwitchInteger_CmpSuccess_2) == 0x000350, "Member 'GashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow::K2Node_SwitchInteger_CmpSuccess_2' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicketAnimFinished
// 0x000C (0x000C - 0x0000)
struct GashaShopSubWindow_C_SelectTicketAnimFinished final
{
public:
	struct FSBGashaTickets                        TicketData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         InAmount;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_C_SelectTicketAnimFinished) == 0x000004, "Wrong alignment on GashaShopSubWindow_C_SelectTicketAnimFinished");
static_assert(sizeof(GashaShopSubWindow_C_SelectTicketAnimFinished) == 0x00000C, "Wrong size on GashaShopSubWindow_C_SelectTicketAnimFinished");
static_assert(offsetof(GashaShopSubWindow_C_SelectTicketAnimFinished, TicketData) == 0x000000, "Member 'GashaShopSubWindow_C_SelectTicketAnimFinished::TicketData' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SelectTicketAnimFinished, InAmount) == 0x000008, "Member 'GashaShopSubWindow_C_SelectTicketAnimFinished::InAmount' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature
// 0x01C8 (0x01C8 - 0x0000)
struct GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature final
{
public:
	struct FSBGashaInfo                           Param_GashaInfo;                                   // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature) == 0x000008, "Wrong alignment on GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature");
static_assert(sizeof(GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature) == 0x0001C8, "Wrong size on GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature");
static_assert(offsetof(GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature, Param_GashaInfo) == 0x000000, "Member 'GashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature::Param_GashaInfo' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.Set Info
// 0x0010 (0x0010 - 0x0000)
struct GashaShopSubWindow_C_Set_Info final
{
public:
	TArray<struct FSBGashaReward>                 InRewardList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GashaShopSubWindow_C_Set_Info) == 0x000008, "Wrong alignment on GashaShopSubWindow_C_Set_Info");
static_assert(sizeof(GashaShopSubWindow_C_Set_Info) == 0x000010, "Wrong size on GashaShopSubWindow_C_Set_Info");
static_assert(offsetof(GashaShopSubWindow_C_Set_Info, InRewardList) == 0x000000, "Member 'GashaShopSubWindow_C_Set_Info::InRewardList' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.SetExecutionInfo
// 0x03F0 (0x03F0 - 0x0000)
struct GashaShopSubWindow_C_SetExecutionInfo final
{
public:
	bool                                          IsTickets;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9113[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InTitleName;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBGashaPurchaseType                          Param_PurchaseType;                                // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9114[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Amount;                                            // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9115[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaPrices                         GashaPrice;                                        // 0x0028(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FSBGashaTickets>                GashaTickets;                                      // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InitSkip;                                          // 0x0058(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9116[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Gender;                                            // 0x005C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly;                                          // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          L_PaidOnly;                                        // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9117[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GenderId;                                          // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           ExecutionConfirmTextList;                          // 0x0068(0x0010)(Edit, BlueprintVisible)
	class FString                                 ExecutionConfirmText;                              // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBGashaCurrencyType                          CurrencyType;                                      // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9118[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PurchaseTypeText;                                  // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsLack;                                            // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9119[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_911A[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_911B[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERsDialogPaymentType                          Temp_byte_Variable;                                // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_911C[0x2];                                     // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_911D[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          Temp_byte_Variable_1;                              // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_911E[0x2];                                     // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_911F[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaTickets                        CallFunc_Array_Get_Item;                           // 0x0140(0x0008)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          Temp_byte_Variable_2;                              // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          Temp_byte_Variable_3;                              // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBGashaPurchaseType                          Temp_byte_Variable_4;                              // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9120[0x1];                                     // 0x014F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9121[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9122[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9123[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentGashaStepMax_ReturnValue;       // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepNow_ReturnValue;       // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentStepUp_ReturnValue;              // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9124[0x2];                                     // 0x0186(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9125[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue_1;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepMax_ReturnValue_1;     // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaStepNow_ReturnValue_1;     // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentGashaLapCount_ReturnValue;      // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentStepUp_ReturnValue_1;            // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9126[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x01B8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9127[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array_2;                          // 0x01D0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9128[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x01E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9129[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_912A[0x2];                                     // 0x0206(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0208(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_912B[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_912C[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0233(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_912D[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOwnGashaTicketItem_C*                  CallFunc_Create_ReturnValue;                       // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAmount_OutAmount;                      // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_912E[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0248(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_912F[0x3];                                     // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          K2Node_Select_Default_2;                           // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9130[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0270(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item_2;                         // 0x0298(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9131[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9132[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9133[0x2];                                     // 0x02E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x02E4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9134[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbPaid_ReturnValue;               // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9135[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBPPoint_ReturnValue;                   // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9136[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue_1;             // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9137[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRoseOrbPaid_ReturnValue_1;             // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_5;             // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9138[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_3;                         // 0x032C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9139[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0348(0x0018)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0360(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   Temp_name_Variable_1;                              // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0378(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FSBGashaTickets& TicketData, int32 Amount)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0380(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_913A[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_3;                           // 0x0394(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array_3;                          // 0x03A0(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_4;                         // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x03B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_913B[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x03D0(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GashaShopSubWindow_C_SetExecutionInfo) == 0x000008, "Wrong alignment on GashaShopSubWindow_C_SetExecutionInfo");
static_assert(sizeof(GashaShopSubWindow_C_SetExecutionInfo) == 0x0003F0, "Wrong size on GashaShopSubWindow_C_SetExecutionInfo");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, IsTickets) == 0x000000, "Member 'GashaShopSubWindow_C_SetExecutionInfo::IsTickets' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, InTitleName) == 0x000008, "Member 'GashaShopSubWindow_C_SetExecutionInfo::InTitleName' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Param_PurchaseType) == 0x000018, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Param_PurchaseType' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Amount) == 0x00001C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Amount' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Price) == 0x000020, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Price' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, GashaPrice) == 0x000028, "Member 'GashaShopSubWindow_C_SetExecutionInfo::GashaPrice' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, GashaTickets) == 0x000048, "Member 'GashaShopSubWindow_C_SetExecutionInfo::GashaTickets' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, InitSkip) == 0x000058, "Member 'GashaShopSubWindow_C_SetExecutionInfo::InitSkip' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Gender) == 0x00005C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Gender' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, PaidOnly) == 0x000060, "Member 'GashaShopSubWindow_C_SetExecutionInfo::PaidOnly' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, L_PaidOnly) == 0x000061, "Member 'GashaShopSubWindow_C_SetExecutionInfo::L_PaidOnly' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, GenderId) == 0x000064, "Member 'GashaShopSubWindow_C_SetExecutionInfo::GenderId' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, ExecutionConfirmTextList) == 0x000068, "Member 'GashaShopSubWindow_C_SetExecutionInfo::ExecutionConfirmTextList' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, ExecutionConfirmText) == 0x000078, "Member 'GashaShopSubWindow_C_SetExecutionInfo::ExecutionConfirmText' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CurrencyType) == 0x000088, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CurrencyType' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, PurchaseTypeText) == 0x000090, "Member 'GashaShopSubWindow_C_SetExecutionInfo::PurchaseTypeText' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, IsLack) == 0x0000A0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::IsLack' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Variable) == 0x0000A4, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Length_ReturnValue_1) == 0x0000AC, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000B1, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetValidValue_ReturnValue) == 0x0000B2, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Variable_1) == 0x0000E8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_MakeArray_Array) == 0x0000F0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Array_Index_Variable) == 0x000100, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_bool_Variable) == 0x000104, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_byte_Variable) == 0x000105, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_Select_Default) == 0x000108, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x00010C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Loop_Counter_Variable) == 0x000110, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000114, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Loop_Counter_Variable_1) == 0x000118, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x00011C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Array_Index_Variable_1) == 0x000120, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_byte_Variable_1) == 0x000124, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000125, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Array_Index_Variable_2) == 0x000128, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Loop_Counter_Variable_2) == 0x00012C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000134, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Array_Index_Variable_3) == 0x000138, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Loop_Counter_Variable_3) == 0x00013C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Get_Item) == 0x000140, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Add_IntInt_ReturnValue_3) == 0x000148, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_byte_Variable_2) == 0x00014C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_byte_Variable_3) == 0x00014D, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_byte_Variable_4) == 0x00014E, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Variable_2) == 0x000150, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetPlayerController_ReturnValue) == 0x000158, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000160, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Variable_3) == 0x00016C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetGashaComponent_ReturnValue) == 0x000170, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_bool_Variable_1) == 0x000178, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetCurrentGashaStepMax_ReturnValue) == 0x00017C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetCurrentGashaStepMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetCurrentGashaStepNow_ReturnValue) == 0x000180, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetCurrentGashaStepNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_IsCurrentStepUp_ReturnValue) == 0x000184, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_IsCurrentStepUp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000185, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetPlayerController_ReturnValue_1) == 0x000188, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000190, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_DynamicCast_bSuccess_1) == 0x000198, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetGashaComponent_ReturnValue_1) == 0x0001A0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetGashaComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetCurrentGashaStepMax_ReturnValue_1) == 0x0001A8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetCurrentGashaStepMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetCurrentGashaStepNow_ReturnValue_1) == 0x0001AC, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetCurrentGashaStepNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetCurrentGashaLapCount_ReturnValue) == 0x0001B0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetCurrentGashaLapCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_IsCurrentStepUp_ReturnValue_1) == 0x0001B4, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_IsCurrentStepUp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_MakeArray_Array_1) == 0x0001B8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Length_ReturnValue_2) == 0x0001C8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_MakeArray_Array_2) == 0x0001D0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001E0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Get_Item_1) == 0x0001E4, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001F0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Length_ReturnValue_3) == 0x000200, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000204, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000205, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000208, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_BooleanAND_ReturnValue) == 0x000220, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Loop_Counter_Variable_4) == 0x000224, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x000228, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Add_IntInt_ReturnValue_4) == 0x00022C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000230, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_bool_Variable_2) == 0x000231, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000232, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_Select_Default_1) == 0x000233, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Create_ReturnValue) == 0x000238, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetAmount_OutAmount) == 0x000240, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetAmount_OutAmount' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000248, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Add_ReturnValue) == 0x000260, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x000264, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Add_ReturnValue_1) == 0x000268, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_Select_Default_2) == 0x00026C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000270, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x000288, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Get_Item_2) == 0x000298, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Length_ReturnValue_4) == 0x0002B0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_TextToString_ReturnValue) == 0x0002B8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Less_IntInt_ReturnValue_3) == 0x0002C8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0002D0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_TextIsEmpty_ReturnValue) == 0x0002E0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_IsEmpty_ReturnValue) == 0x0002E1, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_CreateDelegate_OutputDelegate) == 0x0002E4, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_SwitchEnum_CmpSuccess_2) == 0x0002F4, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetRoseOrbFree_ReturnValue) == 0x0002F8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetRoseOrbPaid_ReturnValue) == 0x0002FC, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Add_IntInt_ReturnValue_5) == 0x000300, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000304, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetBPPoint_ReturnValue) == 0x000308, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Greater_IntInt_ReturnValue_3) == 0x00030C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetRoseOrbFree_ReturnValue_1) == 0x000310, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetRoseOrbFree_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Greater_IntInt_ReturnValue_4) == 0x000314, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetRoseOrbPaid_ReturnValue_1) == 0x000318, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetRoseOrbPaid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Greater_IntInt_ReturnValue_5) == 0x00031C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Greater_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_name_Variable) == 0x000320, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_int_Array_Index_Variable_4) == 0x000328, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Get_Item_3) == 0x00032C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000338, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000348, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_MakeStruct_Margin) == 0x000360, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_name_Variable_1) == 0x000370, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_AddChild_ReturnValue) == 0x000378, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000380, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, Temp_bool_Variable_3) == 0x000390, "Member 'GashaShopSubWindow_C_SetExecutionInfo::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_Select_Default_3) == 0x000394, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_Select_Default_4) == 0x00039C, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, K2Node_MakeArray_Array_3) == 0x0003A0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Get_Item_4) == 0x0003B0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0003B8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Array_Length_ReturnValue_5) == 0x0003C8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0003D0, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetExecutionInfo, CallFunc_Less_IntInt_ReturnValue_4) == 0x0003E8, "Member 'GashaShopSubWindow_C_SetExecutionInfo::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicket
// 0x000C (0x000C - 0x0000)
struct GashaShopSubWindow_C_SelectTicket final
{
public:
	struct FSBGashaTickets                        TicketData;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         InAmount;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_C_SelectTicket) == 0x000004, "Wrong alignment on GashaShopSubWindow_C_SelectTicket");
static_assert(sizeof(GashaShopSubWindow_C_SelectTicket) == 0x00000C, "Wrong size on GashaShopSubWindow_C_SelectTicket");
static_assert(offsetof(GashaShopSubWindow_C_SelectTicket, TicketData) == 0x000000, "Member 'GashaShopSubWindow_C_SelectTicket::TicketData' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SelectTicket, InAmount) == 0x000008, "Member 'GashaShopSubWindow_C_SelectTicket::InAmount' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.SetWarningComment
// 0x0230 (0x0230 - 0x0000)
struct GashaShopSubWindow_C_SetWarningComment final
{
public:
	class FString                                 GashaId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_913C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_913D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_913E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaInfo                           CallFunc_GetGashaInfo_ReturnValue;                 // 0x0050(0x01C8)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0218(0x0018)()
};
static_assert(alignof(GashaShopSubWindow_C_SetWarningComment) == 0x000008, "Wrong alignment on GashaShopSubWindow_C_SetWarningComment");
static_assert(sizeof(GashaShopSubWindow_C_SetWarningComment) == 0x000230, "Wrong size on GashaShopSubWindow_C_SetWarningComment");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, GashaId) == 0x000000, "Member 'GashaShopSubWindow_C_SetWarningComment::GashaId' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, Temp_bool_Variable) == 0x000010, "Member 'GashaShopSubWindow_C_SetWarningComment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'GashaShopSubWindow_C_SetWarningComment::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000020, "Member 'GashaShopSubWindow_C_SetWarningComment::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000028, "Member 'GashaShopSubWindow_C_SetWarningComment::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GashaShopSubWindow_C_SetWarningComment::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, K2Node_Select_Default) == 0x000038, "Member 'GashaShopSubWindow_C_SetWarningComment::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, CallFunc_GetGashaComponent_ReturnValue) == 0x000048, "Member 'GashaShopSubWindow_C_SetWarningComment::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, CallFunc_GetGashaInfo_ReturnValue) == 0x000050, "Member 'GashaShopSubWindow_C_SetWarningComment::CallFunc_GetGashaInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_SetWarningComment, CallFunc_Conv_StringToText_ReturnValue) == 0x000218, "Member 'GashaShopSubWindow_C_SetWarningComment::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.Set Credit
// 0x0028 (0x0028 - 0x0000)
struct GashaShopSubWindow_C_Set_Credit final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBGashaCurrencyType                          CurrencyType;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly;                                          // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_913F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetProductCost_bIsLack;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetProductCost_bIsLack_1;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9140[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBPPoint_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbPaid_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GashaShopSubWindow_C_Set_Credit) == 0x000008, "Wrong alignment on GashaShopSubWindow_C_Set_Credit");
static_assert(sizeof(GashaShopSubWindow_C_Set_Credit) == 0x000028, "Wrong size on GashaShopSubWindow_C_Set_Credit");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, Price) == 0x000000, "Member 'GashaShopSubWindow_C_Set_Credit::Price' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CurrencyType) == 0x000004, "Member 'GashaShopSubWindow_C_Set_Credit::CurrencyType' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, PaidOnly) == 0x000005, "Member 'GashaShopSubWindow_C_Set_Credit::PaidOnly' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue) == 0x000008, "Member 'GashaShopSubWindow_C_Set_Credit::CallFunc_GetExpiredTimeRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue) == 0x000010, "Member 'GashaShopSubWindow_C_Set_Credit::CallFunc_GetExpiredTimeRoseOrbPaid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CallFunc_SetProductCost_bIsLack) == 0x000018, "Member 'GashaShopSubWindow_C_Set_Credit::CallFunc_SetProductCost_bIsLack' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CallFunc_SetProductCost_bIsLack_1) == 0x000019, "Member 'GashaShopSubWindow_C_Set_Credit::CallFunc_SetProductCost_bIsLack_1' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'GashaShopSubWindow_C_Set_Credit::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CallFunc_GetBPPoint_ReturnValue) == 0x00001C, "Member 'GashaShopSubWindow_C_Set_Credit::CallFunc_GetBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CallFunc_GetRoseOrbFree_ReturnValue) == 0x000020, "Member 'GashaShopSubWindow_C_Set_Credit::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Set_Credit, CallFunc_GetRoseOrbPaid_ReturnValue) == 0x000024, "Member 'GashaShopSubWindow_C_Set_Credit::CallFunc_GetRoseOrbPaid_ReturnValue' has a wrong offset!");

// Function GashaShopSubWindow.GashaShopSubWindow_C.Update Warning Comment
// 0x0210 (0x0210 - 0x0000)
struct GashaShopSubWindow_C_Update_Warning_Comment final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectStepNum_OutSelectStepNum;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9141[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9142[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaInfo                           CallFunc_GetGashaInfoStep_OutGashaInfo;            // 0x0028(0x01C8)()
	bool                                          CallFunc_GetGashaInfoStep_ReturnValue;             // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9143[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentGashaId_ReturnValue;            // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentStepUp_ReturnValue;              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GashaShopSubWindow_C_Update_Warning_Comment) == 0x000008, "Wrong alignment on GashaShopSubWindow_C_Update_Warning_Comment");
static_assert(sizeof(GashaShopSubWindow_C_Update_Warning_Comment) == 0x000210, "Wrong size on GashaShopSubWindow_C_Update_Warning_Comment");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, CallFunc_GetSelectStepNum_OutSelectStepNum) == 0x000008, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::CallFunc_GetSelectStepNum_OutSelectStepNum' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, CallFunc_GetGashaComponent_ReturnValue) == 0x000020, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, CallFunc_GetGashaInfoStep_OutGashaInfo) == 0x000028, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::CallFunc_GetGashaInfoStep_OutGashaInfo' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, CallFunc_GetGashaInfoStep_ReturnValue) == 0x0001F0, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::CallFunc_GetGashaInfoStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, CallFunc_GetCurrentGashaId_ReturnValue) == 0x0001F8, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::CallFunc_GetCurrentGashaId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GashaShopSubWindow_C_Update_Warning_Comment, CallFunc_IsCurrentStepUp_ReturnValue) == 0x000208, "Member 'GashaShopSubWindow_C_Update_Warning_Comment::CallFunc_IsCurrentStepUp_ReturnValue' has a wrong offset!");

}

