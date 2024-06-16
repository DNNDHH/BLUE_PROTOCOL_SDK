#pragma once

 

// Package: UIWrapperForMouseDrag

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.ExecuteUbergraph_UIWrapperForMouseDrag
// 0x0050 (0x0050 - 0x0000)
struct UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetMousePosition_MousePosition;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag) == 0x000004, "Wrong alignment on UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag");
static_assert(sizeof(UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag) == 0x000050, "Wrong size on UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag");
static_assert(offsetof(UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag, EntryPoint) == 0x000000, "Member 'UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag, K2Node_Event_MyGeometry) == 0x000004, "Member 'UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag, CallFunc_GetMousePosition_MousePosition) == 0x000040, "Member 'UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag::CallFunc_GetMousePosition_MousePosition' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000048, "Member 'UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");

// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.Tick
// 0x003C (0x003C - 0x0000)
struct UIWrapperForMouseDrag_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIWrapperForMouseDrag_C_Tick) == 0x000004, "Wrong alignment on UIWrapperForMouseDrag_C_Tick");
static_assert(sizeof(UIWrapperForMouseDrag_C_Tick) == 0x00003C, "Wrong size on UIWrapperForMouseDrag_C_Tick");
static_assert(offsetof(UIWrapperForMouseDrag_C_Tick, MyGeometry) == 0x000000, "Member 'UIWrapperForMouseDrag_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_Tick, InDeltaTime) == 0x000038, "Member 'UIWrapperForMouseDrag_C_Tick::InDeltaTime' has a wrong offset!");

// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.GetMousePosition
// 0x0028 (0x0028 - 0x0000)
struct UIWrapperForMouseDrag_C_GetMousePosition final
{
public:
	struct FVector2D                              Param_MousePosition;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationX;    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationY;    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePositionScaledByDPI_ReturnValue;  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FE1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIWrapperForMouseDrag_C_GetMousePosition) == 0x000008, "Wrong alignment on UIWrapperForMouseDrag_C_GetMousePosition");
static_assert(sizeof(UIWrapperForMouseDrag_C_GetMousePosition) == 0x000028, "Wrong size on UIWrapperForMouseDrag_C_GetMousePosition");
static_assert(offsetof(UIWrapperForMouseDrag_C_GetMousePosition, Param_MousePosition) == 0x000000, "Member 'UIWrapperForMouseDrag_C_GetMousePosition::Param_MousePosition' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_GetMousePosition, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'UIWrapperForMouseDrag_C_GetMousePosition::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_GetMousePosition, CallFunc_GetMousePositionScaledByDPI_LocationX) == 0x000010, "Member 'UIWrapperForMouseDrag_C_GetMousePosition::CallFunc_GetMousePositionScaledByDPI_LocationX' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_GetMousePosition, CallFunc_GetMousePositionScaledByDPI_LocationY) == 0x000014, "Member 'UIWrapperForMouseDrag_C_GetMousePosition::CallFunc_GetMousePositionScaledByDPI_LocationY' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_GetMousePosition, CallFunc_GetMousePositionScaledByDPI_ReturnValue) == 0x000018, "Member 'UIWrapperForMouseDrag_C_GetMousePosition::CallFunc_GetMousePositionScaledByDPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_GetMousePosition, CallFunc_MakeVector2D_ReturnValue) == 0x00001C, "Member 'UIWrapperForMouseDrag_C_GetMousePosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonDown_0
// 0x0220 (0x0220 - 0x0000)
struct UIWrapperForMouseDrag_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
	struct FVector2D                              CallFunc_GetMousePosition_MousePosition;           // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIWrapperForMouseDrag_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on UIWrapperForMouseDrag_C_OnMouseButtonDown_0");
static_assert(sizeof(UIWrapperForMouseDrag_C_OnMouseButtonDown_0) == 0x000220, "Wrong size on UIWrapperForMouseDrag_C_OnMouseButtonDown_0");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonDown_0, MouseEvent) == 0x000038, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonDown_0, ReturnValue) == 0x0000A8, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonDown_0, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonDown_0::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonDown_0, CallFunc_GetMousePosition_MousePosition) == 0x000218, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonDown_0::CallFunc_GetMousePosition_MousePosition' has a wrong offset!");

// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonUp_0
// 0x0218 (0x0218 - 0x0000)
struct UIWrapperForMouseDrag_C_OnMouseButtonUp_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0160(0x00B8)()
};
static_assert(alignof(UIWrapperForMouseDrag_C_OnMouseButtonUp_0) == 0x000008, "Wrong alignment on UIWrapperForMouseDrag_C_OnMouseButtonUp_0");
static_assert(sizeof(UIWrapperForMouseDrag_C_OnMouseButtonUp_0) == 0x000218, "Wrong size on UIWrapperForMouseDrag_C_OnMouseButtonUp_0");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonUp_0, MyGeometry) == 0x000000, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonUp_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonUp_0, MouseEvent) == 0x000038, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonUp_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonUp_0, ReturnValue) == 0x0000A8, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonUp_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIWrapperForMouseDrag_C_OnMouseButtonUp_0, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000160, "Member 'UIWrapperForMouseDrag_C_OnMouseButtonUp_0::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

}

