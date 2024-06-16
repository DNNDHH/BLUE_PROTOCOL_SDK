#pragma once

 

// Package: CmnColorBadge

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EColorBadgeType_structs.hpp"


namespace SDK::Params
{

// Function CmnColorBadge.CmnColorBadge_C.ExecuteUbergraph_CmnColorBadge
// 0x0018 (0x0018 - 0x0000)
struct CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge) == 0x000004, "Wrong alignment on CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge");
static_assert(sizeof(CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge) == 0x000018, "Wrong size on CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge");
static_assert(offsetof(CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge, EntryPoint) == 0x000000, "Member 'CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge, CallFunc_MakeColor_ReturnValue) == 0x000004, "Member 'CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge, K2Node_Event_IsDesignTime) == 0x000014, "Member 'CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnColorBadge.CmnColorBadge_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnColorBadge_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnColorBadge_C_PreConstruct) == 0x000001, "Wrong alignment on CmnColorBadge_C_PreConstruct");
static_assert(sizeof(CmnColorBadge_C_PreConstruct) == 0x000001, "Wrong size on CmnColorBadge_C_PreConstruct");
static_assert(offsetof(CmnColorBadge_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnColorBadge_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeType
// 0x0030 (0x0030 - 0x0000)
struct CmnColorBadge_C_SetColorBadgeType final
{
public:
	EColorBadgeType                               InColorBadgeType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9290[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalColorBadgeTypeInt;                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSwitchetNum;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9291[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9292[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnColorBadge_C_SetColorBadgeType) == 0x000004, "Wrong alignment on CmnColorBadge_C_SetColorBadgeType");
static_assert(sizeof(CmnColorBadge_C_SetColorBadgeType) == 0x000030, "Wrong size on CmnColorBadge_C_SetColorBadgeType");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, InColorBadgeType) == 0x000000, "Member 'CmnColorBadge_C_SetColorBadgeType::InColorBadgeType' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, LocalColorBadgeTypeInt) == 0x000004, "Member 'CmnColorBadge_C_SetColorBadgeType::LocalColorBadgeTypeInt' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, LocalSwitchetNum) == 0x000008, "Member 'CmnColorBadge_C_SetColorBadgeType::LocalSwitchetNum' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'CmnColorBadge_C_SetColorBadgeType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, K2Node_MakeStruct_LinearColor) == 0x000010, "Member 'CmnColorBadge_C_SetColorBadgeType::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'CmnColorBadge_C_SetColorBadgeType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, CallFunc_Clamp_ReturnValue) == 0x000024, "Member 'CmnColorBadge_C_SetColorBadgeType::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'CmnColorBadge_C_SetColorBadgeType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'CmnColorBadge_C_SetColorBadgeType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeType, CallFunc_GetChildrenCount_ReturnValue) == 0x00002C, "Member 'CmnColorBadge_C_SetColorBadgeType::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

// Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeColor
// 0x0014 (0x0014 - 0x0000)
struct CmnColorBadge_C_SetColorBadgeColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnColorBadge_C_SetColorBadgeColor) == 0x000004, "Wrong alignment on CmnColorBadge_C_SetColorBadgeColor");
static_assert(sizeof(CmnColorBadge_C_SetColorBadgeColor) == 0x000014, "Wrong size on CmnColorBadge_C_SetColorBadgeColor");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeColor, InColor) == 0x000000, "Member 'CmnColorBadge_C_SetColorBadgeColor::InColor' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeColor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CmnColorBadge_C_SetColorBadgeColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeExtraColor
// 0x0020 (0x0020 - 0x0000)
struct CmnColorBadge_C_SetColorBadgeExtraColor final
{
public:
	struct FLinearColor                           InColor1;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InColor2;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnColorBadge_C_SetColorBadgeExtraColor) == 0x000004, "Wrong alignment on CmnColorBadge_C_SetColorBadgeExtraColor");
static_assert(sizeof(CmnColorBadge_C_SetColorBadgeExtraColor) == 0x000020, "Wrong size on CmnColorBadge_C_SetColorBadgeExtraColor");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeExtraColor, InColor1) == 0x000000, "Member 'CmnColorBadge_C_SetColorBadgeExtraColor::InColor1' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_SetColorBadgeExtraColor, InColor2) == 0x000010, "Member 'CmnColorBadge_C_SetColorBadgeExtraColor::InColor2' has a wrong offset!");

// Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeColor
// 0x0010 (0x0010 - 0x0000)
struct CmnColorBadge_C_GetColorBadgeColor final
{
public:
	struct FLinearColor                           OutColor;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnColorBadge_C_GetColorBadgeColor) == 0x000004, "Wrong alignment on CmnColorBadge_C_GetColorBadgeColor");
static_assert(sizeof(CmnColorBadge_C_GetColorBadgeColor) == 0x000010, "Wrong size on CmnColorBadge_C_GetColorBadgeColor");
static_assert(offsetof(CmnColorBadge_C_GetColorBadgeColor, OutColor) == 0x000000, "Member 'CmnColorBadge_C_GetColorBadgeColor::OutColor' has a wrong offset!");

// Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeExtraColor
// 0x0020 (0x0020 - 0x0000)
struct CmnColorBadge_C_GetColorBadgeExtraColor final
{
public:
	struct FLinearColor                           OutColor1;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutColor2;                                         // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnColorBadge_C_GetColorBadgeExtraColor) == 0x000004, "Wrong alignment on CmnColorBadge_C_GetColorBadgeExtraColor");
static_assert(sizeof(CmnColorBadge_C_GetColorBadgeExtraColor) == 0x000020, "Wrong size on CmnColorBadge_C_GetColorBadgeExtraColor");
static_assert(offsetof(CmnColorBadge_C_GetColorBadgeExtraColor, OutColor1) == 0x000000, "Member 'CmnColorBadge_C_GetColorBadgeExtraColor::OutColor1' has a wrong offset!");
static_assert(offsetof(CmnColorBadge_C_GetColorBadgeExtraColor, OutColor2) == 0x000010, "Member 'CmnColorBadge_C_GetColorBadgeExtraColor::OutColor2' has a wrong offset!");

}

