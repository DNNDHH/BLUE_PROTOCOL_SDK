#pragma once

 

// Package: MapWidget_FuncIconList

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnFuncIconSelected__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature final
{
public:
	EMapFuncIconType                              InSelectedFuncIconType;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature) == 0x000001, "Wrong alignment on MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature");
static_assert(sizeof(MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature) == 0x000001, "Wrong size on MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature");
static_assert(offsetof(MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature, InSelectedFuncIconType) == 0x000000, "Member 'MapWidget_FuncIconList_C_OnFuncIconSelected__DelegateSignature::InSelectedFuncIconType' has a wrong offset!");

// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.ExecuteUbergraph_MapWidget_FuncIconList
// 0x0100 (0x0100 - 0x0000)
struct MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FD9[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_FuncIconItem_C*              K2Node_CustomEvent_InPressedIcon_1;                // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_FuncIconItem_C*              K2Node_CustomEvent_InPressedIcon;                  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FDA[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FDB[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_FuncIconItem_C*              K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item;    // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FDC[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FDD[0x1];                                     // 0x0087(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_FuncIconItem_C*              K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item_1;  // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FDE[0x1];                                     // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMapFuncIconType                              Temp_byte_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FDF[0x1];                                     // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMapWidget_FuncIconItem_C* InPressedIcon)> K2Node_CreateDelegate_OutputDelegate;              // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7FE0[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE1[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UMapWidget_FuncIconItem_C* InPressedIcon)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	class UMapWidget_FuncIconItem_C*              CallFunc_Create_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE2[0x1];                                     // 0x00FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList) == 0x000008, "Wrong alignment on MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList");
static_assert(sizeof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList) == 0x000100, "Wrong size on MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, EntryPoint) == 0x000000, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable) == 0x000004, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_GetValidValue_ReturnValue) == 0x000009, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_bool_Variable) == 0x00000A, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Array_Index_Variable) == 0x000014, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_1) == 0x000018, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_2) == 0x000020, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_3) == 0x000024, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Add_IntInt_ReturnValue_2) == 0x00002C, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_4) == 0x000030, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000034, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_CustomEvent_InPressedIcon_1) == 0x000038, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_CustomEvent_InPressedIcon_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_CustomEvent_InPressedIcon) == 0x000040, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_CustomEvent_InPressedIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_GetChildrenCount_ReturnValue) == 0x000048, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_GetChildAt_ReturnValue) == 0x000050, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item) == 0x000060, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_IsValid_ReturnValue_1) == 0x00006A, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_5) == 0x00006C, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_6) == 0x000070, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000074, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_GetChildAt_ReturnValue_1) == 0x000078, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000080, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_IsValid_ReturnValue_2) == 0x000084, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000085, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_BooleanAND_ReturnValue) == 0x000086, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item_1) == 0x000088, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_IsValid_ReturnValue_3) == 0x000091, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000092, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_7) == 0x000094, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_8) == 0x000098, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Add_IntInt_ReturnValue_3) == 0x00009C, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_byte_Variable) == 0x0000A0, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0000A1, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_GetValidValue_ReturnValue_1) == 0x0000A2, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_Select_Default) == 0x0000A4, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Array_Add_ReturnValue) == 0x0000A8, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_IsValid_ReturnValue_4) == 0x0000CC, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Less_IntInt_ReturnValue) == 0x0000CD, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D0, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Create_ReturnValue) == 0x0000E0, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000E8, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, Temp_int_Variable_9) == 0x0000F0, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000F4, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x0000F8, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x0000F9, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000FA, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000FC, "Member 'MapWidget_FuncIconList_C_ExecuteUbergraph_MapWidget_FuncIconList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.OnIconPressedEvent
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_FuncIconList_C_OnIconPressedEvent final
{
public:
	class UMapWidget_FuncIconItem_C*              InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_FuncIconList_C_OnIconPressedEvent) == 0x000008, "Wrong alignment on MapWidget_FuncIconList_C_OnIconPressedEvent");
static_assert(sizeof(MapWidget_FuncIconList_C_OnIconPressedEvent) == 0x000008, "Wrong size on MapWidget_FuncIconList_C_OnIconPressedEvent");
static_assert(offsetof(MapWidget_FuncIconList_C_OnIconPressedEvent, InPressedIcon) == 0x000000, "Member 'MapWidget_FuncIconList_C_OnIconPressedEvent::InPressedIcon' has a wrong offset!");

// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.FuncIconPressed
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_FuncIconList_C_FuncIconPressed final
{
public:
	class UMapWidget_FuncIconItem_C*              InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_FuncIconList_C_FuncIconPressed) == 0x000008, "Wrong alignment on MapWidget_FuncIconList_C_FuncIconPressed");
static_assert(sizeof(MapWidget_FuncIconList_C_FuncIconPressed) == 0x000008, "Wrong size on MapWidget_FuncIconList_C_FuncIconPressed");
static_assert(offsetof(MapWidget_FuncIconList_C_FuncIconPressed, InPressedIcon) == 0x000000, "Member 'MapWidget_FuncIconList_C_FuncIconPressed::InPressedIcon' has a wrong offset!");

// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconEnable
// 0x0048 (0x0048 - 0x0000)
struct MapWidget_FuncIconList_C_SetFuncIconEnable final
{
public:
	EMapFuncIconType                              InFuncIconType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE3[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpIconCnt;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE4[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE5[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_FuncIconItem_C*              K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE6[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_FuncIconList_C_SetFuncIconEnable) == 0x000008, "Wrong alignment on MapWidget_FuncIconList_C_SetFuncIconEnable");
static_assert(sizeof(MapWidget_FuncIconList_C_SetFuncIconEnable) == 0x000048, "Wrong size on MapWidget_FuncIconList_C_SetFuncIconEnable");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, InFuncIconType) == 0x000000, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::InFuncIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, IsEnable) == 0x000001, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, TmpIconCnt) == 0x000004, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::TmpIconCnt' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, Temp_int_Variable) == 0x000008, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, Temp_bool_Variable) == 0x000010, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, Temp_int_Variable_1) == 0x000014, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item) == 0x000028, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000034, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_BooleanAND_ReturnValue) == 0x00003D, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_Conv_IntToByte_ReturnValue) == 0x00003E, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_GetValidValue_ReturnValue) == 0x00003F, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconEnable, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'MapWidget_FuncIconList_C_SetFuncIconEnable::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function MapWidget_FuncIconList.MapWidget_FuncIconList_C.SetFuncIconVisibility
// 0x0050 (0x0050 - 0x0000)
struct MapWidget_FuncIconList_C_SetFuncIconVisibility final
{
public:
	EMapFuncIconType                              InFuncIconType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsVisible;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE7[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpIconCnt;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE8[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FE9[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FEA[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FEB[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_FuncIconItem_C*              K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item;    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FEC[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_FuncIconList_C_SetFuncIconVisibility) == 0x000008, "Wrong alignment on MapWidget_FuncIconList_C_SetFuncIconVisibility");
static_assert(sizeof(MapWidget_FuncIconList_C_SetFuncIconVisibility) == 0x000050, "Wrong size on MapWidget_FuncIconList_C_SetFuncIconVisibility");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, InFuncIconType) == 0x000000, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::InFuncIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, Param_IsVisible) == 0x000001, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, TmpIconCnt) == 0x000004, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::TmpIconCnt' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, Temp_bool_Variable) == 0x000008, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, Temp_int_Variable) == 0x00000C, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, Temp_bool_Variable_1) == 0x000014, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x00001C, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_Conv_IntToByte_ReturnValue) == 0x00001D, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, Temp_int_Variable_1) == 0x000020, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_GetValidValue_ReturnValue) == 0x000024, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000025, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, Temp_byte_Variable) == 0x000026, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, Temp_byte_Variable_1) == 0x000027, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, K2Node_Select_Default) == 0x000030, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item) == 0x000038, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::K2Node_DynamicCast_AsMap_Widget_Func_Icon_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_GetChildrenCount_ReturnValue) == 0x000044, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004C, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_FuncIconList_C_SetFuncIconVisibility, CallFunc_BooleanAND_ReturnValue) == 0x00004D, "Member 'MapWidget_FuncIconList_C_SetFuncIconVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

