#pragma once

 

// Package: MapWidget_PinIconList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconSelected__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature final
{
public:
	EMapPinType                                   InSelectedPinType;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature) == 0x000001, "Wrong alignment on MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature");
static_assert(sizeof(MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature) == 0x000001, "Wrong size on MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature");
static_assert(offsetof(MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature, InSelectedPinType) == 0x000000, "Member 'MapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature::InSelectedPinType' has a wrong offset!");

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.ExecuteUbergraph_MapWidget_PinIconList
// 0x0110 (0x0110 - 0x0000)
struct MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMapWidget_PinEraserIconBtn_C*          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8054[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8055[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8056[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PinIconBtn_C*                CallFunc_Create_ReturnValue_1;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_PinIconBtn_C*                K2Node_CustomEvent_InPressedIcon_2;                // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8057[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PinIconBtn_C*                K2Node_CustomEvent_InPressedIcon_1;                // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue_1;    // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_PinEraserIconBtn_C*          K2Node_CustomEvent_InPressedIcon;                  // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8058[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8059[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapWidget_PinEraserIconBtn_C*          K2Node_DynamicCast_AsMap_Widget_Pin_Eraser_Icon_Btn; // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_805A[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PinIconBtn_C*                K2Node_DynamicCast_AsMap_Widget_Pin_Icon_Btn;      // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_805B[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_805C[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMapWidget_PinIconBtn_C* InPressedIcon)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UMapWidget_PinIconBtn_C* InPressedIcon)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UMapWidget_PinEraserIconBtn_C* InPressedIcon)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UMapWidget_PinEraserIconBtn_C* InPressedIcon)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetChildIndex_ReturnValue;                // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList) == 0x000008, "Wrong alignment on MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList");
static_assert(sizeof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList) == 0x000110, "Wrong size on MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, EntryPoint) == 0x000000, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000005, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_GetValidValue_ReturnValue) == 0x000006, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000007, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, Temp_int_Variable) == 0x000010, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, Temp_int_Variable_1) == 0x000014, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, Temp_int_Variable_2) == 0x000018, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000020, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_GetValidValue_ReturnValue_1) == 0x000021, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x000022, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000023, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000024, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_LessEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_LessEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_SwitchEnum_CmpSuccess) == 0x00002D, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, Temp_int_Array_Index_Variable) == 0x000038, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Create_ReturnValue_1) == 0x000040, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_CustomEvent_InPressedIcon_2) == 0x000048, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_CustomEvent_InPressedIcon_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000050, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_GetChildrenCount_ReturnValue) == 0x000058, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_MakeLiteralInt_ReturnValue) == 0x00005C, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_CustomEvent_InPressedIcon_1) == 0x000068, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_CustomEvent_InPressedIcon_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_AddChildToHorizontalBox_ReturnValue_1) == 0x000070, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_AddChildToHorizontalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_CustomEvent_InPressedIcon) == 0x000078, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_CustomEvent_InPressedIcon' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Array_Get_Item) == 0x000080, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_IsValid_ReturnValue) == 0x00008C, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008D, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, Temp_int_Variable_3) == 0x000090, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_MakeLiteralBool_ReturnValue) == 0x000094, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_GetChildAt_ReturnValue) == 0x000098, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_DynamicCast_AsMap_Widget_Pin_Eraser_Icon_Btn) == 0x0000A0, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_DynamicCast_AsMap_Widget_Pin_Eraser_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_DynamicCast_AsMap_Widget_Pin_Icon_Btn) == 0x0000B0, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_DynamicCast_AsMap_Widget_Pin_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_IsValid_ReturnValue_1) == 0x0000B9, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_IsValid_ReturnValue_2) == 0x0000BA, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_IsValid_ReturnValue_3) == 0x0000C0, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C1, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C4, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D8, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E8, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000F8, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList, CallFunc_GetChildIndex_ReturnValue) == 0x000108, "Member 'MapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinEraserIconBtnPressed
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PinIconList_C_OnPinEraserIconBtnPressed final
{
public:
	class UMapWidget_PinEraserIconBtn_C*          InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinIconList_C_OnPinEraserIconBtnPressed) == 0x000008, "Wrong alignment on MapWidget_PinIconList_C_OnPinEraserIconBtnPressed");
static_assert(sizeof(MapWidget_PinIconList_C_OnPinEraserIconBtnPressed) == 0x000008, "Wrong size on MapWidget_PinIconList_C_OnPinEraserIconBtnPressed");
static_assert(offsetof(MapWidget_PinIconList_C_OnPinEraserIconBtnPressed, InPressedIcon) == 0x000000, "Member 'MapWidget_PinIconList_C_OnPinEraserIconBtnPressed::InPressedIcon' has a wrong offset!");

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconBtnPressed
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PinIconList_C_OnPinIconBtnPressed final
{
public:
	class UMapWidget_PinIconBtn_C*                InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinIconList_C_OnPinIconBtnPressed) == 0x000008, "Wrong alignment on MapWidget_PinIconList_C_OnPinIconBtnPressed");
static_assert(sizeof(MapWidget_PinIconList_C_OnPinIconBtnPressed) == 0x000008, "Wrong size on MapWidget_PinIconList_C_OnPinIconBtnPressed");
static_assert(offsetof(MapWidget_PinIconList_C_OnPinIconBtnPressed, InPressedIcon) == 0x000000, "Member 'MapWidget_PinIconList_C_OnPinIconBtnPressed::InPressedIcon' has a wrong offset!");

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.PinIconPressed
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_PinIconList_C_PinIconPressed final
{
public:
	class UMapWidget_PinIconBtn_C*                InPressedIcon;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_PinIconList_C_PinIconPressed) == 0x000008, "Wrong alignment on MapWidget_PinIconList_C_PinIconPressed");
static_assert(sizeof(MapWidget_PinIconList_C_PinIconPressed) == 0x000008, "Wrong size on MapWidget_PinIconList_C_PinIconPressed");
static_assert(offsetof(MapWidget_PinIconList_C_PinIconPressed, InPressedIcon) == 0x000000, "Member 'MapWidget_PinIconList_C_PinIconPressed::InPressedIcon' has a wrong offset!");

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetPinIconEnable
// 0x0040 (0x0040 - 0x0000)
struct MapWidget_PinIconList_C_SetPinIconEnable final
{
public:
	EMapPinType                                   InPinType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_805D[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_805E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_805F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PinEraserIconBtn_C*          K2Node_DynamicCast_AsMap_Widget_Pin_Eraser_Icon_Btn; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8060[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_PinIconBtn_C*                K2Node_DynamicCast_AsMap_Widget_Pin_Icon_Btn;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PinIconList_C_SetPinIconEnable) == 0x000008, "Wrong alignment on MapWidget_PinIconList_C_SetPinIconEnable");
static_assert(sizeof(MapWidget_PinIconList_C_SetPinIconEnable) == 0x000040, "Wrong size on MapWidget_PinIconList_C_SetPinIconEnable");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, InPinType) == 0x000000, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::InPinType' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, IsEnable) == 0x000001, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000002, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_GetChildrenCount_ReturnValue) == 0x000014, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, K2Node_DynamicCast_AsMap_Widget_Pin_Eraser_Icon_Btn) == 0x000020, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::K2Node_DynamicCast_AsMap_Widget_Pin_Eraser_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, K2Node_DynamicCast_AsMap_Widget_Pin_Icon_Btn) == 0x000030, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::K2Node_DynamicCast_AsMap_Widget_Pin_Icon_Btn' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetPinIconEnable, CallFunc_IsValid_ReturnValue_2) == 0x000039, "Member 'MapWidget_PinIconList_C_SetPinIconEnable::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetAllPinIconEnable
// 0x0024 (0x0024 - 0x0000)
struct MapWidget_PinIconList_C_SetAllPinIconEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIncludeEraser;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8061[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8062[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_PinIconList_C_SetAllPinIconEnable) == 0x000004, "Wrong alignment on MapWidget_PinIconList_C_SetAllPinIconEnable");
static_assert(sizeof(MapWidget_PinIconList_C_SetAllPinIconEnable) == 0x000024, "Wrong size on MapWidget_PinIconList_C_SetAllPinIconEnable");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, IsEnable) == 0x000000, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, InIncludeEraser) == 0x000001, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::InIncludeEraser' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, Temp_int_Variable) == 0x000008, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, Temp_int_Variable_1) == 0x00000C, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_PinIconList_C_SetAllPinIconEnable, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'MapWidget_PinIconList_C_SetAllPinIconEnable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

