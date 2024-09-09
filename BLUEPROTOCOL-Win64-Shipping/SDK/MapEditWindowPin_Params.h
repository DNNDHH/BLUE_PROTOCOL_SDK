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
	 * Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible OFF
	 */
	struct UMapEditWindowPin_C_SetPinVisibleOFF_Params
	{
	public:
		bool                                                       IsOFF;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible ON
	 */
	struct UMapEditWindowPin_C_SetPinVisibleON_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible
	 */
	struct UMapEditWindowPin_C_SetPinVisible_Params
	{
	public:
		bool                                                       PinChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.SetTitle
	 */
	struct UMapEditWindowPin_C_SetTitle_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UMapEditWindowPin_C_BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UMapEditWindowPin_C_BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.PreConstruct
	 */
	struct UMapEditWindowPin_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.ExecuteUbergraph_MapEditWindowPin
	 */
	struct UMapEditWindowPin_C_ExecuteUbergraph_MapEditWindowPin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindowPin.MapEditWindowPin_C.OnPinVisible__DelegateSignature
	 */
	struct UMapEditWindowPin_C_OnPinVisible__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
