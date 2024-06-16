#pragma once

 

// Package: UMG_LoginBonusListLine

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.IconClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_LoginBonusListLine_C_IconClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D7A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          SelectedItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusListLine_C_IconClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_LoginBonusListLine_C_IconClick__DelegateSignature");
static_assert(sizeof(UMG_LoginBonusListLine_C_IconClick__DelegateSignature) == 0x000010, "Wrong size on UMG_LoginBonusListLine_C_IconClick__DelegateSignature");
static_assert(offsetof(UMG_LoginBonusListLine_C_IconClick__DelegateSignature, Param_Index) == 0x000000, "Member 'UMG_LoginBonusListLine_C_IconClick__DelegateSignature::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_IconClick__DelegateSignature, SelectedItem) == 0x000008, "Member 'UMG_LoginBonusListLine_C_IconClick__DelegateSignature::SelectedItem' has a wrong offset!");

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ExecuteUbergraph_UMG_LoginBonusListLine
// 0x0090 (0x0090 - 0x0000)
struct UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ID, class UUMG_LoginBonusListLineItem_C* SelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D7B[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D7C[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_id;                             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D7D[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          K2Node_CustomEvent_SelectedItem;                   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine) == 0x000008, "Wrong alignment on UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine");
static_assert(sizeof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine) == 0x000090, "Wrong size on UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, EntryPoint) == 0x000000, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Get_Item) == 0x000040, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_1) == 0x00004C, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_2) == 0x000050, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_3) == 0x000054, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_4) == 0x000058, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, Temp_int_Loop_Counter_Variable_1) == 0x00005C, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, K2Node_CustomEvent_id) == 0x000068, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, K2Node_CustomEvent_SelectedItem) == 0x000070, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Add_IntInt_ReturnValue_2) == 0x000080, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Array_Length_ReturnValue_2) == 0x000084, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine, CallFunc_Less_IntInt_ReturnValue_1) == 0x000088, "Member 'UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnIconClick
// 0x0010 (0x0010 - 0x0000)
struct UMG_LoginBonusListLine_C_OnIconClick final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D7E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          SelectedItem;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_LoginBonusListLine_C_OnIconClick) == 0x000008, "Wrong alignment on UMG_LoginBonusListLine_C_OnIconClick");
static_assert(sizeof(UMG_LoginBonusListLine_C_OnIconClick) == 0x000010, "Wrong size on UMG_LoginBonusListLine_C_OnIconClick");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnIconClick, ID) == 0x000000, "Member 'UMG_LoginBonusListLine_C_OnIconClick::ID' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnIconClick, SelectedItem) == 0x000008, "Member 'UMG_LoginBonusListLine_C_OnIconClick::SelectedItem' has a wrong offset!");

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Set Data
// 0x0040 (0x0040 - 0x0000)
struct UMG_LoginBonusListLine_C_Set_Data final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D7F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLoginBonusWindowDayData             Data;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESlateVisibility                              Param_Visibility;                                  // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stump;                                             // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Click;                                             // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D80[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          TargetWidget;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          CallFunc_GetWidget_Widget;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLine_C_Set_Data) == 0x000008, "Wrong alignment on UMG_LoginBonusListLine_C_Set_Data");
static_assert(sizeof(UMG_LoginBonusListLine_C_Set_Data) == 0x000040, "Wrong size on UMG_LoginBonusListLine_C_Set_Data");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, Param_Index) == 0x000000, "Member 'UMG_LoginBonusListLine_C_Set_Data::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, Data) == 0x000008, "Member 'UMG_LoginBonusListLine_C_Set_Data::Data' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, Param_Visibility) == 0x000020, "Member 'UMG_LoginBonusListLine_C_Set_Data::Param_Visibility' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, Stump) == 0x000021, "Member 'UMG_LoginBonusListLine_C_Set_Data::Stump' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, Click) == 0x000022, "Member 'UMG_LoginBonusListLine_C_Set_Data::Click' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, TargetWidget) == 0x000028, "Member 'UMG_LoginBonusListLine_C_Set_Data::TargetWidget' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, CallFunc_GetWidget_Widget) == 0x000030, "Member 'UMG_LoginBonusListLine_C_Set_Data::CallFunc_GetWidget_Widget' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'UMG_LoginBonusListLine_C_Set_Data::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'UMG_LoginBonusListLine_C_Set_Data::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00003A, "Member 'UMG_LoginBonusListLine_C_Set_Data::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_Set_Data, CallFunc_BooleanOR_ReturnValue) == 0x00003B, "Member 'UMG_LoginBonusListLine_C_Set_Data::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.GetWidget
// 0x0020 (0x0020 - 0x0000)
struct UMG_LoginBonusListLine_C_GetWidget final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D81[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLine_C_GetWidget) == 0x000008, "Wrong alignment on UMG_LoginBonusListLine_C_GetWidget");
static_assert(sizeof(UMG_LoginBonusListLine_C_GetWidget) == 0x000020, "Wrong size on UMG_LoginBonusListLine_C_GetWidget");
static_assert(offsetof(UMG_LoginBonusListLine_C_GetWidget, Param_Index) == 0x000000, "Member 'UMG_LoginBonusListLine_C_GetWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_GetWidget, Widget) == 0x000008, "Member 'UMG_LoginBonusListLine_C_GetWidget::Widget' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_GetWidget, CallFunc_Array_Get_Item) == 0x000010, "Member 'UMG_LoginBonusListLine_C_GetWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_GetWidget, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'UMG_LoginBonusListLine_C_GetWidget::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.PlayStumpAnimation
// 0x0018 (0x0018 - 0x0000)
struct UMG_LoginBonusListLine_C_PlayStumpAnimation final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlay;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D82[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LoginBonusListLineItem_C*          CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLine_C_PlayStumpAnimation) == 0x000008, "Wrong alignment on UMG_LoginBonusListLine_C_PlayStumpAnimation");
static_assert(sizeof(UMG_LoginBonusListLine_C_PlayStumpAnimation) == 0x000018, "Wrong size on UMG_LoginBonusListLine_C_PlayStumpAnimation");
static_assert(offsetof(UMG_LoginBonusListLine_C_PlayStumpAnimation, Param_Index) == 0x000000, "Member 'UMG_LoginBonusListLine_C_PlayStumpAnimation::Param_Index' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_PlayStumpAnimation, IsPlay) == 0x000004, "Member 'UMG_LoginBonusListLine_C_PlayStumpAnimation::IsPlay' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_PlayStumpAnimation, CallFunc_Array_Get_Item) == 0x000008, "Member 'UMG_LoginBonusListLine_C_PlayStumpAnimation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_PlayStumpAnimation, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000010, "Member 'UMG_LoginBonusListLine_C_PlayStumpAnimation::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnCloseAnimationFinished
// 0x0020 (0x0020 - 0x0000)
struct UMG_LoginBonusListLine_C_OnCloseAnimationFinished final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished) == 0x000008, "Wrong alignment on UMG_LoginBonusListLine_C_OnCloseAnimationFinished");
static_assert(sizeof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished) == 0x000020, "Wrong size on UMG_LoginBonusListLine_C_OnCloseAnimationFinished");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished, Temp_int_Array_Index_Variable) == 0x000000, "Member 'UMG_LoginBonusListLine_C_OnCloseAnimationFinished::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'UMG_LoginBonusListLine_C_OnCloseAnimationFinished::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UMG_LoginBonusListLine_C_OnCloseAnimationFinished::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'UMG_LoginBonusListLine_C_OnCloseAnimationFinished::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished, CallFunc_Array_Get_Item) == 0x000010, "Member 'UMG_LoginBonusListLine_C_OnCloseAnimationFinished::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_LoginBonusListLine_C_OnCloseAnimationFinished, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'UMG_LoginBonusListLine_C_OnCloseAnimationFinished::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

