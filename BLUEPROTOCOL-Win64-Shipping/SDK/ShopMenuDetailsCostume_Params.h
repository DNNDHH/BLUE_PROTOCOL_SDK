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
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetModelCaptureImageVisibility
	 */
	struct UShopMenuDetailsCostume_C_SetModelCaptureImageVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxVisibility
	 */
	struct UShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxSelected
	 */
	struct UShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected_Params
	{
	public:
		bool                                                       IsMaleCostumeSelected;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Init
	 */
	struct UShopMenuDetailsCostume_C_Init_Params
	{
	public:
		class FString                                              InCurrMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Construct
	 */
	struct UShopMenuDetailsCostume_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ShowDetails
	 */
	struct UShopMenuDetailsCostume_C_ShowDetails_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.CloseDetails
	 */
	struct UShopMenuDetailsCostume_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnAnimationFinished
	 */
	struct UShopMenuDetailsCostume_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ExecuteUbergraph_ShopMenuDetailsCostume
	 */
	struct UShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnSelectCostumeType__DelegateSignature
	 */
	struct UShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature_Params
	{
	public:
		bool                                                       IsMaleCostumeSelected;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnClose__DelegateSignature
	 */
	struct UShopMenuDetailsCostume_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
