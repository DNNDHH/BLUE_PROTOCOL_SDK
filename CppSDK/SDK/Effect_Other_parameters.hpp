#pragma once

 

// Package: Effect_Other

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Effect_Other.Effect_Other_C.ExecuteUbergraph_Effect_Other
// 0x00A0 (0x00A0 - 0x0000)
struct Effect_Other_C_ExecuteUbergraph_Effect_Other final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A9A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	class FText                                   K2Node_CustomEvent_Category;                       // 0x0030(0x0018)()
	class FText                                   K2Node_CustomEvent_Name;                           // 0x0048(0x0018)()
	class FText                                   K2Node_CustomEvent_Value;                          // 0x0060(0x0018)()
	bool                                          K2Node_CustomEvent_bValidTime;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A9B[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_LimitTime_1;                    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Permanent;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A9C[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_LimitTime;                      // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue_1;                // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Other_C_ExecuteUbergraph_Effect_Other) == 0x000008, "Wrong alignment on Effect_Other_C_ExecuteUbergraph_Effect_Other");
static_assert(sizeof(Effect_Other_C_ExecuteUbergraph_Effect_Other) == 0x0000A0, "Wrong size on Effect_Other_C_ExecuteUbergraph_Effect_Other");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, EntryPoint) == 0x000000, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::EntryPoint' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, Temp_bool_Variable) == 0x000004, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_CustomEvent_Category) == 0x000030, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_CustomEvent_Category' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_CustomEvent_Name) == 0x000048, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_CustomEvent_Value) == 0x000060, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_CustomEvent_bValidTime) == 0x000078, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_CustomEvent_bValidTime' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_CustomEvent_LimitTime_1) == 0x000080, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_CustomEvent_LimitTime_1' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_CustomEvent_Permanent) == 0x000088, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_CustomEvent_Permanent' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_Event_IsDesignTime) == 0x000089, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_CustomEvent_LimitTime) == 0x000090, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_CustomEvent_LimitTime' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, CallFunc_SetDateTime_ReturnValue) == 0x000098, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, CallFunc_MakeLiteralByte_ReturnValue) == 0x000099, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, CallFunc_SetDateTime_ReturnValue_1) == 0x00009A, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::CallFunc_SetDateTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00009B, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ExecuteUbergraph_Effect_Other, K2Node_Select_Default) == 0x00009C, "Member 'Effect_Other_C_ExecuteUbergraph_Effect_Other::K2Node_Select_Default' has a wrong offset!");

// Function Effect_Other.Effect_Other_C.UpdateTime
// 0x0008 (0x0008 - 0x0000)
struct Effect_Other_C_UpdateTime final
{
public:
	struct FDateTime                              LimitTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Other_C_UpdateTime) == 0x000008, "Wrong alignment on Effect_Other_C_UpdateTime");
static_assert(sizeof(Effect_Other_C_UpdateTime) == 0x000008, "Wrong size on Effect_Other_C_UpdateTime");
static_assert(offsetof(Effect_Other_C_UpdateTime, LimitTime) == 0x000000, "Member 'Effect_Other_C_UpdateTime::LimitTime' has a wrong offset!");

// Function Effect_Other.Effect_Other_C.ActiveData
// 0x0060 (0x0060 - 0x0000)
struct Effect_Other_C_ActiveData final
{
public:
	class FText                                   Category;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Param_Name;                                        // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Value;                                             // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bValidTime;                                        // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A9D[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LimitTime;                                         // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Permanent;                                         // 0x0058(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Other_C_ActiveData) == 0x000008, "Wrong alignment on Effect_Other_C_ActiveData");
static_assert(sizeof(Effect_Other_C_ActiveData) == 0x000060, "Wrong size on Effect_Other_C_ActiveData");
static_assert(offsetof(Effect_Other_C_ActiveData, Category) == 0x000000, "Member 'Effect_Other_C_ActiveData::Category' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ActiveData, Param_Name) == 0x000018, "Member 'Effect_Other_C_ActiveData::Param_Name' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ActiveData, Value) == 0x000030, "Member 'Effect_Other_C_ActiveData::Value' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ActiveData, bValidTime) == 0x000048, "Member 'Effect_Other_C_ActiveData::bValidTime' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ActiveData, LimitTime) == 0x000050, "Member 'Effect_Other_C_ActiveData::LimitTime' has a wrong offset!");
static_assert(offsetof(Effect_Other_C_ActiveData, Permanent) == 0x000058, "Member 'Effect_Other_C_ActiveData::Permanent' has a wrong offset!");

// Function Effect_Other.Effect_Other_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Effect_Other_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Other_C_PreConstruct) == 0x000001, "Wrong alignment on Effect_Other_C_PreConstruct");
static_assert(sizeof(Effect_Other_C_PreConstruct) == 0x000001, "Wrong size on Effect_Other_C_PreConstruct");
static_assert(offsetof(Effect_Other_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Effect_Other_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

