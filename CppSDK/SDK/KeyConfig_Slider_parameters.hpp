#pragma once

 

// Package: KeyConfig_Slider

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"


namespace SDK::Params
{

// Function KeyConfig_Slider.KeyConfig_Slider_C.SetChanged
// 0x0005 (0x0005 - 0x0000)
struct KeyConfig_Slider_C_SetChanged final
{
public:
	bool                                          Param_bChanged;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Slider_C_SetChanged) == 0x000001, "Wrong alignment on KeyConfig_Slider_C_SetChanged");
static_assert(sizeof(KeyConfig_Slider_C_SetChanged) == 0x000005, "Wrong size on KeyConfig_Slider_C_SetChanged");
static_assert(offsetof(KeyConfig_Slider_C_SetChanged, Param_bChanged) == 0x000000, "Member 'KeyConfig_Slider_C_SetChanged::Param_bChanged' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_SetChanged, Temp_bool_Variable) == 0x000001, "Member 'KeyConfig_Slider_C_SetChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_SetChanged, Temp_byte_Variable) == 0x000002, "Member 'KeyConfig_Slider_C_SetChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_SetChanged, Temp_byte_Variable_1) == 0x000003, "Member 'KeyConfig_Slider_C_SetChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_SetChanged, K2Node_Select_Default) == 0x000004, "Member 'KeyConfig_Slider_C_SetChanged::K2Node_Select_Default' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.GetRatio
// 0x0008 (0x0008 - 0x0000)
struct KeyConfig_Slider_C_GetRatio final
{
public:
	float                                         Ratio;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRatio_Ratio;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Slider_C_GetRatio) == 0x000004, "Wrong alignment on KeyConfig_Slider_C_GetRatio");
static_assert(sizeof(KeyConfig_Slider_C_GetRatio) == 0x000008, "Wrong size on KeyConfig_Slider_C_GetRatio");
static_assert(offsetof(KeyConfig_Slider_C_GetRatio, Ratio) == 0x000000, "Member 'KeyConfig_Slider_C_GetRatio::Ratio' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_GetRatio, CallFunc_GetRatio_Ratio) == 0x000004, "Member 'KeyConfig_Slider_C_GetRatio::CallFunc_GetRatio_Ratio' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyRatio
// 0x0004 (0x0004 - 0x0000)
struct KeyConfig_Slider_C_ApplyRatio final
{
public:
	float                                         Ratio;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Slider_C_ApplyRatio) == 0x000004, "Wrong alignment on KeyConfig_Slider_C_ApplyRatio");
static_assert(sizeof(KeyConfig_Slider_C_ApplyRatio) == 0x000004, "Wrong size on KeyConfig_Slider_C_ApplyRatio");
static_assert(offsetof(KeyConfig_Slider_C_ApplyRatio, Ratio) == 0x000000, "Member 'KeyConfig_Slider_C_ApplyRatio::Ratio' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.GetValue
// 0x0008 (0x0008 - 0x0000)
struct KeyConfig_Slider_C_GetValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_Value;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Slider_C_GetValue) == 0x000004, "Wrong alignment on KeyConfig_Slider_C_GetValue");
static_assert(sizeof(KeyConfig_Slider_C_GetValue) == 0x000008, "Wrong size on KeyConfig_Slider_C_GetValue");
static_assert(offsetof(KeyConfig_Slider_C_GetValue, Value) == 0x000000, "Member 'KeyConfig_Slider_C_GetValue::Value' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_GetValue, CallFunc_GetValue_Value) == 0x000004, "Member 'KeyConfig_Slider_C_GetValue::CallFunc_GetValue_Value' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyValue
// 0x0004 (0x0004 - 0x0000)
struct KeyConfig_Slider_C_ApplyValue final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Slider_C_ApplyValue) == 0x000004, "Wrong alignment on KeyConfig_Slider_C_ApplyValue");
static_assert(sizeof(KeyConfig_Slider_C_ApplyValue) == 0x000004, "Wrong size on KeyConfig_Slider_C_ApplyValue");
static_assert(offsetof(KeyConfig_Slider_C_ApplyValue, NewValue) == 0x000000, "Member 'KeyConfig_Slider_C_ApplyValue::NewValue' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeyConfig_Slider_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_Slider_C_PreConstruct) == 0x000001, "Wrong alignment on KeyConfig_Slider_C_PreConstruct");
static_assert(sizeof(KeyConfig_Slider_C_PreConstruct) == 0x000001, "Wrong size on KeyConfig_Slider_C_PreConstruct");
static_assert(offsetof(KeyConfig_Slider_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'KeyConfig_Slider_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.CallOnChange
// 0x0008 (0x0008 - 0x0000)
struct KeyConfig_Slider_C_CallOnChange final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Slider_C_CallOnChange) == 0x000004, "Wrong alignment on KeyConfig_Slider_C_CallOnChange");
static_assert(sizeof(KeyConfig_Slider_C_CallOnChange) == 0x000008, "Wrong size on KeyConfig_Slider_C_CallOnChange");
static_assert(offsetof(KeyConfig_Slider_C_CallOnChange, NewValue) == 0x000000, "Member 'KeyConfig_Slider_C_CallOnChange::NewValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_CallOnChange, Ratio) == 0x000004, "Member 'KeyConfig_Slider_C_CallOnChange::Ratio' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.ExecuteUbergraph_KeyConfig_Slider
// 0x0050 (0x0050 - 0x0000)
struct KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewValue, float Ratio)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63DA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_NewValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Ratio;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider) == 0x000008, "Wrong alignment on KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider");
static_assert(sizeof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider) == 0x000050, "Wrong size on KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, EntryPoint) == 0x000000, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, K2Node_Event_IsDesignTime) == 0x000014, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, K2Node_CustomEvent_NewValue) == 0x000018, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, K2Node_CustomEvent_Ratio) == 0x00001C, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::K2Node_CustomEvent_Ratio' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'KeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.onChangeValue__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct KeyConfig_Slider_C_OnChangeValue__DelegateSignature final
{
public:
	int32                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConfig_KeyconfigItems                        Param_Type;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63DB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeyConfig_Slider_C*                    Target;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyConfig_Slider_C_OnChangeValue__DelegateSignature) == 0x000008, "Wrong alignment on KeyConfig_Slider_C_OnChangeValue__DelegateSignature");
static_assert(sizeof(KeyConfig_Slider_C_OnChangeValue__DelegateSignature) == 0x000018, "Wrong size on KeyConfig_Slider_C_OnChangeValue__DelegateSignature");
static_assert(offsetof(KeyConfig_Slider_C_OnChangeValue__DelegateSignature, NewValue) == 0x000000, "Member 'KeyConfig_Slider_C_OnChangeValue__DelegateSignature::NewValue' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_OnChangeValue__DelegateSignature, Ratio) == 0x000004, "Member 'KeyConfig_Slider_C_OnChangeValue__DelegateSignature::Ratio' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_OnChangeValue__DelegateSignature, Param_Type) == 0x000008, "Member 'KeyConfig_Slider_C_OnChangeValue__DelegateSignature::Param_Type' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_OnChangeValue__DelegateSignature, Target) == 0x000010, "Member 'KeyConfig_Slider_C_OnChangeValue__DelegateSignature::Target' has a wrong offset!");

// Function KeyConfig_Slider.KeyConfig_Slider_C.IsChangeBefore
// 0x0003 (0x0003 - 0x0000)
struct KeyConfig_Slider_C_IsChangeBefore final
{
public:
	bool                                          ChangeBefore;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEqualBefore_Equal;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyConfig_Slider_C_IsChangeBefore) == 0x000001, "Wrong alignment on KeyConfig_Slider_C_IsChangeBefore");
static_assert(sizeof(KeyConfig_Slider_C_IsChangeBefore) == 0x000003, "Wrong size on KeyConfig_Slider_C_IsChangeBefore");
static_assert(offsetof(KeyConfig_Slider_C_IsChangeBefore, ChangeBefore) == 0x000000, "Member 'KeyConfig_Slider_C_IsChangeBefore::ChangeBefore' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_IsChangeBefore, CallFunc_IsEqualBefore_Equal) == 0x000001, "Member 'KeyConfig_Slider_C_IsChangeBefore::CallFunc_IsEqualBefore_Equal' has a wrong offset!");
static_assert(offsetof(KeyConfig_Slider_C_IsChangeBefore, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'KeyConfig_Slider_C_IsChangeBefore::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

