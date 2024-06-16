#pragma once

 

// Package: AwardIconItemList

#include "Basic.hpp"


namespace SDK::Params
{

// Function AwardIconItemList.AwardIconItemList_C.ClickedBtnAwardItemIcon__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature final
{
public:
	int32                                         AwardId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature) == 0x000004, "Wrong alignment on AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature");
static_assert(sizeof(AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature) == 0x000004, "Wrong size on AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature");
static_assert(offsetof(AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature, AwardId) == 0x000000, "Member 'AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature::AwardId' has a wrong offset!");

// Function AwardIconItemList.AwardIconItemList_C.ExecuteUbergraph_AwardIconItemList
// 0x00C0 (0x00C0 - 0x0000)
struct AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outAwardId_2;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outAwardId_1;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_outAwardId;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5338[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_InAwardIdList;                  // 0x0030(0x0010)(ConstParm, ReferenceParm)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5339[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_533A[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAwardIconItem_C*                       K2Node_DynamicCast_AsAward_Icon_Item;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_533B[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue_1;             // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_533C[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAwardIconItem_C*                       K2Node_DynamicCast_AsAward_Icon_Item_1;            // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_533D[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_533E[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
};
static_assert(alignof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList) == 0x000008, "Wrong alignment on AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList");
static_assert(sizeof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList) == 0x0000C0, "Wrong size on AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, EntryPoint) == 0x000000, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::EntryPoint' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, Temp_int_Loop_Counter_Variable_1) == 0x000008, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, Temp_int_Array_Index_Variable) == 0x000014, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, Temp_int_Variable) == 0x00001C, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_ComponentBoundEvent_outAwardId_2) == 0x000020, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_ComponentBoundEvent_outAwardId_2' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_ComponentBoundEvent_outAwardId_1) == 0x000024, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_ComponentBoundEvent_outAwardId_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_ComponentBoundEvent_outAwardId) == 0x000028, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_ComponentBoundEvent_outAwardId' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_CustomEvent_InAwardIdList) == 0x000030, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_CustomEvent_InAwardIdList' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_GetAllChildren_ReturnValue) == 0x000040, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_CustomEvent_IsEnable) == 0x000050, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_CustomEvent_IsEnable' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Array_Get_Item) == 0x000058, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_DynamicCast_AsAward_Icon_Item) == 0x000068, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_DynamicCast_AsAward_Icon_Item' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Less_IntInt_ReturnValue) == 0x000071, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_GetAllChildren_ReturnValue_1) == 0x000078, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_GetAllChildren_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_DynamicCast_AsAward_Icon_Item_1) == 0x000098, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_DynamicCast_AsAward_Icon_Item_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A1, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Array_Length_ReturnValue_2) == 0x0000A4, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000A8, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList, K2Node_MakeArray_Array) == 0x0000B0, "Member 'AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList::K2Node_MakeArray_Array' has a wrong offset!");

// Function AwardIconItemList.AwardIconItemList_C.SetBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct AwardIconItemList_C_SetBtnEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AwardIconItemList_C_SetBtnEnable) == 0x000001, "Wrong alignment on AwardIconItemList_C_SetBtnEnable");
static_assert(sizeof(AwardIconItemList_C_SetBtnEnable) == 0x000001, "Wrong size on AwardIconItemList_C_SetBtnEnable");
static_assert(offsetof(AwardIconItemList_C_SetBtnEnable, IsEnable) == 0x000000, "Member 'AwardIconItemList_C_SetBtnEnable::IsEnable' has a wrong offset!");

// Function AwardIconItemList.AwardIconItemList_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct AwardIconItemList_C_SetData final
{
public:
	TArray<int32>                                 InAwardIdList;                                     // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AwardIconItemList_C_SetData) == 0x000008, "Wrong alignment on AwardIconItemList_C_SetData");
static_assert(sizeof(AwardIconItemList_C_SetData) == 0x000010, "Wrong size on AwardIconItemList_C_SetData");
static_assert(offsetof(AwardIconItemList_C_SetData, InAwardIdList) == 0x000000, "Member 'AwardIconItemList_C_SetData::InAwardIdList' has a wrong offset!");

// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature final
{
public:
	int32                                         OutAwardId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong alignment on AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature");
static_assert(sizeof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong size on AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature");
static_assert(offsetof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature, OutAwardId) == 0x000000, "Member 'AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature::OutAwardId' has a wrong offset!");

// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature final
{
public:
	int32                                         OutAwardId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong alignment on AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature");
static_assert(sizeof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong size on AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature");
static_assert(offsetof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature, OutAwardId) == 0x000000, "Member 'AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature::OutAwardId' has a wrong offset!");

// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature final
{
public:
	int32                                         OutAwardId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong alignment on AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature");
static_assert(sizeof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature) == 0x000004, "Wrong size on AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature");
static_assert(offsetof(AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature, OutAwardId) == 0x000000, "Member 'AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature::OutAwardId' has a wrong offset!");

}

