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
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateProductList
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::UpdateProductList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateProductList");
		
		UGashaShopSubWindow_Rate_C_UpdateProductList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBGashaReward>                      InRewardList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGashaShopSubWindow_Rate_C::SetInfo(TArray<struct FSBGashaReward>* InRewardList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.SetInfo");
		
		UGashaShopSubWindow_Rate_C_SetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRewardList != nullptr)
			*InRewardList = params.InRewardList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.InitUpdateTab
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::InitUpdateTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.InitUpdateTab");
		
		UGashaShopSubWindow_Rate_C_InitUpdateTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_Rate_C::BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateStapUpGasha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_Rate_C::UpdateStapUpGasha(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateStapUpGasha");
		
		UGashaShopSubWindow_Rate_C_UpdateStapUpGasha_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaInfo                                GashaInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGashaShopSubWindow_Rate_C::BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature_Params params {};
		params.GashaInfo = GashaInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateBanner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_Rate_C::UpdateBanner(const class FString& Title, const class FString& Banner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.UpdateBanner");
		
		UGashaShopSubWindow_Rate_C_UpdateBanner_Params params {};
		params.Title = Title;
		params.Banner = Banner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.Construct
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.Construct");
		
		UGashaShopSubWindow_Rate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_CloseBtnProductList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::BndEvt__GashaShopSubWindow_Rate_CloseBtnProductList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_CloseBtnProductList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_CloseBtnProductList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BtnNotes_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::BndEvt__GashaShopSubWindow_Rate_BtnNotes_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.BndEvt__GashaShopSubWindow_Rate_BtnNotes_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_BndEvt__GashaShopSubWindow_Rate_BtnNotes_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.OnClose_SubWindow
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::OnClose_SubWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.OnClose_SubWindow");
		
		UGashaShopSubWindow_Rate_C_OnClose_SubWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.Destruct");
		
		UGashaShopSubWindow_Rate_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.SubWindow_Close
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::SubWindow_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.SubWindow_Close");
		
		UGashaShopSubWindow_Rate_C_SubWindow_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.ExecuteUbergraph_GashaShopSubWindow_Rate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_Rate_C::ExecuteUbergraph_GashaShopSubWindow_Rate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.ExecuteUbergraph_GashaShopSubWindow_Rate");
		
		UGashaShopSubWindow_Rate_C_ExecuteUbergraph_GashaShopSubWindow_Rate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_Rate_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C.OnClose__DelegateSignature");
		
		UGashaShopSubWindow_Rate_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGashaShopSubWindow_Rate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGashaShopSubWindow_Rate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C");
		return ptr;
	}

}


