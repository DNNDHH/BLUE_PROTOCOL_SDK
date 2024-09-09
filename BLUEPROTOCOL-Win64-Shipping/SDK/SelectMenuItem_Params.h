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
	 * Function SelectMenuItem.SelectMenuItem_C.Set Menu Focus
	 */
	struct USelectMenuItem_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZDUC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectMenuItem.SelectMenuItem_C.Construct
	 */
	struct USelectMenuItem_C_Construct_Params
	{	};

	/**
	 * Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature
	 */
	struct USelectMenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectMenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectMenuItem.SelectMenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectMenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectMenuItem.SelectMenuItem_C.ExecuteUbergraph_SelectMenuItem
	 */
	struct USelectMenuItem_C_ExecuteUbergraph_SelectMenuItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMenuItem.SelectMenuItem_C.OnSelectItem__DelegateSignature
	 */
	struct USelectMenuItem_C_OnSelectItem__DelegateSignature_Params
	{
	public:
		class USelectMenuItem_C*                                   SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
