#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionListItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.OnPressedButton__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature final
{
public:
	int32                                         Param_Value;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature) == 0x00000C, "Wrong size on UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature, Param_Value) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature::Param_Value' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature, Position) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature::Position' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem
// 0x0038 (0x0038 - 0x0000)
struct UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_OutPosition;                  // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8642[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem) == 0x000038, "Wrong size on UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, CallFunc_GetPosition_OutPosition) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::CallFunc_GetPosition_OutPosition' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_bool_Variable) == 0x00000C, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_byte_Variable) == 0x00000D, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_byte_Variable_1) == 0x00000E, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_bool_Variable_1) == 0x00000F, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_byte_Variable_2) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_byte_Variable_3) == 0x000011, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_bool_Variable_2) == 0x000012, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_byte_Variable_4) == 0x000013, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, Temp_byte_Variable_5) == 0x000014, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, K2Node_Event_IsDesignTime) == 0x000015, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, K2Node_Select_Default) == 0x000016, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, K2Node_Select_Default_1) == 0x000030, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem, K2Node_Select_Default_2) == 0x000031, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem::K2Node_Select_Default_2' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct) == 0x000001, "Wrong size on UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.GetPosition
// 0x00DC (0x00DC - 0x0000)
struct UMG_MatchingMenu_EntryConditionListItem_C_GetPosition final
{
public:
	struct FVector2D                              OutPosition;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ViewportScaleSize;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8643[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue_1;       // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetCachedGeometry_ReturnValue;            // 0x0080(0x0038)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_PixelPosition;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_LocalToViewport_ViewportPosition;         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionListItem_C_GetPosition");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition) == 0x0000DC, "Wrong size on UMG_MatchingMenu_EntryConditionListItem_C_GetPosition");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, OutPosition) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::OutPosition' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, ViewportScaleSize) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::ViewportScaleSize' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, Position) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::Position' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_BreakVector2D_X) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_BreakVector2D_Y) == 0x00001C, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_BreakVector2D_X_1) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_BreakVector2D_Y_1) == 0x000024, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_BreakVector2D_X_2) == 0x000028, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_BreakVector2D_Y_2) == 0x00002C, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_GetViewportSize_ReturnValue) == 0x000034, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00003C, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000044, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000048, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_GetViewportScale_ReturnValue) == 0x00004C, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000050, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_MakeLiteralFloat_ReturnValue_1) == 0x000060, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_MakeLiteralFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000064, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_GetDesiredSize_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000070, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Divide_Vector2DFloat_ReturnValue_1) == 0x000074, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Divide_Vector2DFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x00007C, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_GetCachedGeometry_ReturnValue) == 0x000080, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_GetCachedGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000B8, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_LocalToViewport_PixelPosition) == 0x0000C0, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_LocalToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_LocalToViewport_ViewportPosition) == 0x0000C8, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_LocalToViewport_ViewportPosition' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x0000D0, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_GetPosition, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0000D8, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_GetPosition::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.SetVisibleUnderline
// 0x0005 (0x0005 - 0x0000)
struct UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline) == 0x000001, "Wrong alignment on UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline) == 0x000005, "Wrong size on UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline, Visible) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline::Visible' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline, Temp_bool_Variable) == 0x000001, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline, Temp_byte_Variable) == 0x000002, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline, Temp_byte_Variable_1) == 0x000003, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline, K2Node_Select_Default) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline::K2Node_Select_Default' has a wrong offset!");

}

