#pragma once

 

// Package: ShortcutringIcon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ShortcutringIcon.ShortcutringIcon_C.OnHover__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutringIcon_C_OnHover__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnHover__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnHover__DelegateSignature");
static_assert(sizeof(ShortcutringIcon_C_OnHover__DelegateSignature) == 0x000008, "Wrong size on ShortcutringIcon_C_OnHover__DelegateSignature");
static_assert(offsetof(ShortcutringIcon_C_OnHover__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutringIcon_C_OnHover__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnUnhover__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutringIcon_C_OnUnhover__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnUnhover__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnUnhover__DelegateSignature");
static_assert(sizeof(ShortcutringIcon_C_OnUnhover__DelegateSignature) == 0x000008, "Wrong size on ShortcutringIcon_C_OnUnhover__DelegateSignature");
static_assert(offsetof(ShortcutringIcon_C_OnUnhover__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutringIcon_C_OnUnhover__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutringIcon_C_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutringIcon_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutringIcon_C_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutringIcon_C_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutringIcon_C_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutringIcon_C_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutringIcon_C_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutringIcon_C_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutringIcon_C_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutringIcon_C_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnMouseButtonDown
// 0x0448 (0x0448 - 0x0000)
struct ShortcutringIcon_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1; // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E7B[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0220(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue_1;                    // 0x02D8(0x00B8)()
	struct FEventReply                            CallFunc_DetectDrag_ReturnValue;                   // 0x0390(0x00B8)()
};
static_assert(alignof(ShortcutringIcon_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnMouseButtonDown");
static_assert(sizeof(ShortcutringIcon_C_OnMouseButtonDown) == 0x000448, "Wrong size on ShortcutringIcon_C_OnMouseButtonDown");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'ShortcutringIcon_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'ShortcutringIcon_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ShortcutringIcon_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000160, "Member 'ShortcutringIcon_C_OnMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1) == 0x000161, "Member 'ShortcutringIcon_C_OnMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000168, "Member 'ShortcutringIcon_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000220, "Member 'ShortcutringIcon_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue_1) == 0x0002D8, "Member 'ShortcutringIcon_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnMouseButtonDown, CallFunc_DetectDrag_ReturnValue) == 0x000390, "Member 'ShortcutringIcon_C_OnMouseButtonDown::CallFunc_DetectDrag_ReturnValue' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.SetDragDropOperation
// 0x0008 (0x0008 - 0x0000)
struct ShortcutringIcon_C_SetDragDropOperation final
{
public:
	class UDragDropOperation*                     InDradDropOperation;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_SetDragDropOperation) == 0x000008, "Wrong alignment on ShortcutringIcon_C_SetDragDropOperation");
static_assert(sizeof(ShortcutringIcon_C_SetDragDropOperation) == 0x000008, "Wrong size on ShortcutringIcon_C_SetDragDropOperation");
static_assert(offsetof(ShortcutringIcon_C_SetDragDropOperation, InDradDropOperation) == 0x000000, "Member 'ShortcutringIcon_C_SetDragDropOperation::InDradDropOperation' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateNoneIcon
// 0x0010 (0x0010 - 0x0000)
struct ShortcutringIcon_C_OnCreateNoneIcon final
{
public:
	class USBShortcutRingIconBase*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutRingIcon_None_C*               CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnCreateNoneIcon) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnCreateNoneIcon");
static_assert(sizeof(ShortcutringIcon_C_OnCreateNoneIcon) == 0x000010, "Wrong size on ShortcutringIcon_C_OnCreateNoneIcon");
static_assert(offsetof(ShortcutringIcon_C_OnCreateNoneIcon, ReturnValue) == 0x000000, "Member 'ShortcutringIcon_C_OnCreateNoneIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnCreateNoneIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShortcutringIcon_C_OnCreateNoneIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateBasicIcon
// 0x0010 (0x0010 - 0x0000)
struct ShortcutringIcon_C_OnCreateBasicIcon final
{
public:
	class USBShortcutRingIconBase*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutRingIcon_Basic_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnCreateBasicIcon) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnCreateBasicIcon");
static_assert(sizeof(ShortcutringIcon_C_OnCreateBasicIcon) == 0x000010, "Wrong size on ShortcutringIcon_C_OnCreateBasicIcon");
static_assert(offsetof(ShortcutringIcon_C_OnCreateBasicIcon, ReturnValue) == 0x000000, "Member 'ShortcutringIcon_C_OnCreateBasicIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnCreateBasicIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShortcutringIcon_C_OnCreateBasicIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateTextIcon
// 0x0010 (0x0010 - 0x0000)
struct ShortcutringIcon_C_OnCreateTextIcon final
{
public:
	class USBShortcutRingIconBase*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutRingIcon_Text_C*               CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnCreateTextIcon) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnCreateTextIcon");
static_assert(sizeof(ShortcutringIcon_C_OnCreateTextIcon) == 0x000010, "Wrong size on ShortcutringIcon_C_OnCreateTextIcon");
static_assert(offsetof(ShortcutringIcon_C_OnCreateTextIcon, ReturnValue) == 0x000000, "Member 'ShortcutringIcon_C_OnCreateTextIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnCreateTextIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShortcutringIcon_C_OnCreateTextIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateCommandIcon
// 0x0010 (0x0010 - 0x0000)
struct ShortcutringIcon_C_OnCreateCommandIcon final
{
public:
	class USBShortcutRingIconBase*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutRingIcon_Command_C*            CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnCreateCommandIcon) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnCreateCommandIcon");
static_assert(sizeof(ShortcutringIcon_C_OnCreateCommandIcon) == 0x000010, "Wrong size on ShortcutringIcon_C_OnCreateCommandIcon");
static_assert(offsetof(ShortcutringIcon_C_OnCreateCommandIcon, ReturnValue) == 0x000000, "Member 'ShortcutringIcon_C_OnCreateCommandIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnCreateCommandIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShortcutringIcon_C_OnCreateCommandIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateWarpIcon
// 0x0010 (0x0010 - 0x0000)
struct ShortcutringIcon_C_OnCreateWarpIcon final
{
public:
	class USBShortcutRingIconBase*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutRingIcon_Warp_C*               CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_OnCreateWarpIcon) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnCreateWarpIcon");
static_assert(sizeof(ShortcutringIcon_C_OnCreateWarpIcon) == 0x000010, "Wrong size on ShortcutringIcon_C_OnCreateWarpIcon");
static_assert(offsetof(ShortcutringIcon_C_OnCreateWarpIcon, ReturnValue) == 0x000000, "Member 'ShortcutringIcon_C_OnCreateWarpIcon::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnCreateWarpIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ShortcutringIcon_C_OnCreateWarpIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnBindIcon
// 0x0028 (0x0028 - 0x0000)
struct ShortcutringIcon_C_OnBindIcon final
{
public:
	class USBShortcutRingIconBase*                InIcon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ShortcutringIcon_C_OnBindIcon) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnBindIcon");
static_assert(sizeof(ShortcutringIcon_C_OnBindIcon) == 0x000028, "Wrong size on ShortcutringIcon_C_OnBindIcon");
static_assert(offsetof(ShortcutringIcon_C_OnBindIcon, InIcon) == 0x000000, "Member 'ShortcutringIcon_C_OnBindIcon::InIcon' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnBindIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ShortcutringIcon_C_OnBindIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnBindIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'ShortcutringIcon_C_OnBindIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.OnUnbindIcon
// 0x0028 (0x0028 - 0x0000)
struct ShortcutringIcon_C_OnUnbindIcon final
{
public:
	class USBShortcutRingIconBase*                InIcon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ShortcutringIcon_C_OnUnbindIcon) == 0x000008, "Wrong alignment on ShortcutringIcon_C_OnUnbindIcon");
static_assert(sizeof(ShortcutringIcon_C_OnUnbindIcon) == 0x000028, "Wrong size on ShortcutringIcon_C_OnUnbindIcon");
static_assert(offsetof(ShortcutringIcon_C_OnUnbindIcon, InIcon) == 0x000000, "Member 'ShortcutringIcon_C_OnUnbindIcon::InIcon' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnUnbindIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ShortcutringIcon_C_OnUnbindIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShortcutringIcon_C_OnUnbindIcon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'ShortcutringIcon_C_OnUnbindIcon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function ShortcutringIcon.ShortcutringIcon_C.GetDragDropOperation
// 0x0008 (0x0008 - 0x0000)
struct ShortcutringIcon_C_GetDragDropOperation final
{
public:
	class UDragDropOperation*                     OutDragDropOperation;                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutringIcon_C_GetDragDropOperation) == 0x000008, "Wrong alignment on ShortcutringIcon_C_GetDragDropOperation");
static_assert(sizeof(ShortcutringIcon_C_GetDragDropOperation) == 0x000008, "Wrong size on ShortcutringIcon_C_GetDragDropOperation");
static_assert(offsetof(ShortcutringIcon_C_GetDragDropOperation, OutDragDropOperation) == 0x000000, "Member 'ShortcutringIcon_C_GetDragDropOperation::OutDragDropOperation' has a wrong offset!");

}

