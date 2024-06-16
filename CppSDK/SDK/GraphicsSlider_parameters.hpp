#pragma once

 

// Package: GraphicsSlider

#include "Basic.hpp"


namespace SDK::Params
{

// Function GraphicsSlider.GraphicsSlider_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GraphicsSlider_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GraphicsSlider_C_PreConstruct) == 0x000001, "Wrong alignment on GraphicsSlider_C_PreConstruct");
static_assert(sizeof(GraphicsSlider_C_PreConstruct) == 0x000001, "Wrong size on GraphicsSlider_C_PreConstruct");
static_assert(offsetof(GraphicsSlider_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GraphicsSlider_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function GraphicsSlider.GraphicsSlider_C.OnChangeSignature
// 0x0008 (0x0008 - 0x0000)
struct GraphicsSlider_C_OnChangeSignature final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GraphicsSlider_C_OnChangeSignature) == 0x000004, "Wrong alignment on GraphicsSlider_C_OnChangeSignature");
static_assert(sizeof(GraphicsSlider_C_OnChangeSignature) == 0x000008, "Wrong size on GraphicsSlider_C_OnChangeSignature");
static_assert(offsetof(GraphicsSlider_C_OnChangeSignature, NewValue) == 0x000000, "Member 'GraphicsSlider_C_OnChangeSignature::NewValue' has a wrong offset!");
static_assert(offsetof(GraphicsSlider_C_OnChangeSignature, Ratio) == 0x000004, "Member 'GraphicsSlider_C_OnChangeSignature::Ratio' has a wrong offset!");

// Function GraphicsSlider.GraphicsSlider_C.ExecuteUbergraph_GraphicsSlider
// 0x0020 (0x0020 - 0x0000)
struct GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewValue, float Ratio)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669D[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NewValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Ratio;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider) == 0x000004, "Wrong alignment on GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider");
static_assert(sizeof(GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider) == 0x000020, "Wrong size on GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider");
static_assert(offsetof(GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider, EntryPoint) == 0x000000, "Member 'GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider, K2Node_Event_IsDesignTime) == 0x000014, "Member 'GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider, K2Node_CustomEvent_NewValue) == 0x000018, "Member 'GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider, K2Node_CustomEvent_Ratio) == 0x00001C, "Member 'GraphicsSlider_C_ExecuteUbergraph_GraphicsSlider::K2Node_CustomEvent_Ratio' has a wrong offset!");

// Function GraphicsSlider.GraphicsSlider_C.OnGraphicsChanged__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct GraphicsSlider_C_OnGraphicsChanged__DelegateSignature final
{
public:
	int32                                         New_Value;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GraphicsSlider_C_OnGraphicsChanged__DelegateSignature) == 0x000004, "Wrong alignment on GraphicsSlider_C_OnGraphicsChanged__DelegateSignature");
static_assert(sizeof(GraphicsSlider_C_OnGraphicsChanged__DelegateSignature) == 0x00000C, "Wrong size on GraphicsSlider_C_OnGraphicsChanged__DelegateSignature");
static_assert(offsetof(GraphicsSlider_C_OnGraphicsChanged__DelegateSignature, New_Value) == 0x000000, "Member 'GraphicsSlider_C_OnGraphicsChanged__DelegateSignature::New_Value' has a wrong offset!");
static_assert(offsetof(GraphicsSlider_C_OnGraphicsChanged__DelegateSignature, Ratio) == 0x000004, "Member 'GraphicsSlider_C_OnGraphicsChanged__DelegateSignature::Ratio' has a wrong offset!");
static_assert(offsetof(GraphicsSlider_C_OnGraphicsChanged__DelegateSignature, Param_Index) == 0x000008, "Member 'GraphicsSlider_C_OnGraphicsChanged__DelegateSignature::Param_Index' has a wrong offset!");

}

