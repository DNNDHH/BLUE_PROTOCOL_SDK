#pragma once

 

// Package: Effect_Drink

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Effect_Drink.Effect_Drink_C.ExecuteUbergraph_Effect_Drink
// 0x0120 (0x0120 - 0x0000)
struct Effect_Drink_C_ExecuteUbergraph_Effect_Drink final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56E2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Name;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Value;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLiquidMemoryEfficacyValueType              K2Node_CustomEvent_EffucaryValueType;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56E3[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FString                                 K2Node_CustomEvent_InString;                       // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0078(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00A0(0x0028)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56E4[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0108(0x0018)()
};
static_assert(alignof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink) == 0x000008, "Wrong alignment on Effect_Drink_C_ExecuteUbergraph_Effect_Drink");
static_assert(sizeof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink) == 0x000120, "Wrong size on Effect_Drink_C_ExecuteUbergraph_Effect_Drink");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, EntryPoint) == 0x000000, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::EntryPoint' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_CustomEvent_Name) == 0x000008, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_CustomEvent_Value) == 0x000018, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_CustomEvent_EffucaryValueType) == 0x00001C, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_CustomEvent_EffucaryValueType' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_SwitchEnum_CmpSuccess) == 0x00001D, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, CallFunc_Conv_FloatToText_ReturnValue) == 0x000020, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_CustomEvent_InString) == 0x000050, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_CustomEvent_InString' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_MakeStruct_SlateColor) == 0x000078, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_MakeStruct_SlateColor_1) == 0x0000A0, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_Event_IsDesignTime) == 0x0000C8, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, K2Node_MakeArray_Array) == 0x0000D0, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000F8, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ExecuteUbergraph_Effect_Drink, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000108, "Member 'Effect_Drink_C_ExecuteUbergraph_Effect_Drink::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function Effect_Drink.Effect_Drink_C.NonAct iveData
// 0x0010 (0x0010 - 0x0000)
struct Effect_Drink_C_NonAct_iveData final
{
public:
	class FString                                 InString;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Drink_C_NonAct_iveData) == 0x000008, "Wrong alignment on Effect_Drink_C_NonAct_iveData");
static_assert(sizeof(Effect_Drink_C_NonAct_iveData) == 0x000010, "Wrong size on Effect_Drink_C_NonAct_iveData");
static_assert(offsetof(Effect_Drink_C_NonAct_iveData, InString) == 0x000000, "Member 'Effect_Drink_C_NonAct_iveData::InString' has a wrong offset!");

// Function Effect_Drink.Effect_Drink_C.ActiveData
// 0x0018 (0x0018 - 0x0000)
struct Effect_Drink_C_ActiveData final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLiquidMemoryEfficacyValueType              EffucaryValueType;                                 // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Drink_C_ActiveData) == 0x000008, "Wrong alignment on Effect_Drink_C_ActiveData");
static_assert(sizeof(Effect_Drink_C_ActiveData) == 0x000018, "Wrong size on Effect_Drink_C_ActiveData");
static_assert(offsetof(Effect_Drink_C_ActiveData, Param_Name) == 0x000000, "Member 'Effect_Drink_C_ActiveData::Param_Name' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ActiveData, Value) == 0x000010, "Member 'Effect_Drink_C_ActiveData::Value' has a wrong offset!");
static_assert(offsetof(Effect_Drink_C_ActiveData, EffucaryValueType) == 0x000014, "Member 'Effect_Drink_C_ActiveData::EffucaryValueType' has a wrong offset!");

// Function Effect_Drink.Effect_Drink_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Effect_Drink_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Drink_C_PreConstruct) == 0x000001, "Wrong alignment on Effect_Drink_C_PreConstruct");
static_assert(sizeof(Effect_Drink_C_PreConstruct) == 0x000001, "Wrong size on Effect_Drink_C_PreConstruct");
static_assert(offsetof(Effect_Drink_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Effect_Drink_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

