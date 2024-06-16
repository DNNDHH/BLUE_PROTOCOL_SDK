#pragma once

 

// Package: LibraryMenu_LoginBonusListLine

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.IconClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLine
// 0x0078 (0x0078 - 0x0000)
struct LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ID)>                     K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63D0[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63D1[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_LoginBonusListLineItem_C*  CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_id;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusListLineItem_C*  CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63D2[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine");
static_assert(sizeof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine) == 0x000078, "Wrong size on LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, EntryPoint) == 0x000000, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, Temp_int_Array_Index_Variable) == 0x000004, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Get_Item) == 0x000030, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, Temp_int_Loop_Counter_Variable_1) == 0x000038, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, K2Node_CustomEvent_id) == 0x000040, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Less_IntInt_ReturnValue_1) == 0x000054, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Add_ReturnValue) == 0x000058, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_1) == 0x00005C, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_2) == 0x000060, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_3) == 0x000064, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Add_ReturnValue_4) == 0x000068, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_Array_Length_ReturnValue_2) == 0x00006C, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.OnIconClick
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonusListLine_C_OnIconClick final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusListLine_C_OnIconClick) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusListLine_C_OnIconClick");
static_assert(sizeof(LibraryMenu_LoginBonusListLine_C_OnIconClick) == 0x000004, "Wrong size on LibraryMenu_LoginBonusListLine_C_OnIconClick");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_OnIconClick, ID) == 0x000000, "Member 'LibraryMenu_LoginBonusListLine_C_OnIconClick::ID' has a wrong offset!");

// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Set Data
// 0x0048 (0x0048 - 0x0000)
struct LibraryMenu_LoginBonusListLine_C_Set_Data final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63D3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLoginBonusWindowDayData             Data;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESlateVisibility                              Param_Visibility;                                  // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stump;                                             // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Click;                                             // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63D4[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_LoginBonusListLineItem_C*  TargetWidget;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          OldTargetWidget;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusListLineItem_C*  CallFunc_GetWidget_Widget;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusListLine_C_Set_Data) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusListLine_C_Set_Data");
static_assert(sizeof(LibraryMenu_LoginBonusListLine_C_Set_Data) == 0x000048, "Wrong size on LibraryMenu_LoginBonusListLine_C_Set_Data");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, Data) == 0x000008, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::Data' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, Param_Visibility) == 0x000020, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::Param_Visibility' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, Stump) == 0x000021, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::Stump' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, Click) == 0x000022, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::Click' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, TargetWidget) == 0x000028, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::TargetWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, OldTargetWidget) == 0x000030, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::OldTargetWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, CallFunc_GetWidget_Widget) == 0x000038, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::CallFunc_GetWidget_Widget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000042, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_Set_Data, CallFunc_BooleanOR_ReturnValue) == 0x000043, "Member 'LibraryMenu_LoginBonusListLine_C_Set_Data::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.GetWidget
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_LoginBonusListLine_C_GetWidget final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63D5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_LoginBonusListLineItem_C*  Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusListLineItem_C*  CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusListLine_C_GetWidget) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusListLine_C_GetWidget");
static_assert(sizeof(LibraryMenu_LoginBonusListLine_C_GetWidget) == 0x000020, "Wrong size on LibraryMenu_LoginBonusListLine_C_GetWidget");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_GetWidget, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonusListLine_C_GetWidget::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_GetWidget, Widget) == 0x000008, "Member 'LibraryMenu_LoginBonusListLine_C_GetWidget::Widget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_GetWidget, CallFunc_Array_Get_Item) == 0x000010, "Member 'LibraryMenu_LoginBonusListLine_C_GetWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusListLine_C_GetWidget, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'LibraryMenu_LoginBonusListLine_C_GetWidget::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

}

