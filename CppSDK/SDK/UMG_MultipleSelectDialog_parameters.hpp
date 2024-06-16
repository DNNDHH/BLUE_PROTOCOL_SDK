#pragma once

 

// Package: UMG_MultipleSelectDialog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.ExecuteUbergraph_UMG_MultipleSelectDialog
// 0x00D0 (0x00D0 - 0x0000)
struct UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 SelectIndex)>            K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4C0D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MultipleSelectDialog_Button_C*     CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C0E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Message;                              // 0x0040(0x0018)(ConstParm)
	TArray<class FText>                           K2Node_Event_Selections;                           // 0x0058(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C0F[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C10[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SelectIndex_1;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C11[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0088(0x0018)()
	int32                                         K2Node_CustomEvent_SelectIndex;                    // 0x00A0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C12[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_CustomEvent_InPosition;                     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog) == 0x000008, "Wrong alignment on UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog");
static_assert(sizeof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog) == 0x0000D0, "Wrong size on UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, EntryPoint) == 0x000000, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_Create_ReturnValue) == 0x000030, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_PlaySE_ReturnValue) == 0x000038, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, K2Node_Event_Message) == 0x000040, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, K2Node_Event_Selections) == 0x000058, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::K2Node_Event_Selections' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000070, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, K2Node_CustomEvent_SelectIndex_1) == 0x00007C, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::K2Node_CustomEvent_SelectIndex_1' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, Temp_int_Array_Index_Variable) == 0x000080, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_Array_Get_Item) == 0x000088, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, K2Node_CustomEvent_SelectIndex) == 0x0000A0, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::K2Node_CustomEvent_SelectIndex' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000A8, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, K2Node_CustomEvent_InPosition) == 0x0000B0, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::K2Node_CustomEvent_InPosition' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_PlayAnimation_ReturnValue) == 0x0000B8, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C0, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000C8, "Member 'UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetDialogPosition
// 0x0008 (0x0008 - 0x0000)
struct UMG_MultipleSelectDialog_C_SetDialogPosition final
{
public:
	struct FVector2D                              InPosition;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MultipleSelectDialog_C_SetDialogPosition) == 0x000004, "Wrong alignment on UMG_MultipleSelectDialog_C_SetDialogPosition");
static_assert(sizeof(UMG_MultipleSelectDialog_C_SetDialogPosition) == 0x000008, "Wrong size on UMG_MultipleSelectDialog_C_SetDialogPosition");
static_assert(offsetof(UMG_MultipleSelectDialog_C_SetDialogPosition, InPosition) == 0x000000, "Member 'UMG_MultipleSelectDialog_C_SetDialogPosition::InPosition' has a wrong offset!");

// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetCancelAction
// 0x0004 (0x0004 - 0x0000)
struct UMG_MultipleSelectDialog_C_SetCancelAction final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MultipleSelectDialog_C_SetCancelAction) == 0x000004, "Wrong alignment on UMG_MultipleSelectDialog_C_SetCancelAction");
static_assert(sizeof(UMG_MultipleSelectDialog_C_SetCancelAction) == 0x000004, "Wrong size on UMG_MultipleSelectDialog_C_SetCancelAction");
static_assert(offsetof(UMG_MultipleSelectDialog_C_SetCancelAction, SelectIndex) == 0x000000, "Member 'UMG_MultipleSelectDialog_C_SetCancelAction::SelectIndex' has a wrong offset!");

// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.OnSelected_Event_0
// 0x0004 (0x0004 - 0x0000)
struct UMG_MultipleSelectDialog_C_OnSelected_Event_0 final
{
public:
	int32                                         SelectIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MultipleSelectDialog_C_OnSelected_Event_0) == 0x000004, "Wrong alignment on UMG_MultipleSelectDialog_C_OnSelected_Event_0");
static_assert(sizeof(UMG_MultipleSelectDialog_C_OnSelected_Event_0) == 0x000004, "Wrong size on UMG_MultipleSelectDialog_C_OnSelected_Event_0");
static_assert(offsetof(UMG_MultipleSelectDialog_C_OnSelected_Event_0, SelectIndex) == 0x000000, "Member 'UMG_MultipleSelectDialog_C_OnSelected_Event_0::SelectIndex' has a wrong offset!");

// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.HandleInit
// 0x0028 (0x0028 - 0x0000)
struct UMG_MultipleSelectDialog_C_HandleInit final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                           Selections;                                        // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_MultipleSelectDialog_C_HandleInit) == 0x000008, "Wrong alignment on UMG_MultipleSelectDialog_C_HandleInit");
static_assert(sizeof(UMG_MultipleSelectDialog_C_HandleInit) == 0x000028, "Wrong size on UMG_MultipleSelectDialog_C_HandleInit");
static_assert(offsetof(UMG_MultipleSelectDialog_C_HandleInit, Message) == 0x000000, "Member 'UMG_MultipleSelectDialog_C_HandleInit::Message' has a wrong offset!");
static_assert(offsetof(UMG_MultipleSelectDialog_C_HandleInit, Selections) == 0x000018, "Member 'UMG_MultipleSelectDialog_C_HandleInit::Selections' has a wrong offset!");

}

