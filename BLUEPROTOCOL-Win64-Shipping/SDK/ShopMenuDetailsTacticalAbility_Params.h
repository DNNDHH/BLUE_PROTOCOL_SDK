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
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.BuffIconsCollapsed
	 */
	struct UShopMenuDetailsTacticalAbility_C_BuffIconsCollapsed_Params
	{	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.Construct
	 */
	struct UShopMenuDetailsTacticalAbility_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.ShowDetails
	 */
	struct UShopMenuDetailsTacticalAbility_C_ShowDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.CloseDetails
	 */
	struct UShopMenuDetailsTacticalAbility_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UShopMenuDetailsTacticalAbility_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.SetData
	 */
	struct UShopMenuDetailsTacticalAbility_C_SetData_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.ExecuteUbergraph_ShopMenuDetailsTacticalAbility
	 */
	struct UShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
