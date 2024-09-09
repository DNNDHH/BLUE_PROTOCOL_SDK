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
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.SetupByUniqueId
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_SetupByUniqueId_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.SetArrowType
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_SetArrowType_Params
	{
	public:
		bool                                                       InArrowUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.SetArrowVisibility
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_SetArrowVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENR2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.Setup
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_Setup_Params
	{
	public:
		int32_t                                                    InAbilityEffectId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0R3N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0008(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.Construct
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_Construct_Params
	{	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.Destruct
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_Destruct_Params
	{	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.PreConstruct
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.BndEvt__CommonImagineAbilityEfficacyDescPopup_SBButtonFullScreen_C_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_BndEvt__CommonImagineAbilityEfficacyDescPopup_SBButtonFullScreen_C_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.SetPopupPosition
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_SetPopupPosition_Params
	{
	public:
		class UWidget*                                             InAnchorWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InArrowUp;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.OnPressCancelKey
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_OnPressCancelKey_Params
	{	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.ExecuteUbergraph_CommonImagineAbilityEfficacyDescPopup
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_ExecuteUbergraph_CommonImagineAbilityEfficacyDescPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonImagineAbilityEfficacyDescPopup.CommonImagineAbilityEfficacyDescPopup_C.OnClose__DelegateSignature
	 */
	struct UCommonImagineAbilityEfficacyDescPopup_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
