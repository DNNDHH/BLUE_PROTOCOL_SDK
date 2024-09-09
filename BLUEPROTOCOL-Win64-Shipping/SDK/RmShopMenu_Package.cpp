/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.Set Esc Extra
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::SetEscExtra(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.Set Esc Extra");
		
		URmShopMenu_C_SetEscExtra_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetMaskBGVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::SetMaskBGVisibility(bool IsVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetMaskBGVisibility");
		
		URmShopMenu_C_SetMaskBGVisibility_Params params {};
		params.IsVisibility = IsVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.GetExpiredTimeRoseOrb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   Date                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::GetExpiredTimeRoseOrb(struct FDateTime* Date)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.GetExpiredTimeRoseOrb");
		
		URmShopMenu_C_GetExpiredTimeRoseOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Date != nullptr)
			*Date = params.Date;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.GetBpHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHistoryWindow_C*                            Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::GetBpHistory(class UHistoryWindow_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.GetBpHistory");
		
		URmShopMenu_C_GetBpHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetIconCaution
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::SetIconCaution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetIconCaution");
		
		URmShopMenu_C_SetIconCaution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.GetOutSiteURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCashExchangeType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      URL                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::GetOutSiteURL(ESBCashExchangeType Type, class FString* URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.GetOutSiteURL");
		
		URmShopMenu_C_GetOutSiteURL_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (URL != nullptr)
			*URL = params.URL;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetShopBtn_ExtraWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Open                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Swtich                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBRmShopMenuType                                  NextShop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetShopBtn_ExtraWindow(bool Open, bool Close, bool Swtich, ESBRmShopMenuType NextShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetShopBtn_ExtraWindow");
		
		URmShopMenu_C_SetShopBtn_ExtraWindow_Params params {};
		params.Open = Open;
		params.Close = Close;
		params.Swtich = Swtich;
		params.NextShop = NextShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetBirthdayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRegister                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::SetBirthdayInfo(int32_t Year, int32_t Month, int32_t Count, bool IsRegister)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetBirthdayInfo");
		
		URmShopMenu_C_SetBirthdayInfo_Params params {};
		params.Year = Year;
		params.Month = Month;
		params.Count = Count;
		params.IsRegister = IsRegister;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.InitButtonState
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::InitButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.InitButtonState");
		
		URmShopMenu_C_InitButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetCommandMenuVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisivle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::SetCommandMenuVisible(bool IsVisivle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetCommandMenuVisible");
		
		URmShopMenu_C_SetCommandMenuVisible_Params params {};
		params.IsVisivle = IsVisivle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SelectShopBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URmShopMenu_MenuItem_C*                      InShopBtn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SelectShopBtn(class URmShopMenu_MenuItem_C* InShopBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SelectShopBtn");
		
		URmShopMenu_C_SelectShopBtn_Params params {};
		params.InShopBtn = InShopBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.GetComponentRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::GetComponentRef(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.GetComponentRef");
		
		URmShopMenu_C_GetComponentRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ExecSubWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::ExecSubWindow(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ExecSubWindow");
		
		URmShopMenu_C_ExecSubWindow_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55");
		
		URmShopMenu_C_OnLoaded_A3A28D944CF4AB3840F5268CAA79CA55_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnLoaded_41D74A5F49658128DFE26A8ECAB6D644
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnLoaded_41D74A5F49658128DFE26A8ECAB6D644(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnLoaded_41D74A5F49658128DFE26A8ECAB6D644");
		
		URmShopMenu_C_OnLoaded_41D74A5F49658128DFE26A8ECAB6D644_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_Purchase
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ShowDialog_Purchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_Purchase");
		
		URmShopMenu_C_ShowDialog_Purchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_ErrorMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::ShowDialog_ErrorMessage(int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_ErrorMessage");
		
		URmShopMenu_C_ShowDialog_ErrorMessage_Params params {};
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_Payment
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ShowDialog_Payment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_Payment");
		
		URmShopMenu_C_ShowDialog_Payment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_Completed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowMsgStoreLetter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ERsDialogCurrencyPaidType                          PaidType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_Completed");
		
		URmShopMenu_C_ShowDialog_Completed_Params params {};
		params.ShowMsgStoreLetter = ShowMsgStoreLetter;
		params.PaidType = PaidType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_UseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        EffectDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void URmShopMenu_C::ShowDialog_UseItem(const class FText& EffectDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_UseItem");
		
		URmShopMenu_C_ShowDialog_UseItem_Params params {};
		params.EffectDescription = EffectDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetDialog_CommonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogProductTitleType                          ProductTitleType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ProductName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            RankFrom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RankTo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowPurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PurchaseNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogPaymentType                               PaymentType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PurchasePrice                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::SetDialog_CommonInfo(ERsDialogProductTitleType ProductTitleType, int32_t ItemSetId, const class FText& ProductName, int32_t RankFrom, int32_t RankTo, bool ShowPurchaseNum, int32_t PurchaseNum, ERsDialogPaymentType PaymentType, int32_t PurchasePrice, bool PaidOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetDialog_CommonInfo");
		
		URmShopMenu_C_SetDialog_CommonInfo_Params params {};
		params.ProductTitleType = ProductTitleType;
		params.ItemSetId = ItemSetId;
		params.ProductName = ProductName;
		params.RankFrom = RankFrom;
		params.RankTo = RankTo;
		params.ShowPurchaseNum = ShowPurchaseNum;
		params.PurchaseNum = PurchaseNum;
		params.PaymentType = PaymentType;
		params.PurchasePrice = PurchasePrice;
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_Processing
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ShowDialog_Processing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_Processing");
		
		URmShopMenu_C_ShowDialog_Processing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.CloseDialog
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::CloseDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.CloseDialog");
		
		URmShopMenu_C_CloseDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_LimitCondition
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ShowDialog_LimitCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_LimitCondition");
		
		URmShopMenu_C_ShowDialog_LimitCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.AddItem_LimitCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAchieve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::AddItem_LimitCondition(bool IsAchieve, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.AddItem_LimitCondition");
		
		URmShopMenu_C_AddItem_LimitCondition_Params params {};
		params.IsAchieve = IsAchieve;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_InputCoupon
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ShowDialog_InputCoupon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_InputCoupon");
		
		URmShopMenu_C_ShowDialog_InputCoupon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_ChargeRoseOrb
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ShowDialog_ChargeRoseOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_ChargeRoseOrb");
		
		URmShopMenu_C_ShowDialog_ChargeRoseOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ShowDialog_Caution
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ShowDialog_Caution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ShowDialog_Caution");
		
		URmShopMenu_C_ShowDialog_Caution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetDiscountRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetDiscountRate(int32_t Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetDiscountRate");
		
		URmShopMenu_C_SetDiscountRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetRoseOrb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Free                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   FreeExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   PaidExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetRoseOrb(int32_t Free, int32_t Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetRoseOrb");
		
		URmShopMenu_C_SetRoseOrb_Params params {};
		params.Free = Free;
		params.Paid = Paid;
		params.FreeExpired = FreeExpired;
		params.PaidExpired = PaidExpired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetBPPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetBPPoint(int32_t BP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetBPPoint");
		
		URmShopMenu_C_SetBPPoint_Params params {};
		params.BP = BP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetSeasonPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetSeasonPoint(int32_t SP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetSeasonPoint");
		
		URmShopMenu_C_SetSeasonPoint_Params params {};
		params.SP = SP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetDiscountRate_SeasonPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetDiscountRate_SeasonPass(int32_t Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetDiscountRate_SeasonPass");
		
		URmShopMenu_C_SetDiscountRate_SeasonPass_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.Request_Certification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::Request_Certification(int32_t Year, int32_t Month)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.Request_Certification");
		
		URmShopMenu_C_Request_Certification_Params params {};
		params.Year = Year;
		params.Month = Month;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnCertification_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnCertification_Event(bool Result, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnCertification_Event");
		
		URmShopMenu_C_OnCertification_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.Request_GetHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::Request_GetHistory(ESBHistoryType Type, int32_t Year, int32_t Month, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.Request_GetHistory");
		
		URmShopMenu_C_Request_GetHistory_Params params {};
		params.Type = Type;
		params.Year = Year;
		params.Month = Month;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnGetHistory_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBCashHistory>                      HistoryData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void URmShopMenu_C::OnGetHistory_Event(bool Result, int32_t RetCode, TArray<struct FSBCashHistory> HistoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnGetHistory_Event");
		
		URmShopMenu_C_OnGetHistory_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.HistoryData = HistoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.Request_GetHistoryExpired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::Request_GetHistoryExpired(ESBHistoryType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.Request_GetHistoryExpired");
		
		URmShopMenu_C_Request_GetHistoryExpired_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.GetHistoryExpired_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBHistoryExpired                           HistoryExpired                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void URmShopMenu_C::GetHistoryExpired_Event(bool Result, int32_t RetCode, const struct FSBHistoryExpired& HistoryExpired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.GetHistoryExpired_Event");
		
		URmShopMenu_C_GetHistoryExpired_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.HistoryExpired = HistoryExpired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.LanchWebBrowser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCashExchangeType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::LanchWebBrowser(ESBCashExchangeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.LanchWebBrowser");
		
		URmShopMenu_C_LanchWebBrowser_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_ROP_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_ROS_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_BPPE_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_BPPS_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_Gasya_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_SPP_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_SPS_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.TryStartShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsReload                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::TryStartShopMenu(ESBRmShopMenuType ShopType, bool IsReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.TryStartShopMenu");
		
		URmShopMenu_C_TryStartShopMenu_Params params {};
		params.ShopType = ShopType;
		params.IsReload = IsReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.StartChildShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::StartChildShopMenu(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.StartChildShopMenu");
		
		URmShopMenu_C_StartChildShopMenu_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OpenCertWindow
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OpenCertWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OpenCertWindow");
		
		URmShopMenu_C_OpenCertWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature(int32_t Year, int32_t Month)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature");
		
		URmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_11_OnRequest__DelegateSignature_Params params {};
		params.Year = Year;
		params.Month = Month;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature");
		
		URmShopMenu_C_BndEvt__BpCertification_K2Node_ComponentBoundEvent_12_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OpenHistoryWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OpenHistoryWindow(ESBHistoryType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OpenHistoryWindow");
		
		URmShopMenu_C_OpenHistoryWindow_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.Close_Event
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::Close_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.Close_Event");
		
		URmShopMenu_C_Close_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__MenuItem2_Commerce_K2Node_ComponentBoundEvent_16_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__MenuItem2_Certification_K2Node_ComponentBoundEvent_17_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__MenuItem2_History_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Shop_SPRP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnSubMenuTermReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady");
		
		URmShopMenu_C_OnSubMenuTermReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnEndInAnim_Event
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnEndInAnim_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnEndInAnim_Event");
		
		URmShopMenu_C_OnEndInAnim_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetRoHistoryButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetRoHistoryButton(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetRoHistoryButton");
		
		URmShopMenu_C_SetRoHistoryButton_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__MenuItem2_BpHistory_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetSubButtonVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetSubButtonVisibility(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetSubButtonVisibility");
		
		URmShopMenu_C_SetSubButtonVisibility_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetBpHistoryButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetBpHistoryButton(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetBpHistoryButton");
		
		URmShopMenu_C_SetBpHistoryButton_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetCommerceButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetCommerceButton(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetCommerceButton");
		
		URmShopMenu_C_SetCommerceButton_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetCertificationButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SetCertificationButton(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetCertificationButton");
		
		URmShopMenu_C_SetCertificationButton_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SetEscIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::SetEscIconVisibility(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SetEscIconVisibility");
		
		URmShopMenu_C_SetEscIconVisibility_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.DialogOpen_Certification
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::DialogOpen_Certification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.DialogOpen_Certification");
		
		URmShopMenu_C_DialogOpen_Certification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnSubDialogCloseReady
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnSubDialogCloseReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnSubDialogCloseReady");
		
		URmShopMenu_C_OnSubDialogCloseReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnRsDialogManagerCloseReady
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnRsDialogManagerCloseReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnRsDialogManagerCloseReady");
		
		URmShopMenu_C_OnRsDialogManagerCloseReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OpenExtraWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ExtraType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OpenExtraWindow(ESBRmShopMenuType ExtraType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OpenExtraWindow");
		
		URmShopMenu_C_OpenExtraWindow_Params params {};
		params.ExtraType = ExtraType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.CloseExtraWindow
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::CloseExtraWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.CloseExtraWindow");
		
		URmShopMenu_C_CloseExtraWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.SwitchExtraWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  NextShop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::SwitchExtraWindow(ESBRmShopMenuType NextShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.SwitchExtraWindow");
		
		URmShopMenu_C_SwitchExtraWindow_Params params {};
		params.NextShop = NextShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__RmShopMenu_RmShopMenu_MenuItem3_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnClose_BpHistory
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnClose_BpHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnClose_BpHistory");
		
		URmShopMenu_C_OnClose_BpHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnRequest_BpHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnRequest_BpHistory(ESBHistoryType Type, int32_t Year, int32_t Month, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnRequest_BpHistory");
		
		URmShopMenu_C_OnRequest_BpHistory_Params params {};
		params.Type = Type;
		params.Year = Year;
		params.Month = Month;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnRequestDel_BpHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnRequestDel_BpHistory(ESBHistoryType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnRequestDel_BpHistory");
		
		URmShopMenu_C_OnRequestDel_BpHistory_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.DoClose_ExWindow
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::DoClose_ExWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.DoClose_ExWindow");
		
		URmShopMenu_C_DoClose_ExWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.Construct");
		
		URmShopMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature");
		
		URmShopMenu_C_BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_11_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnEndRmShopMenu_Event
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnEndRmShopMenu_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnEndRmShopMenu_Event");
		
		URmShopMenu_C_OnEndRmShopMenu_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnCloseShopMenu
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnCloseShopMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnCloseShopMenu");
		
		URmShopMenu_C_OnCloseShopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnAnimeEnd_MenuIn
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnAnimeEnd_MenuIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnAnimeEnd_MenuIn");
		
		URmShopMenu_C_OnAnimeEnd_MenuIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnGetCryptocurrency_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCryptoCurrency                           Cryptocurrency                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void URmShopMenu_C::OnGetCryptocurrency_Event(bool Result, int32_t RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnGetCryptocurrency_Event");
		
		URmShopMenu_C_OnGetCryptocurrency_Event_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.Cryptocurrency = Cryptocurrency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnButtonClicked_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogType                                      DialogType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogButtonType                                ButtonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnButtonClicked_Event(ERsDialogType DialogType, ERsDialogButtonType ButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnButtonClicked_Event");
		
		URmShopMenu_C_OnButtonClicked_Event_Params params {};
		params.DialogType = DialogType;
		params.ButtonType = ButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnUseCoupon_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CouponCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnUseCoupon_Event(const class FString& CouponCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnUseCoupon_Event");
		
		URmShopMenu_C_OnUseCoupon_Event_Params params {};
		params.CouponCode = CouponCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnEndInAnim
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnEndInAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnEndInAnim");
		
		URmShopMenu_C_OnEndInAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnEndOutAnim
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnEndOutAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnEndOutAnim");
		
		URmShopMenu_C_OnEndOutAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnRegist_BirthdayInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnRegist_BirthdayInfo(int32_t Year, int32_t Month)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnRegist_BirthdayInfo");
		
		URmShopMenu_C_OnRegist_BirthdayInfo_Params params {};
		params.Year = Year;
		params.Month = Month;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnSet_BirthdayInfo
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnSet_BirthdayInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnSet_BirthdayInfo");
		
		URmShopMenu_C_OnSet_BirthdayInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.Destruct");
		
		URmShopMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.CustomEvent_3
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.CustomEvent_3");
		
		URmShopMenu_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.CreateMaintenanceALL
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::CreateMaintenanceALL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.CreateMaintenanceALL");
		
		URmShopMenu_C_CreateMaintenanceALL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopErrorStatus                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::CustomEvent_2(ESBRmShopErrorStatus Result, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.CustomEvent_2");
		
		URmShopMenu_C_CustomEvent_2_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ForceClose
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ForceClose");
		
		URmShopMenu_C_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnUpdateSeasonPassAnyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnUpdateSeasonPassAnyInfo");
		
		URmShopMenu_C_OnUpdateSeasonPassAnyInfo_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady_RoPurchaseEx
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnSubMenuTermReady_RoPurchaseEx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnSubMenuTermReady_RoPurchaseEx");
		
		URmShopMenu_C_OnSubMenuTermReady_RoPurchaseEx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.ExecuteUbergraph_RmShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::ExecuteUbergraph_RmShopMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.ExecuteUbergraph_RmShopMenu");
		
		URmShopMenu_C_ExecuteUbergraph_RmShopMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnDialogUseCoupon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CouponCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnDialogUseCoupon__DelegateSignature(const class FString& CouponCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnDialogUseCoupon__DelegateSignature");
		
		URmShopMenu_C_OnDialogUseCoupon__DelegateSignature_Params params {};
		params.CouponCode = CouponCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnDialogButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogType                                      DialogType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogButtonType                                ButtonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_C::OnDialogButtonClicked__DelegateSignature(ERsDialogType DialogType, ERsDialogButtonType ButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnDialogButtonClicked__DelegateSignature");
		
		URmShopMenu_C_OnDialogButtonClicked__DelegateSignature_Params params {};
		params.DialogType = DialogType;
		params.ButtonType = ButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnCommandMenuVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_C::OnCommandMenuVisible__DelegateSignature(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnCommandMenuVisible__DelegateSignature");
		
		URmShopMenu_C_OnCommandMenuVisible__DelegateSignature_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu.RmShopMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu.RmShopMenu_C.OnClose__DelegateSignature");
		
		URmShopMenu_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URmShopMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URmShopMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RmShopMenu.RmShopMenu_C");
		return ptr;
	}

}


