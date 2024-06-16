#pragma once

 

// Package: ContainerGridView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryData_structs.hpp"


namespace SDK::Params
{

// Function ContainerGridView.ContainerGridView_C.SelectedItem__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct ContainerGridView_C_SelectedItem__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectItem;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ContainerGridView_C_SelectedItem__DelegateSignature) == 0x000008, "Wrong alignment on ContainerGridView_C_SelectedItem__DelegateSignature");
static_assert(sizeof(ContainerGridView_C_SelectedItem__DelegateSignature) == 0x000118, "Wrong size on ContainerGridView_C_SelectedItem__DelegateSignature");
static_assert(offsetof(ContainerGridView_C_SelectedItem__DelegateSignature, SelectItem) == 0x000000, "Member 'ContainerGridView_C_SelectedItem__DelegateSignature::SelectItem' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.ExecuteUbergraph_ContainerGridView
// 0x0138 (0x0138 - 0x0000)
struct ContainerGridView_C_ExecuteUbergraph_ContainerGridView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DAF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_CustomEvent_OnSelectedBtn;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   K2Node_CustomEvent_Filters;                        // 0x0010(0x0010)(ReferenceParm)
	struct FOwnItemInfo                           CallFunc_Find_IconBtn_To_OwnItem_FindedItem;       // 0x0020(0x0118)()
};
static_assert(alignof(ContainerGridView_C_ExecuteUbergraph_ContainerGridView) == 0x000008, "Wrong alignment on ContainerGridView_C_ExecuteUbergraph_ContainerGridView");
static_assert(sizeof(ContainerGridView_C_ExecuteUbergraph_ContainerGridView) == 0x000138, "Wrong size on ContainerGridView_C_ExecuteUbergraph_ContainerGridView");
static_assert(offsetof(ContainerGridView_C_ExecuteUbergraph_ContainerGridView, EntryPoint) == 0x000000, "Member 'ContainerGridView_C_ExecuteUbergraph_ContainerGridView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_ExecuteUbergraph_ContainerGridView, K2Node_CustomEvent_OnSelectedBtn) == 0x000008, "Member 'ContainerGridView_C_ExecuteUbergraph_ContainerGridView::K2Node_CustomEvent_OnSelectedBtn' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_ExecuteUbergraph_ContainerGridView, K2Node_CustomEvent_Filters) == 0x000010, "Member 'ContainerGridView_C_ExecuteUbergraph_ContainerGridView::K2Node_CustomEvent_Filters' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_ExecuteUbergraph_ContainerGridView, CallFunc_Find_IconBtn_To_OwnItem_FindedItem) == 0x000020, "Member 'ContainerGridView_C_ExecuteUbergraph_ContainerGridView::CallFunc_Find_IconBtn_To_OwnItem_FindedItem' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetFilter
// 0x0010 (0x0010 - 0x0000)
struct ContainerGridView_C_SetFilter final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ContainerGridView_C_SetFilter) == 0x000008, "Wrong alignment on ContainerGridView_C_SetFilter");
static_assert(sizeof(ContainerGridView_C_SetFilter) == 0x000010, "Wrong size on ContainerGridView_C_SetFilter");
static_assert(offsetof(ContainerGridView_C_SetFilter, Param_Filters) == 0x000000, "Member 'ContainerGridView_C_SetFilter::Param_Filters' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.OnSelectedIcon
// 0x0008 (0x0008 - 0x0000)
struct ContainerGridView_C_OnSelectedIcon final
{
public:
	class UItemIconBtn_C*                         OnSelectedBtn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_OnSelectedIcon) == 0x000008, "Wrong alignment on ContainerGridView_C_OnSelectedIcon");
static_assert(sizeof(ContainerGridView_C_OnSelectedIcon) == 0x000008, "Wrong size on ContainerGridView_C_OnSelectedIcon");
static_assert(offsetof(ContainerGridView_C_OnSelectedIcon, OnSelectedBtn) == 0x000000, "Member 'ContainerGridView_C_OnSelectedIcon::OnSelectedBtn' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.Set Target
// 0x0008 (0x0008 - 0x0000)
struct ContainerGridView_C_Set_Target final
{
public:
	class USBTemporallyStorage*                   Param_TargetContainer;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_Set_Target) == 0x000008, "Wrong alignment on ContainerGridView_C_Set_Target");
static_assert(sizeof(ContainerGridView_C_Set_Target) == 0x000008, "Wrong size on ContainerGridView_C_Set_Target");
static_assert(offsetof(ContainerGridView_C_Set_Target, Param_TargetContainer) == 0x000000, "Member 'ContainerGridView_C_Set_Target::Param_TargetContainer' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.GenerateIcons
// 0x05A0 (0x05A0 - 0x0000)
struct ContainerGridView_C_GenerateIcons final
{
public:
	TArray<int32>                                 Paginate_array;                                    // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FInventoryData>                 DataList;                                          // 0x0010(0x0010)(Edit, BlueprintVisible)
	class UItemIconBtn_C*                         Icon;                                              // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           Item;                                              // 0x0028(0x0118)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DB0[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0150(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DB1[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DB2[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DB3[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UItemIconBtn_C* SelectItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DB4[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DB5[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetSortedPageIndexes_ReturnValue;         // 0x0248(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_BP_GetSortedItemAt_ReturnValue;           // 0x0260(0x0118)(ConstParm)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x037C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue_1;           // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DB6[0x3];                                     // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DB7[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x03B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         CallFunc_Array_Get_Item;                           // 0x03B8(0x0098)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEffectiveStackBByUniqueIdAndContainer_ReturnValue; // 0x045A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x045B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DB8[0x4];                                     // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetItem_ReturnValue;                   // 0x0468(0x0118)(ConstParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DB9[0x3];                                     // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DBA[0x3];                                     // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue_2;           // 0x058C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DBB[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue_2;                        // 0x0594(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0598(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0599(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x059A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x059B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_GenerateIcons) == 0x000008, "Wrong alignment on ContainerGridView_C_GenerateIcons");
static_assert(sizeof(ContainerGridView_C_GenerateIcons) == 0x0005A0, "Wrong size on ContainerGridView_C_GenerateIcons");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Paginate_array) == 0x000000, "Member 'ContainerGridView_C_GenerateIcons::Paginate_array' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, DataList) == 0x000010, "Member 'ContainerGridView_C_GenerateIcons::DataList' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Icon) == 0x000020, "Member 'ContainerGridView_C_GenerateIcons::Icon' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Item) == 0x000028, "Member 'ContainerGridView_C_GenerateIcons::Item' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Temp_int_Array_Index_Variable) == 0x000140, "Member 'ContainerGridView_C_GenerateIcons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Temp_int_Variable) == 0x000144, "Member 'ContainerGridView_C_GenerateIcons::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Add_IntInt_ReturnValue) == 0x000148, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_CreateInventoryData_InventoryData) == 0x000150, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_CreateInventoryData_IsSuccess) == 0x0001E8, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Temp_int_Loop_Counter_Variable) == 0x0001EC, "Member 'ContainerGridView_C_GenerateIcons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Temp_int_Array_Index_Variable_1) == 0x0001F0, "Member 'ContainerGridView_C_GenerateIcons::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001F4, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetSBPlayerController_ReturnValue) == 0x0001F8, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000200, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000208, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetChildAt_ReturnValue) == 0x000210, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000218, "Member 'ContainerGridView_C_GenerateIcons::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, K2Node_DynamicCast_bSuccess) == 0x000220, "Member 'ContainerGridView_C_GenerateIcons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, K2Node_CreateDelegate_OutputDelegate) == 0x000224, "Member 'ContainerGridView_C_GenerateIcons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Temp_int_Loop_Counter_Variable_1) == 0x000234, "Member 'ContainerGridView_C_GenerateIcons::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Temp_bool_Variable) == 0x000238, "Member 'ContainerGridView_C_GenerateIcons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Add_IntInt_ReturnValue_2) == 0x00023C, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, Temp_bool_Variable_1) == 0x000240, "Member 'ContainerGridView_C_GenerateIcons::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetSortedPageIndexes_ReturnValue) == 0x000248, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetSortedPageIndexes_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000258, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Max_ReturnValue) == 0x00025C, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_BP_GetSortedItemAt_ReturnValue) == 0x000260, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_BP_GetSortedItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Min_ReturnValue) == 0x000378, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_SelectInt_ReturnValue) == 0x00037C, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetSotedIndexNum_ReturnValue_1) == 0x000380, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetSotedIndexNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000384, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Subtract_IntInt_ReturnValue) == 0x000388, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00038C, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000390, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_FCeil_ReturnValue) == 0x000394, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Multiply_IntInt_ReturnValue) == 0x000398, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Conv_IntToString_ReturnValue) == 0x0003A0, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetChildrenCount_ReturnValue) == 0x0003B0, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Max_ReturnValue_1) == 0x0003B4, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Array_Get_Item) == 0x0003B8, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Array_Add_ReturnValue) == 0x000450, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Array_Length_ReturnValue) == 0x000454, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Less_IntInt_ReturnValue) == 0x000458, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Not_PreBool_ReturnValue) == 0x000459, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_IsEffectiveStackBByUniqueIdAndContainer_ReturnValue) == 0x00045A, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_IsEffectiveStackBByUniqueIdAndContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Array_Contains_ReturnValue) == 0x00045B, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Array_Get_Item_1) == 0x00045C, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000460, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_BP_GetItem_ReturnValue) == 0x000468, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_BP_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Greater_IntInt_ReturnValue) == 0x000580, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Array_Length_ReturnValue_1) == 0x000584, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Less_IntInt_ReturnValue_1) == 0x000588, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_GetSotedIndexNum_ReturnValue_2) == 0x00058C, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_GetSotedIndexNum_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000590, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Max_ReturnValue_2) == 0x000594, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Max_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000598, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, K2Node_Select_Default) == 0x000599, "Member 'ContainerGridView_C_GenerateIcons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, CallFunc_IsValid_ReturnValue) == 0x00059A, "Member 'ContainerGridView_C_GenerateIcons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GenerateIcons, K2Node_Select_Default_1) == 0x00059B, "Member 'ContainerGridView_C_GenerateIcons::K2Node_Select_Default_1' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.ApplySortFilters
// 0x0018 (0x0018 - 0x0000)
struct ContainerGridView_C_ApplySortFilters final
{
public:
	TArray<struct FFilterGroup>                   ApplyFilter;                                       // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_ApplySortFilters) == 0x000008, "Wrong alignment on ContainerGridView_C_ApplySortFilters");
static_assert(sizeof(ContainerGridView_C_ApplySortFilters) == 0x000018, "Wrong size on ContainerGridView_C_ApplySortFilters");
static_assert(offsetof(ContainerGridView_C_ApplySortFilters, ApplyFilter) == 0x000000, "Member 'ContainerGridView_C_ApplySortFilters::ApplyFilter' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_ApplySortFilters, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'ContainerGridView_C_ApplySortFilters::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_ApplySortFilters, CallFunc_IsEmpty_ReturnValue) == 0x000011, "Member 'ContainerGridView_C_ApplySortFilters::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_ApplySortFilters, CallFunc_IsValid_ReturnValue) == 0x000012, "Member 'ContainerGridView_C_ApplySortFilters::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetSelectedAll
// 0x0030 (0x0030 - 0x0000)
struct ContainerGridView_C_SetSelectedAll final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DBC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DBD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DBE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DBF[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_SetSelectedAll) == 0x000008, "Wrong alignment on ContainerGridView_C_SetSelectedAll");
static_assert(sizeof(ContainerGridView_C_SetSelectedAll) == 0x000030, "Wrong size on ContainerGridView_C_SetSelectedAll");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, Selected) == 0x000000, "Member 'ContainerGridView_C_SetSelectedAll::Selected' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, Temp_int_Variable) == 0x000004, "Member 'ContainerGridView_C_SetSelectedAll::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'ContainerGridView_C_SetSelectedAll::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'ContainerGridView_C_SetSelectedAll::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000018, "Member 'ContainerGridView_C_SetSelectedAll::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ContainerGridView_C_SetSelectedAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'ContainerGridView_C_SetSelectedAll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'ContainerGridView_C_SetSelectedAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetSelectedAll, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'ContainerGridView_C_SetSelectedAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetBaseFilterSimple
// 0x0028 (0x0028 - 0x0000)
struct ContainerGridView_C_SetBaseFilterSimple final
{
public:
	EItemFilterType                               Filter;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DC0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterGroup                           AddFilter;                                         // 0x0008(0x0010)(Edit, BlueprintVisible)
	struct FFilterGroup                           CallFunc_AddFilter_ReturnValue;                    // 0x0018(0x0010)()
};
static_assert(alignof(ContainerGridView_C_SetBaseFilterSimple) == 0x000008, "Wrong alignment on ContainerGridView_C_SetBaseFilterSimple");
static_assert(sizeof(ContainerGridView_C_SetBaseFilterSimple) == 0x000028, "Wrong size on ContainerGridView_C_SetBaseFilterSimple");
static_assert(offsetof(ContainerGridView_C_SetBaseFilterSimple, Filter) == 0x000000, "Member 'ContainerGridView_C_SetBaseFilterSimple::Filter' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetBaseFilterSimple, AddFilter) == 0x000008, "Member 'ContainerGridView_C_SetBaseFilterSimple::AddFilter' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetBaseFilterSimple, CallFunc_AddFilter_ReturnValue) == 0x000018, "Member 'ContainerGridView_C_SetBaseFilterSimple::CallFunc_AddFilter_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetBaseFilterCustom
// 0x0018 (0x0018 - 0x0000)
struct ContainerGridView_C_SetBaseFilterCustom final
{
public:
	struct FFilterGroup                           Filter;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_SetBaseFilterCustom) == 0x000008, "Wrong alignment on ContainerGridView_C_SetBaseFilterCustom");
static_assert(sizeof(ContainerGridView_C_SetBaseFilterCustom) == 0x000018, "Wrong size on ContainerGridView_C_SetBaseFilterCustom");
static_assert(offsetof(ContainerGridView_C_SetBaseFilterCustom, Filter) == 0x000000, "Member 'ContainerGridView_C_SetBaseFilterCustom::Filter' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetBaseFilterCustom, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'ContainerGridView_C_SetBaseFilterCustom::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetBaseFilteVerbose
// 0x0010 (0x0010 - 0x0000)
struct ContainerGridView_C_SetBaseFilteVerbose final
{
public:
	TArray<struct FFilterGroup>                   Param_BaseFilter;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ContainerGridView_C_SetBaseFilteVerbose) == 0x000008, "Wrong alignment on ContainerGridView_C_SetBaseFilteVerbose");
static_assert(sizeof(ContainerGridView_C_SetBaseFilteVerbose) == 0x000010, "Wrong size on ContainerGridView_C_SetBaseFilteVerbose");
static_assert(offsetof(ContainerGridView_C_SetBaseFilteVerbose, Param_BaseFilter) == 0x000000, "Member 'ContainerGridView_C_SetBaseFilteVerbose::Param_BaseFilter' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetSortType
// 0x0001 (0x0001 - 0x0000)
struct ContainerGridView_C_SetSortType final
{
public:
	ESBItemSortType                               Param_SortType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_SetSortType) == 0x000001, "Wrong alignment on ContainerGridView_C_SetSortType");
static_assert(sizeof(ContainerGridView_C_SetSortType) == 0x000001, "Wrong size on ContainerGridView_C_SetSortType");
static_assert(offsetof(ContainerGridView_C_SetSortType, Param_SortType) == 0x000000, "Member 'ContainerGridView_C_SetSortType::Param_SortType' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetNeedCount
// 0x0030 (0x0030 - 0x0000)
struct ContainerGridView_C_SetNeedCount final
{
public:
	int32                                         NeedCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DC1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DC2[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DC3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_SetNeedCount) == 0x000008, "Wrong alignment on ContainerGridView_C_SetNeedCount");
static_assert(sizeof(ContainerGridView_C_SetNeedCount) == 0x000030, "Wrong size on ContainerGridView_C_SetNeedCount");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, NeedCount) == 0x000000, "Member 'ContainerGridView_C_SetNeedCount::NeedCount' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'ContainerGridView_C_SetNeedCount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, Temp_int_Variable) == 0x000008, "Member 'ContainerGridView_C_SetNeedCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'ContainerGridView_C_SetNeedCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ContainerGridView_C_SetNeedCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'ContainerGridView_C_SetNeedCount::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, CallFunc_GetChildrenCount_ReturnValue) == 0x000020, "Member 'ContainerGridView_C_SetNeedCount::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'ContainerGridView_C_SetNeedCount::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_SetNeedCount, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'ContainerGridView_C_SetNeedCount::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.MultiSelectOverViewUpdate
// 0x0068 (0x0068 - 0x0000)
struct ContainerGridView_C_MultiSelectOverViewUpdate final
{
public:
	class UContainerGridView_C*                   GridView;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMaterialFull;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DC4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SortedIndex;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIcon;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   UpdateTargetContainer;                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DC5[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DC6[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsIconEmpty_Empty;                        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DC7[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DC8[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FindSortedIndexByUniqueId_ReturnValue;    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DC9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DCA[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_MultiSelectOverViewUpdate) == 0x000008, "Wrong alignment on ContainerGridView_C_MultiSelectOverViewUpdate");
static_assert(sizeof(ContainerGridView_C_MultiSelectOverViewUpdate) == 0x000068, "Wrong size on ContainerGridView_C_MultiSelectOverViewUpdate");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, GridView) == 0x000000, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::GridView' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, bIsMaterialFull) == 0x000008, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::bIsMaterialFull' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, SortedIndex) == 0x00000C, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::SortedIndex' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, ItemIcon) == 0x000010, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::ItemIcon' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, UpdateTargetContainer) == 0x000018, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::UpdateTargetContainer' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, Temp_bool_Variable) == 0x000020, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, Temp_int_Variable) == 0x000024, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, Temp_bool_Variable_1) == 0x000030, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_IsIconEmpty_Empty) == 0x000031, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_IsIconEmpty_Empty' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, K2Node_Select_Default) == 0x000039, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_FindSortedIndexByUniqueId_ReturnValue) == 0x000048, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_FindSortedIndexByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000050, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_GetChildrenCount_ReturnValue) == 0x00005C, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_MultiSelectOverViewUpdate, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000064, "Member 'ContainerGridView_C_MultiSelectOverViewUpdate::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetMultiSelectable
// 0x0001 (0x0001 - 0x0000)
struct ContainerGridView_C_SetMultiSelectable final
{
public:
	bool                                          Param_bIsMultiSelectable;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_SetMultiSelectable) == 0x000001, "Wrong alignment on ContainerGridView_C_SetMultiSelectable");
static_assert(sizeof(ContainerGridView_C_SetMultiSelectable) == 0x000001, "Wrong size on ContainerGridView_C_SetMultiSelectable");
static_assert(offsetof(ContainerGridView_C_SetMultiSelectable, Param_bIsMultiSelectable) == 0x000000, "Member 'ContainerGridView_C_SetMultiSelectable::Param_bIsMultiSelectable' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.AddTicket
// 0x00F8 (0x00F8 - 0x0000)
struct ContainerGridView_C_AddTicket final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalAppendNum;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalUseUnitNum;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DCB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DCC[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DCD[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    CallFunc_FindTicketData_ReturnValue;               // 0x005C(0x001C)(ConstParm, NoDestructor)
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DCE[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DCF[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue_1;           // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DD0[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSotedIndexNum_ReturnValue_2;           // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_AddTicket) == 0x000008, "Wrong alignment on ContainerGridView_C_AddTicket");
static_assert(sizeof(ContainerGridView_C_AddTicket) == 0x0000F8, "Wrong size on ContainerGridView_C_AddTicket");
static_assert(offsetof(ContainerGridView_C_AddTicket, TokenID) == 0x000000, "Member 'ContainerGridView_C_AddTicket::TokenID' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, AddNum) == 0x000004, "Member 'ContainerGridView_C_AddTicket::AddNum' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, LocalAppendNum) == 0x000008, "Member 'ContainerGridView_C_AddTicket::LocalAppendNum' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, LocalUseUnitNum) == 0x00000C, "Member 'ContainerGridView_C_AddTicket::LocalUseUnitNum' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, Temp_int_Variable) == 0x000010, "Member 'ContainerGridView_C_AddTicket::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'ContainerGridView_C_AddTicket::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ContainerGridView_C_AddTicket::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'ContainerGridView_C_AddTicket::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000030, "Member 'ContainerGridView_C_AddTicket::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000034, "Member 'ContainerGridView_C_AddTicket::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000038, "Member 'ContainerGridView_C_AddTicket::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetSBPlayerController_ReturnValue) == 0x000040, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000048, "Member 'ContainerGridView_C_AddTicket::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetStackBComponent_ReturnValue) == 0x000050, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_FCeil_ReturnValue) == 0x000058, "Member 'ContainerGridView_C_AddTicket::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_FindTicketData_ReturnValue) == 0x00005C, "Member 'ContainerGridView_C_AddTicket::CallFunc_FindTicketData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetSotedIndexNum_ReturnValue) == 0x000078, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetSotedIndexNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Add_IntInt_ReturnValue_1) == 0x00007C, "Member 'ContainerGridView_C_AddTicket::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetChildrenCount_ReturnValue) == 0x000080, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000088, "Member 'ContainerGridView_C_AddTicket::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'ContainerGridView_C_AddTicket::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A8, "Member 'ContainerGridView_C_AddTicket::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetChildAt_ReturnValue) == 0x0000B8, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C0, "Member 'ContainerGridView_C_AddTicket::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x0000D0, "Member 'ContainerGridView_C_AddTicket::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'ContainerGridView_C_AddTicket::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetSotedIndexNum_ReturnValue_1) == 0x0000DC, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetSotedIndexNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0000E0, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000E4, "Member 'ContainerGridView_C_AddTicket::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'ContainerGridView_C_AddTicket::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_GetSotedIndexNum_ReturnValue_2) == 0x0000EC, "Member 'ContainerGridView_C_AddTicket::CallFunc_GetSotedIndexNum_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000F0, "Member 'ContainerGridView_C_AddTicket::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_AddTicket, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'ContainerGridView_C_AddTicket::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.Set FilterID
// 0x0008 (0x0008 - 0x0000)
struct ContainerGridView_C_Set_FilterID final
{
public:
	int32                                         Param_FilterID;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_Set_FilterID) == 0x000004, "Wrong alignment on ContainerGridView_C_Set_FilterID");
static_assert(sizeof(ContainerGridView_C_Set_FilterID) == 0x000008, "Wrong size on ContainerGridView_C_Set_FilterID");
static_assert(offsetof(ContainerGridView_C_Set_FilterID, Param_FilterID) == 0x000000, "Member 'ContainerGridView_C_Set_FilterID::Param_FilterID' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_Set_FilterID, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ContainerGridView_C_Set_FilterID::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetDropUID
// 0x0010 (0x0010 - 0x0000)
struct ContainerGridView_C_SetDropUID final
{
public:
	class FString                                 Param_SkipUniqueId;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_SetDropUID) == 0x000008, "Wrong alignment on ContainerGridView_C_SetDropUID");
static_assert(sizeof(ContainerGridView_C_SetDropUID) == 0x000010, "Wrong size on ContainerGridView_C_SetDropUID");
static_assert(offsetof(ContainerGridView_C_SetDropUID, Param_SkipUniqueId) == 0x000000, "Member 'ContainerGridView_C_SetDropUID::Param_SkipUniqueId' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetSelectedUIDs
// 0x0010 (0x0010 - 0x0000)
struct ContainerGridView_C_SetSelectedUIDs final
{
public:
	TArray<class FString>                         Param_SelectedUIDs;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ContainerGridView_C_SetSelectedUIDs) == 0x000008, "Wrong alignment on ContainerGridView_C_SetSelectedUIDs");
static_assert(sizeof(ContainerGridView_C_SetSelectedUIDs) == 0x000010, "Wrong size on ContainerGridView_C_SetSelectedUIDs");
static_assert(offsetof(ContainerGridView_C_SetSelectedUIDs, Param_SelectedUIDs) == 0x000000, "Member 'ContainerGridView_C_SetSelectedUIDs::Param_SelectedUIDs' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.GetUsedGridNum
// 0x0040 (0x0040 - 0x0000)
struct ContainerGridView_C_GetUsedGridNum final
{
public:
	int32                                         UsedGridNum;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalUsedGridNum;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DD1[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         K2Node_DynamicCast_AsItem_Icon_Btn;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DD2[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIconEmpty_Empty;                        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DD3[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_GetUsedGridNum) == 0x000008, "Wrong alignment on ContainerGridView_C_GetUsedGridNum");
static_assert(sizeof(ContainerGridView_C_GetUsedGridNum) == 0x000040, "Wrong size on ContainerGridView_C_GetUsedGridNum");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, UsedGridNum) == 0x000000, "Member 'ContainerGridView_C_GetUsedGridNum::UsedGridNum' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, LocalUsedGridNum) == 0x000004, "Member 'ContainerGridView_C_GetUsedGridNum::LocalUsedGridNum' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, Temp_int_Variable) == 0x000008, "Member 'ContainerGridView_C_GetUsedGridNum::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, Temp_int_Variable_1) == 0x00000C, "Member 'ContainerGridView_C_GetUsedGridNum::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, K2Node_DynamicCast_AsItem_Icon_Btn) == 0x000020, "Member 'ContainerGridView_C_GetUsedGridNum::K2Node_DynamicCast_AsItem_Icon_Btn' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ContainerGridView_C_GetUsedGridNum::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_IsIconEmpty_Empty) == 0x000030, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_IsIconEmpty_Empty' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetUsedGridNum, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'ContainerGridView_C_GetUsedGridNum::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.SetPage
// 0x0004 (0x0004 - 0x0000)
struct ContainerGridView_C_SetPage final
{
public:
	int32                                         Param_Page;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ContainerGridView_C_SetPage) == 0x000004, "Wrong alignment on ContainerGridView_C_SetPage");
static_assert(sizeof(ContainerGridView_C_SetPage) == 0x000004, "Wrong size on ContainerGridView_C_SetPage");
static_assert(offsetof(ContainerGridView_C_SetPage, Param_Page) == 0x000000, "Member 'ContainerGridView_C_SetPage::Param_Page' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.GetPageMax
// 0x000C (0x000C - 0x0000)
struct ContainerGridView_C_GetPageMax final
{
public:
	int32                                         MaxPage;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxPage_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ContainerGridView_C_GetPageMax) == 0x000004, "Wrong alignment on ContainerGridView_C_GetPageMax");
static_assert(sizeof(ContainerGridView_C_GetPageMax) == 0x00000C, "Wrong size on ContainerGridView_C_GetPageMax");
static_assert(offsetof(ContainerGridView_C_GetPageMax, MaxPage) == 0x000000, "Member 'ContainerGridView_C_GetPageMax::MaxPage' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetPageMax, CallFunc_GetMaxPage_ReturnValue) == 0x000004, "Member 'ContainerGridView_C_GetPageMax::CallFunc_GetMaxPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_GetPageMax, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ContainerGridView_C_GetPageMax::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ContainerGridView.ContainerGridView_C.Find IconBtn To OwnItem
// 0x0250 (0x0250 - 0x0000)
struct ContainerGridView_C_Find_IconBtn_To_OwnItem final
{
public:
	class UItemIconBtn_C*                         FindIcon;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           FindedItem;                                        // 0x0008(0x0118)(Parm, OutParm)
	class FString                                 CallFunc_GetSelectItemUniqueID_UniqueId;           // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DD4[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0138(0x0118)(ConstParm)
};
static_assert(alignof(ContainerGridView_C_Find_IconBtn_To_OwnItem) == 0x000008, "Wrong alignment on ContainerGridView_C_Find_IconBtn_To_OwnItem");
static_assert(sizeof(ContainerGridView_C_Find_IconBtn_To_OwnItem) == 0x000250, "Wrong size on ContainerGridView_C_Find_IconBtn_To_OwnItem");
static_assert(offsetof(ContainerGridView_C_Find_IconBtn_To_OwnItem, FindIcon) == 0x000000, "Member 'ContainerGridView_C_Find_IconBtn_To_OwnItem::FindIcon' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_Find_IconBtn_To_OwnItem, FindedItem) == 0x000008, "Member 'ContainerGridView_C_Find_IconBtn_To_OwnItem::FindedItem' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_Find_IconBtn_To_OwnItem, CallFunc_GetSelectItemUniqueID_UniqueId) == 0x000120, "Member 'ContainerGridView_C_Find_IconBtn_To_OwnItem::CallFunc_GetSelectItemUniqueID_UniqueId' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_Find_IconBtn_To_OwnItem, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'ContainerGridView_C_Find_IconBtn_To_OwnItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_Find_IconBtn_To_OwnItem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000131, "Member 'ContainerGridView_C_Find_IconBtn_To_OwnItem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ContainerGridView_C_Find_IconBtn_To_OwnItem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000138, "Member 'ContainerGridView_C_Find_IconBtn_To_OwnItem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

}

