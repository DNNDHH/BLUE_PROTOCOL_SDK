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
	 * Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnExecuteError
	 */
	struct UShortcutRingIcon_Warp_C_OnExecuteError_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnSetEnableToolTip
	 */
	struct UShortcutRingIcon_Warp_C_OnSetEnableToolTip_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.GetToolTip
	 */
	struct UShortcutRingIcon_Warp_C_GetToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.PlayAnimPressed
	 */
	struct UShortcutRingIcon_Warp_C_PlayAnimPressed_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseEnter
	 */
	struct UShortcutRingIcon_Warp_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseLeave
	 */
	struct UShortcutRingIcon_Warp_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.ExecuteUbergraph_ShortcutRingIcon_Warp
	 */
	struct UShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
