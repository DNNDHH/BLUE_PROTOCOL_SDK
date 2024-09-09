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
	 * Function SBButton.SBButton_C.OnGetFocus
	 */
	struct USBButton_C_OnGetFocus_Params
	{	};

	/**
	 * Function SBButton.SBButton_C.OnLostFocus
	 */
	struct USBButton_C_OnLostFocus_Params
	{	};

	/**
	 * Function SBButton.SBButton_C.OnPressOk
	 */
	struct USBButton_C_OnPressOk_Params
	{	};

	/**
	 * Function SBButton.SBButton_C.ExecuteUbergraph_SBButton
	 */
	struct USBButton_C_ExecuteUbergraph_SBButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SBButton.SBButton_C.OnHandledPressOk__DelegateSignature
	 */
	struct USBButton_C_OnHandledPressOk__DelegateSignature_Params
	{	};

	/**
	 * Function SBButton.SBButton_C.OnHandledLostFocus__DelegateSignature
	 */
	struct USBButton_C_OnHandledLostFocus__DelegateSignature_Params
	{	};

	/**
	 * Function SBButton.SBButton_C.OnHandledGetFocus__DelegateSignature
	 */
	struct USBButton_C_OnHandledGetFocus__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
