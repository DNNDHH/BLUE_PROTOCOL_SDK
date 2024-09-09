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
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetSubAbilityInfo
	 */
	struct UShopMenuDetailsWeapon_C_SetSubAbilityInfo_Params
	{
	public:
		bool                                                       bExist;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnable;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WHVZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Name;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ValueText;                                               // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bIsMax;                                                  // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EVGW[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ValueMaxText;                                            // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetBattleScore
	 */
	struct UShopMenuDetailsWeapon_C_GetBattleScore_Params
	{
	public:
		int32_t                                                    BattleScore;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText_Internal
	 */
	struct UShopMenuDetailsWeapon_C_GetSpEffectText_Internal_Params
	{
	public:
		class FName                                                PerkPickId;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryGroupsId
	 */
	struct UShopMenuDetailsWeapon_C_SetLotteryGroupsId_Params
	{
	public:
		int32_t                                                    LotteryGroupsId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X056[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryAbility
	 */
	struct UShopMenuDetailsWeapon_C_SetLotteryAbility_Params
	{
	public:
		bool                                                       bLotteryAbility;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VFW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText
	 */
	struct UShopMenuDetailsWeapon_C_GetSpEffectText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponAtkStatus
	 */
	struct UShopMenuDetailsWeapon_C_GetWeaponAtkStatus_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponLevelStatus
	 */
	struct UShopMenuDetailsWeapon_C_GetWeaponLevelStatus_Params
	{
	public:
		ESBWeaponStatus                                            EnhanceType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EO9H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Value;                                                   // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.FindCurrMapWeaponTransform
	 */
	struct UShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform_Params
	{
	public:
		class FString                                              InCurrMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FTransform                                          OutTransform;                                            // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Init
	 */
	struct UShopMenuDetailsWeapon_C_Init_Params
	{
	public:
		class FString                                              InCurrMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Construct
	 */
	struct UShopMenuDetailsWeapon_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ShowDetails
	 */
	struct UShopMenuDetailsWeapon_C_ShowDetails_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSellItem;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KBX5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ItemUniqueId;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShowProduct;                                            // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XNJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RecipeId;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.CloseDetails
	 */
	struct UShopMenuDetailsWeapon_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnAnimationFinished
	 */
	struct UShopMenuDetailsWeapon_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Destruct
	 */
	struct UShopMenuDetailsWeapon_C_Destruct_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ExecuteUbergraph_ShopMenuDetailsWeapon
	 */
	struct UShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MMFX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickShowOriginal__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_OnClickShowOriginal__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClose__DelegateSignature
	 */
	struct UShopMenuDetailsWeapon_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
