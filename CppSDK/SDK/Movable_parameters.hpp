#pragma once

 

// Package: Movable

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Movable.Movable_C.ExecuteUbergraph_Movable
// 0x0028 (0x0028 - 0x0000)
struct Movable_C_ExecuteUbergraph_Movable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bEditable;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bEditMode;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Movable_C_ExecuteUbergraph_Movable) == 0x000008, "Wrong alignment on Movable_C_ExecuteUbergraph_Movable");
static_assert(sizeof(Movable_C_ExecuteUbergraph_Movable) == 0x000028, "Wrong size on Movable_C_ExecuteUbergraph_Movable");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, EntryPoint) == 0x000000, "Member 'Movable_C_ExecuteUbergraph_Movable::EntryPoint' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, Temp_bool_Variable) == 0x000004, "Member 'Movable_C_ExecuteUbergraph_Movable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, Temp_byte_Variable) == 0x000005, "Member 'Movable_C_ExecuteUbergraph_Movable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, Temp_byte_Variable_1) == 0x000006, "Member 'Movable_C_ExecuteUbergraph_Movable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, Temp_bool_Variable_1) == 0x000007, "Member 'Movable_C_ExecuteUbergraph_Movable::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, Temp_byte_Variable_2) == 0x000008, "Member 'Movable_C_ExecuteUbergraph_Movable::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, K2Node_Select_Default) == 0x000009, "Member 'Movable_C_ExecuteUbergraph_Movable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, Temp_byte_Variable_3) == 0x00000A, "Member 'Movable_C_ExecuteUbergraph_Movable::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, K2Node_Event_IsDesignTime) == 0x00000B, "Member 'Movable_C_ExecuteUbergraph_Movable::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, CallFunc_Create_ReturnValue) == 0x000010, "Member 'Movable_C_ExecuteUbergraph_Movable::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, CallFunc_AddChildToCanvas_ReturnValue) == 0x000018, "Member 'Movable_C_ExecuteUbergraph_Movable::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Movable_C_ExecuteUbergraph_Movable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, K2Node_CustomEvent_bEditable) == 0x000021, "Member 'Movable_C_ExecuteUbergraph_Movable::K2Node_CustomEvent_bEditable' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, K2Node_CustomEvent_bEditMode) == 0x000022, "Member 'Movable_C_ExecuteUbergraph_Movable::K2Node_CustomEvent_bEditMode' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, K2Node_Select_Default_1) == 0x000023, "Member 'Movable_C_ExecuteUbergraph_Movable::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Movable_C_ExecuteUbergraph_Movable, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'Movable_C_ExecuteUbergraph_Movable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Movable.Movable_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct Movable_C_SetEditMode final
{
public:
	bool                                          Param_bEditMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Movable_C_SetEditMode) == 0x000001, "Wrong alignment on Movable_C_SetEditMode");
static_assert(sizeof(Movable_C_SetEditMode) == 0x000001, "Wrong size on Movable_C_SetEditMode");
static_assert(offsetof(Movable_C_SetEditMode, Param_bEditMode) == 0x000000, "Member 'Movable_C_SetEditMode::Param_bEditMode' has a wrong offset!");

// Function Movable.Movable_C.SetEnableDrag
// 0x0001 (0x0001 - 0x0000)
struct Movable_C_SetEnableDrag final
{
public:
	bool                                          bEditable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Movable_C_SetEnableDrag) == 0x000001, "Wrong alignment on Movable_C_SetEnableDrag");
static_assert(sizeof(Movable_C_SetEnableDrag) == 0x000001, "Wrong size on Movable_C_SetEnableDrag");
static_assert(offsetof(Movable_C_SetEnableDrag, bEditable) == 0x000000, "Member 'Movable_C_SetEnableDrag::bEditable' has a wrong offset!");

// Function Movable.Movable_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Movable_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Movable_C_PreConstruct) == 0x000001, "Wrong alignment on Movable_C_PreConstruct");
static_assert(sizeof(Movable_C_PreConstruct) == 0x000001, "Wrong size on Movable_C_PreConstruct");
static_assert(offsetof(Movable_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Movable_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Movable.Movable_C.OnMouseButtonDown
// 0x02D0 (0x02D0 - 0x0000)
struct Movable_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0218(0x00B8)()
};
static_assert(alignof(Movable_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on Movable_C_OnMouseButtonDown");
static_assert(sizeof(Movable_C_OnMouseButtonDown) == 0x0002D0, "Wrong size on Movable_C_OnMouseButtonDown");
static_assert(offsetof(Movable_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'Movable_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(Movable_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'Movable_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(Movable_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'Movable_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'Movable_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_OnMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000218, "Member 'Movable_C_OnMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

// Function Movable.Movable_C.OnDragDetected
// 0x00D8 (0x00D8 - 0x0000)
struct Movable_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDDOperation_C*                         CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToLocal_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGhost_C*                               CallFunc_Create_ReturnValue;                       // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Movable_C_OnDragDetected) == 0x000008, "Wrong alignment on Movable_C_OnDragDetected");
static_assert(sizeof(Movable_C_OnDragDetected) == 0x0000D8, "Wrong size on Movable_C_OnDragDetected");
static_assert(offsetof(Movable_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'Movable_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(Movable_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'Movable_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(Movable_C_OnDragDetected, Operation) == 0x0000A8, "Member 'Movable_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(Movable_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B0, "Member 'Movable_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_OnDragDetected, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x0000B8, "Member 'Movable_C_OnDragDetected::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_OnDragDetected, CallFunc_AbsoluteToLocal_ReturnValue) == 0x0000C0, "Member 'Movable_C_OnDragDetected::CallFunc_AbsoluteToLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_OnDragDetected, CallFunc_Create_ReturnValue) == 0x0000C8, "Member 'Movable_C_OnDragDetected::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_OnDragDetected, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000D0, "Member 'Movable_C_OnDragDetected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");

// Function Movable.Movable_C.GetWidget
// 0x0008 (0x0008 - 0x0000)
struct Movable_C_GetWidget final
{
public:
	class UUserWidget*                            Param_CreatedUserWidget;                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Movable_C_GetWidget) == 0x000008, "Wrong alignment on Movable_C_GetWidget");
static_assert(sizeof(Movable_C_GetWidget) == 0x000008, "Wrong size on Movable_C_GetWidget");
static_assert(offsetof(Movable_C_GetWidget, Param_CreatedUserWidget) == 0x000000, "Member 'Movable_C_GetWidget::Param_CreatedUserWidget' has a wrong offset!");

// Function Movable.Movable_C.SetResizeableParentWidget
// 0x0010 (0x0010 - 0x0000)
struct Movable_C_SetResizeableParentWidget final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EditMode;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Movable_C_SetResizeableParentWidget) == 0x000008, "Wrong alignment on Movable_C_SetResizeableParentWidget");
static_assert(sizeof(Movable_C_SetResizeableParentWidget) == 0x000010, "Wrong size on Movable_C_SetResizeableParentWidget");
static_assert(offsetof(Movable_C_SetResizeableParentWidget, InWidget) == 0x000000, "Member 'Movable_C_SetResizeableParentWidget::InWidget' has a wrong offset!");
static_assert(offsetof(Movable_C_SetResizeableParentWidget, EditMode) == 0x000008, "Member 'Movable_C_SetResizeableParentWidget::EditMode' has a wrong offset!");
static_assert(offsetof(Movable_C_SetResizeableParentWidget, Temp_bool_Variable) == 0x000009, "Member 'Movable_C_SetResizeableParentWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Movable_C_SetResizeableParentWidget, Temp_byte_Variable) == 0x00000A, "Member 'Movable_C_SetResizeableParentWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Movable_C_SetResizeableParentWidget, Temp_byte_Variable_1) == 0x00000B, "Member 'Movable_C_SetResizeableParentWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Movable_C_SetResizeableParentWidget, K2Node_Select_Default) == 0x00000C, "Member 'Movable_C_SetResizeableParentWidget::K2Node_Select_Default' has a wrong offset!");

// Function Movable.Movable_C.UpdateGradationColor
// 0x0018 (0x0018 - 0x0000)
struct Movable_C_UpdateGradationColor final
{
public:
	struct FLinearColor                           BorderColor;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Movable_C_UpdateGradationColor) == 0x000004, "Wrong alignment on Movable_C_UpdateGradationColor");
static_assert(sizeof(Movable_C_UpdateGradationColor) == 0x000018, "Wrong size on Movable_C_UpdateGradationColor");
static_assert(offsetof(Movable_C_UpdateGradationColor, BorderColor) == 0x000000, "Member 'Movable_C_UpdateGradationColor::BorderColor' has a wrong offset!");
static_assert(offsetof(Movable_C_UpdateGradationColor, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'Movable_C_UpdateGradationColor::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_UpdateGradationColor, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'Movable_C_UpdateGradationColor::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function Movable.Movable_C.SetDescType
// 0x0008 (0x0008 - 0x0000)
struct Movable_C_SetDescType final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Movable_C_SetDescType) == 0x000004, "Wrong alignment on Movable_C_SetDescType");
static_assert(sizeof(Movable_C_SetDescType) == 0x000008, "Wrong size on Movable_C_SetDescType");
static_assert(offsetof(Movable_C_SetDescType, Type) == 0x000000, "Member 'Movable_C_SetDescType::Type' has a wrong offset!");
static_assert(offsetof(Movable_C_SetDescType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'Movable_C_SetDescType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_SetDescType, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'Movable_C_SetDescType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Movable_C_SetDescType, CallFunc_IsValid_ReturnValue_1) == 0x000006, "Member 'Movable_C_SetDescType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Movable_C_SetDescType, CallFunc_IsValid_ReturnValue_2) == 0x000007, "Member 'Movable_C_SetDescType::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

