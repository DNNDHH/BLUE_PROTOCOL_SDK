#pragma once

 

// Package: ImagineAbilityView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineAbilityView.ImagineAbilityView_C.OnSelect__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct ImagineAbilityView_C_OnSelect__DelegateSignature final
{
public:
	struct FOwnItemInfo                           Param_Target;                                      // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineAbilityView_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on ImagineAbilityView_C_OnSelect__DelegateSignature");
static_assert(sizeof(ImagineAbilityView_C_OnSelect__DelegateSignature) == 0x000118, "Wrong size on ImagineAbilityView_C_OnSelect__DelegateSignature");
static_assert(offsetof(ImagineAbilityView_C_OnSelect__DelegateSignature, Param_Target) == 0x000000, "Member 'ImagineAbilityView_C_OnSelect__DelegateSignature::Param_Target' has a wrong offset!");

// Function ImagineAbilityView.ImagineAbilityView_C.ExecuteUbergraph_ImagineAbilityView
// 0x01A0 (0x01A0 - 0x0000)
struct ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CA8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityInfoDescView_C*                 K2Node_DynamicCast_AsAbility_Info_Desc_View;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CA9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetAbility_Info;                          // 0x0020(0x0118)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0138(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0160(0x0028)()
	class UObject*                                K2Node_ComponentBoundEvent_Item_1;                 // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsHovered;             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CAA[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView) == 0x000008, "Wrong alignment on ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView");
static_assert(sizeof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView) == 0x0001A0, "Wrong size on ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, EntryPoint) == 0x000000, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, CallFunc_BP_GetSelectedItem_ReturnValue) == 0x000008, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::CallFunc_BP_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, K2Node_DynamicCast_AsAbility_Info_Desc_View) == 0x000010, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::K2Node_DynamicCast_AsAbility_Info_Desc_View' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, CallFunc_GetAbility_Info) == 0x000020, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::CallFunc_GetAbility_Info' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, K2Node_MakeStruct_SlateColor) == 0x000138, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, K2Node_MakeStruct_SlateColor_1) == 0x000160, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, K2Node_ComponentBoundEvent_Item_1) == 0x000188, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::K2Node_ComponentBoundEvent_Item_1' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, K2Node_ComponentBoundEvent_bIsHovered) == 0x000190, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::K2Node_ComponentBoundEvent_bIsHovered' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView, K2Node_ComponentBoundEvent_Item) == 0x000198, "Member 'ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView::K2Node_ComponentBoundEvent_Item' has a wrong offset!");

// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong alignment on ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature");
static_assert(sizeof(ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong size on ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature");
static_assert(offsetof(ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature, Item) == 0x000000, "Member 'ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature::Item' has a wrong offset!");

// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHovered;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");
static_assert(sizeof(ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");
static_assert(offsetof(ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature, Item) == 0x000000, "Member 'ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature, bIsHovered) == 0x000008, "Member 'ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature::bIsHovered' has a wrong offset!");

// Function ImagineAbilityView.ImagineAbilityView_C.GenerateList
// 0x0158 (0x0158 - 0x0000)
struct ImagineAbilityView_C_GenerateList final
{
public:
	TArray<struct FOwnItemInfo>                   LocalItems;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6CAB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityInfoDescView_C*                 CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0028(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CAC[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   K2Node_MakeArray_Array;                            // 0x0148(0x0010)(ReferenceParm)
};
static_assert(alignof(ImagineAbilityView_C_GenerateList) == 0x000008, "Wrong alignment on ImagineAbilityView_C_GenerateList");
static_assert(sizeof(ImagineAbilityView_C_GenerateList) == 0x000158, "Wrong size on ImagineAbilityView_C_GenerateList");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, LocalItems) == 0x000000, "Member 'ImagineAbilityView_C_GenerateList::LocalItems' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'ImagineAbilityView_C_GenerateList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'ImagineAbilityView_C_GenerateList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ImagineAbilityView_C_GenerateList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'ImagineAbilityView_C_GenerateList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, CallFunc_Array_Get_Item) == 0x000028, "Member 'ImagineAbilityView_C_GenerateList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'ImagineAbilityView_C_GenerateList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'ImagineAbilityView_C_GenerateList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineAbilityView_C_GenerateList, K2Node_MakeArray_Array) == 0x000148, "Member 'ImagineAbilityView_C_GenerateList::K2Node_MakeArray_Array' has a wrong offset!");

}

