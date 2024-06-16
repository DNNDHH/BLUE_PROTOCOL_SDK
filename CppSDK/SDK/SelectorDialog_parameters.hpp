#pragma once

 

// Package: SelectorDialog

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SelectorDialog.SelectorDialog_C.OnSelected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct SelectorDialog_C_OnSelected__DelegateSignature final
{
public:
	int32                                         Param_Selected;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectorDialog_C_OnSelected__DelegateSignature) == 0x000004, "Wrong alignment on SelectorDialog_C_OnSelected__DelegateSignature");
static_assert(sizeof(SelectorDialog_C_OnSelected__DelegateSignature) == 0x000004, "Wrong size on SelectorDialog_C_OnSelected__DelegateSignature");
static_assert(offsetof(SelectorDialog_C_OnSelected__DelegateSignature, Param_Selected) == 0x000000, "Member 'SelectorDialog_C_OnSelected__DelegateSignature::Param_Selected' has a wrong offset!");

// Function SelectorDialog.SelectorDialog_C.ExecuteUbergraph_SelectorDialog
// 0x02E8 (0x02E8 - 0x0000)
struct SelectorDialog_C_ExecuteUbergraph_SelectorDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F8D[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F8E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectorDialogBtn_C*                   CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Vertical;                       // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F8F[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Desc;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_CustomEvent_SelectItem;                     // 0x0040(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_DefaultSelect;                  // 0x0050(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_BtnWidth;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_SelectOnClose;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F90[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F91[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F92[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F93[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectorDialogBtn_C*                   K2Node_CustomEvent_Selected;                       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SelectNum;                      // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F94[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F95[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F96[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F97[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F98[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x00F4(0x0008)(NoDestructor)
	int32                                         CallFunc_RandomInteger_ReturnValue_1;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F99[0x1];                                     // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USelectorDialogBtn_C* Selected, int32 SelectNum)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0114(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F9A[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue_2;              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue_3;              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue_4;              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue_5;              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_4;           // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_5;           // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_6;           // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue_6;              // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F9B[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_7;           // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_8;           // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array_1;                          // 0x01C0(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_MakeArray_Array_2;                          // 0x01D0(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_Select_Default_2;                           // 0x01E0(0x0010)(ConstParm, ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01F0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0218(0x0028)()
	bool                                          Temp_bool_Variable_3;                              // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F9C[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                           K2Node_Select_Default_3;                           // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0260(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0288(0x0028)()
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F9D[0x5];                                     // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_Select_Default_5;                           // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F9E[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USelectorDialogBtn_C*                   K2Node_DynamicCast_AsSelector_Dialog_Btn;          // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F9F[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog) == 0x000008, "Wrong alignment on SelectorDialog_C_ExecuteUbergraph_SelectorDialog");
static_assert(sizeof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog) == 0x0002E8, "Wrong size on SelectorDialog_C_ExecuteUbergraph_SelectorDialog");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, EntryPoint) == 0x000000, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_bool_Variable) == 0x000004, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_byte_Variable) == 0x000005, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_byte_Variable_1) == 0x000006, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_int_Array_Index_Variable) == 0x000008, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Create_ReturnValue) == 0x000010, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000018, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000020, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_PlaySE_ReturnValue) == 0x000028, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_Event_IsDesignTime) == 0x00002C, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_Vertical) == 0x00002D, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_Vertical' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_Desc) == 0x000030, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_Desc' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_SelectItem) == 0x000040, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_SelectItem' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_DefaultSelect) == 0x000050, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_DefaultSelect' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_BtnWidth) == 0x000054, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_BtnWidth' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_SelectOnClose) == 0x000058, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_SelectOnClose' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Array_Get_Item) == 0x000060, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_int_Variable) == 0x000090, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000098, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CreateDelegate_OutputDelegate) == 0x00009C, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_int_Variable_1) == 0x0000AC, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_byte_Variable_2) == 0x0000B0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_byte_Variable_3) == 0x0000B1, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_Selected) == 0x0000B8, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CustomEvent_SelectNum) == 0x0000C0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CustomEvent_SelectNum' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_bool_Variable_1) == 0x0000C4, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomBool_ReturnValue) == 0x0000D4, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomInteger_ReturnValue) == 0x0000D8, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue) == 0x0000E0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_byte_Variable_4) == 0x0000F0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_Select_Default) == 0x0000F1, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeStruct_SlateChildSize) == 0x0000F4, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomInteger_ReturnValue_1) == 0x0000FC, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomInteger_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000100, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_byte_Variable_5) == 0x000110, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_bool_Variable_2) == 0x000111, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_Select_Default_1) == 0x000112, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_CreateDelegate_OutputDelegate_1) == 0x000114, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000124, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomInteger_ReturnValue_2) == 0x000128, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomInteger_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomInteger_ReturnValue_3) == 0x00012C, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomInteger_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000130, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000140, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomInteger_ReturnValue_4) == 0x000150, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomInteger_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomInteger_ReturnValue_5) == 0x000154, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomInteger_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_4) == 0x000158, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_5) == 0x000168, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeArray_Array) == 0x000178, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_6) == 0x000188, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_RandomInteger_ReturnValue_6) == 0x000198, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_RandomInteger_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_7) == 0x0001A0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Conv_IntToString_ReturnValue_8) == 0x0001B0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Conv_IntToString_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeArray_Array_1) == 0x0001C0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeArray_Array_2) == 0x0001D0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_Select_Default_2) == 0x0001E0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeStruct_SlateColor) == 0x0001F0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeStruct_SlateColor_1) == 0x000218, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_bool_Variable_3) == 0x000240, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_PlayAnimation_ReturnValue) == 0x000248, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_Select_Default_3) == 0x000250, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_AddChild_ReturnValue) == 0x000258, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeStruct_SlateColor_2) == 0x000260, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_MakeStruct_SlateColor_3) == 0x000288, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_Select_Default_4) == 0x0002B0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, Temp_bool_Variable_4) == 0x0002B1, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Not_PreBool_ReturnValue) == 0x0002B2, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_Select_Default_5) == 0x0002B8, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_GetChildAt_ReturnValue) == 0x0002C0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_GetChildrenCount_ReturnValue) == 0x0002C8, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_DynamicCast_AsSelector_Dialog_Btn) == 0x0002D0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_DynamicCast_AsSelector_Dialog_Btn' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, K2Node_DynamicCast_bSuccess) == 0x0002D8, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002DC, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_ExecuteUbergraph_SelectorDialog, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002E0, "Member 'SelectorDialog_C_ExecuteUbergraph_SelectorDialog::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SelectorDialog.SelectorDialog_C.OnSelectedItem
// 0x0010 (0x0010 - 0x0000)
struct SelectorDialog_C_OnSelectedItem final
{
public:
	class USelectorDialogBtn_C*                   Param_Selected;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectNum;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SelectorDialog_C_OnSelectedItem) == 0x000008, "Wrong alignment on SelectorDialog_C_OnSelectedItem");
static_assert(sizeof(SelectorDialog_C_OnSelectedItem) == 0x000010, "Wrong size on SelectorDialog_C_OnSelectedItem");
static_assert(offsetof(SelectorDialog_C_OnSelectedItem, Param_Selected) == 0x000000, "Member 'SelectorDialog_C_OnSelectedItem::Param_Selected' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_OnSelectedItem, SelectNum) == 0x000008, "Member 'SelectorDialog_C_OnSelectedItem::SelectNum' has a wrong offset!");

// Function SelectorDialog.SelectorDialog_C.StartSelectDialog
// 0x0038 (0x0038 - 0x0000)
struct SelectorDialog_C_StartSelectDialog final
{
public:
	bool                                          Param_Vertical;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FA0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Desc;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         SelectItem;                                        // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         DefaultSelect;                                     // 0x0028(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BtnWidth;                                          // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SelectOnClose;                                     // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectorDialog_C_StartSelectDialog) == 0x000008, "Wrong alignment on SelectorDialog_C_StartSelectDialog");
static_assert(sizeof(SelectorDialog_C_StartSelectDialog) == 0x000038, "Wrong size on SelectorDialog_C_StartSelectDialog");
static_assert(offsetof(SelectorDialog_C_StartSelectDialog, Param_Vertical) == 0x000000, "Member 'SelectorDialog_C_StartSelectDialog::Param_Vertical' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_StartSelectDialog, Desc) == 0x000008, "Member 'SelectorDialog_C_StartSelectDialog::Desc' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_StartSelectDialog, SelectItem) == 0x000018, "Member 'SelectorDialog_C_StartSelectDialog::SelectItem' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_StartSelectDialog, DefaultSelect) == 0x000028, "Member 'SelectorDialog_C_StartSelectDialog::DefaultSelect' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_StartSelectDialog, BtnWidth) == 0x00002C, "Member 'SelectorDialog_C_StartSelectDialog::BtnWidth' has a wrong offset!");
static_assert(offsetof(SelectorDialog_C_StartSelectDialog, SelectOnClose) == 0x000030, "Member 'SelectorDialog_C_StartSelectDialog::SelectOnClose' has a wrong offset!");

// Function SelectorDialog.SelectorDialog_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SelectorDialog_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SelectorDialog_C_PreConstruct) == 0x000001, "Wrong alignment on SelectorDialog_C_PreConstruct");
static_assert(sizeof(SelectorDialog_C_PreConstruct) == 0x000001, "Wrong size on SelectorDialog_C_PreConstruct");
static_assert(offsetof(SelectorDialog_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SelectorDialog_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

