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
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ExitClickedEscBtn
	 */
	struct UBP_RsDialogManager_C_ExitClickedEscBtn_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchNextDialog
	 */
	struct UBP_RsDialogManager_C_SwitchNextDialog_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Set Next Dialog
	 */
	struct UBP_RsDialogManager_C_SetNextDialog_Params
	{
	public:
		ERsDialogType                                              NextDialog;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Set Shop Type
	 */
	struct UBP_RsDialogManager_C_SetShopType_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Initialize
	 */
	struct UBP_RsDialogManager_C_Initialize_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SetErrorMessage
	 */
	struct UBP_RsDialogManager_C_SetErrorMessage_Params
	{
	public:
		int32_t                                                    MessageId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_InputCoupon
	 */
	struct UBP_RsDialogManager_C_ShowDialog_InputCoupon_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_LimitCondition
	 */
	struct UBP_RsDialogManager_C_ShowDialog_LimitCondition_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.AddItem_LimitCondition
	 */
	struct UBP_RsDialogManager_C_AddItem_LimitCondition_Params
	{
	public:
		bool                                                       IsAchieve;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WC9G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ChargeRoseOrb
	 */
	struct UBP_RsDialogManager_C_ShowDialog_ChargeRoseOrb_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ErrorMessage
	 */
	struct UBP_RsDialogManager_C_ShowDialog_ErrorMessage_Params
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Processing
	 */
	struct UBP_RsDialogManager_C_ShowDialog_Processing_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_UseItem
	 */
	struct UBP_RsDialogManager_C_ShowDialog_UseItem_Params
	{
	public:
		class FText                                                EffectDescription;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Completed
	 */
	struct UBP_RsDialogManager_C_ShowDialog_Completed_Params
	{
	public:
		bool                                                       ShowMsgStoreLetter;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ERsDialogCurrencyPaidType                                  PaidType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.PlaySE_Completed
	 */
	struct UBP_RsDialogManager_C_PlaySE_Completed_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Payment
	 */
	struct UBP_RsDialogManager_C_ShowDialog_Payment_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Purchase
	 */
	struct UBP_RsDialogManager_C_ShowDialog_Purchase_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate
	 */
	struct UBP_RsDialogManager_C_SetDiscountRate_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate_SeasonPass
	 */
	struct UBP_RsDialogManager_C_SetDiscountRate_SeasonPass_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Construct
	 */
	struct UBP_RsDialogManager_C_Construct_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Destruct
	 */
	struct UBP_RsDialogManager_C_Destruct_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Caution
	 */
	struct UBP_RsDialogManager_C_ShowDialog_Caution_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Show
	 */
	struct UBP_RsDialogManager_C_Show_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Hide
	 */
	struct UBP_RsDialogManager_C_Hide_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.StartUI
	 */
	struct UBP_RsDialogManager_C_StartUI_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.EndUI
	 */
	struct UBP_RsDialogManager_C_EndUI_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Base
	 */
	struct UBP_RsDialogManager_C_EndAnimIn_Base_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Base
	 */
	struct UBP_RsDialogManager_C_EndAnimOut_Base_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Dialog
	 */
	struct UBP_RsDialogManager_C_EndAnimIn_Dialog_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Dialog
	 */
	struct UBP_RsDialogManager_C_EndAnimOut_Dialog_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchDialog
	 */
	struct UBP_RsDialogManager_C_SwitchDialog_Params
	{
	public:
		ERsDialogType                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.HideDialog
	 */
	struct UBP_RsDialogManager_C_HideDialog_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SetCommonInfo
	 */
	struct UBP_RsDialogManager_C_SetCommonInfo_Params
	{
	public:
		ERsDialogProductTitleType                                  ProductTilteType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_44UT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSetId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ProductName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    RankFrom;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RankTo;                                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowPurchaseNum;                                         // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R0P7[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchaseNum;                                             // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogPaymentType                                       PaymentType01;                                           // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I4M7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchasePrice01;                                         // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogPaymentType                                       PaymentType02;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9WVE[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchasePrice02;                                         // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PaidOnly;                                                // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.Tick
	 */
	struct UBP_RsDialogManager_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.CloseDialog_Force
	 */
	struct UBP_RsDialogManager_C_CloseDialog_Force_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.JumpShopMenu
	 */
	struct UBP_RsDialogManager_C_JumpShopMenu_Params
	{
	public:
		ESBRmShopMenuType                                          Shop;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.NextDialog_Event
	 */
	struct UBP_RsDialogManager_C_NextDialog_Event_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SetRoseOrb
	 */
	struct UBP_RsDialogManager_C_SetRoseOrb_Params
	{
	public:
		int32_t                                                    Free;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Paid;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           FreeExpired;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           PaidExpired;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SetBPPoint
	 */
	struct UBP_RsDialogManager_C_SetBPPoint_Params
	{
	public:
		int32_t                                                    BP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.SetSeasonPoint
	 */
	struct UBP_RsDialogManager_C_SetSeasonPoint_Params
	{
	public:
		int32_t                                                    SP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.CheckEndAnimIn_Event
	 */
	struct UBP_RsDialogManager_C_CheckEndAnimIn_Event_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.RegistInput
	 */
	struct UBP_RsDialogManager_C_RegistInput_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.OnCloseDialog
	 */
	struct UBP_RsDialogManager_C_OnCloseDialog_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.ExecuteUbergraph_BP_RsDialogManager
	 */
	struct UBP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.OnUseCoupon__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_OnUseCoupon__DelegateSignature_Params
	{
	public:
		class FString                                              CouponCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialogManager.BP_RsDialogManager_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialogManager_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogType                                              RsDialogType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogButtonType                                        ClickedButtonType;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
