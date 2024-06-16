#pragma once

 

// Package: AttributeIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function AttributeIcon.AttributeIcon_C.SetAttribute
// 0x0018 (0x0018 - 0x0000)
struct AttributeIcon_C_SetAttribute final
{
public:
	ESBAttribute                                  InAttribute;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C22[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpIndex;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C23[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AttributeIcon_C_SetAttribute) == 0x000004, "Wrong alignment on AttributeIcon_C_SetAttribute");
static_assert(sizeof(AttributeIcon_C_SetAttribute) == 0x000018, "Wrong size on AttributeIcon_C_SetAttribute");
static_assert(offsetof(AttributeIcon_C_SetAttribute, InAttribute) == 0x000000, "Member 'AttributeIcon_C_SetAttribute::InAttribute' has a wrong offset!");
static_assert(offsetof(AttributeIcon_C_SetAttribute, TmpIndex) == 0x000004, "Member 'AttributeIcon_C_SetAttribute::TmpIndex' has a wrong offset!");
static_assert(offsetof(AttributeIcon_C_SetAttribute, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'AttributeIcon_C_SetAttribute::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AttributeIcon_C_SetAttribute, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'AttributeIcon_C_SetAttribute::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AttributeIcon_C_SetAttribute, CallFunc_Array_Find_ReturnValue) == 0x000010, "Member 'AttributeIcon_C_SetAttribute::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(AttributeIcon_C_SetAttribute, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'AttributeIcon_C_SetAttribute::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

