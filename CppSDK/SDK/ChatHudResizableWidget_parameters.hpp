#pragma once

 

// Package: ChatHudResizableWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ChatHudResizableWidget.ChatHudResizableWidget_C.ExecuteUbergraph_ChatHudResizableWidget
// 0x0004 (0x0004 - 0x0000)
struct ChatHudResizableWidget_C_ExecuteUbergraph_ChatHudResizableWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatHudResizableWidget_C_ExecuteUbergraph_ChatHudResizableWidget) == 0x000004, "Wrong alignment on ChatHudResizableWidget_C_ExecuteUbergraph_ChatHudResizableWidget");
static_assert(sizeof(ChatHudResizableWidget_C_ExecuteUbergraph_ChatHudResizableWidget) == 0x000004, "Wrong size on ChatHudResizableWidget_C_ExecuteUbergraph_ChatHudResizableWidget");
static_assert(offsetof(ChatHudResizableWidget_C_ExecuteUbergraph_ChatHudResizableWidget, EntryPoint) == 0x000000, "Member 'ChatHudResizableWidget_C_ExecuteUbergraph_ChatHudResizableWidget::EntryPoint' has a wrong offset!");

// Function ChatHudResizableWidget.ChatHudResizableWidget_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct ChatHudResizableWidget_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
};
static_assert(alignof(ChatHudResizableWidget_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ChatHudResizableWidget_C_OnMouseButtonDown");
static_assert(sizeof(ChatHudResizableWidget_C_OnMouseButtonDown) == 0x000218, "Wrong size on ChatHudResizableWidget_C_OnMouseButtonDown");
static_assert(offsetof(ChatHudResizableWidget_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ChatHudResizableWidget_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ChatHudResizableWidget_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ChatHudResizableWidget_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'ChatHudResizableWidget_C_OnMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

// Function ChatHudResizableWidget.ChatHudResizableWidget_C.OnDragDetected
// 0x00C0 (0x00C0 - 0x0000)
struct ChatHudResizableWidget_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatHudResizeOperation_C*              CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHudResizableWidget_C_OnDragDetected) == 0x000008, "Wrong alignment on ChatHudResizableWidget_C_OnDragDetected");
static_assert(sizeof(ChatHudResizableWidget_C_OnDragDetected) == 0x0000C0, "Wrong size on ChatHudResizableWidget_C_OnDragDetected");
static_assert(offsetof(ChatHudResizableWidget_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'ChatHudResizableWidget_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'ChatHudResizableWidget_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnDragDetected, Operation) == 0x0000A8, "Member 'ChatHudResizableWidget_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B0, "Member 'ChatHudResizableWidget_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnDragDetected, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000B8, "Member 'ChatHudResizableWidget_C_OnDragDetected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudResizableWidget_C_OnDragDetected, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'ChatHudResizableWidget_C_OnDragDetected::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

