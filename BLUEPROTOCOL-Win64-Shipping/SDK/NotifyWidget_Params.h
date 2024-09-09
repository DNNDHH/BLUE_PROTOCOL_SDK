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
	 * Function NotifyWidget.NotifyWidget_C.OnPress_MainMenu
	 */
	struct UNotifyWidget_C_OnPress_MainMenu_Params
	{	};

	/**
	 * Function NotifyWidget.NotifyWidget_C.OnPress_Ok
	 */
	struct UNotifyWidget_C_OnPress_Ok_Params
	{	};

	/**
	 * Function NotifyWidget.NotifyWidget_C.OnPress_Cancel
	 */
	struct UNotifyWidget_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function NotifyWidget.NotifyWidget_C.ExecuteUbergraph_NotifyWidget
	 */
	struct UNotifyWidget_C_ExecuteUbergraph_NotifyWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyWidget.NotifyWidget_C.Press Cancel__DelegateSignature
	 */
	struct UNotifyWidget_C_PressCancel__DelegateSignature_Params
	{	};

	/**
	 * Function NotifyWidget.NotifyWidget_C.Press Ok__DelegateSignature
	 */
	struct UNotifyWidget_C_PressOk__DelegateSignature_Params
	{	};

	/**
	 * Function NotifyWidget.NotifyWidget_C.Press MainMenu__DelegateSignature
	 */
	struct UNotifyWidget_C_PressMainMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
