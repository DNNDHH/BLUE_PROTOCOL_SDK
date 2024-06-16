#pragma once

 

// Package: InheritButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function InheritButtonView.InheritButtonView_C.ExecuteUbergraph_InheritButtonView
// 0x0004 (0x0004 - 0x0000)
struct InheritButtonView_C_ExecuteUbergraph_InheritButtonView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InheritButtonView_C_ExecuteUbergraph_InheritButtonView) == 0x000004, "Wrong alignment on InheritButtonView_C_ExecuteUbergraph_InheritButtonView");
static_assert(sizeof(InheritButtonView_C_ExecuteUbergraph_InheritButtonView) == 0x000004, "Wrong size on InheritButtonView_C_ExecuteUbergraph_InheritButtonView");
static_assert(offsetof(InheritButtonView_C_ExecuteUbergraph_InheritButtonView, EntryPoint) == 0x000000, "Member 'InheritButtonView_C_ExecuteUbergraph_InheritButtonView::EntryPoint' has a wrong offset!");

// Function InheritButtonView.InheritButtonView_C.UpdateSlot
// 0x02A8 (0x02A8 - 0x0000)
struct InheritButtonView_C_UpdateSlot final
{
public:
	int32                                         RemainSlotNum;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69A6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           FusionedData;                                      // 0x0008(0x0118)(Edit, BlueprintVisible)
	TArray<class UInheritButtonViewPerkListItem_C*> SlotAry;                                           // 0x0120(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69A7[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_GenerateStackBItemBase_ReturnValue;       // 0x0148(0x0118)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69A8[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInheritButtonViewPerkListItem_C*       CallFunc_Array_Get_Item;                           // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x0275(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69A9[0x2];                                     // 0x0276(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x0278(0x0018)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69AA[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInheritButtonViewPerkListItem_C*> K2Node_MakeArray_Array;                            // 0x0298(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(InheritButtonView_C_UpdateSlot) == 0x000008, "Wrong alignment on InheritButtonView_C_UpdateSlot");
static_assert(sizeof(InheritButtonView_C_UpdateSlot) == 0x0002A8, "Wrong size on InheritButtonView_C_UpdateSlot");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, RemainSlotNum) == 0x000000, "Member 'InheritButtonView_C_UpdateSlot::RemainSlotNum' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, FusionedData) == 0x000008, "Member 'InheritButtonView_C_UpdateSlot::FusionedData' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, SlotAry) == 0x000120, "Member 'InheritButtonView_C_UpdateSlot::SlotAry' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, Temp_int_Array_Index_Variable) == 0x000130, "Member 'InheritButtonView_C_UpdateSlot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, Temp_int_Loop_Counter_Variable) == 0x000134, "Member 'InheritButtonView_C_UpdateSlot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000138, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Add_IntInt_ReturnValue) == 0x00013C, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Greater_IntInt_ReturnValue) == 0x000140, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, Temp_int_Variable) == 0x000144, "Member 'InheritButtonView_C_UpdateSlot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_GenerateStackBItemBase_ReturnValue) == 0x000148, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_GenerateStackBItemBase_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000260, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Array_Get_Item) == 0x000268, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Array_Length_ReturnValue) == 0x000270, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Less_IntInt_ReturnValue) == 0x000274, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_FindFusionItemMaster_IsValid) == 0x000275, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x000278, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000290, "Member 'InheritButtonView_C_UpdateSlot::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateSlot, K2Node_MakeArray_Array) == 0x000298, "Member 'InheritButtonView_C_UpdateSlot::K2Node_MakeArray_Array' has a wrong offset!");

// Function InheritButtonView.InheritButtonView_C.UpdateVitalPerkName
// 0x0048 (0x0048 - 0x0000)
struct InheritButtonView_C_UpdateVitalPerkName final
{
public:
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69AB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(InheritButtonView_C_UpdateVitalPerkName) == 0x000008, "Wrong alignment on InheritButtonView_C_UpdateVitalPerkName");
static_assert(sizeof(InheritButtonView_C_UpdateVitalPerkName) == 0x000048, "Wrong size on InheritButtonView_C_UpdateVitalPerkName");
static_assert(offsetof(InheritButtonView_C_UpdateVitalPerkName, CallFunc_GetItemLevel_ReturnValue) == 0x000000, "Member 'InheritButtonView_C_UpdateVitalPerkName::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateVitalPerkName, CallFunc_SetSpecialEffectText_SpecialName) == 0x000008, "Member 'InheritButtonView_C_UpdateVitalPerkName::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateVitalPerkName, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000018, "Member 'InheritButtonView_C_UpdateVitalPerkName::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_UpdateVitalPerkName, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'InheritButtonView_C_UpdateVitalPerkName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function InheritButtonView.InheritButtonView_C.SetData
// 0x0250 (0x0250 - 0x0000)
struct InheritButtonView_C_SetData final
{
public:
	struct FOwnItemInfo                           Param_SpecialPerk;                                 // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FSBStackBPerk>                  Param_SelectPerks;                                 // 0x0118(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOwnItemInfo                           Param_Target;                                      // 0x0128(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FOwnItemInfo>                   Param_Materials;                                   // 0x0240(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(InheritButtonView_C_SetData) == 0x000008, "Wrong alignment on InheritButtonView_C_SetData");
static_assert(sizeof(InheritButtonView_C_SetData) == 0x000250, "Wrong size on InheritButtonView_C_SetData");
static_assert(offsetof(InheritButtonView_C_SetData, Param_SpecialPerk) == 0x000000, "Member 'InheritButtonView_C_SetData::Param_SpecialPerk' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_SetData, Param_SelectPerks) == 0x000118, "Member 'InheritButtonView_C_SetData::Param_SelectPerks' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_SetData, Param_Target) == 0x000128, "Member 'InheritButtonView_C_SetData::Param_Target' has a wrong offset!");
static_assert(offsetof(InheritButtonView_C_SetData, Param_Materials) == 0x000240, "Member 'InheritButtonView_C_SetData::Param_Materials' has a wrong offset!");

}

