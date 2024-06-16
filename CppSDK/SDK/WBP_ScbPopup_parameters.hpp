#pragma once

 

// Package: WBP_ScbPopup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ScbPopup.WBP_ScbPopup_C.ExecuteUbergraph_WBP_ScbPopup
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A06[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A07[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A08[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ScbClassItem_C*>            K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A09[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A0A[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ScbClassItem_C*                    CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ScbClassItem_C*                    CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A0B[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A0C[0x5];                                     // 0x0083(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A0D[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup) == 0x000008, "Wrong alignment on WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup");
static_assert(sizeof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup) == 0x0000B0, "Wrong size on WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, EntryPoint) == 0x000000, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_MakeLiteralByte_ReturnValue) == 0x000014, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, Temp_bool_Variable) == 0x000015, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000016, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, Temp_bool_Variable_1) == 0x000024, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000025, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, Temp_int_Loop_Counter_Variable_1) == 0x000028, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_PlaySE_ReturnValue) == 0x000030, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, K2Node_MakeArray_Array) == 0x000038, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, Temp_int_Array_Index_Variable_1) == 0x000050, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Array_Get_Item) == 0x000058, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Less_IntInt_ReturnValue_1) == 0x00006C, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000080, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x000081, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, K2Node_Select_Default) == 0x000082, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000090, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000098, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x0000A0, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, K2Node_Select_Default_1) == 0x0000A8, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'WBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ScbPopup.WBP_ScbPopup_C.SetTotalBonus
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_ScbPopup_C_SetTotalBonus final
{
public:
	struct FSBScbClassData                        TotalBonus;                                        // 0x0000(0x0024)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                         Pad_8A0E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     TextBlockList;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<int32>                                 ParamList;                                         // 0x0038(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A0F[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A10[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A11[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_1;                          // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_ScbPopup_C_SetTotalBonus) == 0x000008, "Wrong alignment on WBP_ScbPopup_C_SetTotalBonus");
static_assert(sizeof(WBP_ScbPopup_C_SetTotalBonus) == 0x0000A8, "Wrong size on WBP_ScbPopup_C_SetTotalBonus");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, TotalBonus) == 0x000000, "Member 'WBP_ScbPopup_C_SetTotalBonus::TotalBonus' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, TextBlockList) == 0x000028, "Member 'WBP_ScbPopup_C_SetTotalBonus::TextBlockList' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, ParamList) == 0x000038, "Member 'WBP_ScbPopup_C_SetTotalBonus::ParamList' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_ScbPopup_C_SetTotalBonus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, Temp_int_Array_Index_Variable) == 0x000058, "Member 'WBP_ScbPopup_C_SetTotalBonus::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, CallFunc_Array_Get_Item) == 0x00005C, "Member 'WBP_ScbPopup_C_SetTotalBonus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'WBP_ScbPopup_C_SetTotalBonus::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'WBP_ScbPopup_C_SetTotalBonus::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'WBP_ScbPopup_C_SetTotalBonus::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'WBP_ScbPopup_C_SetTotalBonus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'WBP_ScbPopup_C_SetTotalBonus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'WBP_ScbPopup_C_SetTotalBonus::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_SetTotalBonus, K2Node_MakeArray_Array_1) == 0x000098, "Member 'WBP_ScbPopup_C_SetTotalBonus::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function WBP_ScbPopup.WBP_ScbPopup_C.ChangeDesign
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_ScbPopup_C_ChangeDesign final
{
public:
	bool                                          bRank;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A12[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A13[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0060(0x0028)()
	class FName                                   Temp_name_Variable;                                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A14[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A15[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_2;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A16[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_3;                           // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_4;                           // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScbPopup_C_ChangeDesign) == 0x000008, "Wrong alignment on WBP_ScbPopup_C_ChangeDesign");
static_assert(sizeof(WBP_ScbPopup_C_ChangeDesign) == 0x0000F8, "Wrong size on WBP_ScbPopup_C_ChangeDesign");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, bRank) == 0x000000, "Member 'WBP_ScbPopup_C_ChangeDesign::bRank' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_bool_Variable) == 0x000001, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'WBP_ScbPopup_C_ChangeDesign::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WBP_ScbPopup_C_ChangeDesign::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'WBP_ScbPopup_C_ChangeDesign::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_bool_Variable_1) == 0x000058, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, K2Node_Select_Default) == 0x000060, "Member 'WBP_ScbPopup_C_ChangeDesign::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable) == 0x000088, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable_1) == 0x000090, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_bool_Variable_2) == 0x000098, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, K2Node_Select_Default_1) == 0x00009C, "Member 'WBP_ScbPopup_C_ChangeDesign::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable_2) == 0x0000A4, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable_3) == 0x0000AC, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_bool_Variable_3) == 0x0000B4, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, K2Node_Select_Default_2) == 0x0000B8, "Member 'WBP_ScbPopup_C_ChangeDesign::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable_4) == 0x0000C0, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable_5) == 0x0000C8, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_bool_Variable_4) == 0x0000D0, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, K2Node_Select_Default_3) == 0x0000D4, "Member 'WBP_ScbPopup_C_ChangeDesign::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable_6) == 0x0000DC, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, Temp_name_Variable_7) == 0x0000E4, "Member 'WBP_ScbPopup_C_ChangeDesign::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ScbPopup_C_ChangeDesign, K2Node_Select_Default_4) == 0x0000EC, "Member 'WBP_ScbPopup_C_ChangeDesign::K2Node_Select_Default_4' has a wrong offset!");

}

