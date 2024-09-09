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
	 * Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetEnableButton
	 */
	struct UWBP_ScbPopupButtonParts_C_SetEnableButton_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetupExpertRank
	 */
	struct UWBP_ScbPopupButtonParts_C_SetupExpertRank_Params
	{
	public:
		int32_t                                                    InCurrRank;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxRank;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ScbPopupButtonParts_C_BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.ExecuteUbergraph_WBP_ScbPopupButtonParts
	 */
	struct UWBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.OnClickedScbPopup__DelegateSignature
	 */
	struct UWBP_ScbPopupButtonParts_C_OnClickedScbPopup__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
