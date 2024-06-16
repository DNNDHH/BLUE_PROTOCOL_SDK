#pragma once

 

// Package: ChatHudMovableWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChatHudMovableWidget.ChatHudMovableWidget_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct ChatHudMovableWidget_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
};
static_assert(alignof(ChatHudMovableWidget_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ChatHudMovableWidget_C_OnMouseButtonDown");
static_assert(sizeof(ChatHudMovableWidget_C_OnMouseButtonDown) == 0x000218, "Wrong size on ChatHudMovableWidget_C_OnMouseButtonDown");
static_assert(offsetof(ChatHudMovableWidget_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ChatHudMovableWidget_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ChatHudMovableWidget_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ChatHudMovableWidget_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'ChatHudMovableWidget_C_OnMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

// Function ChatHudMovableWidget.ChatHudMovableWidget_C.OnDragDetected
// 0x00D8 (0x00D8 - 0x0000)
struct ChatHudMovableWidget_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatHudDragOperation_C*                CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToLocal_ReturnValue;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGhost_C*                               CallFunc_Create_ReturnValue;                       // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatHudMovableWidget_C_OnDragDetected) == 0x000008, "Wrong alignment on ChatHudMovableWidget_C_OnDragDetected");
static_assert(sizeof(ChatHudMovableWidget_C_OnDragDetected) == 0x0000D8, "Wrong size on ChatHudMovableWidget_C_OnDragDetected");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'ChatHudMovableWidget_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'ChatHudMovableWidget_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, Operation) == 0x0000A8, "Member 'ChatHudMovableWidget_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B0, "Member 'ChatHudMovableWidget_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue) == 0x0000B8, "Member 'ChatHudMovableWidget_C_OnDragDetected::CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, CallFunc_AbsoluteToLocal_ReturnValue) == 0x0000C0, "Member 'ChatHudMovableWidget_C_OnDragDetected::CallFunc_AbsoluteToLocal_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, CallFunc_Create_ReturnValue) == 0x0000C8, "Member 'ChatHudMovableWidget_C_OnDragDetected::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000D0, "Member 'ChatHudMovableWidget_C_OnDragDetected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatHudMovableWidget_C_OnDragDetected, CallFunc_IsValid_ReturnValue) == 0x0000D1, "Member 'ChatHudMovableWidget_C_OnDragDetected::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

