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
	 * Function RmShopMenu.RmShopMenu_C.Set Esc Extra
	 */
	struct URmShopMenu_C_SetEscExtra_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetMaskBGVisibility
	 */
	struct URmShopMenu_C_SetMaskBGVisibility_Params
	{
	public:
		bool                                                       IsVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.GetExpiredTimeRoseOrb
	 */
	struct URmShopMenu_C_GetExpiredTimeRoseOrb_Params
	{
	public:
		struct FDateTime                                           Date;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.GetBpHistory
	 */
	struct URmShopMenu_C_GetBpHistory_Params
	{
	public:
		class UHistoryWindow_C*                                    Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetIconCaution
	 */
	struct URmShopMenu_C_SetIconCaution_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.GetOutSiteURL
	 */
	struct URmShopMenu_C_GetOutSiteURL_Params
	{
	public:
		ESBCashExchangeType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ILQ1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              URL;                                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetShopBtn_ExtraWindow
	 */
	struct URmShopMenu_C_SetShopBtn_ExtraWindow_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Close;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Swtich;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBRmShopMenuType                                          NextShop;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetBirthdayInfo
	 */
	struct URmShopMenu_C_SetBirthdayInfo_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRegister;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FFGF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.InitButtonState
	 */
	struct URmShopMenu_C_InitButtonState_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetCommandMenuVisible
	 */
	struct URmShopMenu_C_SetCommandMenuVisible_Params
	{
	public:
		bool                                                       IsVisivle;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SelectShopBtn
	 */
	struct URmShopMenu_C_SelectShopBtn_Params
	{
	public:
		class URmShopMenu_MenuItem_C*                              InShopBtn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.GetComponentRef
	 */
	struct URmShopMenu_C_GetComponentRef_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_33ET[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ExecSubWindow
	 */
	struct URmShopMenu_C_ExecSubWindow_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55
	 */
	struct URmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnLoaded_41D74A5F49658128DFE26A8ECAB6D644
	 */
	struct URmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_Purchase
	 */
	struct URmShopMenu_C_ShowDialog_Purchase_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_ErrorMessage
	 */
	struct URmShopMenu_C_ShowDialog_ErrorMessage_Params
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_Payment
	 */
	struct URmShopMenu_C_ShowDialog_Payment_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_Completed
	 */
	struct URmShopMenu_C_ShowDialog_Completed_Params
	{
	public:
		bool                                                       ShowMsgStoreLetter;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ERsDialogCurrencyPaidType                                  PaidType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_UseItem
	 */
	struct URmShopMenu_C_ShowDialog_UseItem_Params
	{
	public:
		class FText                                                EffectDescription;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetDialog_CommonInfo
	 */
	struct URmShopMenu_C_SetDialog_CommonInfo_Params
	{
	public:
		ERsDialogProductTitleType                                  ProductTitleType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6DM0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemSetId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ProductName;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    RankFrom;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RankTo;                                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowPurchaseNum;                                         // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_THZU[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchaseNum;                                             // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogPaymentType                                       PaymentType;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XD79[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PurchasePrice;                                           // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PaidOnly;                                                // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_Processing
	 */
	struct URmShopMenu_C_ShowDialog_Processing_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.CloseDialog
	 */
	struct URmShopMenu_C_CloseDialog_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_LimitCondition
	 */
	struct URmShopMenu_C_ShowDialog_LimitCondition_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.AddItem_LimitCondition
	 */
	struct URmShopMenu_C_AddItem_LimitCondition_Params
	{
	public:
		bool                                                       IsAchieve;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2NU8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_InputCoupon
	 */
	struct URmShopMenu_C_ShowDialog_InputCoupon_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_ChargeRoseOrb
	 */
	struct URmShopMenu_C_ShowDialog_ChargeRoseOrb_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ShowDialog_Caution
	 */
	struct URmShopMenu_C_ShowDialog_Caution_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetDiscountRate
	 */
	struct URmShopMenu_C_SetDiscountRate_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetRoseOrb
	 */
	struct URmShopMenu_C_SetRoseOrb_Params
	{
	public:
		int32_t                                                    Free;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Paid;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           FreeExpired;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           PaidExpired;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetBPPoint
	 */
	struct URmShopMenu_C_SetBPPoint_Params
	{
	public:
		int32_t                                                    BP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetSeasonPoint
	 */
	struct URmShopMenu_C_SetSeasonPoint_Params
	{
	public:
		int32_t                                                    SP;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetDiscountRate_SeasonPass
	 */
	struct URmShopMenu_C_SetDiscountRate_SeasonPass_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.Request_Certification
	 */
	struct URmShopMenu_C_Request_Certification_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnCertification_Event
	 */
	struct URmShopMenu_C_OnCertification_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZ4Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.Request_GetHistory
	 */
	struct URmShopMenu_C_Request_GetHistory_Params
	{
	public:
		ESBHistoryType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T3NF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Year;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnGetHistory_Event
	 */
	struct URmShopMenu_C_OnGetHistory_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HLYW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSBCashHistory>                              HistoryData;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.Request_GetHistoryExpired
	 */
	struct URmShopMenu_C_Request_GetHistoryExpired_Params
	{
	public:
		ESBHistoryType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.GetHistoryExpired_Event
	 */
	struct URmShopMenu_C_GetHistoryExpired_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PX8I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBHistoryExpired                                   HistoryExpired;                                          // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.LanchWebBrowser
	 */
	struct URmShopMenu_C_LanchWebBrowser_Params
	{
	public:
		ESBCashExchangeType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.TryStartShopMenu
	 */
	struct URmShopMenu_C_TryStartShopMenu_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsReload;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.StartChildShopMenu
	 */
	struct URmShopMenu_C_StartChildShopMenu_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OpenCertWindow
	 */
	struct URmShopMenu_C_OpenCertWindow_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OpenHistoryWindow
	 */
	struct URmShopMenu_C_OpenHistoryWindow_Params
	{
	public:
		ESBHistoryType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.Close_Event
	 */
	struct URmShopMenu_C_Close_Event_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady
	 */
	struct URmShopMenu_C_OnSubMenuTermReady_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnEndInAnim_Event
	 */
	struct URmShopMenu_C_OnEndInAnim_Event_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetRoHistoryButton
	 */
	struct URmShopMenu_C_SetRoHistoryButton_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetSubButtonVisibility
	 */
	struct URmShopMenu_C_SetSubButtonVisibility_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetBpHistoryButton
	 */
	struct URmShopMenu_C_SetBpHistoryButton_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetCommerceButton
	 */
	struct URmShopMenu_C_SetCommerceButton_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetCertificationButton
	 */
	struct URmShopMenu_C_SetCertificationButton_Params
	{
	public:
		ESBRmShopMenuType                                          ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SetEscIconVisibility
	 */
	struct URmShopMenu_C_SetEscIconVisibility_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.DialogOpen_Certification
	 */
	struct URmShopMenu_C_DialogOpen_Certification_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnSubDialogCloseReady
	 */
	struct URmShopMenu_C_OnSubDialogCloseReady_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnRsDialogManagerCloseReady
	 */
	struct URmShopMenu_C_OnRsDialogManagerCloseReady_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OpenExtraWindow
	 */
	struct URmShopMenu_C_OpenExtraWindow_Params
	{
	public:
		ESBRmShopMenuType                                          ExtraType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.CloseExtraWindow
	 */
	struct URmShopMenu_C_CloseExtraWindow_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.SwitchExtraWindow
	 */
	struct URmShopMenu_C_SwitchExtraWindow_Params
	{
	public:
		ESBRmShopMenuType                                          NextShop;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnClose_BpHistory
	 */
	struct URmShopMenu_C_OnClose_BpHistory_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnRequest_BpHistory
	 */
	struct URmShopMenu_C_OnRequest_BpHistory_Params
	{
	public:
		ESBHistoryType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CVBW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Year;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnRequestDel_BpHistory
	 */
	struct URmShopMenu_C_OnRequestDel_BpHistory_Params
	{
	public:
		ESBHistoryType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.DoClose_ExWindow
	 */
	struct URmShopMenu_C_DoClose_ExWindow_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.Construct
	 */
	struct URmShopMenu_C_Construct_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature
	 */
	struct URmShopMenu_C_BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnEndRmShopMenu_Event
	 */
	struct URmShopMenu_C_OnEndRmShopMenu_Event_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnCloseShopMenu
	 */
	struct URmShopMenu_C_OnCloseShopMenu_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnAnimeEnd_MenuIn
	 */
	struct URmShopMenu_C_OnAnimeEnd_MenuIn_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnGetCryptocurrency_Event
	 */
	struct URmShopMenu_C_OnGetCryptocurrency_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6PHW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCryptoCurrency                                   Cryptocurrency;                                          // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnButtonClicked_Event
	 */
	struct URmShopMenu_C_OnButtonClicked_Event_Params
	{
	public:
		ERsDialogType                                              DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogButtonType                                        ButtonType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnUseCoupon_Event
	 */
	struct URmShopMenu_C_OnUseCoupon_Event_Params
	{
	public:
		class FString                                              CouponCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnEndInAnim
	 */
	struct URmShopMenu_C_OnEndInAnim_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnEndOutAnim
	 */
	struct URmShopMenu_C_OnEndOutAnim_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnRegist_BirthdayInfo
	 */
	struct URmShopMenu_C_OnRegist_BirthdayInfo_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnSet_BirthdayInfo
	 */
	struct URmShopMenu_C_OnSet_BirthdayInfo_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.Destruct
	 */
	struct URmShopMenu_C_Destruct_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.CustomEvent_3
	 */
	struct URmShopMenu_C_CustomEvent_3_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.CreateMaintenanceALL
	 */
	struct URmShopMenu_C_CreateMaintenanceALL_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.CustomEvent_2
	 */
	struct URmShopMenu_C_CustomEvent_2_Params
	{
	public:
		ESBRmShopErrorStatus                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_USQW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ForceClose
	 */
	struct URmShopMenu_C_ForceClose_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnUpdateSeasonPassAnyInfo
	 */
	struct URmShopMenu_C_OnUpdateSeasonPassAnyInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady_RoPurchaseEx
	 */
	struct URmShopMenu_C_OnSubMenuTermReady_RoPurchaseEx_Params
	{	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.ExecuteUbergraph_RmShopMenu
	 */
	struct URmShopMenu_C_ExecuteUbergraph_RmShopMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnDialogUseCoupon__DelegateSignature
	 */
	struct URmShopMenu_C_OnDialogUseCoupon__DelegateSignature_Params
	{
	public:
		class FString                                              CouponCode;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnDialogButtonClicked__DelegateSignature
	 */
	struct URmShopMenu_C_OnDialogButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogType                                              DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERsDialogButtonType                                        ButtonType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnCommandMenuVisible__DelegateSignature
	 */
	struct URmShopMenu_C_OnCommandMenuVisible__DelegateSignature_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RmShopMenu.RmShopMenu_C.OnClose__DelegateSignature
	 */
	struct URmShopMenu_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
