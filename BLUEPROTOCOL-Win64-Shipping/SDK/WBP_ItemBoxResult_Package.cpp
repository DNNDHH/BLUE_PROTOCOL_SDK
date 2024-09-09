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
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Is Disappearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisappearance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxResult_C::IsDisappearance(bool* bDisappearance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Is Disappearance");
		
		UWBP_ItemBoxResult_C_IsDisappearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDisappearance != nullptr)
			*bDisappearance = params.bDisappearance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.GetSettingAgainItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FInventoryItemData                          IconData                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxResult_C::GetSettingAgainItem(bool* Result, struct FInventoryItemData* IconData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.GetSettingAgainItem");
		
		UWBP_ItemBoxResult_C_GetSettingAgainItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (IconData != nullptr)
			*IconData = params.IconData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateItemScrollList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::CreateItemScrollList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateItemScrollList");
		
		UWBP_ItemBoxResult_C_CreateItemScrollList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SearchSettingAgainItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FInventoryItemData                          IconData                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxResult_C::SearchSettingAgainItem(bool IsBag, bool* Result, struct FInventoryItemData* IconData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SearchSettingAgainItem");
		
		UWBP_ItemBoxResult_C_SearchSettingAgainItem_Params params {};
		params.IsBag = IsBag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (IconData != nullptr)
			*IconData = params.IconData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateStorageList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::CreateStorageList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateStorageList");
		
		UWBP_ItemBoxResult_C_CreateStorageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateBagList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::CreateBagList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateBagList");
		
		UWBP_ItemBoxResult_C_CreateBagList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnPress_Cancel");
		
		UWBP_ItemBoxResult_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxResult_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnAnimationFinished");
		
		UWBP_ItemBoxResult_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnDestructMainWidget
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::OnDestructMainWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnDestructMainWidget");
		
		UWBP_ItemBoxResult_C_OnDestructMainWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.HideDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlayCloseSe                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxResult_C::HideDialog(bool bPlayCloseSe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.HideDialog");
		
		UWBP_ItemBoxResult_C_HideDialog_Params params {};
		params.bPlayCloseSe = bPlayCloseSe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Destruct");
		
		UWBP_ItemBoxResult_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.Construct");
		
		UWBP_ItemBoxResult_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateResultList
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::CreateResultList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.CreateResultList");
		
		UWBP_ItemBoxResult_C_CreateResultList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SettingButtonAgain
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::SettingButtonAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SettingButtonAgain");
		
		UWBP_ItemBoxResult_C_SettingButtonAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetDisappearanceText
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::SetDisappearanceText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetDisappearanceText");
		
		UWBP_ItemBoxResult_C_SetDisappearanceText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetTitleName
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::SetTitleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.SetTitleName");
		
		UWBP_ItemBoxResult_C_SetTitleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxResult_C::BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemBoxResult_C_BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.ExecuteUbergraph_WBP_ItemBoxResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxResult_C::ExecuteUbergraph_WBP_ItemBoxResult(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.ExecuteUbergraph_WBP_ItemBoxResult");
		
		UWBP_ItemBoxResult_C_ExecuteUbergraph_WBP_ItemBoxResult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnNumSliderUpdeta__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNumberInputDialog_C*                        CallerDialg                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxResult_C::OnNumSliderUpdeta__DelegateSignature(int32_t Value, class UNumberInputDialog_C* CallerDialg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnNumSliderUpdeta__DelegateSignature");
		
		UWBP_ItemBoxResult_C_OnNumSliderUpdeta__DelegateSignature_Params params {};
		params.Value = Value;
		params.CallerDialg = CallerDialg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnHide__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENumberInputDialogResult                           InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryItemData                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxResult_C::OnHide__DelegateSignature(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxResult.WBP_ItemBoxResult_C.OnHide__DelegateSignature");
		
		UWBP_ItemBoxResult_C_OnHide__DelegateSignature_Params params {};
		params.InResult = InResult;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBoxResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBoxResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBoxResult.WBP_ItemBoxResult_C");
		return ptr;
	}

}


