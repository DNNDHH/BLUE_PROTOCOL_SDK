#pragma once

 

// Package: MyCharaMenu_StatusUpDown

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.ExecuteUbergraph_MyCharaMenu_StatusUpDown
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A17[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown) == 0x000008, "Wrong alignment on MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown");
static_assert(sizeof(MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown) == 0x000018, "Wrong size on MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown, EntryPoint) == 0x000000, "Member 'MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown, K2Node_Event_IsDesignTime) == 0x000004, "Member 'MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'MyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_StatusUpDown_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_StatusUpDown_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_StatusUpDown_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_StatusUpDown_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_StatusUpDown_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_StatusUpDown_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValue
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_StatusUpDown_C_SetValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_StatusUpDown_C_SetValue) == 0x000004, "Wrong alignment on MyCharaMenu_StatusUpDown_C_SetValue");
static_assert(sizeof(MyCharaMenu_StatusUpDown_C_SetValue) == 0x000004, "Wrong size on MyCharaMenu_StatusUpDown_C_SetValue");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValue, Value) == 0x000000, "Member 'MyCharaMenu_StatusUpDown_C_SetValue::Value' has a wrong offset!");

// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValueAsPercentage
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_StatusUpDown_C_SetValueAsPercentage final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_StatusUpDown_C_SetValueAsPercentage) == 0x000004, "Wrong alignment on MyCharaMenu_StatusUpDown_C_SetValueAsPercentage");
static_assert(sizeof(MyCharaMenu_StatusUpDown_C_SetValueAsPercentage) == 0x000004, "Wrong size on MyCharaMenu_StatusUpDown_C_SetValueAsPercentage");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueAsPercentage, InValue) == 0x000000, "Member 'MyCharaMenu_StatusUpDown_C_SetValueAsPercentage::InValue' has a wrong offset!");

// Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValueBase
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_StatusUpDown_C_SetValueBase final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsPercentage;                                    // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A18[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalFlooredValue;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsPercentage;                                 // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A19[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LocalValue;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A1A[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_StatusUpDown_C_SetValueBase) == 0x000008, "Wrong alignment on MyCharaMenu_StatusUpDown_C_SetValueBase");
static_assert(sizeof(MyCharaMenu_StatusUpDown_C_SetValueBase) == 0x000040, "Wrong size on MyCharaMenu_StatusUpDown_C_SetValueBase");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, InValue) == 0x000000, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::InValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, InIsPercentage) == 0x000004, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::InIsPercentage' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, LocalFlooredValue) == 0x000008, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::LocalFlooredValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, LocalIsPercentage) == 0x00000C, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::LocalIsPercentage' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, LocalValue) == 0x000010, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::LocalValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_Less_FloatFloat_ReturnValue) == 0x000015, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_Abs_ReturnValue) == 0x000018, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_FFloor_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000038, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_StatusUpDown_C_SetValueBase, CallFunc_IsValid_ReturnValue_2) == 0x00003A, "Member 'MyCharaMenu_StatusUpDown_C_SetValueBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

