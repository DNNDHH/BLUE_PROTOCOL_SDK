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
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.ResetCkeckState
	 */
	struct UEventShopStorageSelect_C_ResetCkeckState_Params
	{
	public:
		ESBEventShopStorage                                        Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.Initialize
	 */
	struct UEventShopStorageSelect_C_Initialize_Params
	{	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.Hide
	 */
	struct UEventShopStorageSelect_C_Hide_Params
	{	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.Show
	 */
	struct UEventShopStorageSelect_C_Show_Params
	{	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.UpdateCheckState
	 */
	struct UEventShopStorageSelect_C_UpdateCheckState_Params
	{
	public:
		class USBCheckBox_C*                                       On;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBCheckBox_C*                                       Off1;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBCheckBox_C*                                       Off2;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBEventShopStorage                                        Index;                                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select03_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select02_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_Select01_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_Btn_SettingChange1_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_Btn_SettingChange1_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.BndEvt__EventShopStorageSelect_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UEventShopStorageSelect_C_BndEvt__EventShopStorageSelect_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.OnAnimFinish_Event
	 */
	struct UEventShopStorageSelect_C_OnAnimFinish_Event_Params
	{	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.Construct
	 */
	struct UEventShopStorageSelect_C_Construct_Params
	{	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.ExecuteUbergraph_EventShopStorageSelect
	 */
	struct UEventShopStorageSelect_C_ExecuteUbergraph_EventShopStorageSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopStorageSelect.EventShopStorageSelect_C.OnClosed__DelegateSignature
	 */
	struct UEventShopStorageSelect_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
