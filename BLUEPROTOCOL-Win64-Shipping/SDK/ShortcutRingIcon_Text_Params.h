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
	 * Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnExecuteError
	 */
	struct UShortcutRingIcon_Text_C_OnExecuteError_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.PlayAnimPressed
	 */
	struct UShortcutRingIcon_Text_C_PlayAnimPressed_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseEnter
	 */
	struct UShortcutRingIcon_Text_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseLeave
	 */
	struct UShortcutRingIcon_Text_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.ExecuteUbergraph_ShortcutRingIcon_Text
	 */
	struct UShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
