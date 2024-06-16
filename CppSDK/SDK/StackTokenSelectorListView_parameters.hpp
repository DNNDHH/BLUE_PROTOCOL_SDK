#pragma once

 

// Package: StackTokenSelectorListView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectClose__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StackTokenSelectorListView_C_OnSelectClose__DelegateSignature final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListView_C_OnSelectClose__DelegateSignature) == 0x000004, "Wrong alignment on StackTokenSelectorListView_C_OnSelectClose__DelegateSignature");
static_assert(sizeof(StackTokenSelectorListView_C_OnSelectClose__DelegateSignature) == 0x000004, "Wrong size on StackTokenSelectorListView_C_OnSelectClose__DelegateSignature");
static_assert(offsetof(StackTokenSelectorListView_C_OnSelectClose__DelegateSignature, TokenID) == 0x000000, "Member 'StackTokenSelectorListView_C_OnSelectClose__DelegateSignature::TokenID' has a wrong offset!");

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.ExecuteUbergraph_StackTokenSelectorListView
// 0x0050 (0x0050 - 0x0000)
struct StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6CFA[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackTokenSelectorListItem_C*          K2Node_CustomEvent_Target;                         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenId_TokenId;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InPosition;                     // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InAlignment;                    // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CFB[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView) == 0x000008, "Wrong alignment on StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView");
static_assert(sizeof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView) == 0x000050, "Wrong size on StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, EntryPoint) == 0x000000, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, K2Node_CustomEvent_Target) == 0x000018, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, CallFunc_GetTokenId_TokenId) == 0x000020, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::CallFunc_GetTokenId_TokenId' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, K2Node_CustomEvent_InPosition) == 0x000024, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::K2Node_CustomEvent_InPosition' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, K2Node_CustomEvent_InAlignment) == 0x00002C, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::K2Node_CustomEvent_InAlignment' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000038, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000048, "Member 'StackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.Set Window Alignment
// 0x0008 (0x0008 - 0x0000)
struct StackTokenSelectorListView_C_Set_Window_Alignment final
{
public:
	struct FVector2D                              InAlignment;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListView_C_Set_Window_Alignment) == 0x000004, "Wrong alignment on StackTokenSelectorListView_C_Set_Window_Alignment");
static_assert(sizeof(StackTokenSelectorListView_C_Set_Window_Alignment) == 0x000008, "Wrong size on StackTokenSelectorListView_C_Set_Window_Alignment");
static_assert(offsetof(StackTokenSelectorListView_C_Set_Window_Alignment, InAlignment) == 0x000000, "Member 'StackTokenSelectorListView_C_Set_Window_Alignment::InAlignment' has a wrong offset!");

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.SetWindowPosition
// 0x0008 (0x0008 - 0x0000)
struct StackTokenSelectorListView_C_SetWindowPosition final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListView_C_SetWindowPosition) == 0x000004, "Wrong alignment on StackTokenSelectorListView_C_SetWindowPosition");
static_assert(sizeof(StackTokenSelectorListView_C_SetWindowPosition) == 0x000008, "Wrong size on StackTokenSelectorListView_C_SetWindowPosition");
static_assert(offsetof(StackTokenSelectorListView_C_SetWindowPosition, InPosition) == 0x000000, "Member 'StackTokenSelectorListView_C_SetWindowPosition::InPosition' has a wrong offset!");

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectTicket
// 0x0008 (0x0008 - 0x0000)
struct StackTokenSelectorListView_C_OnSelectTicket final
{
public:
	class UStackTokenSelectorListItem_C*          Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListView_C_OnSelectTicket) == 0x000008, "Wrong alignment on StackTokenSelectorListView_C_OnSelectTicket");
static_assert(sizeof(StackTokenSelectorListView_C_OnSelectTicket) == 0x000008, "Wrong size on StackTokenSelectorListView_C_OnSelectTicket");
static_assert(offsetof(StackTokenSelectorListView_C_OnSelectTicket, Target) == 0x000000, "Member 'StackTokenSelectorListView_C_OnSelectTicket::Target' has a wrong offset!");

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.Initialize
// 0x00C0 (0x00C0 - 0x0000)
struct StackTokenSelectorListView_C_Initialize final
{
public:
	TArray<struct FSBStackBTicketData>            TmpTokenList;                                      // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    CallFunc_Array_Get_Item;                           // 0x0014(0x001C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CFC[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CFD[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackTokenSelectorListItem_C*          CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBStackBItemType                             CallFunc_GetStackBItemType_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_IntInt_ReturnValue;               // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBStackBTicketData                    K2Node_MakeStruct_SBStackBTicketData;              // 0x0058(0x001C)(NoDestructor)
	uint8                                         Pad_6CFE[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UStackTokenSelectorListItem_C* Target)> K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBStackBTicketData>            CallFunc_GetTicketDatas_data;                      // 0x0098(0x0010)(ReferenceParm)
	class UStackTokenSelectorListItem_C*          CallFunc_Create_ReturnValue_1;                     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListView_C_Initialize) == 0x000008, "Wrong alignment on StackTokenSelectorListView_C_Initialize");
static_assert(sizeof(StackTokenSelectorListView_C_Initialize) == 0x0000C0, "Wrong size on StackTokenSelectorListView_C_Initialize");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, TmpTokenList) == 0x000000, "Member 'StackTokenSelectorListView_C_Initialize::TmpTokenList' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, Temp_int_Array_Index_Variable) == 0x000010, "Member 'StackTokenSelectorListView_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_Array_Get_Item) == 0x000014, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'StackTokenSelectorListView_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_GetTokenAmount_ReturnValue) == 0x000038, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000045, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_Create_ReturnValue) == 0x000048, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_GetItemLevel_ReturnValue) == 0x000050, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_GetStackBItemType_ReturnValue) == 0x000054, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_GetStackBItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_InRange_IntInt_ReturnValue) == 0x000055, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_InRange_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000056, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_BooleanAND_ReturnValue) == 0x000057, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, K2Node_MakeStruct_SBStackBTicketData) == 0x000058, "Member 'StackTokenSelectorListView_C_Initialize::K2Node_MakeStruct_SBStackBTicketData' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_GetSBPlayerController_ReturnValue) == 0x000078, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'StackTokenSelectorListView_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_GetStackBComponent_ReturnValue) == 0x000090, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_GetTicketDatas_data) == 0x000098, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_GetTicketDatas_data' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_Create_ReturnValue_1) == 0x0000A8, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_AddChild_ReturnValue) == 0x0000B0, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_Initialize, CallFunc_AddChild_ReturnValue_1) == 0x0000B8, "Member 'StackTokenSelectorListView_C_Initialize::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function StackTokenSelectorListView.StackTokenSelectorListView_C.UpdateCheck
// 0x0038 (0x0038 - 0x0000)
struct StackTokenSelectorListView_C_UpdateCheck final
{
public:
	class UStackTokenSelectorListItem_C*          OnSelect;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CFF[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D00[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackTokenSelectorListItem_C*          K2Node_DynamicCast_AsStack_Token_Selector_List_Item; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D01[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D02[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackTokenSelectorListView_C_UpdateCheck) == 0x000008, "Wrong alignment on StackTokenSelectorListView_C_UpdateCheck");
static_assert(sizeof(StackTokenSelectorListView_C_UpdateCheck) == 0x000038, "Wrong size on StackTokenSelectorListView_C_UpdateCheck");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, OnSelect) == 0x000000, "Member 'StackTokenSelectorListView_C_UpdateCheck::OnSelect' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, Temp_int_Variable) == 0x000008, "Member 'StackTokenSelectorListView_C_UpdateCheck::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'StackTokenSelectorListView_C_UpdateCheck::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'StackTokenSelectorListView_C_UpdateCheck::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, K2Node_DynamicCast_AsStack_Token_Selector_List_Item) == 0x000020, "Member 'StackTokenSelectorListView_C_UpdateCheck::K2Node_DynamicCast_AsStack_Token_Selector_List_Item' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'StackTokenSelectorListView_C_UpdateCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'StackTokenSelectorListView_C_UpdateCheck::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'StackTokenSelectorListView_C_UpdateCheck::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'StackTokenSelectorListView_C_UpdateCheck::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackTokenSelectorListView_C_UpdateCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'StackTokenSelectorListView_C_UpdateCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

