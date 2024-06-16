#pragma once

 

// Package: SliderContainer

#include "Basic.hpp"

#include "GraphicsSliderSetting_structs.hpp"
#include "SliderContainerSetting_structs.hpp"


namespace SDK::Params
{

// Function SliderContainer.SliderContainer_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SliderContainer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SliderContainer_C_PreConstruct) == 0x000001, "Wrong alignment on SliderContainer_C_PreConstruct");
static_assert(sizeof(SliderContainer_C_PreConstruct) == 0x000001, "Wrong size on SliderContainer_C_PreConstruct");
static_assert(offsetof(SliderContainer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SliderContainer_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SliderContainer.SliderContainer_C.SetValue
// 0x0008 (0x0008 - 0x0000)
struct SliderContainer_C_SetValue final
{
public:
	EGraphicsSliderSetting                        Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EDF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NewValue;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderContainer_C_SetValue) == 0x000004, "Wrong alignment on SliderContainer_C_SetValue");
static_assert(sizeof(SliderContainer_C_SetValue) == 0x000008, "Wrong size on SliderContainer_C_SetValue");
static_assert(offsetof(SliderContainer_C_SetValue, Type) == 0x000000, "Member 'SliderContainer_C_SetValue::Type' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_SetValue, NewValue) == 0x000004, "Member 'SliderContainer_C_SetValue::NewValue' has a wrong offset!");

// Function SliderContainer.SliderContainer_C.OnChangeSlider_Deligate
// 0x000C (0x000C - 0x0000)
struct SliderContainer_C_OnChangeSlider_Deligate final
{
public:
	int32                                         New_Value;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderContainer_C_OnChangeSlider_Deligate) == 0x000004, "Wrong alignment on SliderContainer_C_OnChangeSlider_Deligate");
static_assert(sizeof(SliderContainer_C_OnChangeSlider_Deligate) == 0x00000C, "Wrong size on SliderContainer_C_OnChangeSlider_Deligate");
static_assert(offsetof(SliderContainer_C_OnChangeSlider_Deligate, New_Value) == 0x000000, "Member 'SliderContainer_C_OnChangeSlider_Deligate::New_Value' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_OnChangeSlider_Deligate, Ratio) == 0x000004, "Member 'SliderContainer_C_OnChangeSlider_Deligate::Ratio' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_OnChangeSlider_Deligate, Param_Index) == 0x000008, "Member 'SliderContainer_C_OnChangeSlider_Deligate::Param_Index' has a wrong offset!");

// Function SliderContainer.SliderContainer_C.ExecuteUbergraph_SliderContainer
// 0x00D0 (0x00D0 - 0x0000)
struct SliderContainer_C_ExecuteUbergraph_SliderContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 New_Value, float Ratio, int32 Index)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGraphicsSlider_C*                      CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextWidget_C*                          CallFunc_Create_ReturnValue_1;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EE0[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderContainerSetting                CallFunc_Array_Get_Item;                           // 0x0048(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EE1[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        K2Node_CustomEvent_Type;                           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EE2[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NewValue;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_New_Value;                      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Ratio;                          // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EE3[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EGraphicsSliderSetting>                CallFunc_Map_Keys_Keys;                            // 0x0098(0x0010)(ReferenceParm)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EE4[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGraphicsSlider_C*                      K2Node_DynamicCast_AsGraphics_Slider;              // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EE5[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SliderContainer_C_ExecuteUbergraph_SliderContainer) == 0x000008, "Wrong alignment on SliderContainer_C_ExecuteUbergraph_SliderContainer");
static_assert(sizeof(SliderContainer_C_ExecuteUbergraph_SliderContainer) == 0x0000D0, "Wrong size on SliderContainer_C_ExecuteUbergraph_SliderContainer");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, EntryPoint) == 0x000000, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, Temp_int_Array_Index_Variable) == 0x000008, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Add_IntInt_ReturnValue_2) == 0x000028, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Create_ReturnValue) == 0x000030, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Create_ReturnValue_1) == 0x000038, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, Temp_int_Variable) == 0x000040, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_Event_IsDesignTime) == 0x000044, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Array_Get_Item) == 0x000048, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_AddChild_ReturnValue) == 0x000068, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_CustomEvent_Type) == 0x000070, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_CustomEvent_NewValue) == 0x000074, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_AddChild_ReturnValue_1) == 0x000078, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_CustomEvent_New_Value) == 0x000080, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_CustomEvent_New_Value' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_CustomEvent_Ratio) == 0x000084, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_CustomEvent_Ratio' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_CustomEvent_Index) == 0x000088, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Map_Find_Value) == 0x00008C, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Map_Find_ReturnValue) == 0x000090, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000091, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Map_Keys_Keys) == 0x000098, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_GetChildAt_ReturnValue) == 0x0000A8, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_DynamicCast_AsGraphics_Slider) == 0x0000B8, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_DynamicCast_AsGraphics_Slider' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Array_Length_ReturnValue_1) == 0x0000C4, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_ExecuteUbergraph_SliderContainer, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C8, "Member 'SliderContainer_C_ExecuteUbergraph_SliderContainer::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function SliderContainer.SliderContainer_C.OnChangeSlider__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct SliderContainer_C_OnChangeSlider__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGraphicsSliderSetting                        Type;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SliderContainer_C_OnChangeSlider__DelegateSignature) == 0x000004, "Wrong alignment on SliderContainer_C_OnChangeSlider__DelegateSignature");
static_assert(sizeof(SliderContainer_C_OnChangeSlider__DelegateSignature) == 0x00000C, "Wrong size on SliderContainer_C_OnChangeSlider__DelegateSignature");
static_assert(offsetof(SliderContainer_C_OnChangeSlider__DelegateSignature, Value) == 0x000000, "Member 'SliderContainer_C_OnChangeSlider__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_OnChangeSlider__DelegateSignature, Ratio) == 0x000004, "Member 'SliderContainer_C_OnChangeSlider__DelegateSignature::Ratio' has a wrong offset!");
static_assert(offsetof(SliderContainer_C_OnChangeSlider__DelegateSignature, Type) == 0x000008, "Member 'SliderContainer_C_OnChangeSlider__DelegateSignature::Type' has a wrong offset!");

}

