#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.Unhover
	 */
	struct UShortcutringIcon_C_Unhover_Params
	{	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.Hover
	 */
	struct UShortcutringIcon_C_Hover_Params
	{	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnUnbindIcon
	 */
	struct UShortcutringIcon_C_OnUnbindIcon_Params
	{
	public:
		class USBShortcutRingIconBase*                             InIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnBindIcon
	 */
	struct UShortcutringIcon_C_OnBindIcon_Params
	{
	public:
		class USBShortcutRingIconBase*                             InIcon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnCreateWarpIcon
	 */
	struct UShortcutringIcon_C_OnCreateWarpIcon_Params
	{
	public:
		class USBShortcutRingIconBase*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnCreateCommandIcon
	 */
	struct UShortcutringIcon_C_OnCreateCommandIcon_Params
	{
	public:
		class USBShortcutRingIconBase*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnCreateTextIcon
	 */
	struct UShortcutringIcon_C_OnCreateTextIcon_Params
	{
	public:
		class USBShortcutRingIconBase*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnCreateBasicIcon
	 */
	struct UShortcutringIcon_C_OnCreateBasicIcon_Params
	{
	public:
		class USBShortcutRingIconBase*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnCreateNoneIcon
	 */
	struct UShortcutringIcon_C_OnCreateNoneIcon_Params
	{
	public:
		class USBShortcutRingIconBase*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.GetDragDropOperation
	 */
	struct UShortcutringIcon_C_GetDragDropOperation_Params
	{
	public:
		class UDragDropOperation*                                  OutDragDropOperation;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.SetDragDropOperation
	 */
	struct UShortcutringIcon_C_SetDragDropOperation_Params
	{
	public:
		class UDragDropOperation*                                  InDradDropOperation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnMouseButtonDown
	 */
	struct UShortcutringIcon_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnClickRight__DelegateSignature
	 */
	struct UShortcutringIcon_C_OnClickRight__DelegateSignature_Params
	{
	public:
		class UShortcutringIcon_C*                                 Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnClick__DelegateSignature
	 */
	struct UShortcutringIcon_C_OnClick__DelegateSignature_Params
	{
	public:
		class UShortcutringIcon_C*                                 Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnUnhover__DelegateSignature
	 */
	struct UShortcutringIcon_C_OnUnhover__DelegateSignature_Params
	{
	public:
		class UShortcutringIcon_C*                                 Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutringIcon.ShortcutringIcon_C.OnHover__DelegateSignature
	 */
	struct UShortcutringIcon_C_OnHover__DelegateSignature_Params
	{
	public:
		class UShortcutringIcon_C*                                 Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
